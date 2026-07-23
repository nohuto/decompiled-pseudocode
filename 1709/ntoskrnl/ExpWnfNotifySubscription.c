/*
 * XREFs of ExpWnfNotifySubscription @ 0x1404FDA2C
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404FF814 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140500DC0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x140592E18 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  signed __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  PRTL_BALANCED_NODE v9; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _KEVENT *v11; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, (__int64)v9, (ULONG_PTR)v4);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
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
