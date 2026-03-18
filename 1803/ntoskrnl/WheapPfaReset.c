/*
 * XREFs of WheapPfaReset @ 0x1407CBD98
 * Callers:
 *     WheapCommitPolicy @ 0x1407CB22C (WheapCommitPolicy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x1407CB10C (WheapApplyPolicyChanges.c)
 */

char WheapPfaReset()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID *v6; // rbx
  PVOID *v7; // rax
  PVOID *v8; // rcx
  PVOID **v9; // rdx

  v0 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v0, (ULONG_PTR)&WheapPfaLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  WheapApplyPolicyChanges();
  v6 = (PVOID *)WheapPfaList;
  while ( v6 != &WheapPfaList )
  {
    v7 = (PVOID *)*v6;
    v8 = v6;
    v6 = v7;
    if ( v7[1] != v8 || (v9 = (PVOID **)v8[1], *v9 != v8) )
      __fastfail(3u);
    *v9 = v7;
    v7[1] = v9;
    ExFreePoolWithTag(v8, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock, v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
