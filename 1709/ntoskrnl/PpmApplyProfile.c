/*
 * XREFs of PpmApplyProfile @ 0x14070B748
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1406FF1E0 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x140709910 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x14070B95C (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x14070B9C0 (PpmPostProcessMediaBuffering.c)
 */

__int64 __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = dword_1403661AC;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  v6 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
  v8 = 2LL;
  *((_DWORD *)v5 + 7) |= 2u;
  *(_DWORD *)(v4 + 28) &= ~2u;
  PpmCurrentProfile = (__int64)v5;
  v9 = 0LL;
  v5[677] = v6;
  do
  {
    if ( v5 != v7 )
      v3 |= v5[336 * v2 + 5 + v9];
    if ( (__int64 *)v4 != v7 )
      v3 |= *(_QWORD *)(v4 + 8 * (v9 + 336 * v2) + 40);
    ++v9;
    --v8;
  }
  while ( v8 );
  v11 = v3 & 0x1FFFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(&v11, 2688 * v2 + v4 + 40, (__int64)&v5[336 * v2 + 5]);
  PpmEventTraceProfileChange(v4, (__int64)v5);
  result = PpmLowPowerProfile;
  if ( PpmLowPowerProfile )
  {
    if ( v4 == PpmLowPowerProfile )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmPostProcessMediaBuffering();
    }
  }
  return result;
}
