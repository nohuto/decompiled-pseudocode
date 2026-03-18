/*
 * XREFs of HvpEnlistFreeCell @ 0x14047CC5C
 * Callers:
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCells @ 0x14047C740 (HvpEnlistFreeCells.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140080F90 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x1400811F0 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBinAddress @ 0x1400812E0 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpDelistFreeCell @ 0x140477DE4 (HvpDelistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14047CB94 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpGetBinMemAlloc @ 0x1405996EC (HvpGetBinMemAlloc.c)
 */

__int64 __fastcall HvpEnlistFreeCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        char a5)
{
  ULONG_PTR v6; // r13
  _DWORD *v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // r8d
  unsigned int v10; // esi
  __int64 result; // rax
  __int64 v12; // r15
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // r14
  unsigned __int64 BinAddress; // r13
  struct _EX_RUNDOWN_REF *v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // r15
  __int64 v22; // rcx
  _DWORD *v23; // r15
  int BinMemAlloc; // eax
  __int64 v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // esi
  __int64 v32; // rcx
  int v33; // eax
  ULONG_PTR v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rax
  unsigned int v38; // r8d
  int v39; // r11d
  _QWORD *v40; // r10
  unsigned __int64 v41; // rax
  int v42; // ebx
  struct _EX_RUNDOWN_REF *v43; // rax
  __int64 v44; // rcx
  int v45; // r8d
  struct _EX_RUNDOWN_REF *v46; // rax
  __int64 v47; // rcx
  int v48; // r8d
  struct _EX_RUNDOWN_REF *v49; // rax
  __int64 v50; // rcx
  _WORD v51[2]; // [rsp+30h] [rbp-30h] BYREF
  _WORD v52[2]; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EX_RUNDOWN_REF *v53; // [rsp+38h] [rbp-28h]
  _DWORD *v54; // [rsp+40h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+48h] [rbp-18h]
  _DWORD v56[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v57; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v58; // [rsp+A8h] [rbp+48h]
  int v59; // [rsp+B0h] [rbp+50h]

  v59 = a3;
  v58 = BugCheckParameter3;
  v56[0] = -1;
  v55 = 0LL;
  v54 = 0LL;
  v6 = (unsigned int)BugCheckParameter3;
  v7 = 0LL;
  v8 = a4;
  v53 = 0LL;
  v56[1] = 0;
  HvpGetBinContextInitialize(&v57);
  HvpGetBinContextInitialize(v51);
  HvpGetBinContextInitialize(v52);
  v10 = (v9 >> 3) - 1;
  if ( v10 >= 0x10 )
  {
    v19 = v10 >> 4;
    if ( v19 > 0xFF )
    {
      v10 = 23;
    }
    else
    {
      _BitScanReverse(&v19, v19);
      v10 = v19 + 16;
    }
  }
  result = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             (unsigned int)v6,
             v56);
  if ( result )
  {
    v12 = result - 4;
    if ( result != 4 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v6);
      v15 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2FAuLL);
      BinAddress = HvpMapEntryGetBinAddress(v14, CellMap, &v57);
      if ( v12 != BinAddress + 32 )
        goto LABEL_6;
      v20 = *(unsigned int *)(BinAddress + 8) - 32LL;
      if ( v59 != v20 )
        goto LABEL_6;
      v53 = v15;
      v21 = v15;
      v7 = (_DWORD *)HvpMapEntryGetBinAddress(v20, v15, v51);
      while ( !(unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, v7, (unsigned int)v8) )
      {
        v42 = v7[1];
        HvpMapEntryReleaseBinAddress(v22, v21, v51);
        v43 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                          BugCheckParameter2,
                                          (unsigned int)(v42 + ((_DWORD)v8 << 31) - 4096));
        v53 = v43;
        v21 = v43;
        if ( !v43 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v45 + MEMORY[4] - 4096), 0x31AuLL);
        v7 = (_DWORD *)HvpMapEntryGetBinAddress(v44, v43, v51);
        if ( v7[8] != (unsigned int)v7[2] - 32LL )
          goto LABEL_6;
      }
      if ( !v7[1] )
        goto LABEL_6;
      v55 = v15;
      v23 = (_DWORD *)HvpMapEntryGetBinAddress(v22, v15, v52);
      v54 = v23;
      while ( 1 )
      {
        BinMemAlloc = HvpGetBinMemAlloc(BugCheckParameter2, v7, (unsigned int)v8);
        v26 = v23[1] + v23[2];
        if ( v26 >= BinMemAlloc + v7[1] )
          break;
        if ( a5 )
        {
          HvpMapEntryReleaseBinAddress(v25, v55, v52);
          v46 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, ((_DWORD)v8 << 31) + v26);
          v55 = v46;
          if ( !v46 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(MEMORY[4] + v48 + MEMORY[8]), 0x347uLL);
          v23 = (_DWORD *)HvpMapEntryGetBinAddress(v47, v46, v52);
          v54 = v23;
          if ( v23[8] == (unsigned int)v23[2] - 32LL )
            continue;
        }
        goto LABEL_6;
      }
      if ( (v7[2] == (unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, v7, (unsigned int)v8)
         || (unsigned __int8)HvpMarkDirty(BugCheckParameter2))
        && (v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(
                    32LL,
                    0LL,
                    540495171LL)) != 0 )
      {
        HvpMapEntryReleaseBinAddress(v27, v15, &v57);
        v15 = v53;
        v30 = HvpMapEntryGetBinAddress(v29, v53, &v57);
        v31 = (_DWORD)v8 << 31;
        while ( 1 )
        {
          BinAddress = v30;
          HvpDelistFreeCell(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v30 + 4) + v31 + 32));
          if ( (_DWORD *)BinAddress == v54 )
            break;
          HvpMapEntryReleaseBinAddress(v32, v15, &v57);
          v49 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(MEMORY[4] + v31 + MEMORY[8]));
          v15 = v49;
          if ( !v49 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(MEMORY[4] + v31 + MEMORY[8]), 0x383uLL);
          v30 = HvpMapEntryGetBinAddress(v50, v49, &v57);
        }
        v33 = HvpGetBinMemAlloc(BugCheckParameter2, v7, (unsigned int)v8);
        v7[2] = v33;
        *(_DWORD *)(v28 + 16) = v33;
        *(_DWORD *)(v28 + 20) = v7[1];
        v7[8] = v7[2] - 32;
        v34 = 632 * v8 + BugCheckParameter2 + 2008;
        v35 = *(_QWORD *)v34;
        if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 )
          __fastfail(3u);
        *(_QWORD *)v28 = v35;
        *(_QWORD *)(v28 + 8) = v34;
        *(_QWORD *)(v35 + 8) = v28;
        *(_QWORD *)v34 = v28;
        if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(v31 + v7[1])) )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v36, 0x39FuLL);
        v17 = v53;
        *(_DWORD *)(v28 + 24) = 1;
        if ( v7[2] )
        {
          do
          {
            v37 = HvpGetCellMap(BugCheckParameter2, v36);
            v40 = (_QWORD *)v37;
            if ( !v37 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v38, 0x3AAuLL);
            v36 = v38 + 4096;
            *(_QWORD *)(v37 + 8) = *(_DWORD *)(v37 + 8) & 0xD | 2u | v17[1].Count & 0xFFFFFFFFFFFFFFF0uLL;
            v41 = v17[2].Count & 0xFFFFFFFFFFFFFFF0uLL;
            *v40 = v28;
            v40[2] = v41;
          }
          while ( (unsigned int)(v39 + 4096) < v7[2] );
        }
      }
      else
      {
LABEL_6:
        HvpAddFreeCellHint(BugCheckParameter2, v58, v10, v8);
        v17 = v53;
      }
      result = HvpReleaseHCell(BugCheckParameter2);
      if ( v7 )
        result = HvpMapEntryReleaseBinAddress(v18, v17, v51);
      if ( v54 )
        result = HvpMapEntryReleaseBinAddress(v18, v55, v52);
      if ( BinAddress )
        return HvpMapEntryReleaseBinAddress(v18, v15, &v57);
    }
  }
  return result;
}
