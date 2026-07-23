/*
 * XREFs of WheapPfaReset @ 0x1407640B0
 * Callers:
 *     WheapCommitPolicy @ 0x140763548 (WheapCommitPolicy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x140763428 (WheapApplyPolicyChanges.c)
 */

char WheapPfaReset()
{
  PRTL_BALANCED_NODE v0; // rax
  signed __int8 v1; // cf
  PRTL_BALANCED_NODE v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rcx
  PVOID *v5; // rax
  PVOID **v6; // rdx

  v0 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, (__int64)v0, (__int16 *)&WheapPfaLock);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  WheapApplyPolicyChanges();
  v3 = (PVOID *)WheapPfaList;
  while ( v3 != &WheapPfaList )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    v5 = (PVOID *)*v4;
    if ( *((PVOID **)*v4 + 1) != v4 || (v6 = (PVOID **)v4[1], *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExFreePoolWithTag(v4, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
