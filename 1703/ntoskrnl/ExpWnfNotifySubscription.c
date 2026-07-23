/*
 * XREFs of ExpWnfNotifySubscription @ 0x1404446CC
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExpWnfStartKernelDispatcher @ 0x1404447C8 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1404EE7F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 */

int __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  LODWORD(Next) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LODWORD(Next) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      Next = v8[2].SwapListEntry.Next;
      v11 = (struct _KEVENT *)Next[16].Next;
      if ( v11 )
        LODWORD(Next) = KeSetEvent(v11, 1, 0);
    }
  }
  return (int)Next;
}
