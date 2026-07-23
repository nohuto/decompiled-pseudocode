/*
 * XREFs of HvpRemoveFreeCellHint @ 0x140515BD0
 * Callers:
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x140515AE0 (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x140515D74 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     RtlFindSetBits @ 0x140072850 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

void __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v7; // r13
  ULONG_PTR v8; // rbx
  __int64 CellMap; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // r12
  unsigned int *v13; // rdx
  unsigned int v14; // r15d
  int v15; // r8d
  unsigned int v16; // eax
  ULONG v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // ebx
  _RTL_BITMAP *v21; // rbp
  ULONG SetBits; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  v5 = a4;
  v7 = 0;
  v8 = (unsigned int)BugCheckParameter3;
  CellMap = HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x310uLL);
  v11 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = (unsigned int *)(v11 + 32);
  v14 = *(_DWORD *)(v11 + 4);
  v15 = ((_DWORD)v5 << 31) | (v14 + 32);
  if ( v11 + 32 < v11 + v12 )
  {
    do
    {
      v16 = *v13;
      if ( (*v13 & 0x80000000) == 0 )
      {
        v24 = (v16 >> 3) - 1;
        if ( v24 >= 0x10 )
        {
          v25 = v24 >> 4;
          if ( v25 > 0xFF )
          {
            v24 = 23;
          }
          else
          {
            _BitScanReverse(&v25, v25);
            v24 = v25 + 16;
          }
        }
        if ( (_DWORD)v10 == v24 && v15 != (_DWORD)v8 && v15 != a5 )
        {
          v7 = 1;
          break;
        }
      }
      else
      {
        v16 = -v16;
      }
      v15 += v16;
      v13 = (unsigned int *)((char *)v13 + v16);
    }
    while ( (unsigned __int64)v13 < v11 + v12 );
  }
  v17 = v14 >> 12;
  v18 = 24 * v10;
  v19 = 632 * v5;
  v20 = 1 << v10;
  v21 = (_RTL_BITMAP *)(24 * v10 + BugCheckParameter2 + v19 + 312);
  if ( v7 )
  {
    *(_DWORD *)(BugCheckParameter2 + v19 + 896) |= v20;
    *(_DWORD *)(v18 + v19 + BugCheckParameter2 + 308) = v17;
    RtlSetBits(v21, v17, *(_DWORD *)(v11 + 8) >> 12);
  }
  else
  {
    RtlClearBits(v21, v17, (unsigned int)v12 >> 12);
    SetBits = RtlFindSetBits(v21, 1u, v17);
    v23 = *(_DWORD *)(BugCheckParameter2 + v19 + 896);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(BugCheckParameter2 + v19 + 896) = v23 & ~v20;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + v19 + 896) = v20 | v23;
      *(_DWORD *)(v18 + v19 + BugCheckParameter2 + 308) = SetBits;
    }
  }
}
