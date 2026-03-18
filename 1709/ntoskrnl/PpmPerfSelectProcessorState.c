/*
 * XREFs of PpmPerfSelectProcessorState @ 0x140090780
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x1400906A0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // r12d
  unsigned __int8 v3; // r8
  int v4; // r13d
  __int64 v5; // r10
  _BYTE *v7; // r9
  _DWORD *v8; // r11
  __int64 v9; // rax
  int v10; // edx
  char v11; // di
  char v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rax
  REGHANDLE v21; // r10
  unsigned __int8 v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // eax
  bool v26; // cf
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  unsigned int v31; // edx
  unsigned int v32; // ecx
  char v33; // al
  char v34; // al
  unsigned int v35; // eax
  __int64 v36; // rcx
  char v38; // [rsp+50h] [rbp-79h]
  char v39; // [rsp+51h] [rbp-78h]
  unsigned int v40; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v41; // [rsp+60h] [rbp-69h] BYREF
  __int16 v42; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-49h] BYREF
  __int64 v46; // [rsp+88h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-29h]
  __int64 v49; // [rsp+A8h] [rbp-21h]
  unsigned int *v50; // [rsp+B0h] [rbp-19h]
  __int64 v51; // [rsp+B8h] [rbp-11h]
  unsigned int *v52; // [rsp+C0h] [rbp-9h]
  __int64 v53; // [rsp+C8h] [rbp-1h]
  unsigned int *v54; // [rsp+D0h] [rbp+7h]
  __int64 v55; // [rsp+D8h] [rbp+Fh]
  unsigned int *v56; // [rsp+E0h] [rbp+17h]
  __int64 v57; // [rsp+E8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 24176);
  v7 = *(_BYTE **)(a1 + 24168);
  v46 = *(_QWORD *)(v1 + 8);
  v40 = 0;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v8 = (_DWORD *)(2688LL * dword_1403661AC + PpmCurrentProfile + 40);
  if ( v7 && PpmCurrentProfile == PpmLowPowerProfile && byte_1403661EC && v7[273] < v3 )
  {
    v2 = 4096;
    v8 = (_DWORD *)((char *)&unk_140362E08 + 2688 * dword_1403661AC);
  }
  LOBYTE(v9) = *(_BYTE *)(a1 + 23858);
  if ( !(_BYTE)v9 )
  {
    v9 = *(_QWORD *)(a1 + 24176);
    if ( v9 )
      LOBYTE(v9) = *(_BYTE *)(v9 + 205) != 0;
  }
  v10 = v8[14];
  v11 = *((_BYTE *)v8 + (unsigned __int8)v9 + 34);
  v12 = *((_BYTE *)v8 + (unsigned __int8)v9 + 78);
  v45 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 30);
  v44 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 32);
  v38 = *((_BYTE *)v8 + (unsigned __int8)v9 + 36);
  v13 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 38);
  v43 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 40);
  v39 = v11;
  v41 = v13;
  v14 = (v13 + v43) >> 1;
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v15 = *(_DWORD *)(v1 + 24);
    else
      v15 = 100;
  }
  else
  {
    v15 = *(_DWORD *)(v5 + 320);
  }
  if ( !*(_BYTE *)(v5 + 360) )
  {
    v16 = v15;
    v2 |= 0x40000u;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 24226) && v12 )
  {
    v2 |= 1u;
    v16 = v15;
    if ( v12 == 1 )
      v16 = 1;
    goto LABEL_12;
  }
  v22 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v22 = 100;
  if ( !(_BYTE)v14 )
  {
    v33 = v38;
    if ( !v38 )
      v33 = 2;
    v38 = v33;
    v34 = v11;
    if ( !v11 )
      v34 = 2;
    v39 = v34;
  }
  v23 = *(_DWORD *)(a1 + 24244);
  v16 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v40 = v23 / *(_DWORD *)(a1 + 24232);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v16 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v40 = v23 / v16;
  }
  v24 = v16;
  if ( v40 > v43 )
  {
    if ( v16 >= v15 )
    {
LABEL_36:
      v4 = 1;
      goto LABEL_37;
    }
    if ( v38 == 2 )
    {
      v2 |= 0x40u;
LABEL_48:
      v16 = v15;
      goto LABEL_36;
    }
    if ( v38 )
    {
      if ( v38 == 1 )
      {
        v16 += PpmPerfSingleStepSize;
        v2 |= 0x20u;
        goto LABEL_78;
      }
      if ( v38 != 3 )
        goto LABEL_78;
      if ( v40 < v22 )
        v35 = v23 / (unsigned __int8)v14;
      else
        v35 = v23 / v41;
      v2 |= 0x80u;
    }
    else
    {
      v35 = v23 / (unsigned __int8)v14;
      v2 |= 0x10u;
    }
    v16 = v35;
LABEL_78:
    if ( v16 < v15 )
      goto LABEL_36;
    goto LABEL_48;
  }
  if ( v40 >= v41 || v16 <= 1 )
    goto LABEL_36;
  v4 = 3;
  switch ( v39 )
  {
    case 1:
      v2 |= 0x200u;
      if ( v16 > PpmPerfSingleStepSize )
      {
        v16 -= PpmPerfSingleStepSize;
        break;
      }
LABEL_81:
      v16 = 1;
      v2 |= 0x400u;
      break;
    case 0:
      v2 |= 0x100u;
      v16 = v23 / (unsigned __int8)v14;
      break;
    case 2:
      goto LABEL_81;
  }
LABEL_37:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_40;
  v25 = *(_DWORD *)(v5 + 608);
  v26 = v16 < v24;
  if ( v16 > v24 )
  {
    if ( v25 < v44 )
    {
LABEL_82:
      v2 |= 0x800u;
      v16 = v24;
      goto LABEL_40;
    }
    v26 = v16 < v24;
  }
  if ( v26 && v25 < v45 )
    goto LABEL_82;
LABEL_40:
  v27 = v16;
  v28 = v16;
  if ( v7 )
  {
    v29 = v7[274];
    if ( v29 )
    {
      v16 = v29;
      v2 |= 0x10000u;
      v7[274] = 0;
      if ( v28 > v29 )
        v16 = v27;
    }
    v30 = v7[275];
    v31 = v16;
    v32 = v16;
    if ( v30 )
    {
      v16 = v30;
      v2 |= 0x20000u;
      v7[275] = 0;
      if ( v32 > v30 )
        v16 = v31;
    }
  }
LABEL_12:
  LODWORD(v20) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 280))(
                   v46,
                   v16,
                   *(unsigned int *)(v5 + 328),
                   v15,
                   v8[16],
                   v8[17],
                   v4,
                   0LL,
                   0LL);
  v19 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 56) = v20;
  v43 = v20;
  LODWORD(v20) = v40;
  v45 = v40;
  v41 = v2;
  v44 = v16;
  if ( !v19 )
  {
    v21 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v20 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v20 + 80))
        && (unsigned __int8)(*(_BYTE *)(v20 + 84) - 1) > 2u
        && (*(_BYTE *)(v20 + 96) & 0x20) != 0
        && (v36 = *(_QWORD *)(v20 + 104), LODWORD(v20) = v36 & 0x20, (v36 & 0x20) == v36)
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LOBYTE(v17) = 4,
            LODWORD(v20) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v17, 32LL, v18),
            (_BYTE)v20) )
      {
        v42 = *(unsigned __int8 *)(a1 + 208);
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v42;
        v49 = 1LL;
        v48 = a1 + 209;
        v51 = 4LL;
        v50 = &v45;
        v52 = &v44;
        v54 = &v43;
        v56 = &v41;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        LODWORD(v20) = EtwWriteEx(v21, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return v20;
}
