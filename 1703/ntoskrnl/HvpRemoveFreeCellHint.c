/*
 * XREFs of HvpRemoveFreeCellHint @ 0x14048CBE0
 * Callers:
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x14048CB3C (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x14048CDDC (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x140052C70 (RtlFindSetBits.c)
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  ULONG_PTR v7; // rbx
  char v8; // di
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *v12; // r12
  unsigned __int64 BinAddress; // r10
  __int64 v14; // r11
  unsigned int *v15; // rdx
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  ULONG v19; // r15d
  __int64 v20; // rsi
  __int64 v21; // rbp
  ULONG SetBits; // eax
  __int64 v23; // rcx
  int v24; // edi
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rax
  _WORD v29[28]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)BugCheckParameter3;
  v8 = 0;
  HvpGetBinContextInitialize(v29);
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v9);
  v12 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x2D4uLL);
  BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, v29);
  v14 = *(unsigned int *)(BinAddress + 8);
  v15 = (unsigned int *)(BinAddress + 32);
  v16 = *(_DWORD *)(BinAddress + 4);
  v17 = v16 + 32;
  if ( BinAddress + 32 < BinAddress + v14 )
  {
    do
    {
      v18 = *v15;
      if ( (*v15 & 0x80000000) == 0 )
      {
        v26 = (v18 >> 3) - 1;
        if ( v26 >= 0x10 )
        {
          v27 = v26 >> 4;
          if ( v27 > 0xFF )
          {
            v26 = 23;
          }
          else
          {
            _BitScanReverse(&v27, v27);
            v26 = v27 + 16;
          }
        }
        if ( (_DWORD)v6 == v26 && v17 != (v7 & 0x7FFFFFFF) )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v18 = -v18;
      }
      v17 += v18;
      v15 = (unsigned int *)((char *)v15 + v18);
    }
    while ( (unsigned __int64)v15 < BinAddress + v14 );
  }
  v19 = v16 >> 12;
  if ( v8 )
  {
    *(_DWORD *)(632 * v5 + BugCheckParameter2 + 2024) |= 1 << v6;
    v28 = 632 * v5 + 24 * v6;
    *(_DWORD *)(v28 + BugCheckParameter2 + 1436) = v19;
    RtlSetBits((PRTL_BITMAP)(v28 + BugCheckParameter2 + 1440), v19, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    v20 = 632 * v5;
    v21 = v20 + 24 * v6;
    RtlClearBits((PRTL_BITMAP)(v21 + BugCheckParameter2 + 1440), v19, (unsigned int)v14 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v21 + BugCheckParameter2 + 1440), 1u, v19);
    v23 = (unsigned int)v6;
    v24 = 1 << v6;
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v20 + BugCheckParameter2 + 2024) &= ~v24;
    }
    else
    {
      *(_DWORD *)(v20 + BugCheckParameter2 + 2024) |= v24;
      *(_DWORD *)(v21 + BugCheckParameter2 + 1436) = SetBits;
    }
  }
  return HvpMapEntryReleaseBinAddress(v23, v12, v29);
}
