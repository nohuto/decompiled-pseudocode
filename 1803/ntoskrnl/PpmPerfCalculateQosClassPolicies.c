/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x14016A69C
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14014BE50 (PpmGetHeterogeneousClass.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  _QWORD *v1; // r8
  BOOL HeterogeneousClass; // r15d
  char v4; // si
  _QWORD *v5; // rdi
  unsigned int v6; // r12d
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 *v9; // r9
  __int64 *v10; // r9
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // xmm1_8
  int v14; // eax
  __int64 v15; // r8
  BOOL v16; // eax
  int v17; // ebx
  bool v18; // zf
  int v19; // eax
  __int64 v20; // xmm1_8
  __int64 v21; // rcx
  unsigned int v22; // ecx
  _BOOL8 v23; // rdx
  unsigned int v24; // esi
  _BOOL8 v25; // rdx
  unsigned int v26; // ebx
  unsigned int v27; // r10d
  int v28; // edx
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // cl
  int v33; // eax
  __int64 v34; // rbx
  __int128 v35; // xmm0
  int v36; // eax
  __int64 v37; // xmm1_8
  __int64 v38; // rcx
  _DWORD *v39; // rdi
  unsigned int v40; // esi
  unsigned int i; // ebx
  unsigned int v43; // [rsp+20h] [rbp-40h]
  char v44; // [rsp+24h] [rbp-3Ch]
  char v45; // [rsp+28h] [rbp-38h]
  __int128 Source2; // [rsp+30h] [rbp-30h] BYREF
  __int64 v47; // [rsp+40h] [rbp-20h]
  int v48; // [rsp+48h] [rbp-18h]

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 207) )
    HeterogeneousClass = 0;
  else
    HeterogeneousClass = PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v43 = (unsigned int)v1;
  v4 = (char)v1;
  v5 = v1;
  v44 = (char)v1;
  v45 = (char)v1;
  v6 = (unsigned int)v1;
  v7 = v1;
  while ( 1 )
  {
    Source2 = 0uLL;
    v47 = 0LL;
    v48 = 0;
    switch ( v6 )
    {
      case 0u:
LABEL_16:
        v9 = PpmCurrentProfile + 5;
        goto LABEL_17;
      case 1u:
        v8 = PpmEntryLevelPerfProfile;
        break;
      case 2u:
        v8 = PpmBackgroundProfile;
        break;
      case 3u:
        v8 = PpmMultimediaQosProfile;
        v5 = (_QWORD *)(a1 + 372);
        break;
      default:
        goto LABEL_16;
    }
    if ( v8 )
    {
      v9 = (__int64 *)(v8 + 40);
LABEL_17:
      v10 = &v9[336 * dword_1403AAA2C];
      v11 = v10[HeterogeneousClass];
      goto LABEL_18;
    }
    v10 = v1;
    v11 = (__int64)v1;
LABEL_18:
    if ( v5 )
    {
      v12 = (int)v1;
      if ( PopHeteroSystem == (_DWORD)v1 )
        v12 = 64;
      v13 = v5[2];
      v14 = *((_DWORD *)v5 + 6);
      Source2 = *(_OWORD *)v5;
      v48 = v14;
      v47 = v13;
      if ( PpmPerfQosGroupPolicyDisable != (_DWORD)v1 )
        v12 |= 0x100u;
      if ( PpmPerfSchedulerDirectedPerfStatesSupported == (_BYTE)v1 )
        v12 |= 0x80u;
      if ( v10 )
      {
        if ( (v11 & 0x5C000000CC0LL) == 0 )
          v12 |= 4u;
      }
      else
      {
        v12 |= 2u;
      }
      v15 = *(__int64 *)((char *)PpmCurrentProfile + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
      if ( !v15 )
        v15 = *(__int64 *)((char *)PpmCurrentProfile + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
      v16 = v15 == 0;
      v17 = v12 | 0x20;
      v1 = 0LL;
      if ( !v16 )
        v17 = v12;
      if ( PpmPerfMaxOverrideEnabled )
        v17 |= 0x10u;
      if ( PpmPerfQosDisableRefcount )
        v17 |= 1u;
      if ( v17 )
      {
        v18 = RtlCompareMemory((const void *)(a1 + 28LL * v6 + 372), &Source2, 0x1CuLL) == 28;
        v19 = v48;
        v20 = v47;
        if ( v18 )
          v4 = 1;
        v21 = 28LL * (_QWORD)v7;
        v44 = v4;
        *(_OWORD *)(v21 + a1 + 372) = Source2;
        *(_QWORD *)(v21 + a1 + 388) = v20;
        *(_DWORD *)(v21 + a1 + 396) = v19;
        v22 = v43;
        *(_DWORD *)(a1 + 4LL * (_QWORD)v7 + 484) = v17;
        if ( v6 == 3 )
          PpmPerfMultimediaQosSupported = (v17 & 0xF) == 0;
        goto LABEL_117;
      }
    }
    if ( v6 == 3 )
    {
      v5 = v1;
      PpmPerfMultimediaQosSupported = 1;
      v11 = 0x5C000000CC0LL;
    }
    if ( PpmPerfEppViaPerfControl != (_BYTE)v1
      && (!v5 || (v11 & 0x4000000000LL) != 0 && *((_DWORD *)v5 + 4) < *((_DWORD *)v10 + 16)) )
    {
      LODWORD(v47) = *((_DWORD *)v10 + 16);
    }
    if ( v5 )
    {
      if ( (v11 & 0x40) == 0
        || (v23 = HeterogeneousClass,
            *((_DWORD *)v5 + 2) <= (unsigned int)*((unsigned __int8 *)v10 + HeterogeneousClass + 26)) )
      {
        v24 = DWORD2(Source2);
        goto LABEL_55;
      }
    }
    else
    {
      v23 = HeterogeneousClass;
    }
    v24 = *((unsigned __int8 *)v10 + v23 + 26);
    DWORD2(Source2) = v24;
LABEL_55:
    if ( !v5 )
    {
      v25 = HeterogeneousClass;
LABEL_60:
      v26 = *((unsigned __int8 *)v10 + v25 + 28);
      LODWORD(Source2) = v26;
      goto LABEL_61;
    }
    if ( (v11 & 0x80u) != 0LL )
    {
      v25 = HeterogeneousClass;
      if ( *(_DWORD *)v5 > (unsigned int)*((unsigned __int8 *)v10 + HeterogeneousClass + 28) )
        goto LABEL_60;
    }
    v26 = Source2;
LABEL_61:
    v27 = *(_DWORD *)(a1 + 320);
    v28 = *((_DWORD *)v10 + HeterogeneousClass + 11);
    if ( v28 )
    {
      if ( (unsigned int)(100 * v28 + (*(_DWORD *)(a1 + 316) >> 1)) / *(_DWORD *)(a1 + 316) < v27 )
        v27 = (unsigned int)(100 * v28 + (*(_DWORD *)(a1 + 316) >> 1)) / *(_DWORD *)(a1 + 316);
      LODWORD(v1) = 0;
    }
    if ( !v5 || (v11 & 0x40000000000LL) != 0 && *((_DWORD *)v5 + 1) > v27 )
      DWORD1(Source2) = v27;
    else
      v27 = DWORD1(Source2);
    if ( PpmPerfAutonomousActivityWindowViaPerfControl != (_BYTE)v1 && (!v5 || (v11 & 0x8000000000LL) != 0) )
      HIDWORD(Source2) = *((_DWORD *)v10 + 17);
    if ( !v5 || (v11 & 0x400) != 0 && *((_BYTE *)v5 + 22) != (_BYTE)v1 && *((_DWORD *)v10 + 14) == (_DWORD)v1 )
      BYTE6(v47) = *((_BYTE *)v10 + 56);
    if ( !v5 || (v11 & 0x4000) != 0 && *((_BYTE *)v5 + 23) > *((_BYTE *)v10 + HeterogeneousClass + 73) )
      HIBYTE(v47) = *((_BYTE *)v10 + HeterogeneousClass + 73);
    v29 = *((_BYTE *)v10 + 16);
    if ( v29 == 1 || v29 == 2 && *(_BYTE *)(a1 + 356) != (_BYTE)v1 )
      v30 = 1;
    else
      v30 = (char)v1;
    if ( !v5 || (v11 & 0x800) != 0 )
      BYTE5(v47) = v30;
    if ( *((_BYTE *)v10 + 72) == (_BYTE)v1 || (v31 = (char)v1, *(_BYTE *)(a1 + 359) == (_BYTE)v1) )
      v31 = 1;
    if ( !v5 || (v11 & 0x10000000000LL) != 0 )
    {
      v32 = v45;
      if ( v31 )
        v32 = 1;
      BYTE4(v47) = v31;
      v45 = v32;
    }
    if ( v26 < v24 )
      v26 = v24;
    LODWORD(Source2) = v26;
    if ( v27 < v24 )
      v27 = v24;
    DWORD1(Source2) = v27;
    if ( v31
      && ((v33 = PpmHeteroQosBias[(_QWORD)v7], v33 == 1)
       || v33 == 3 && *(_BYTE *)(a1 + 204) > (unsigned __int8)v1
       || v33 == 2 && *(_BYTE *)(a1 + 204) == (_BYTE)v1) )
    {
      LOBYTE(v48) = 1;
    }
    else
    {
      LOBYTE(v48) = (_BYTE)v1;
    }
    v34 = 28LL * v6;
    v4 = v44;
    v18 = RtlCompareMemory((const void *)(v34 + a1 + 372), &Source2, 0x1CuLL) == 28;
    v35 = Source2;
    v36 = v48;
    v37 = v47;
    if ( !v18 )
      v4 = 1;
    *(_DWORD *)(a1 + 4LL * (_QWORD)v7 + 484) = 0;
    v38 = 28LL * (_QWORD)v7;
    v44 = v4;
    *(_OWORD *)(v38 + a1 + 372) = v35;
    *(_QWORD *)(v38 + a1 + 388) = v37;
    *(_DWORD *)(v38 + a1 + 396) = v36;
    if ( v5 && RtlCompareMemory(v5, &Source2, 0x1CuLL) == 28 )
    {
      v22 = v43;
      *(_DWORD *)(a1 + 4LL * (_QWORD)v7 + 484) = 8;
    }
    else
    {
      v5 = (_QWORD *)(v34 + a1 + 372);
      v22 = ++v43;
    }
LABEL_117:
    ++v6;
    v7 = (_QWORD *)((char *)v7 + 1);
    if ( v6 >= 4 )
      break;
    v1 = 0LL;
  }
  v39 = (_DWORD *)(a1 + 500);
  v40 = 0;
  *(_BYTE *)(a1 + 516) = v22 > 1;
  *(_BYTE *)(a1 + 360) = v45;
  do
  {
    *v39 = 0;
    for ( i = 0; i < 4; ++i )
    {
      if ( v40 == i
        || RtlCompareMemory((const void *)(a1 + 28LL * v40 + 372), (const void *)(28LL * i + a1 + 372), 0x1CuLL) == 28 )
      {
        *v39 |= 1 << i;
      }
    }
    ++v40;
    ++v39;
  }
  while ( v40 < 4 );
  return v44;
}
