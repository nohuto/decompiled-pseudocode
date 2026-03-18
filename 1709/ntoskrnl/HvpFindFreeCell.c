/*
 * XREFs of HvpFindFreeCell @ 0x14047A364
 * Callers:
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpMapEntryIsNewAlloc @ 0x140016590 (HvpMapEntryIsNewAlloc.c)
 *     RtlFindSetBits @ 0x1400165A0 (RtlFindSetBits.c)
 *     HvpMapEntryIsTrimmed @ 0x140016914 (HvpMapEntryIsTrimmed.c)
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x140080F80 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpFindFreeCellInBin @ 0x14047A2B0 (HvpFindFreeCellInBin.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // r12d
  ULONG v14; // r10d
  __int64 v15; // rbx
  ULONG SetBits; // eax
  ULONG v17; // r14d
  ULONG v18; // r14d
  __int64 CellMap; // rax
  unsigned int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rbx
  bool IsDiscardable; // al
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct _EX_RUNDOWN_REF *v25; // rcx
  __int64 v26; // rcx
  _DWORD *BinAddress; // r12
  char v28; // al
  int FreeCellInBin; // eax
  __int64 v31; // rbx
  int v32; // [rsp+40h] [rbp-58h]
  unsigned int v33; // [rsp+A0h] [rbp+8h] BYREF
  __int16 v34; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  ULONG v36; // [rsp+B8h] [rbp+20h]

  v35 = a3;
  v7 = a4;
  v8 = a2;
  HvpGetBinContextInitialize(&v34);
  v9 = 632 * v7;
  v10 = *(_DWORD *)(632 * v7 + BugCheckParameter2 + 2024) & ~((1 << v8) - 1);
  if ( !v10 )
    return (unsigned int)-1;
  _BitScanForward(&v11, v10);
  if ( v11 != (_DWORD)v8 )
    v8 = v11;
  v12 = -1;
  v13 = -1;
  v14 = *(_DWORD *)(v9 + 24 * v8 + BugCheckParameter2 + 1436);
  while ( 1 )
  {
    do
    {
      v15 = v9 + 24 * v8;
      SetBits = RtlFindSetBits((PRTL_BITMAP)(v15 + BugCheckParameter2 + 1440), 1u, v14);
      *(_DWORD *)(v15 + BugCheckParameter2 + 1436) = SetBits;
      v17 = SetBits;
      v36 = SetBits + 1;
      if ( v13 == SetBits )
      {
        v10 &= v10 - 1;
        if ( !v10 )
          return v12;
        _BitScanForward((unsigned int *)&v8, v10);
        v31 = 632 * v7 + 24 * v8;
        v17 = RtlFindSetBits(
                (PRTL_BITMAP)(v31 + BugCheckParameter2 + 1440),
                1u,
                *(_DWORD *)(v31 + BugCheckParameter2 + 1436));
        *(_DWORD *)(v31 + BugCheckParameter2 + 1436) = v17;
        v13 = v17;
        v36 = v17 + 1;
      }
      if ( v13 == -1 )
        v13 = v17;
      v18 = v17 << 12;
      v32 = v13;
      v33 = v18 + ((_DWORD)v7 << 31);
      CellMap = HvpGetCellMap(BugCheckParameter2, v33);
      v21 = (struct _EX_RUNDOWN_REF *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v20, 0x43CuLL);
      IsDiscardable = HvpMapEntryIsDiscardable(CellMap);
      v9 = 632 * v7;
    }
    while ( IsDiscardable || HvpMapEntryIsTrimmed(v23) || !HvpMapEntryIsNewAlloc(v24) );
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v25, v25, &v34);
    v28 = *(_BYTE *)(BugCheckParameter2 + 4168);
    if ( v28 && (_DWORD)v7 != 1 && (v28 != 1 || v18 < *(_DWORD *)(BugCheckParameter2 + 4172)) )
      goto LABEL_19;
    FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, v35, v7, BinAddress, &v33, a5, a6);
    if ( FreeCellInBin >= 0 )
      break;
    if ( FreeCellInBin != -1073741275 )
      goto LABEL_15;
LABEL_19:
    HvpMapEntryReleaseBinAddress(v26, v21, &v34);
    v9 = 632 * v7;
    v14 = v36;
    v13 = v32;
  }
  v12 = v33;
LABEL_15:
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v26, v21, &v34);
  return v12;
}
