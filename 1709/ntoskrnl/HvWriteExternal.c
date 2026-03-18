/*
 * XREFs of HvWriteExternal @ 0x14069739C
 * Callers:
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     CmpFileFlush @ 0x140694EF0 (CmpFileFlush.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  _DWORD *v2; // rdi
  char v3; // r13
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 result; // rax
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 FreeBin; // rax
  __int64 v11; // rcx
  int v12; // r15d
  unsigned __int64 BinAddress; // rax
  unsigned int v14; // ebx
  _OWORD *PoolWithTag; // rax
  _DWORD *v16; // r15
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  unsigned int v20; // r12d
  __int64 (__fastcall *v21)(ULONG_PTR, __int64, unsigned int *); // rax
  unsigned int v22; // r9d
  char v23; // bl
  unsigned int v24; // ebx
  struct _EX_RUNDOWN_REF *v25; // rax
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rcx
  SIZE_T v28; // r15
  unsigned __int64 v29; // rax
  _DWORD *v30; // rax
  unsigned __int8 (__fastcall *v31)(ULONG_PTR, __int64, unsigned int *); // rax
  unsigned int v32; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-18h]
  int v34; // [rsp+50h] [rbp-10h]
  __int16 v35; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+A8h] [rbp+48h]
  unsigned int v37; // [rsp+B0h] [rbp+50h]

  v2 = 0LL;
  v3 = 0;
  HvpGetBinContextInitialize(&v35);
  v4 = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2680) )
    return 3221225485LL;
  v6 = *(_DWORD *)(BugCheckParameter2 + 1400);
  v37 = v6;
  result = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v6 + 4096, 0);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v8);
        v4 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0xB58uLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v12 = *(_DWORD *)(FreeBin + 16);
        if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
        {
          BinAddress = HvpMapEntryGetBinAddress(v11, (struct _EX_RUNDOWN_REF *)v11, &v35);
LABEL_10:
          v2 = (_DWORD *)BinAddress;
        }
        if ( v2 )
        {
          if ( v12 + v8 > *(_DWORD *)(BugCheckParameter2 + 1400) || (v12 & 0xFFF) != 0 )
          {
            v14 = -1073741492;
            goto LABEL_41;
          }
          HvpMapEntryReleaseBinAddress(v11, v4, &v35);
          v2 = 0LL;
        }
        v8 += v12;
        if ( v8 >= v37 )
          goto LABEL_16;
      }
      BinAddress = HvpMapEntryGetBinAddress(v11, v4, &v35);
      v12 = *(_DWORD *)(BinAddress + 8);
      goto LABEL_10;
    }
LABEL_16:
    if ( v8 < *(_DWORD *)(BugCheckParameter2 + 1400) )
      return v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v17 = *(_OWORD **)(BugCheckParameter2 + 64);
    v18 = 32LL;
    do
    {
      *PoolWithTag = *v17;
      PoolWithTag[1] = v17[1];
      PoolWithTag[2] = v17[2];
      PoolWithTag[3] = v17[3];
      PoolWithTag[4] = v17[4];
      PoolWithTag[5] = v17[5];
      PoolWithTag[6] = v17[6];
      PoolWithTag += 8;
      v19 = v17[7];
      v17 += 8;
      *(PoolWithTag - 1) = v19;
      --v18;
    }
    while ( v18 );
    v20 = v37;
    v16[10] = v37;
    v16[11] = 1;
    v16[127] = HvpHeaderCheckSum(v16);
    v21 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40);
    v36 = v22;
    v32 = v22;
    v33 = v16;
    v34 = 4096;
    v23 = v21(BugCheckParameter2, 2LL, &v32);
    ExFreePoolWithTag(v16, 0);
    if ( !v23 )
      return 3221225805LL;
    v24 = 0;
    v36 = (v36 + 4095) & 0xFFFFF000;
    if ( !v20 )
    {
LABEL_40:
      v11 = (unsigned int)-(CmpFileFlush(BugCheckParameter2, 2u) == 0);
      v14 = v11 & 0xC000014D;
      goto LABEL_41;
    }
    while ( 1 )
    {
      v25 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v24);
      v4 = v25;
      if ( !v25 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0xBC1uLL);
      v26 = HvpMapEntryGetFreeBin(v25);
      if ( !v26 )
        break;
      v28 = *(unsigned int *)(v26 + 16);
      if ( (*(_DWORD *)(v26 + 24) & 1) != 0 )
      {
        v29 = HvpMapEntryGetBinAddress((__int64)v27, v27, &v35);
LABEL_34:
        v3 = 0;
        v2 = (_DWORD *)v29;
        goto LABEL_35;
      }
      v30 = ExAllocatePoolWithTag(PagedPool, v28, 0x62484D43u);
      v2 = v30;
      if ( !v30 )
        return (unsigned int)-1073741670;
      v3 = 1;
      memset(v30, 0, v28);
      *v2 = 1852400232;
      v2[1] = v24;
      v2[2] = v28;
      v2[8] = v28 - 32;
LABEL_35:
      v32 = v36;
      v31 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, unsigned int *))(BugCheckParameter2 + 40);
      v33 = v2;
      v34 = v28;
      if ( !v31(BugCheckParameter2, 2LL, &v32) )
      {
        v14 = -1073741491;
LABEL_41:
        if ( v2 )
        {
          if ( v3 )
            ExFreePoolWithTag(v2, 0);
          else
            HvpMapEntryReleaseBinAddress(v11, v4, &v35);
        }
        return v14;
      }
      if ( v3 )
        ExFreePoolWithTag(v2, 0);
      else
        HvpMapEntryReleaseBinAddress(v11, v4, &v35);
      v2 = 0LL;
      v24 += v28;
      if ( v24 >= v20 )
        goto LABEL_40;
    }
    v29 = HvpMapEntryGetBinAddress((__int64)v27, v4, &v35);
    LODWORD(v28) = *(_DWORD *)(v29 + 8);
    goto LABEL_34;
  }
  return result;
}
