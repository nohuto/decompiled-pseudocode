/*
 * XREFs of HvLoadHive @ 0x14043A6FC
 * Callers:
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14043AFB4 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14043B270 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpMapHiveImageFromFile @ 0x14043B2E8 (HvpMapHiveImageFromFile.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14043B388 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpGetHiveHeader @ 0x14043B3A8 (HvpGetHiveHeader.c)
 *     HvViewMapCleanup @ 0x14045C15C (HvViewMapCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     CmpInitializeActualFileSizes @ 0x1404D3A34 (CmpInitializeActualFileSizes.c)
 *     HvpFreeAllocatedBins @ 0x14066A270 (HvpFreeAllocatedBins.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x140675DBC (HvViewMapStart.c)
 *     HvpCleanMap @ 0x14067695C (HvpCleanMap.c)
 *     HvpGetLogHeader @ 0x140676C8C (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r15
  int HiveHeader; // eax
  __int64 v4; // rdx
  int v5; // edi
  _DWORD *v6; // r14
  __int64 v7; // r13
  int v8; // r12d
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rdx
  unsigned int v15; // r9d
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r9d
  int v20; // r10d
  int v21; // eax
  int v22; // eax
  int v24; // r9d
  __int64 v25; // r8
  int v26; // r8d
  int LogHeader; // eax
  int v28; // ecx
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  int v32; // r9d
  char v33; // dl
  int v34; // eax
  __int64 v35; // rdx
  int v36; // r8d
  char v37; // cl
  int cData; // [rsp+28h] [rbp-89h]
  int cDataa; // [rsp+28h] [rbp-89h]
  int cDatab; // [rsp+28h] [rbp-89h]
  char v41; // [rsp+48h] [rbp-69h]
  _BYTE v42[7]; // [rsp+49h] [rbp-68h] BYREF
  _DWORD *v43; // [rsp+50h] [rbp-61h] BYREF
  int v44; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-55h] BYREF
  int v46; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v47[2]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v48; // [rsp+70h] [rbp-41h] BYREF
  int v49; // [rsp+78h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  _QWORD *v51; // [rsp+A8h] [rbp-9h]
  int v52; // [rsp+B0h] [rbp-1h]
  int v53; // [rsp+B4h] [rbp+3h]
  unsigned int *v54; // [rsp+B8h] [rbp+7h]
  int v55; // [rsp+C0h] [rbp+Fh]
  int v56; // [rsp+C4h] [rbp+13h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v43 = 0LL;
  v47[1] = 0;
  v47[0] = 0;
  v41 = 0;
  v42[0] = 0;
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v43, &v48);
  v49 = HiveHeader;
  v5 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    cData = 0;
    v12 = -1073741670;
    v24 = -1073741670;
    goto LABEL_28;
  }
  if ( !HiveHeader )
  {
    v12 = -1073741476;
    cData = 16;
    v24 = -1073741476;
    goto LABEL_28;
  }
  v6 = v43;
  if ( (unsigned int)(HiveHeader - 4) <= 1 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 148) )
    {
      if ( HiveHeader != 4 )
        goto LABEL_4;
      LOBYTE(v4) = 1;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v4, 875777347LL);
      if ( v7 )
        goto LABEL_33;
      v12 = -1073741801;
      cData = 48;
      v24 = -1073741801;
    }
    else
    {
      cData = 32;
      v12 = -1073741492;
      v24 = -1073741492;
    }
LABEL_28:
    SetFailureLocation(v1, 0, 6, v24, cData);
    v6 = v43;
    goto LABEL_79;
  }
LABEL_4:
  v7 = 0LL;
  if ( HiveHeader == 5 )
  {
    v26 = v43[2];
    goto LABEL_35;
  }
  if ( HiveHeader != 4 )
  {
    v6 = v43;
    v8 = v43[1];
    goto LABEL_7;
  }
LABEL_33:
  v26 = 0;
LABEL_35:
  LogHeader = HvpGetLogHeader(
                BugCheckParameter2,
                (unsigned int)&v48,
                v26,
                (unsigned int)v47,
                (__int64)&v44,
                (__int64)v42,
                v7);
  if ( LogHeader == 2 )
  {
    cDataa = 208;
    v12 = -1073741670;
    v31 = -1073741670;
    goto LABEL_78;
  }
  if ( LogHeader == 1 )
  {
    cDataa = 224;
    goto LABEL_76;
  }
  if ( v5 == 4 )
  {
    *(_DWORD *)(v7 + 28) = 0;
    v28 = 0;
    *(_WORD *)(BugCheckParameter2 + 184) |= 0x40u;
    v6 = (_DWORD *)v7;
    if ( LogHeader == 6 )
      v28 = 4;
    *(_DWORD *)(v7 + 4088) = v28;
  }
  v8 = v44;
LABEL_7:
  *(_QWORD *)(BugCheckParameter2 + 64) = v6;
  v9 = v6[5] << 12;
  v10 = v6[6] - 4096;
  v44 = v8;
  *(_DWORD *)(BugCheckParameter2 + 196) = v10 + v9;
  v11 = CmpInitializeActualFileSizes(BugCheckParameter2, &v43);
  v12 = v11;
  if ( v11 < 0 )
  {
    cDataa = 128;
LABEL_53:
    v31 = v11;
LABEL_78:
    SetFailureLocation(v1, 0, 6, v31, cDataa);
    goto LABEL_79;
  }
  v13 = (unsigned int)v43;
  if ( (unsigned int)v43 < v6[10] + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_14033C3C0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14033C3C0, 0x200000000000uLL) )
    {
      v53 = 0;
      v56 = 0;
      v51 = &v43;
      v54 = &v45;
      LODWORD(v43) = v29;
      v45 = v13;
      v52 = 4;
      v55 = 4;
      TlgWrite(&stru_14033C3C0, &unk_1402AB4E2, 0LL, 0LL, 4u, &pData);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v6[10] = (v13 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(v6[10] - 1) > 0x7FFFDFFF )
  {
    cDataa = 112;
LABEL_76:
    v12 = -1073741492;
    v31 = -1073741492;
    goto LABEL_78;
  }
  if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
  {
    v30 = HvViewMapStart(BugCheckParameter2 + 200, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 2664), v13, 0);
    v12 = v30;
    if ( v30 < 0 )
    {
      SetFailureLocation(v1, 0, 6, v30, 136);
      goto LABEL_79;
    }
    v11 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, 0LL, v13);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
      goto LABEL_11;
    }
    cDataa = 138;
    goto LABEL_53;
  }
LABEL_11:
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
    v16 = HvpMapHiveImageFromSystemCache(BugCheckParameter2, v14, v6[10], v15);
  else
    v16 = HvpMapHiveImageFromFile(BugCheckParameter2);
  v12 = v16;
  if ( v16 < 0 )
  {
    cDatab = 144;
LABEL_58:
    v32 = v12;
  }
  else
  {
    CmpTraceHiveMountBaseFileMounted(*(_QWORD *)(BugCheckParameter2 + 2664), (unsigned int)v6[10]);
    v17 = 0LL;
    v18 = v8;
    LODWORD(v43) = 0;
    LOBYTE(v19) = 0;
    v46 = v8;
    v48 = 0LL;
    while ( 1 )
    {
      v20 = v47[v17];
      if ( !v20 )
        break;
      v33 = v42[0];
      if ( v42[0] )
        *(_WORD *)(BugCheckParameter2 + 184) |= 0x80u;
      LOBYTE(v19) = v33;
      v34 = HvpRecoverData(BugCheckParameter2, v20, v18, v19, (__int64)&v46, (__int64)&v45);
      if ( v34 == 2 )
        v12 = -1073741670;
      if ( v34 == 1 )
        v12 = -1073741492;
      if ( (unsigned int)(v34 - 1) <= 1 )
      {
        cDatab = 160;
        goto LABEL_58;
      }
      v35 = v48;
      v36 = (int)v43;
      LOBYTE(v19) = 1;
      v41 = 1;
      v37 = -1;
      *(_WORD *)(BugCheckParameter2 + 184) |= LOWORD(v47[v48]) << (char)v43;
      if ( v45 < 0xFF )
        v37 = v45;
      *(_BYTE *)(v35 + BugCheckParameter2 + 186) = v37;
      v17 = v35 + 1;
      v18 = v46;
      LODWORD(v43) = v36 + 3;
      v48 = v17;
      if ( (unsigned int)(v36 + 3) >= 6 )
        goto LABEL_69;
    }
    if ( !(_BYTE)v19 )
    {
      v21 = v6[1];
      *(_DWORD *)(BugCheckParameter2 + 152) = v21;
      *(_DWORD *)(BugCheckParameter2 + 156) = v21;
      goto LABEL_18;
    }
LABEL_69:
    *(_DWORD *)(BugCheckParameter2 + 148) = v47[0];
    v21 = v44;
    *(_DWORD *)(BugCheckParameter2 + 152) = v18;
    *(_DWORD *)(BugCheckParameter2 + 156) = v18;
LABEL_18:
    *(_DWORD *)(BugCheckParameter2 + 164) = v21;
    v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, (unsigned int)v6[10], 0LL);
    v12 = v22;
    if ( v22 < 0 )
    {
      cDatab = 176;
    }
    else
    {
      v22 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
      v12 = v22;
      if ( v22 >= 0 )
      {
        if ( v49 == 4 || v41 )
          v12 = 1073741833;
        *(_DWORD *)(BugCheckParameter2 + 144) |= 0x10000u;
        v6[2] = v6[1];
        v6[1023] = 0;
        return v12;
      }
      cDatab = 192;
    }
    v32 = v22;
  }
  SetFailureLocation(v1, 0, 6, v32, cDatab);
  HvpFreeAllocatedBins(BugCheckParameter2);
  HvpCleanMap(BugCheckParameter2);
LABEL_79:
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(v25) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, v25);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
      v6,
      *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  return v12;
}
