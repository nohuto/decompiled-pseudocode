/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x140138518
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x140130B1C (PpmGetHeterogeneousClass.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  _QWORD *v1; // r10
  BOOL HeterogeneousClass; // esi
  int *v4; // r15
  _QWORD *v5; // rdi
  char v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // xmm1_8
  __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  SIZE_T v18; // rax
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // xmm1_8
  unsigned int v22; // edx
  unsigned int v23; // r15d
  unsigned int v24; // r11d
  int v25; // eax
  unsigned int v26; // r8d
  char v27; // al
  bool v28; // al
  bool v29; // al
  __int64 v30; // rbx
  SIZE_T v31; // rax
  char v32; // cl
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  SIZE_T v35; // rax
  _DWORD *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rbx
  char v40; // [rsp+20h] [rbp-40h]
  unsigned int v41; // [rsp+24h] [rbp-3Ch]
  __int64 v42; // [rsp+30h] [rbp-30h]
  int *v43; // [rsp+38h] [rbp-28h]
  __int128 Source2; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h]

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 207) )
    HeterogeneousClass = 0;
  else
    HeterogeneousClass = PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v40 = (char)v1;
  v4 = (int *)(a1 + 444);
  v41 = (unsigned int)v1;
  v43 = (int *)(a1 + 444);
  v5 = v1;
  v42 = a1 + 372;
  v6 = (char)v1;
  v7 = (unsigned int)v1;
  while ( 1 )
  {
    Source2 = 0uLL;
    v45 = 0LL;
    if ( v7 == 1 )
    {
      v12 = PpmEntryLevelPerfProfile;
    }
    else
    {
      if ( v7 != 2 )
      {
        v8 = 2688LL * dword_1403661AC;
        v9 = PpmCurrentProfile + 40;
        goto LABEL_9;
      }
      v12 = PpmBackgroundProfile;
    }
    if ( !v12 )
    {
      v11 = (unsigned __int64)v1;
      v10 = (__int64)v1;
      goto LABEL_15;
    }
    v9 = v12 + 40;
    v8 = 2688LL * dword_1403661AC;
LABEL_9:
    v10 = v8 + v9;
    v11 = *(_QWORD *)(v10 + 8LL * HeterogeneousClass);
LABEL_15:
    if ( v5 )
    {
      v13 = (int)v1;
      if ( PopHeteroSystem == (_DWORD)v1 )
        v13 = 64;
      v14 = v5[2];
      Source2 = *(_OWORD *)v5;
      v45 = v14;
      if ( PpmPerfQosGroupPolicyDisable != (_DWORD)v1 )
        v13 |= 0x100u;
      if ( PpmPerfSchedulerDirectedPerfStatesSupported == (_BYTE)v1 )
        v13 |= 0x80u;
      if ( v10 )
      {
        if ( (v11 & 0x5C000000CC0LL) == 0 )
          v13 |= 4u;
      }
      else
      {
        v13 |= 2u;
      }
      v15 = *(_QWORD *)(PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v15 )
        v15 = *(_QWORD *)(PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v16 = (int)v1;
      LOBYTE(v16) = v15 == 0;
      v17 = v13 | 0x20;
      if ( !v16 )
        v17 = v13;
      if ( PpmPerfMaxOverrideEnabled != (_BYTE)v1 )
        v17 |= 0x10u;
      if ( PpmPerfQosDisableRefcount > (unsigned int)v1 )
        v17 |= 1u;
      if ( v17 )
      {
        v18 = RtlCompareMemory((const void *)(a1 + 24LL * v7 + 372), &Source2, 0x18uLL);
        v19 = v42;
        v20 = v40;
        v21 = v45;
        if ( v18 == 24 )
          v20 = 1;
        *(_OWORD *)v42 = Source2;
        v40 = v20;
        *(_QWORD *)(v42 + 16) = v21;
        *v4 = v17;
        goto LABEL_38;
      }
    }
    if ( PpmPerfEppViaPerfControl != (_BYTE)v1
      && (!v5 || (v11 & 0x4000000000LL) != 0 && *((_DWORD *)v5 + 4) < *(_DWORD *)(v10 + 64)) )
    {
      LODWORD(v45) = *(_DWORD *)(v10 + 64);
    }
    if ( !v5
      || (v11 & 0x40) != 0 && *((_DWORD *)v5 + 2) > (unsigned int)*(unsigned __int8 *)(HeterogeneousClass + v10 + 26) )
    {
      v23 = *(unsigned __int8 *)(HeterogeneousClass + v10 + 26);
      DWORD2(Source2) = v23;
    }
    else
    {
      v23 = DWORD2(Source2);
    }
    if ( v5
      && ((v11 & 0x80u) == 0LL || *(_DWORD *)v5 <= (unsigned int)*(unsigned __int8 *)(HeterogeneousClass + v10 + 28)) )
    {
      v24 = Source2;
    }
    else
    {
      v24 = *(unsigned __int8 *)(HeterogeneousClass + v10 + 28);
      LODWORD(Source2) = v24;
    }
    v25 = *(_DWORD *)(v10 + 4LL * HeterogeneousClass + 44);
    if ( v25 )
    {
      v26 = (unsigned int)((*(_DWORD *)(a1 + 316) >> 1) + 100 * v25) / *(_DWORD *)(a1 + 316);
      if ( v26 >= *(_DWORD *)(a1 + 320) )
        v26 = *(_DWORD *)(a1 + 320);
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 320);
    }
    if ( !v5 || (v11 & 0x40000000000LL) != 0 && *((_DWORD *)v5 + 1) > v26 )
      DWORD1(Source2) = v26;
    else
      v26 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl && (!v5 || (v11 & 0x8000000000LL) != 0) )
      HIDWORD(Source2) = *(_DWORD *)(v10 + 68);
    if ( !v5 || (v11 & 0x400) != 0 && *((_BYTE *)v5 + 22) && !*(_DWORD *)(v10 + 56) )
      BYTE6(v45) = *(_BYTE *)(v10 + 56);
    if ( !v5 || (v11 & 0x4000) != 0 && *((_BYTE *)v5 + 23) > *(_BYTE *)(v10 + HeterogeneousClass + 73) )
      HIBYTE(v45) = *(_BYTE *)(HeterogeneousClass + v10 + 73);
    v27 = *(_BYTE *)(v10 + 16);
    v28 = v27 == 1 || v27 == 2 && *(_BYTE *)(a1 + 356);
    if ( !v5 || (v11 & 0x800) != 0 )
      BYTE5(v45) = v28;
    v29 = !*(_BYTE *)(v10 + 72) || !*(_BYTE *)(a1 + 359);
    if ( !v5 || (v11 & 0x10000000000LL) != 0 )
    {
      BYTE4(v45) = v29;
      if ( v29 )
        v6 = 1;
    }
    if ( v24 < v23 )
      v24 = v23;
    LODWORD(Source2) = v24;
    if ( v26 < v23 )
      v26 = v23;
    v30 = a1 + 24LL * v7;
    DWORD1(Source2) = v26;
    v31 = RtlCompareMemory((const void *)(v30 + 372), &Source2, 0x18uLL);
    v32 = v40;
    v4 = v43;
    v33 = Source2;
    if ( v31 != 24 )
      v32 = 1;
    v34 = v45;
    *v43 = 0;
    v40 = v32;
    v19 = v42;
    *(_OWORD *)v42 = v33;
    *(_QWORD *)(v42 + 16) = v34;
    if ( v5 )
    {
      v35 = RtlCompareMemory(v5, &Source2, 0x18uLL);
      v19 = v42;
      if ( v35 == 24 )
      {
        *v43 = 8;
LABEL_38:
        v22 = v41;
        goto LABEL_102;
      }
    }
    v5 = (_QWORD *)(v30 + 372);
    v22 = ++v41;
LABEL_102:
    ++v4;
    ++v7;
    v43 = v4;
    v42 = v19 + 24;
    if ( v7 >= 3 )
      break;
    v1 = 0LL;
  }
  *(_BYTE *)(a1 + 360) = v6;
  v36 = (_DWORD *)(a1 + 456);
  v37 = 0LL;
  *(_BYTE *)(a1 + 468) = v22 > 1;
  do
  {
    *v36 = 0;
    v38 = 0LL;
    do
    {
      if ( (_DWORD)v37 == (_DWORD)v38
        || RtlCompareMemory((const void *)(a1 + 24 * v37 + 372), (const void *)(a1 + 372 + 24 * v38), 0x18uLL) == 24 )
      {
        *v36 |= 1 << v38;
      }
      v38 = (unsigned int)(v38 + 1);
    }
    while ( (unsigned int)v38 < 3 );
    v37 = (unsigned int)(v37 + 1);
    ++v36;
  }
  while ( (unsigned int)v37 < 3 );
  return v40;
}
