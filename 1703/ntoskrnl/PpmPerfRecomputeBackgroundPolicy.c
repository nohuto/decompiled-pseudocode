/*
 * XREFs of PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404C13FC (PpmSetProfilePolicySetting.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x14000E710 (PpmPerfApplyCapsAndFloors.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PpmEventVirtualHeterogeneitySupport @ 0x140581A64 (PpmEventVirtualHeterogeneitySupport.c)
 */

__int64 __fastcall PpmPerfRecomputeBackgroundPolicy(char a1)
{
  unsigned int v1; // r14d
  bool v2; // di
  unsigned int v3; // r15d
  int v4; // r13d
  unsigned int v5; // r12d
  int v6; // r9d
  unsigned int v7; // esi
  unsigned __int64 v9; // rax
  unsigned int v10; // r10d
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // r8
  BOOL v15; // ecx
  int v16; // r8d
  unsigned int v17; // r10d
  unsigned int v18; // ecx
  __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  char v27; // al
  bool v28; // zf
  int v29; // eax
  unsigned int v30; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-24h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-20h] BYREF
  __int64 v33; // [rsp+60h] [rbp-18h] BYREF
  __int64 v34; // [rsp+68h] [rbp-10h]
  char v36; // [rsp+C8h] [rbp+50h]
  __int64 v37; // [rsp+C8h] [rbp+50h]
  char v38; // [rsp+D0h] [rbp+58h]
  bool v39; // [rsp+D8h] [rbp+60h]

  v1 = 0;
  v2 = 0;
  v33 = 0LL;
  v3 = 0;
  v4 = 0;
  v30 = 0;
  v36 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 100;
  if ( (unsigned __int8)(KeHeteroSystem - 1) <= 1u )
  {
    if ( KeThrottledEpp )
    {
      v9 = __readmsr(0xCEu);
      v3 = 100;
      v30 = 0;
      v1 = 1;
      if ( (unsigned int)KeThrottledEpp < 0x64 )
        v3 = KeThrottledEpp;
      v10 = ((255 * v3 / 0x64) << 24) | 0xFF01;
      v37 = ((255 * v3 / 0x64) << 24) | 0xFF01LL;
      if ( KeThrottledFMax )
      {
        v10 = ((unsigned __int16)((_WORD)KeThrottledFMax << 8) ^ 0xFF01) & 0xFF00 ^ (((255 * v3 / 0x64) << 24) | 0xFF01);
        LODWORD(v37) = v10;
        v7 = 100 * KeThrottledFMax / (unsigned int)BYTE1(v9);
      }
      if ( KeThrottledFMin )
      {
        LODWORD(v37) = (unsigned __int8)(v10 ^ KeThrottledFMin) ^ v10;
        v1 = 100 * KeThrottledFMin / (unsigned int)BYTE1(v9);
      }
      v2 = dword_14034BB2C == 1;
      v33 = v37;
      goto LABEL_3;
    }
    if ( !PpmBackgroundProfile )
    {
      v6 = 2;
      goto LABEL_4;
    }
    v11 = 1400LL * dword_14034BB2C;
    v12 = *(_QWORD *)(v11 + PpmBackgroundProfile + 40);
    v13 = (v12 & 0x5C0000004C0LL) == 0 ? 2 : 0;
    if ( !*(_BYTE *)(v11 + PpmBackgroundProfile + 112) || !LOBYTE(PpmCurrentProfile[v11 / 8 + 14]) )
      v13 |= 0x20u;
    v14 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
    if ( !v14 )
      v14 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
    v15 = v14 == 0;
    v16 = v13 | 0x10;
    if ( !v15 )
      v16 = v13;
    if ( PpmPerfMaxOverrideEnabled )
      v16 |= 8u;
    if ( PpmPerfVirtualHeterogeneityDisableRefcount )
      v16 |= 1u;
    v17 = PpmCurrentProfile[v11 / 8 + 12];
    v1 = BYTE2(PpmCurrentProfile[v11 / 8 + 8]);
    v7 = BYTE4(PpmCurrentProfile[v11 / 8 + 8]);
    v5 = HIDWORD(PpmCurrentProfile[v11 / 8 + 10]);
    v3 = PpmCurrentProfile[v11 / 8 + 13];
    v4 = HIDWORD(PpmCurrentProfile[v11 / 8 + 13]);
    v30 = v17;
    if ( (v12 & 0x4000000000LL) != 0 && v3 < *(_DWORD *)(v11 + PpmBackgroundProfile + 104) )
    {
      v2 = 1;
      v3 = *(_DWORD *)(v11 + PpmBackgroundProfile + 104);
      v36 = 1;
    }
    if ( (v12 & 0x40) != 0 && v1 > *(unsigned __int8 *)(v11 + PpmBackgroundProfile + 66) )
    {
      v2 = 1;
      v1 = *(unsigned __int8 *)(v11 + PpmBackgroundProfile + 66);
      v36 = 1;
    }
    if ( (v12 & 0x80u) != 0LL && v7 > *(unsigned __int8 *)(v11 + PpmBackgroundProfile + 68) )
    {
      v2 = 1;
      v7 = *(unsigned __int8 *)(v11 + PpmBackgroundProfile + 68);
      v36 = 1;
    }
    if ( (v12 & 0x40000000000LL) != 0 )
    {
      if ( !v5 && (v18 = *(_DWORD *)(v11 + PpmBackgroundProfile + 84)) != 0
        || (v18 = *(_DWORD *)(v11 + PpmBackgroundProfile + 84), v5 > v18) )
      {
        v2 = 1;
        v5 = v18;
        v36 = 1;
      }
    }
    if ( (v12 & 0x8000000000LL) != 0 && v4 != *(_DWORD *)(v11 + PpmBackgroundProfile + 108) )
    {
      v2 = 1;
      v4 = *(_DWORD *)(v11 + PpmBackgroundProfile + 108);
      v36 = 1;
    }
    if ( (v12 & 0x400) != 0 && v17 && !*(_DWORD *)(v11 + PpmBackgroundProfile + 96) )
    {
      v36 = 1;
      v30 = 0;
      v2 = 1;
    }
    v6 = v16 | 4;
    if ( v2 )
      v6 = v16;
    if ( !v6 )
      goto LABEL_4;
  }
  v2 = 0;
