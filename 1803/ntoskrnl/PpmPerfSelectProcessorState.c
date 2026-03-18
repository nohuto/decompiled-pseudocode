/*
 * XREFs of PpmPerfSelectProcessorState @ 0x140037040
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x140036F60 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r13
  int v2; // r10d
  unsigned __int8 v3; // r8
  unsigned int v4; // r15d
  __int64 v5; // rsi
  _BYTE *v7; // r9
  unsigned __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 v10; // rax
  int v11; // edx
  char v12; // r11
  char v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  int v17; // eax
  unsigned __int8 v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int v22; // r12d
  int v23; // r14d
  int v24; // r10d
  unsigned int v25; // eax
  bool v26; // cf
  unsigned __int8 v27; // al
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // zf
  REGHANDLE v32; // r10
  unsigned int v33; // ecx
  unsigned int v34; // eax
  char v35; // al
  char v36; // al
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v40; // [rsp+50h] [rbp-B0h]
  char v41; // [rsp+54h] [rbp-ACh]
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  char v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  unsigned int v45; // [rsp+68h] [rbp-98h] BYREF
  __int16 v46; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  unsigned int *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  unsigned int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  unsigned int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24176);
  v7 = *(_BYTE **)(a1 + 24168);
  v50 = *(_QWORD *)(v1 + 8);
  v40 = 0;
  v44 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v8 = 2688LL * dword_1403AAA2C;
  v9 = &PpmCurrentProfile[v8 / 8 + 5];
  v49 = v9;
  if ( v7 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_1403AAA6C && v7[273] < v3 )
  {
    v2 = 4096;
    v9 = (__int64 *)((char *)&unk_1403A65A8 + v8);
    v40 = 4096;
    v49 = (__int64 *)((char *)&unk_1403A65A8 + v8);
  }
  LOBYTE(v10) = *(_BYTE *)(a1 + 23858);
  if ( !(_BYTE)v10 )
  {
    v10 = *(_QWORD *)(a1 + 24176);
    if ( v10 )
      LOBYTE(v10) = *(_BYTE *)(v10 + 205) != 0;
  }
  v11 = *((_DWORD *)v9 + 14);
  v12 = *((_BYTE *)v9 + (unsigned __int8)v10 + 34);
  v13 = *((_BYTE *)v9 + (unsigned __int8)v10 + 78);
  v48 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 30);
  v47 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 32);
  v41 = *((_BYTE *)v9 + (unsigned __int8)v10 + 36);
  v14 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 38);
  v15 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 40);
  v43 = v12;
  v45 = v14;
  v16 = (v14 + v15) >> 1;
  if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v11 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v17 = *(_DWORD *)(v1 + 24);
    else
      v17 = 100;
  }
  else
  {
    v17 = *(_DWORD *)(v5 + 320);
  }
  v42 = v17;
  if ( !*(_BYTE *)(v5 + 360) )
  {
    v22 = v42;
    v23 = v2 | 0x40000;
    v20 = v17;
    v24 = v44;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a1 + 24226) && v13 )
  {
    v22 = v42;
    v20 = v17;
    v23 = v2 | 1;
    if ( v13 == 1 )
      v20 = 1;
    v24 = 1;
    goto LABEL_32;
  }
  v18 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v18 = 100;
  if ( !(_BYTE)v16 )
  {
    v35 = v41;
    if ( !v41 )
      v35 = 2;
    v41 = v35;
    v36 = v12;
    if ( !v12 )
      v36 = 2;
    v43 = v36;
  }
  v19 = *(_DWORD *)(a1 + 24244);
  v20 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v4 = v19 / *(_DWORD *)(a1 + 24232);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v20 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v4 = v19 / v20;
  }
  v21 = v20;
  if ( v4 > v15 )
  {
    v22 = v42;
    if ( v20 < v42 )
    {
      if ( v41 == 2 )
      {
        v23 = v40 | 0x40;
      }
      else
      {
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            v20 += PpmPerfSingleStepSize;
            v23 = v40 | 0x20;
          }
          else if ( v41 == 3 )
          {
            if ( v4 < v18 )
              v37 = v19 / (unsigned __int8)v16;
            else
              v37 = v19 / v45;
            v20 = v37;
            v23 = v40 | 0x80;
          }
          else
          {
            v23 = v40;
          }
        }
        else
        {
          v34 = v19 / (unsigned __int8)v16;
          v23 = v40 | 0x10;
          v20 = v34;
        }
        if ( v20 < v42 )
          goto LABEL_25;
      }
      v20 = v42;
LABEL_25:
      v24 = v44;
      goto LABEL_26;
    }
LABEL_24:
    v23 = v40;
    goto LABEL_25;
  }
  if ( v4 >= v45 || v20 <= 1 )
  {
    v22 = v42;
    goto LABEL_24;
  }
  v24 = 3;
  if ( v43 == 1 )
  {
    v23 = v40 | 0x200;
    if ( v20 > PpmPerfSingleStepSize )
    {
      v22 = v42;
      v20 -= PpmPerfSingleStepSize;
      goto LABEL_26;
    }
  }
  else
  {
    if ( !v43 )
    {
      v22 = v42;
      v33 = (unsigned __int8)v16;
      v23 = v40 | 0x100;
      v20 = v19 / v33;
      goto LABEL_26;
    }
    v23 = v40;
    if ( v43 != 2 )
    {
      v22 = v42;
      goto LABEL_26;
    }
  }
  v22 = v42;
  v20 = 1;
  v23 |= 0x400u;
LABEL_26:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_29;
  v25 = *(_DWORD *)(v5 + 696);
  v26 = v20 < v21;
  if ( v20 > v21 )
  {
    if ( v25 < v47 )
    {
LABEL_84:
      v23 |= 0x800u;
      v20 = v21;
      goto LABEL_29;
    }
    v26 = v20 < v21;
  }
  if ( v26 && v25 < v48 )
    goto LABEL_84;
LABEL_29:
  if ( v7 )
  {
    v27 = v7[274];
    if ( v27 )
    {
      v23 |= 0x10000u;
      v7[274] = 0;
      if ( v20 <= v27 )
        v20 = v27;
    }
    v28 = v7[275];
    if ( v28 )
    {
      v23 |= 0x20000u;
      v7[275] = 0;
      if ( v20 <= v28 )
        v20 = v28;
    }
  }
LABEL_32:
  LODWORD(v29) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 280))(
                   v50,
                   v20,
                   *(unsigned int *)(v5 + 328),
                   v22,
                   *((_DWORD *)v49 + 16),
                   *((_DWORD *)v49 + 17),
                   v24,
                   0LL,
                   0LL);
  v31 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 56) = v29;
  v42 = v23;
  v45 = v29;
  v47 = v20;
  v48 = v4;
  if ( !v31 )
  {
    v32 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v29 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v29 + 80))
        && (unsigned __int8)(*(_BYTE *)(v29 + 84) - 1) > 2u
        && (*(_BYTE *)(v29 + 96) & 0x20) != 0
        && (v38 = *(_QWORD *)(v29 + 104), LODWORD(v29) = v38 & 0x20, (v38 & 0x20) == v38)
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LOBYTE(v30) = 4,
            LODWORD(v29) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v30, 32LL),
            (_BYTE)v29) )
      {
        v46 = *(unsigned __int8 *)(a1 + 208);
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v46;
        v53 = 1LL;
        v52 = a1 + 209;
        v55 = 4LL;
        v54 = &v48;
        v56 = &v47;
        v58 = &v45;
        v60 = &v42;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        LODWORD(v29) = EtwWriteEx(v32, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return v29;
}
