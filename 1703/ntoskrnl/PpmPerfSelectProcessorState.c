/*
 * XREFs of PpmPerfSelectProcessorState @ 0x1400461B0
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x1400460D0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r15
  int v2; // r10d
  unsigned __int8 v3; // r9
  unsigned int v4; // r14d
  __int64 v5; // r13
  _BYTE *v7; // r8
  unsigned __int64 v8; // rdx
  __int64 *v9; // r11
  __int64 v10; // rax
  int v11; // edx
  char v12; // di
  char v13; // si
  char v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  unsigned int v17; // r11d
  int v18; // eax
  unsigned __int8 v19; // r10
  unsigned int v20; // edi
  unsigned int v21; // esi
  unsigned int v22; // r9d
  int v23; // r10d
  unsigned int v24; // r12d
  int v25; // esi
  unsigned int v26; // eax
  bool v27; // cf
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  bool v32; // zf
  REGHANDLE v33; // r10
  unsigned int v34; // eax
  char v35; // al
  char v36; // al
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v40; // [rsp+50h] [rbp-B0h]
  unsigned int v41; // [rsp+58h] [rbp-A8h] BYREF
  char v42; // [rsp+60h] [rbp-A0h]
  char v43; // [rsp+61h] [rbp-9Fh]
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

  v1 = *(_QWORD *)(a1 + 24312);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24304);
  v7 = *(_BYTE **)(a1 + 24296);
  v50 = *(_QWORD *)(v1 + 8);
  v40 = 0;
  v44 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v8 = 1400LL * dword_14034BB2C;
  v9 = &PpmCurrentProfile[v8 / 8 + 5];
  v49 = v9;
  if ( v7 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_14034BB6C && v7[273] < v3 )
  {
    v2 = 4096;
    v9 = (__int64 *)((char *)&unk_140349228 + v8);
    v40 = 4096;
    v49 = (__int64 *)((char *)&unk_140349228 + v8);
  }
  LOBYTE(v10) = *(_BYTE *)(a1 + 23986);
  if ( !(_BYTE)v10 )
  {
    v10 = *(_QWORD *)(a1 + 24304);
    if ( v10 )
      LOBYTE(v10) = *(_BYTE *)(v10 + 205) != 0;
  }
  v11 = *((_DWORD *)v9 + 14);
  v12 = *((_BYTE *)v9 + (unsigned __int8)v10 + 34);
  v13 = *((_BYTE *)v9 + (unsigned __int8)v10 + 36);
  v14 = *((_BYTE *)v9 + (unsigned __int8)v10 + 78);
  v48 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 30);
  v47 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 32);
  v15 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 38);
  v16 = *((unsigned __int8 *)v9 + (unsigned __int8)v10 + 40);
  v43 = v12;
  v42 = v13;
  v45 = v15;
  v17 = (v15 + v16) >> 1;
  if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v11 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v5 + 320);
  }
  v41 = v18;
  if ( *(_BYTE *)(a1 + 24354) && v14 )
  {
    v24 = v41;
    v20 = v18;
    v25 = v2 | 1;
    if ( v14 == 1 )
      v20 = 1;
    v23 = 1;
    goto LABEL_33;
  }
  v19 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v19 = 100;
  if ( !(_BYTE)v17 )
  {
    v35 = v13;
    if ( !v13 )
      v35 = 2;
    v42 = v35;
    v36 = v12;
    if ( !v12 )
      v36 = 2;
    v43 = v36;
  }
  v20 = *(_DWORD *)(v1 + 80);
  v21 = *(_DWORD *)(a1 + 24372);
  if ( PpmPerfCalculateActualUtilization )
  {
    v4 = v21 / *(_DWORD *)(a1 + 24360);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v20 = *(_DWORD *)(v1 + 96);
  }
  else if ( v20 == 100 )
  {
    v4 = v21 / 0x64;
  }
  else
  {
    v4 = v21 / v20;
  }
  v22 = v20;
  if ( v4 > v16 )
  {
    v24 = v41;
    if ( v20 < v41 )
    {
      if ( v42 == 2 )
      {
        v25 = v40 | 0x40;
      }
      else
      {
        if ( v42 )
        {
          if ( v42 == 1 )
          {
            v20 += PpmPerfSingleStepSize;
            v25 = v40 | 0x20;
          }
          else if ( v42 == 3 )
          {
            if ( v4 < v19 )
              v37 = v21 / (unsigned __int8)v17;
            else
              v37 = v21 / v45;
            v20 = v37;
            v25 = v40 | 0x80;
          }
          else
          {
            v25 = v40;
          }
        }
        else
        {
          v34 = v21 / (unsigned __int8)v17;
          v25 = v40 | 0x10;
          v20 = v34;
        }
        if ( v20 < v41 )
          goto LABEL_26;
      }
      v20 = v41;
LABEL_26:
      v23 = v44;
      goto LABEL_27;
    }
LABEL_25:
    v25 = v40;
    goto LABEL_26;
  }
  if ( v4 >= v45 || v20 <= 1 )
  {
    v24 = v41;
    goto LABEL_25;
  }
  v23 = 3;
  if ( v43 )
  {
    v25 = v40;
    if ( v43 == 1 )
    {
      v25 = v40 | 0x200;
      if ( v20 > PpmPerfSingleStepSize )
      {
        v24 = v41;
        v20 -= PpmPerfSingleStepSize;
        goto LABEL_27;
      }
    }
    else if ( v43 != 2 )
    {
      v24 = v41;
      goto LABEL_27;
    }
    v24 = v41;
    v20 = 1;
    v25 |= 0x400u;
  }
  else
  {
    if ( (unsigned __int8)v17 == 50 )
      v20 = v21 / 0x32;
    else
      v20 = v21 / (unsigned __int8)v17;
    v24 = v41;
    v25 = v40 | 0x100;
  }
LABEL_27:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_30;
  v26 = *(_DWORD *)(v5 + 480);
  v27 = v20 < v22;
  if ( v20 > v22 )
  {
    if ( v26 < v47 )
    {
LABEL_87:
      v25 |= 0x800u;
      v20 = v22;
      goto LABEL_30;
    }
    v27 = v20 < v22;
  }
  if ( v27 && v26 < v48 )
    goto LABEL_87;
LABEL_30:
  if ( v7 )
  {
    v28 = v7[274];
    if ( v28 )
    {
      v7[274] = 0;
      if ( v20 <= v28 )
        v20 = v28;
      v25 |= 0x10000u;
    }
    v29 = v7[275];
    if ( v29 )
    {
      v7[275] = 0;
      if ( v20 <= v29 )
        v20 = v29;
      v25 |= 0x20000u;
    }
  }
LABEL_33:
  LODWORD(v30) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 280))(
                   v50,
                   v20,
                   *(unsigned int *)(v5 + 328),
                   v24,
                   *((_DWORD *)v49 + 16),
                   *((_DWORD *)v49 + 17),
                   v23,
                   0LL,
                   0LL);
  v32 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 80) = v30;
  v41 = v25;
  v45 = v30;
  v47 = v20;
  v48 = v4;
  if ( !v32 )
  {
    v33 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v30 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v30 + 80))
        && (unsigned __int8)(*(_BYTE *)(v30 + 84) - 1) > 2u
        && (*(_BYTE *)(v30 + 96) & 0x20) != 0
        && (v38 = *(_QWORD *)(v30 + 104), LODWORD(v30) = v38 & 0x20, (v38 & 0x20) == v38)
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LOBYTE(v31) = 4,
            LODWORD(v30) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v31, 32LL),
            (_BYTE)v30) )
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
        v60 = &v41;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        LODWORD(v30) = EtwWriteEx(v33, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return v30;
}