LABEL_3:
  v36 = v2;
LABEL_4:
  PpmPerfVirtualHeterogeneityDisableReasons = v6;
  v38 = 0;
  if ( !v2 )
  {
    if ( PpmPerfVirtualHeterogeneityEnabled )
      goto LABEL_85;
    goto LABEL_6;
  }
  v19 = PpmPerfDomainHead;
  v39 = PpmPerfVirtualHeterogeneityEnabled == 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_6;
  v20 = v30;
  do
  {
    if ( KeThrottledEpp )
    {
      v21 = v7;
      v22 = v1;
      goto LABEL_77;
    }
    v34 = *(_QWORD *)(*(_QWORD *)(v19 + 208) + 8LL);
    if ( v5 )
    {
      v23 = *(_DWORD *)(v19 + 320);
      v24 = (100 * v5 + (*(_DWORD *)(v19 + 316) >> 1)) / *(_DWORD *)(v19 + 316);
      if ( v24 < v23 )
        goto LABEL_63;
    }
    else
    {
      v23 = *(_DWORD *)(v19 + 320);
    }
    v24 = v23;
LABEL_63:
    if ( v7 < v1 )
      v7 = v1;
    if ( v24 < v1 )
      v24 = v1;
    if ( v7 == 100 && v20 )
      v7 = v23;
    v25 = v7;
    if ( v24 < v7 )
      v25 = v24;
    v26 = *(_DWORD *)(v19 + 328);
    v30 = v25;
    if ( v1 < v25 )
      v25 = v1;
    if ( v25 <= v26 )
      v25 = v26;
    v32 = 0;
    v31 = v25;
    PpmPerfApplyCapsAndFloors(&v30, &v31, &v32, v19);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, int, int, _QWORD, __int64 *))(v19 + 280))(
      v34,
      100LL,
      v31,
      v30,
      v3,
      v4,
      4,
      0LL,
      &v33);
    v21 = v30;
    v22 = v31;
LABEL_77:
    if ( v39 || v33 != *(_QWORD *)(v19 + 432) )
    {
      *(_DWORD *)(v19 + 448) = v22;
      v28 = (*(_DWORD *)(v19 + 384))++ == -1;
      v29 = *(_DWORD *)(v19 + 384);
      if ( v28 )
        v29 = 1;
      *(_DWORD *)(v19 + 452) = v21;
      *(_DWORD *)(v19 + 384) = v29;
      *(_DWORD *)(v19 + 440) = 100;
      *(_DWORD *)(v19 + 456) = 100;
      *(_DWORD *)(v19 + 444) = *(_DWORD *)(v19 + 316);
      *(_DWORD *)(v19 + 460) = v3;
      *(_DWORD *)(v19 + 464) = v4;
      *(_BYTE *)(v19 + 468) = 1;
      *(_QWORD *)(v19 + 432) = v33;
      v27 = 1;
      v38 = 1;
    }
    else
    {
      v27 = v38;
    }
    v19 = *(_QWORD *)v19;
  }
  while ( (__int64 *)v19 != &PpmPerfDomainHead );
  v2 = v36;
  if ( v27 )
  {
LABEL_85:
    PpmPerfVirtualHeterogeneityEnabled = v2;
    if ( (unsigned __int8)(KeHeteroSystem - 1) <= 1u )
      KeHeteroSystem = v2 + 1;
    PopExecuteOnTargetProcessors(
      (__int64)&PpmPerfStatesRegistered,
      (__int64)PpmPerfUpdateProcessorHeterogeneousState,
      0LL,
      0LL);
    return PpmEventVirtualHeterogeneitySupport(0LL);
  }
LABEL_6:
  if ( a1 )
    goto LABEL_85;
  return PpmEventVirtualHeterogeneitySupport(0LL);
}
