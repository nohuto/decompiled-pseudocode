/*
 * XREFs of HvpAddBin @ 0x140566210
 * Callers:
 *     HvpDoAllocateCell @ 0x140515D74 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x1400BD380 (HvpGrowDirtyVectors.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x140513B34 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 *     CmpReleaseGlobalQuota @ 0x140514098 (CmpReleaseGlobalQuota.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140514BFC (HvpAdjustHiveFreeDisplay.c)
 *     CmpClaimGlobalQuota @ 0x140514DD4 (CmpClaimGlobalQuota.c)
 *     HvpAllocateBin @ 0x140517824 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405667B8 (HvpPointMapEntriesToBuffer.c)
 *     HvpExpandMap @ 0x140566878 (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x14056694C (CmpCanGrowHive.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1405669C0 (CmpUpdateSystemHiveHysteresis.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 *     HvpProtectBin @ 0x140566C48 (HvpProtectBin.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 *     HvpFreeBin @ 0x1405840EC (HvpFreeBin.c)
 *     HvpShrinkMap @ 0x140706B64 (HvpShrinkMap.c)
 *     HvpViewMapShrinkStorage @ 0x140706E50 (HvpViewMapShrinkStorage.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r13d
  unsigned int v5; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r8
  ULONG_PTR v9; // r12
  __int64 *i; // r14
  unsigned int v11; // edx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  signed __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  _DWORD *v24; // rcx
  void *v25; // r10
  int v26; // edx
  char v27; // al
  __int64 *v29; // rax
  __int64 **v30; // rcx
  int v31; // edi
  __int64 v32; // r8
  __int64 CellMap; // rax
  unsigned int v34; // r8d
  unsigned int v35; // r11d
  _QWORD *v36; // r10
  __int64 v37; // rax
  int v38; // eax
  _DWORD *v39; // rdx
  __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  int v46; // ebx
  ULONG v47; // eax
  __int64 v48; // rax
  __int64 *v49; // rax
  size_t Size; // [rsp+30h] [rbp-38h]
  void *v51; // [rsp+38h] [rbp-30h] BYREF
  void *v52; // [rsp+40h] [rbp-28h] BYREF
  __int64 v53; // [rsp+48h] [rbp-20h]
  __int64 v54; // [rsp+50h] [rbp-18h]
  __int64 *v55; // [rsp+58h] [rbp-10h]
  char v56; // [rsp+B0h] [rbp+48h]
  char v57; // [rsp+B8h] [rbp+50h]
  char v58; // [rsp+C0h] [rbp+58h]
  unsigned int j; // [rsp+C8h] [rbp+60h]

  v3 = a3;
  v4 = -1;
  Size = 0LL;
  j = -1;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v56 = 0;
  v51 = 0LL;
  v53 = 0LL;
  v7 = 0;
  v52 = 0LL;
  v58 = 0;
  v57 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  v8 = 632LL * a3;
  v9 = 632 * v3 + BugCheckParameter2 + 880;
  v54 = 632 * v3;
  v55 = (__int64 *)v9;
  for ( i = *(__int64 **)v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      i = 0LL;
      goto LABEL_9;
    }
    v11 = *((_DWORD *)i + 4);
    if ( v11 >= v5 && v11 + *((_DWORD *)i + 5) <= *(_DWORD *)(v8 + BugCheckParameter2 + 272) )
      break;
  }
  v7 = *((_DWORD *)i + 4);
LABEL_9:
  if ( i )
  {
    v29 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i || (v30 = (__int64 **)i[1], *v30 != i) )
      __fastfail(3u);
    *v30 = v29;
    v29[1] = (__int64)v30;
    v31 = (_DWORD)v3 << 31;
    if ( HvpMarkDirty(BugCheckParameter2, v31 + *((_DWORD *)i + 5), *((_DWORD *)i + 4), 0) )
    {
      v32 = 0LL;
      v4 = v31 + *((_DWORD *)i + 5);
      for ( j = v4; (unsigned int)v32 < v7; *v36 = v37 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, (int)v32 + v4);
        v36 = (_QWORD *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x267uLL);
        *(_QWORD *)(CellMap + 8) &= ~2uLL;
        v37 = v34;
        v32 = v34 + 4096;
      }
    }
    goto LABEL_54;
  }
  v12 = *(_DWORD *)(v8 + BugCheckParameter2 + 272);
  v13 = v12;
  v14 = v5 + v12;
  if ( !(_DWORD)v3 && v5 <= 0x40000 && (((v12 + 4096) ^ (v14 + 4095)) & 0xFFFC0000) != 0 )
  {
    v13 = ((v12 + 266239) & 0xFFFC0000) - 4096;
    LODWORD(Size) = v13 - v12;
    v14 = v5 + v13;
  }
  if ( v14 < v12
    || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v14)
    || (int)HvpExpandMap(BugCheckParameter2, (unsigned int)v3, v12, v14) < 0 )
  {
    return j;
  }
  *(_DWORD *)(v54 + BugCheckParameter2 + 272) = v14;
  if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v14, v3) < 0 )
  {
LABEL_78:
    HvpShrinkMap(BugCheckParameter2, (unsigned int)v3, v14, v12);
    *(_DWORD *)(v54 + BugCheckParameter2 + 272) = v12;
    if ( v56 )
    {
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v12 >> 9;
      v46 = *(_DWORD *)(BugCheckParameter2 + 104);
      v47 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = v47;
      _InterlockedExchangeAdd(&CmpDirtySectorCount, v47 - v46);
      v48 = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v12 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 120) = v48;
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    if ( v57 )
      HvpViewMapShrinkStorage(BugCheckParameter2 + 216, v12);
    if ( v51 && !v58 )
      HvpFreeBin(BugCheckParameter2, v13 - v12, v51);
    if ( v53 )
      (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v53, 24LL);
    if ( v52 && !v58 )
      HvpFreeBin(BugCheckParameter2, v14 - v13, v52);
    if ( !HIDWORD(Size) )
      return j;
    CmpReleaseGlobalQuota(HIDWORD(Size));
    v9 = (ULONG_PTR)v55;
    v4 = -1;
LABEL_54:
    if ( i )
    {
      if ( v4 == -1 )
      {
        v49 = *(__int64 **)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
          __fastfail(3u);
        *i = (__int64)v49;
        i[1] = v9;
        v49[1] = (__int64)i;
        *(_QWORD *)v9 = i;
      }
      else
      {
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(BugCheckParameter2 + 32))(i, 24LL, v32);
      }
    }
    return j;
  }
  if ( (_DWORD)v3 )
    goto LABEL_33;
  v17 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v17 & 1) == 0 )
  {
    if ( (int)HvpGrowDirtyVectors(BugCheckParameter2, v14) < 0 )
      goto LABEL_77;
    v17 = *(_DWORD *)(BugCheckParameter2 + 160);
    v56 = 1;
  }
  if ( (v17 & 0x8001) == 0 )
  {
    CmpBoostActiveHiveWriter(v16, BugCheckParameter2 + 4256);
    if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v14 + 4096, 1LL) < 0 )
      goto LABEL_77;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4284) )
      *(_DWORD *)(BugCheckParameter2 + 4284) = v12;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
    goto LABEL_33;
  if ( (*(_BYTE *)(BugCheckParameter2 + 248) & 1) != 0 )
    v18 = *(_QWORD *)(BugCheckParameter2 + 232);
  else
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  v19 = v18 & 0xFFFFFFFFFFFFF000uLL;
  v15 = 2147479552LL;
  if ( v19 >= 2147479552 )
    LODWORD(v19) = 2147479552;
  if ( v14 > (int)v19 - 4096 )
  {
LABEL_33:
    v20 = 0;
  }
  else
  {
    if ( (int)HvpViewMapExtendStorage(BugCheckParameter2 + 216, v14) < 0 )
      goto LABEL_77;
    v20 = 1;
    v58 = 1;
  }
  if ( (_DWORD)Size )
  {
    if ( v20 )
    {
      v57 = v20;
      if ( !CmpClaimGlobalQuota((unsigned int)Size, v15) )
        goto LABEL_77;
      v57 = v58;
      HIDWORD(Size) = Size;
      if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v12, (unsigned int)Size, &v51) < 0 )
        goto LABEL_77;
      v57 = v58;
      v38 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v12, Size);
    }
    else
    {
      v57 = 0;
      if ( (int)HvpAllocateBin(BugCheckParameter2, (unsigned int)Size, v3, 0x30324D43u, (__int64 *)&v51) < 0 )
        goto LABEL_77;
      LOBYTE(v45) = 1;
      v57 = 0;
      v38 = HvpProtectBin(v44, (unsigned int)Size, v51, v45);
    }
    if ( v38 < 0 )
      goto LABEL_77;
    memset(v51, 0, (unsigned int)Size);
    v39 = v51;
    *((_DWORD *)v51 + 7) = 0;
    v39[1] = v12 & 0x7FFFFFFF;
    v39[2] = Size;
    *v39 = 1852400232;
    v39[8] = Size - 32;
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
    v20 = v58;
    v15 = v40;
    v57 = v58;
    v53 = v40;
    if ( !v40 )
      goto LABEL_77;
    *(_DWORD *)(v40 + 16) = Size;
    *(_DWORD *)(v40 + 20) = v12;
  }
  if ( !v20 )
  {
    v57 = 0;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v5, v3, 0x36314D43u, (__int64 *)&v52) >= 0 )
    {
      LOBYTE(v22) = 1;
      v57 = 0;
      v23 = HvpProtectBin(v21, v5, v52, v22);
      goto LABEL_38;
    }
LABEL_77:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v12, v3);
    goto LABEL_78;
  }
  v57 = v20;
  if ( !CmpClaimGlobalQuota(v5, v15) )
    goto LABEL_77;
  HIDWORD(Size) += v5;
  v57 = v58;
  if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v13, v5, &v52) < 0 )
    goto LABEL_77;
  v57 = v58;
  v23 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v13, v5);
LABEL_38:
  if ( v23 < 0 )
    goto LABEL_77;
  memset(v52, 0, v5);
  v24 = v52;
  v25 = v51;
  v26 = (_DWORD)v3 << 31;
  *((_DWORD *)v52 + 7) = 0;
  v24[1] = v13 & 0x7FFFFFFF;
  *v24 = 1852400232;
  v24[2] = v5;
  v24[8] = v5 - 32;
  v27 = v58 ^ 1;
  if ( v25 )
  {
    HvpPointMapEntriesToBuffer(BugCheckParameter2, v58 ^ 1, v53);
    v41 = v55;
    v42 = *v55;
    if ( *(__int64 **)(*v55 + 8) != v55 )
      __fastfail(3u);
    v43 = v53;
    *(_QWORD *)v53 = v42;
    *(_QWORD *)(v43 + 8) = v41;
    *(_QWORD *)(v42 + 8) = v43;
    v27 = v58 ^ 1;
    *v41 = v43;
    v26 = (_DWORD)v3 << 31;
  }
  v13 += v26;
  HvpPointMapEntriesToBuffer(BugCheckParameter2, v27, 0LL);
  if ( !(_DWORD)v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
      || (v57 = v58, HvpMarkDirty(BugCheckParameter2, v12, v14 - v12, 0)) )
    {
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v14, v12);
      HvpSetRangeProtection(BugCheckParameter2, v12, v14 - v12, 4u);
      return v13;
    }
    goto LABEL_77;
  }
  return v13;
}
