/*
 * XREFs of ExpWnfLookupNameInstance @ 0x1404F62D0
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExpWnfFindStateName @ 0x1404F63A0 (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v7; // rsi
  __int64 StateName; // rax
  __int64 v9; // rbx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v7, (ULONG_PTR)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  StateName = ExpWnfFindStateName(a1, a2);
  v9 = StateName;
  if ( StateName )
    v9 = -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(StateName + 8)) != 0) & StateName;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( !v9 )
    return 3221225524LL;
  *a3 = v9;
  return 0LL;
}
