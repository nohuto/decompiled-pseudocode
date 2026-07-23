/*
 * XREFs of WheapPfaReset @ 0x1407245E8
 * Callers:
 *     WheapCommitPolicy @ 0x140723A84 (WheapCommitPolicy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x140723974 (WheapApplyPolicyChanges.c)
 */

__int64 WheapPfaReset()
{
  PRTL_BALANCED_NODE v0; // rax
  signed __int8 v1; // cf
  PRTL_BALANCED_NODE v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rcx
  PVOID *v5; // rdx
  PVOID **v6; // rax

  v0 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v0, (ULONG_PTR)&WheapPfaLock);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  WheapApplyPolicyChanges();
  v3 = (PVOID *)WheapPfaList;
  while ( v3 != &WheapPfaList )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    v5 = (PVOID *)*v4;
    v6 = (PVOID **)v4[1];
    if ( *((PVOID **)*v4 + 1) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExFreePoolWithTag(v4, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
