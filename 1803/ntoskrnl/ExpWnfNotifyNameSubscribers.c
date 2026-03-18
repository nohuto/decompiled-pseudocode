/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1404F76D8
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x1404F4D64 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404F6C20 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140570C14 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404F76D8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404F7878 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x140570B68 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rdi
  unsigned int v5; // ebx
  int v6; // ebp
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  int inserted; // eax
  struct _KPROCESS *v11; // rcx
  char result; // al
  unsigned int v13; // ebp
  struct _KEVENT *Next; // rcx
  int v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]

  v15 = 0;
  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = 1;
  v16 = (unsigned __int64 *)(a1 + 112);
  v6 = 1;
  v7 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *(_QWORD **)(a1 + 120);
  if ( v8 != (_QWORD *)(a1 + 120) )
  {
    do
    {
      v9 = v8 - 8;
      if ( v6 && (*((_BYTE *)v9 + 100) & 1) != 0 )
        v6 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v9, a2, 0LL);
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
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
