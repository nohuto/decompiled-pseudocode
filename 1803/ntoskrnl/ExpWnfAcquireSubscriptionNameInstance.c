/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x14057EAB4
 * Callers:
 *     ExQueryWnfStateData @ 0x14057EA10 (ExQueryWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rcx

  v3 = 0LL;
  v4 = (unsigned __int64 *)&PsInitialSystemProcess[2].SwapListEntry.Next[10];
  v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v5, (ULONG_PTR)v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v6 && ExAcquireRundownProtection(v6 + 1) )
    v3 = *(_QWORD *)(a2 + 48);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v3;
}
