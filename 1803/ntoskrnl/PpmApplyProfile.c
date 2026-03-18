/*
 * XREFs of PpmApplyProfile @ 0x14076EBC0
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x140764B70 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14076A578 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x14076D5AC (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x14076EE34 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x14076EE98 (PpmPostProcessMediaBuffering.c)
 */

void __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = dword_1403AAA2C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  if ( v5 == (__int64 *)PpmLowPowerProfile )
  {
    v6 = v5;
    v5 = PpmDefaultProfile;
    if ( !PpmPerfMultimediaQosSupported )
      v5 = v6;
  }
  if ( PpmCurrentProfile == v5 )
  {
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v7 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
    v9 = 2LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    PpmCurrentProfile = v5;
    v10 = 0LL;
    v5[677] = v7;
    do
    {
      if ( v5 != v8 )
        v3 |= v5[336 * v2 + 5 + v10];
      if ( v4 != v8 )
        v3 |= v4[336 * v2 + 5 + v10];
      ++v10;
      --v9;
    }
    while ( v9 );
    v11 = v3 & 0x3FFFD8030FC0LL;
    PpmCompareAndApplyPolicySettings(&v11, (__int64)&v4[336 * v2 + 5], (__int64)&v5[336 * v2 + 5]);
    PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
    if ( PpmLowPowerProfile )
    {
      if ( v4 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        PpmPostProcessMediaBuffering();
      }
    }
  }
}
