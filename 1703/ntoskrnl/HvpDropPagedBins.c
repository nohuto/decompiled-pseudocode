/*
 * XREFs of HvpDropPagedBins @ 0x1405BCFDC
 * Callers:
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14006DCF0 (RtlAreBitsClear.c)
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     HvpIsHiveEligibleForSystemCacheBacking @ 0x14043B388 (HvpIsHiveEligibleForSystemCacheBacking.c)
 *     HvpAllocateBin @ 0x14048DC6C (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     MmFreeBootRegistry @ 0x1405BD3CC (MmFreeBootRegistry.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 *     HvViewMapStart @ 0x140675DBC (HvViewMapStart.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  struct _EX_RUNDOWN_REF *v2; // r13
  bool v3; // zf
  int v4; // r15d
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // r8d
  __int64 CellMap; // rax
  unsigned int v9; // eax
  unsigned int v10; // esi
  struct _EX_RUNDOWN_REF *v11; // rax
  __int64 FreeBin; // rax
  unsigned int v13; // r8d
  int Bin; // eax
  __int64 v15; // r12
  int v16; // edi
  void *v17; // r14
  unsigned int v18; // edi
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // rsi
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-30h]
  void *Src; // [rsp+50h] [rbp-28h]
  void *v26; // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h]
  __int16 v28; // [rsp+C0h] [rbp+48h] BYREF
  size_t Size; // [rsp+C8h] [rbp+50h]
  unsigned int v30; // [rsp+D0h] [rbp+58h]
  void *Length; // [rsp+D8h] [rbp+60h] BYREF

  HvpGetBinContextInitialize(&v28);
  v2 = 0LL;
  Length = 0LL;
  *(_QWORD *)StartingIndex = 0LL;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
  LODWORD(Size) = 0;
  if ( v3 )
    v4 = ((unsigned __int8)~*(_BYTE *)(BugCheckParameter2 + 144) >> 4) & 1;
  else
    v4 = 2;
  v6 = HvpIsHiveEligibleForSystemCacheBacking(BugCheckParameter2) + 1;
  if ( v4 != v6 )
  {
    if ( v6 == 2 )
    {
      v16 = HvViewMapStart(
              BugCheckParameter2 + 200,
              BugCheckParameter2,
              *(_QWORD *)(BugCheckParameter2 + 2664),
              *(unsigned int *)(BugCheckParameter2 + 2968),
              1);
      if ( v16 < 0 )
        return (unsigned int)v16;
      *(_BYTE *)(BugCheckParameter2 + 124) |= 4u;
    }
    v7 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( v7 )
    {
      if ( v4 )
      {
        v9 = 0;
      }
      else
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, 0);
        v2 = (struct _EX_RUNDOWN_REF *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x15FCuLL);
        v9 = *(_DWORD *)(CellMap + 32);
      }
      v30 = v9;
      if ( v6 == 1 )
        v7 = v9;
      v10 = 0;
      v24 = v7;
      if ( v7 )
      {
        do
        {
          v11 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v10);
          v2 = v11;
          if ( !v11 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x1614uLL);
          FreeBin = HvpMapEntryGetFreeBin(v11);
          v27 = FreeBin;
          if ( !FreeBin || (v5 = *(unsigned int *)(FreeBin + 24), (v5 & 1) != 0) )
          {
            Src = (void *)HvpMapEntryGetBinAddress(v5, v2, &v28);
            LODWORD(Size) = *((_DWORD *)Src + 2);
            Bin = HvpAllocateBin(
                    BugCheckParameter2,
                    (unsigned int)Size,
                    0,
                    v10,
                    0x35324D43u,
                    (__int64 *)StartingIndex,
                    (__int64 *)&Length);
            v15 = *(_QWORD *)StartingIndex;
            v16 = Bin;
            v17 = Length;
            if ( Bin < 0 )
              goto LABEL_50;
            v18 = Size;
            v19 = *(void **)StartingIndex;
            if ( Length )
              v19 = Length;
            v3 = (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0;
            v26 = v19;
            if ( !v3 )
            {
              LODWORD(Length) = (unsigned int)Size >> 9;
              StartingIndex[0] = v10 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v10 >> 9, (unsigned int)Size >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), StartingIndex[0], (ULONG)Length) )
              {
                v16 = HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v10 + 4096, v18);
                if ( v16 < 0 )
                  goto LABEL_50;
                v18 = Size;
              }
            }
            if ( v26 != v17 && (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
            {
              LODWORD(Length) = v18 >> 9;
              StartingIndex[0] = v10 >> 9;
              if ( !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 72), v10 >> 9, v18 >> 9)
                || !RtlAreBitsClear((PRTL_BITMAP)(BugCheckParameter2 + 96), StartingIndex[0], (ULONG)Length) )
              {
                v16 = HvViewMapCopyToFileOffset(BugCheckParameter2 + 200, v10 + 4096, (char *)Src, v18);
                if ( v16 < 0 )
                {
LABEL_50:
                  v21 = Src;
                  goto LABEL_29;
                }
                v18 = Size;
              }
            }
            else
            {
              memmove(v26, Src, v18);
            }
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v15, (__int64)v17, v18, v10, v27);
            *(_QWORD *)StartingIndex = 0LL;
            Length = 0LL;
            if ( v10 >= v30 )
              (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(Src, v18);
            HvpMapEntryReleaseBinAddress(v20, v2, &v28);
            v13 = v24;
          }
          else
          {
            v18 = *(_DWORD *)(FreeBin + 16);
          }
          v10 += v18;
        }
        while ( v10 < v13 );
      }
    }
  }
  v16 = 0;
  if ( !v4 )
  {
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 144) &= ~0x10u;
    v17 = Length;
    v21 = 0LL;
    v15 = *(_QWORD *)StartingIndex;
LABEL_29:
    if ( v15 || v17 )
      HvpFreeBin(BugCheckParameter2, Size, 0, v15, (__int64)v17);
    if ( v21 )
      HvpMapEntryReleaseBinAddress(v5, v2, &v28);
  }
  return (unsigned int)v16;
}
