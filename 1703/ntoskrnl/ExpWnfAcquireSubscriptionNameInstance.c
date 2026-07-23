/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x1404578B4
 * Callers:
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  signed __int64 *v4; // rbx
  PRTL_BALANCED_NODE v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (signed __int64 *)&PsInitialSystemProcess[2].SwapListEntry.Next[10];
  v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v5, (ULONG_PTR)v4);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && ExAcquireRundownProtection(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v3;
}
