/*
 * XREFs of HvLoadHive @ 0x1404E4CD0
 * Callers:
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E5BC4 (HvpMapHiveImageFromSystemCache.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpGetHiveHeader @ 0x1404E4B6C (HvpGetHiveHeader.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1404E56F0 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1404E59A4 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpMapHiveImageFromFile @ 0x1404E5A1C (HvpMapHiveImageFromFile.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x1404E5ABC (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     CmpInitializeActualFileSizes @ 0x1404E5ADC (CmpInitializeActualFileSizes.c)
 *     HvViewMapCleanup @ 0x14059CCA8 (HvViewMapCleanup.c)
 *     HvpFreeAllocatedBins @ 0x140694950 (HvpFreeAllocatedBins.c)
 *     HvViewMapPinForFileOffset @ 0x1406A027C (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 *     HvpCleanMap @ 0x1406A0E9C (HvpCleanMap.c)
 *     HvpGetLogHeader @ 0x1406A11C8 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r15
  int HiveHeader; // eax
  __int64 v4; // rdx
  int v5; // edi
  char *v6; // r14
  __int64 v7; // r13
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // r13d
  __int64 v12; // rdx
  unsigned int v13; // r9d
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // r10d
  unsigned int v19; // eax
  int v20; // eax
  int v22; // r9d
  __int64 v23; // r8
  int v24; // r8d
  int LogHeader; // eax
  int v26; // ecx
  unsigned int v27; // r9d
  int v28; // eax
  int v29; // r9d
  int v30; // r9d
  char v31; // dl
  int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  int cData; // [rsp+28h] [rbp-69h]
  int cDataa; // [rsp+28h] [rbp-69h]
  int cDatab; // [rsp+28h] [rbp-69h]
  char v38; // [rsp+48h] [rbp-49h]
  char v39[3]; // [rsp+49h] [rbp-48h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v42; // [rsp+54h] [rbp-3Dh]
  char *v43; // [rsp+58h] [rbp-39h] BYREF
  _DWORD v44[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v45; // [rsp+68h] [rbp-29h] BYREF
  int v46; // [rsp+70h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  unsigned int *v48; // [rsp+98h] [rbp+7h]
  int v49; // [rsp+A0h] [rbp+Fh]
  int v50; // [rsp+A4h] [rbp+13h]
  unsigned int *v51; // [rsp+A8h] [rbp+17h]
  int v52; // [rsp+B0h] [rbp+1Fh]
  int v53; // [rsp+B4h] [rbp+23h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v43 = 0LL;
  v44[1] = 0;
  v44[0] = 0;
  v38 = 0;
  v39[0] = 0;
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v43, &v45);
  v46 = HiveHeader;
  v5 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    cData = 0;
    v10 = -1073741670;
    v22 = -1073741670;
    goto LABEL_29;
  }
  if ( !HiveHeader )
  {
    v10 = -1073741476;
    cData = 16;
    v22 = -1073741476;
    goto LABEL_29;
  }
  v6 = v43;
  if ( (unsigned int)(HiveHeader - 4) > 1 )
    goto LABEL_4;
  if ( !*(_DWORD *)(BugCheckParameter2 + 148) )
  {
    cData = 32;
    v10 = -1073741492;
    v22 = -1073741492;
    goto LABEL_29;
  }
  if ( HiveHeader == 4 )
  {
    LOBYTE(v4) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v4, 875777347LL);
    if ( v7 )
    {
LABEL_34:
      v24 = 0;
      goto LABEL_36;
    }
    v10 = -1073741801;
    cData = 48;
    v22 = -1073741801;
LABEL_29:
    SetFailureLocation(v1, 0, 6, v22, cData);
    v6 = v43;
    goto LABEL_81;
  }
LABEL_4:
  v7 = 0LL;
  if ( HiveHeader != 5 )
  {
    if ( HiveHeader != 4 )
    {
      v6 = v43;
      v8 = *((_DWORD *)v43 + 1);
LABEL_7:
      v42 = v8;
      goto LABEL_8;
    }
    goto LABEL_34;
  }
  v24 = *((_DWORD *)v43 + 2);
LABEL_36:
  LogHeader = HvpGetLogHeader(
                BugCheckParameter2,
                (unsigned int)&v45,
                v24,
                (unsigned int)v44,
                (__int64)&v40,
                (__int64)v39,
                v7);
  if ( LogHeader == 2 )
  {
    cDataa = 208;
    v10 = -1073741670;
    v29 = -1073741670;
    goto LABEL_80;
  }
  if ( LogHeader == 1 )
  {
    cDataa = 224;
    goto LABEL_78;
  }
  if ( v5 == 4 )
  {
    *(_DWORD *)(v7 + 28) = 0;
    v26 = 0;
    *(_WORD *)(BugCheckParameter2 + 184) |= 0x40u;
    v6 = (char *)v7;
    if ( LogHeader == 6 )
      v26 = 4;
    v8 = v40;
    *(_DWORD *)(v7 + 4088) = v26;
    goto LABEL_7;
  }
  v42 = v40;
LABEL_8:
  *(_QWORD *)(BugCheckParameter2 + 64) = v6;
  *(_DWORD *)(BugCheckParameter2 + 196) = *((_DWORD *)v6 + 6) - 4096 + (*((_DWORD *)v6 + 5) << 12);
  v9 = CmpInitializeActualFileSizes(BugCheckParameter2, &v41);
  v10 = v9;
  if ( v9 < 0 )
  {
    cDataa = 128;
LABEL_54:
    v29 = v9;
LABEL_80:
    SetFailureLocation(v1, 0, 6, v29, cDataa);
    goto LABEL_81;
  }
  v11 = v41;
  if ( v41 < *((_DWORD *)v6 + 10) + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x200000000000uLL) )
    {
      v50 = 0;
      v53 = 0;
      v48 = &v41;
      v51 = &v40;
      v41 = v27;
      v40 = v11;
      v49 = 4;
      v52 = 4;
      TlgWrite(&stru_1403549F0, &unk_1402CF2C1, 0LL, 0LL, 4u, &pData);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *((_DWORD *)v6 + 10) = (v11 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(*((_DWORD *)v6 + 10) - 1) > 0x7FFFDFFF )
  {
    cDataa = 112;
LABEL_78:
    v10 = -1073741492;
    v29 = -1073741492;
    goto LABEL_80;
  }
  if ( (unsigned __int8)HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) )
  {
    v28 = HvViewMapStart(BugCheckParameter2 + 200, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 2664), v11, 0);
    v10 = v28;
    if ( v28 < 0 )
    {
      SetFailureLocation(v1, 0, 6, v28, 136);
      goto LABEL_81;
    }
    v9 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, 0LL, v11);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
      goto LABEL_12;
    }
    cDataa = 138;
    goto LABEL_54;
  }
LABEL_12:
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
    v14 = HvpMapHiveImageFromSystemCache(BugCheckParameter2, v12, *((_DWORD *)v6 + 10), v13);
  else
    v14 = HvpMapHiveImageFromFile(BugCheckParameter2);
  v10 = v14;
  if ( v14 < 0 )
  {
    cDatab = 144;
LABEL_59:
    v30 = v10;
  }
  else
  {
    CmpTraceHiveMountBaseFileMounted(*(_QWORD *)(BugCheckParameter2 + 2664), *((unsigned int *)v6 + 10));
    v15 = v42;
    v16 = 0LL;
    v41 = 0;
    LOBYTE(v17) = 0;
    v45 = 0LL;
    v40 = v42;
    while ( 1 )
    {
      v18 = v44[v16];
      if ( !v18 )
        break;
      v31 = v39[0];
      if ( v39[0] )
        *(_WORD *)(BugCheckParameter2 + 184) |= 0x80u;
      LOBYTE(v17) = v31;
      v32 = HvpRecoverData(BugCheckParameter2, v18, v15, v17, (__int64)&v40, (__int64)&v43);
      if ( v32 == 2 )
        v10 = -1073741670;
      if ( v32 == 1 )
        v10 = -1073741492;
      if ( (unsigned int)(v32 - 1) <= 1 )
      {
        cDatab = 160;
        goto LABEL_59;
      }
      v33 = v45;
      LOBYTE(v17) = 1;
      v34 = v41;
      v38 = 1;
      *(_WORD *)(BugCheckParameter2 + 184) |= LOWORD(v44[v45]) << v41;
      if ( (unsigned int)v43 >= 0xFF )
        *(_BYTE *)(BugCheckParameter2 + v33 + 186) = -1;
      else
        *(_BYTE *)(BugCheckParameter2 + v33 + 186) = (_BYTE)v43;
      v15 = v40;
      v16 = v33 + 1;
      v41 = v34 + 3;
      v45 = v16;
      if ( v34 + 3 >= 6 )
        goto LABEL_71;
    }
    if ( !(_BYTE)v17 )
    {
      v19 = *((_DWORD *)v6 + 1);
      *(_DWORD *)(BugCheckParameter2 + 152) = v19;
      *(_DWORD *)(BugCheckParameter2 + 156) = v19;
      goto LABEL_19;
    }
LABEL_71:
    *(_DWORD *)(BugCheckParameter2 + 148) = v44[0];
    v19 = v42;
    *(_DWORD *)(BugCheckParameter2 + 152) = v15;
    *(_DWORD *)(BugCheckParameter2 + 156) = v15;
LABEL_19:
    *(_DWORD *)(BugCheckParameter2 + 164) = v19;
    v20 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *((unsigned int *)v6 + 10), 0LL);
    v10 = v20;
    if ( v20 < 0 )
    {
      cDatab = 176;
    }
    else
    {
      v20 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
      v10 = v20;
      if ( v20 >= 0 )
      {
        if ( v46 == 4 || v38 )
          v10 = 1073741833;
        *(_DWORD *)(BugCheckParameter2 + 144) |= 0x10000u;
        *((_DWORD *)v6 + 2) = *((_DWORD *)v6 + 1);
        *((_DWORD *)v6 + 1023) = 0;
        return v10;
      }
      cDatab = 192;
    }
    v30 = v20;
  }
  SetFailureLocation(v1, 0, 6, v30, cDatab);
  HvpFreeAllocatedBins(BugCheckParameter2);
  HvpCleanMap(BugCheckParameter2);
LABEL_81:
  *(_BYTE *)(BugCheckParameter2 + 124) &= ~4u;
  LOBYTE(v23) = 1;
  HvViewMapCleanup(BugCheckParameter2 + 200, BugCheckParameter2, v23);
  if ( v6 )
    (*(void (__fastcall **)(char *, _QWORD))(BugCheckParameter2 + 32))(v6, *(unsigned int *)(BugCheckParameter2 + 116));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 88) = 0;
  return v10;
}
