/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x140500F14
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 *     ExpWnfDeleteSubscription @ 0x1404FFB7C (ExpWnfDeleteSubscription.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeNameInstance @ 0x14050080C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140592EC4 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140500DC0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140500F14 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfStartKernelDispatcher @ 0x140592E18 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, int a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rdi
  unsigned int v5; // ebx
  int v6; // ebp
  PRTL_BALANCED_NODE v7; // rsi
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  int inserted; // eax
  struct _KPROCESS *v11; // rcx
  char result; // al
  unsigned int v13; // ebp
  struct _KEVENT *Next; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  signed __int64 *v16; // [rsp+28h] [rbp-40h]

  v15 = 0;
  v4 = (signed __int64 *)(a1 + 112);
  v5 = 1;
  v16 = (signed __int64 *)(a1 + 112);
  v6 = 1;
  v7 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, (__int64)v7, (ULONG_PTR)v4);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = *(_QWORD **)(a1 + 120);
  if ( v8 != (_QWORD *)(a1 + 120) )
  {
    do
    {
      v9 = (__int64)(v8 - 8);
      if ( v6 && (*(_BYTE *)(v9 + 100) & 1) != 0 )
        v6 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v9, a2);
      v11 = (struct _KPROCESS *)*(v8 - 3);
      if ( inserted )
      {
        if ( v11 == PsInitialSystemProcess )
        {
          v15 = 1;
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
    v4 = v16;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  result = KeAbPostRelease((ULONG_PTR)v4);
  if ( v6 && (result = a2 & 1, (a2 & 1) != 0) )
  {
    if ( v15 || !a3 )
      v5 = 0;
    v13 = a4;
    result = ExpWnfNotifyNameSubscribers(a1, 8LL, v5, a4);
  }
  else
  {
    v13 = a4;
  }
  if ( v15 )
  {
    if ( a3 )
      return ExpWnfStartKernelDispatcher(v13);
  }
  return result;
}
