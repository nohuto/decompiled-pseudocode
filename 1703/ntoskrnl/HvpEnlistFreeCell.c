/*
 * XREFs of HvpEnlistFreeCell @ 0x14048DE38
 * Callers:
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x14048CDDC (HvpDoAllocateCell.c)
 *     HvpEnlistFreeCells @ 0x14048D930 (HvpEnlistFreeCells.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x14008CF2C (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x14008D010 (HvpMapEntryGetBinAddress.c)
 *     HvpReleaseHCell @ 0x14008D080 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14008D170 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvpGetBinMemAlloc @ 0x14045AE74 (HvpGetBinMemAlloc.c)
 *     HvpDelistFreeCell @ 0x14048CB3C (HvpDelistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14048E1D0 (HvpAddFreeCellHint.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
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
  __int64 result; // rax
  __int64 v10; // r15
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // r14
  unsigned __int64 BinAddress; // r13
  struct _EX_RUNDOWN_REF *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // r15
  __int64 v19; // rcx
  _DWORD *v20; // r15
  int BinMemAlloc; // eax
  __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  int v30; // eax
  ULONG_PTR v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rax
  unsigned int v35; // r8d
  int v36; // r11d
  _QWORD *v37; // r10
  unsigned __int64 v38; // rax
  int v39; // ebx
  struct _EX_RUNDOWN_REF *v40; // rax
  __int64 v41; // rcx
  int v42; // r8d
  struct _EX_RUNDOWN_REF *v43; // rax
  __int64 v44; // rcx
  int v45; // r8d
  struct _EX_RUNDOWN_REF *v46; // rax
  __int64 v47; // rcx
  _WORD v48[2]; // [rsp+30h] [rbp-30h] BYREF
  _WORD v49[2]; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EX_RUNDOWN_REF *v50; // [rsp+38h] [rbp-28h]
  _DWORD *v51; // [rsp+40h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v52; // [rsp+48h] [rbp-18h]
  _DWORD v53[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v54; // [rsp+A0h] [rbp+40h] BYREF
  int v55; // [rsp+A8h] [rbp+48h]
  int v56; // [rsp+B0h] [rbp+50h]

  v56 = a3;
  v55 = BugCheckParameter3;
  v53[0] = -1;
  v52 = 0LL;
  v51 = 0LL;
  v6 = (unsigned int)BugCheckParameter3;
  v7 = 0LL;
  v8 = a4;
  v50 = 0LL;
  v53[1] = 0;
  HvpGetBinContextInitialize(&v54);
  HvpGetBinContextInitialize(v48);
  HvpGetBinContextInitialize(v49);
  result = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             (unsigned int)v6,
             v53);
  if ( result )
  {
    v10 = result - 4;
    if ( result != 4 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v6);
      v13 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2FAuLL);
      BinAddress = HvpMapEntryGetBinAddress(v12, CellMap, &v54);
      if ( v10 != BinAddress + 32 )
        goto LABEL_5;
      v17 = *(unsigned int *)(BinAddress + 8) - 32LL;
      if ( v56 != v17 )
        goto LABEL_5;
      v50 = v13;
      v18 = v13;
      v7 = (_DWORD *)HvpMapEntryGetBinAddress(v17, v13, v48);
      while ( !(unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v7, v8) )
      {
        v39 = v7[1];
        HvpMapEntryReleaseBinAddress(v19, v18, v48);
        v40 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(
                                          BugCheckParameter2,
                                          (unsigned int)(v39 + ((_DWORD)v8 << 31) - 4096));
        v50 = v40;
        v18 = v40;
        if ( !v40 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(v42 + MEMORY[4] - 4096), 0x31AuLL);
        v7 = (_DWORD *)HvpMapEntryGetBinAddress(v41, v40, v48);
        if ( v7[8] != (unsigned int)v7[2] - 32LL )
          goto LABEL_5;
      }
      if ( !v7[1] )
        goto LABEL_5;
      v52 = v13;
      v20 = (_DWORD *)HvpMapEntryGetBinAddress(v19, v13, v49);
      v51 = v20;
      while ( 1 )
      {
        BinMemAlloc = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v7, v8);
        v23 = v20[1] + v20[2];
        if ( v23 >= BinMemAlloc + v7[1] )
          break;
        if ( a5 )
        {
          HvpMapEntryReleaseBinAddress(v22, v52, v49);
          v43 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, ((_DWORD)v8 << 31) + v23);
          v52 = v43;
          if ( !v43 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(MEMORY[4] + v45 + MEMORY[8]), 0x347uLL);
          v20 = (_DWORD *)HvpMapEntryGetBinAddress(v44, v43, v49);
          v51 = v20;
          if ( v20[8] == (unsigned int)v20[2] - 32LL )
            continue;
        }
        goto LABEL_5;
      }
      if ( (v7[2] == (unsigned int)HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v7, v8)
         || (unsigned __int8)HvpMarkDirty(BugCheckParameter2))
        && (v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(
                    32LL,
                    0LL,
                    540495171LL)) != 0 )
      {
        HvpMapEntryReleaseBinAddress(v24, v13, &v54);
        v13 = v50;
        v27 = HvpMapEntryGetBinAddress(v26, v50, &v54);
        v28 = (_DWORD)v8 << 31;
        while ( 1 )
        {
          BinAddress = v27;
          HvpDelistFreeCell(BugCheckParameter2, (unsigned int)(*(_DWORD *)(v27 + 4) + v28 + 32));
          if ( (_DWORD *)BinAddress == v51 )
            break;
          HvpMapEntryReleaseBinAddress(v29, v13, &v54);
          v46 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(MEMORY[4] + v28 + MEMORY[8]));
          v13 = v46;
          if ( !v46 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)(MEMORY[4] + v28 + MEMORY[8]), 0x383uLL);
          v27 = HvpMapEntryGetBinAddress(v47, v46, &v54);
        }
        v30 = HvpGetBinMemAlloc(BugCheckParameter2, (__int64)v7, v8);
        v7[2] = v30;
        *(_DWORD *)(v25 + 16) = v30;
        *(_DWORD *)(v25 + 20) = v7[1];
        v7[8] = v7[2] - 32;
        v31 = 632 * v8 + BugCheckParameter2 + 2008;
        v32 = *(_QWORD *)v31;
        if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
          __fastfail(3u);
        *(_QWORD *)v25 = v32;
        *(_QWORD *)(v25 + 8) = v31;
        *(_QWORD *)(v32 + 8) = v25;
        *(_QWORD *)v31 = v25;
        if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(v28 + v7[1])) )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v33, 0x39FuLL);
        v15 = v50;
        *(_DWORD *)(v25 + 24) = 1;
        if ( v7[2] )
        {
          do
          {
            v34 = HvpGetCellMap(BugCheckParameter2, v33);
            v37 = (_QWORD *)v34;
            if ( !v34 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v35, 0x3AAuLL);
            v33 = v35 + 4096;
            *(_QWORD *)(v34 + 8) = *(_DWORD *)(v34 + 8) & 0xD | 2u | v15[1].Count & 0xFFFFFFFFFFFFFFF0uLL;
            v38 = v15[2].Count & 0xFFFFFFFFFFFFFFF0uLL;
            *v37 = v25;
            v37[2] = v38;
          }
          while ( (unsigned int)(v36 + 4096) < v7[2] );
        }
      }
      else
      {
LABEL_5:
        HvpAddFreeCellHint(BugCheckParameter2);
        v15 = v50;
      }
      result = HvpReleaseHCell(BugCheckParameter2);
      if ( v7 )
        result = HvpMapEntryReleaseBinAddress(v16, v15, v48);
      if ( v51 )
        result = HvpMapEntryReleaseBinAddress(v16, v52, v49);
      if ( BinAddress )
        return HvpMapEntryReleaseBinAddress(v16, v13, &v54);
    }
  }
  return result;
}
