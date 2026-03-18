/*
 * XREFs of HvpAddFreeCellHint @ 0x14047CB94
 * Callers:
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpAddFreeCellHint(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rdx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // r10
  struct _EX_RUNDOWN_REF *v11; // r14
  unsigned __int64 BinAddress; // rax
  __int64 v13; // rsi
  ULONG v14; // edi
  _WORD v16[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  v6 = a3;
  HvpGetBinContextInitialize(v16);
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v7);
  v11 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x283uLL);
  BinAddress = HvpMapEntryGetBinAddress(v9, CellMap, v16);
  v13 = 632 * v5;
  v14 = *(_DWORD *)(BinAddress + 4) >> 12;
  RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + v13 + 24 * (v6 + 60)), v14, *(_DWORD *)(BinAddress + 8) >> 12);
  *(_DWORD *)(v13 + 24 * v6 + BugCheckParameter2 + 1436) = v14;
  *(_DWORD *)(v13 + BugCheckParameter2 + 2024) |= 1 << v6;
  return HvpMapEntryReleaseBinAddress((unsigned int)v6, v11, v16);
}
