/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1404EE658
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140438158 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140444870 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404EDCD8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F01B0 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExpWnfStartKernelDispatcher @ 0x1404447C8 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404EE658 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404EE7F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

void __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, int a4)
{
  signed __int64 *v4; // rdi
  unsigned int v5; // ebx
  int v6; // ebp
  PRTL_BALANCED_NODE v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  int inserted; // eax
  struct _KPROCESS *v11; // rcx
  int v12; // ebp
  struct _KEVENT *Next; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  signed __int64 *v15; // [rsp+28h] [rbp-40h]

  v14 = 0;
  v4 = (signed __int64 *)(a1 + 112);
  v5 = 1;
  v15 = (signed __int64 *)(a1 + 112);
  v6 = 1;
  v7 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = *(_QWORD **)(a1 + 120);
  if ( v8 != (_QWORD *)(a1 + 120) )
  {
    do
    {
      v9 = v8 - 8;
      if ( v6 && (*((_BYTE *)v9 + 100) & 1) != 0 )
        v6 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v9, a2);
      v11 = (struct _KPROCESS *)*(v8 - 3);
      if ( inserted )
      {
        if ( v11 == PsInitialSystemProcess )
        {
          v14 = 1;
        }
        else
        {
          Next = (struct _KEVENT *)v11[2].SwapListEntry.Next[16].Next;
          if ( Next )
            KeSetEvent(Next, 1, 0);
        }
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != (_QWORD *)(a1 + 120) );
    v4 = v15;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( v6 && (a2 & 1) != 0 )
  {
    if ( v14 || !a3 )
      v5 = 0;
    v12 = a4;
    ExpWnfNotifyNameSubscribers(a1, 8LL, v5);
  }
  else
  {
    v12 = a4;
  }
  if ( v14 )
  {
    if ( a3 )
      ExpWnfStartKernelDispatcher(v12);
  }
}
