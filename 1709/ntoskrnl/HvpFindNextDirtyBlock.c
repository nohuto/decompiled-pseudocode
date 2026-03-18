/*
 * XREFs of HvpFindNextDirtyBlock @ 0x140513F8C
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140513CAC (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpMapEntryIsNewAlloc @ 0x140016590 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryGetBlockAddress @ 0x140081210 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     HvpFindNextDirtyRun @ 0x1400D5174 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rsi
  unsigned int *v10; // r10
  unsigned int *v11; // r11
  unsigned int v12; // ebx
  unsigned int v13; // r12d
  struct _EX_RUNDOWN_REF *CellMap; // rax
  struct _EX_RUNDOWN_REF *v15; // r14
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v17; // rcx
  unsigned __int64 BlockAddress; // rcx
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v23; // r15d
  unsigned int v24; // ebx
  __int64 v25; // rax
  ULONG_PTR v26; // r8
  struct _EX_RUNDOWN_REF *v27; // r13
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // xmm1
  unsigned __int64 BinAddress; // rax
  _WORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v35[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v36; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-14h] BYREF
  __int64 v38; // [rsp+40h] [rbp-10h]
  unsigned int v39; // [rsp+48h] [rbp-8h]

  HvpGetBinContextInitialize(v35);
  HvpGetBinContextInitialize(v34);
  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(v10, v11, &v36, &v37, 0LL) )
    return 0;
  v12 = v36 << 9;
  v13 = (v37 << 9) - (v36 << 9);
  v39 = v37 << 9;
  if ( !a7 || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x33354D43u)) != 0LL )
  {
    CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v12);
    v15 = CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v12, 0x12D2uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
      BlockAddress = v12 - *(_DWORD *)(FreeBin + 20) + HvpMapEntryGetBinAddress((__int64)v17, v17, v34);
    else
      BlockAddress = HvpMapEntryGetBlockAddress((__int64)v17, v17, v34);
    if ( a7 )
      *a4 = PoolWithTag;
    else
      *a4 = BlockAddress + (v12 & 0xFFF);
    v19 = v36 & 7;
    v20 = 8 - v19;
    *a6 = v12 + 4096;
    v21 = v37 - v36;
    LODWORD(v38) = v37 - v36;
    if ( v37 - v36 < 8 - v19 )
      v20 = v37 - v36;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(BlockAddress + (v19 << 9)), v20 << 9);
      v21 = v38;
      PoolWithTag += 512 * v20;
    }
    if ( v21 > v20 )
    {
      v23 = (v12 + 4096) & 0xFFFFF000;
      v24 = v20 << 9;
      while ( 1 )
      {
        if ( v24 >= v13 )
          goto LABEL_21;
        v25 = HvpGetCellMap(BugCheckParameter2, v23);
        v27 = (struct _EX_RUNDOWN_REF *)v25;
        if ( !v25 )
          KeBugCheckEx(0x51u, 1uLL, v26, v23, 0x133CuLL);
        if ( !a7 && HvpMapEntryIsNewAlloc(v25) )
        {
LABEL_21:
          *a5 = v24;
          if ( v20 + v36 != v37 )
          {
            BlockAddress = (unsigned __int64)a3;
            *a3 = v20 + v36;
          }
          goto LABEL_14;
        }
        v38 = HvpMapEntryGetFreeBin(v27);
        if ( v38 )
        {
          BinAddress = HvpMapEntryGetBinAddress(v28, v27, v35);
          v29 = (_OWORD *)(v23 - *(_DWORD *)(v38 + 20) + BinAddress);
        }
        else
        {
          v29 = (_OWORD *)HvpMapEntryGetBlockAddress(v28, v27, v35);
        }
        v30 = v39 - v23;
        if ( (unsigned int)v30 <= 0x1000 )
          break;
        if ( a7 )
        {
          v31 = 32LL;
          v30 = (__int64)PoolWithTag;
          do
          {
            *(_OWORD *)v30 = *v29;
            *(_OWORD *)(v30 + 16) = v29[1];
            *(_OWORD *)(v30 + 32) = v29[2];
            *(_OWORD *)(v30 + 48) = v29[3];
            *(_OWORD *)(v30 + 64) = v29[4];
            *(_OWORD *)(v30 + 80) = v29[5];
            *(_OWORD *)(v30 + 96) = v29[6];
            v30 += 128LL;
            v32 = v29[7];
            v29 += 8;
            *(_OWORD *)(v30 - 16) = v32;
            --v31;
          }
          while ( v31 );
          PoolWithTag += 4096;
        }
        v24 += 4096;
        v23 += 4096;
        v20 += 8;
        HvpMapEntryReleaseBinAddress(v30, v27, v35);
      }
      if ( a7 )
        memmove(PoolWithTag, v29, (unsigned int)v30);
      *a5 = v13;
      HvpMapEntryReleaseBinAddress(v30, v27, v35);
    }
    else
    {
      *a5 = v13;
    }
LABEL_14:
    HvpMapEntryReleaseBinAddress(BlockAddress, v15, v34);
  }
  else
  {
    *a4 = 0LL;
  }
  return 1;
}
