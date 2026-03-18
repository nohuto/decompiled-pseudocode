/*
 * XREFs of HvFreeHivePartial @ 0x1404B7EDC
 * Callers:
 *     HvpTruncateBins @ 0x1404B7E28 (HvpTruncateBins.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14043AFB4 (HvpAdjustHiveFreeDisplay.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x14043B514 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpFreeMap @ 0x140459130 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     CmpReleaseGlobalQuota @ 0x1404D2918 (CmpReleaseGlobalQuota.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v5; // r12
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // edi
  _BYTE *CellMap; // rax
  __int64 FreeBin; // rax
  __int64 v13; // r9
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  void **v16; // rax
  void *v17; // rax
  unsigned int v18; // r8d
  int v19; // edx
  ULONG v20; // r14d
  ULONG v21; // ebx
  int v22; // ebx
  unsigned int v23; // [rsp+68h] [rbp+10h]

  v5 = 632LL * a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 1400);
  v23 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v7 + v9);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x172uLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v14 = (_QWORD *)FreeBin;
      if ( FreeBin )
      {
        if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
          HvpFreeBin(
            BugCheckParameter2,
            *(_DWORD *)(FreeBin + 16),
            a3,
            *(_DWORD *)(v13 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
        else
          CmpReleaseGlobalQuota(*(unsigned int *)(FreeBin + 16));
        v15 = (_QWORD *)*v14;
        v16 = (void **)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || *v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        v7 += *((_DWORD *)v14 + 4);
        CmpReleaseGlobalQuota(32LL);
        ExFreePoolWithTag(v14, 0);
      }
      else
      {
        v19 = *(_DWORD *)(v13 + 32);
        v7 += v19;
        if ( v19 )
          HvpFreeBin(
            BugCheckParameter2,
            v19,
            a3,
            *(_DWORD *)(v13 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      do
      {
        v17 = (void *)HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v17 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x1AEuLL);
        memset(v17, 0, 0x28uLL);
        v10 += 4096;
      }
      while ( v10 + v9 < v7 );
    }
    while ( v7 < v23 );
    if ( a2 )
      v18 = (a2 - 1) >> 21;
    else
      v18 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 1408),
      v18 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 1400) >> 12) - 1) >> 9);
    if ( !a3 )
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, a2 & 0x7FFFFFFF, *(_DWORD *)(BugCheckParameter2 + 1400));
    *(_DWORD *)(v5 + BugCheckParameter2 + 1400) = a2 & 0x7FFFFFFF;
    if ( !a3 )
    {
      v20 = a2 >> 9;
      v21 = *(_DWORD *)(BugCheckParameter2 + 72) - v20;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v20, v21);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 96), v20, v21);
      *(_QWORD *)(BugCheckParameter2 + 80) = *(_QWORD *)(BugCheckParameter2 + 80);
      *(_DWORD *)(BugCheckParameter2 + 72) = v20;
      *(_QWORD *)(BugCheckParameter2 + 104) = *(_QWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 96) = v20;
      v22 = *(_DWORD *)(BugCheckParameter2 + 88);
      *(_DWORD *)(BugCheckParameter2 + 88) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72));
      *(_DWORD *)(BugCheckParameter2 + 112) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
      _InterlockedExchangeAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 88) - v22);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(_DWORD *)(v5 + BugCheckParameter2 + 1400), a3);
  }
  return result;
}
