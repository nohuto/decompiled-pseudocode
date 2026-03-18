/*
 * XREFs of ExpWnfNotifySubscription @ 0x140570A70
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404F7878 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x140570B68 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _KEVENT *v11; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  LOBYTE(Next) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LOBYTE(Next) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      Next = v8[2].SwapListEntry.Next;
      v11 = (struct _KEVENT *)Next[16].Next;
      if ( v11 )
        LOBYTE(Next) = KeSetEvent(v11, 1, 0);
    }
  }
  return (char)Next;
}
