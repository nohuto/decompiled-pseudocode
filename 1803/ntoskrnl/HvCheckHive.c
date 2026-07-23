/*
 * XREFs of HvCheckHive @ 0x1404E345C
 * Callers:
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvCheckBin @ 0x1404AED40 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x1404AEF84 (HvMoveLayoutStats.c)
 *     HvpMapEntryGetFreeBin @ 0x1404E35B0 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 *     HvAddToLayoutStats @ 0x140574080 (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 CellMap; // rcx
  __int64 FreeBin; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _RTL_BITMAP *BitMapHeader; // r10
  _DWORD *v19; // rbp
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  int v27; // [rsp+88h] [rbp+10h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v27 = 0;
  v6 = (unsigned int *)(a1 + 272);
  v7 = a6;
  v8 = 0;
  v9 = a5;
  v10 = 0;
  v11 = a1;
  while ( 2 )
  {
    v12 = *v6;
    while ( v8 < v12 )
    {
      CellMap = HvpGetCellMap(v11, v8);
      if ( !CellMap )
      {
        v22 = -1073741492;
        if ( v7 )
        {
          SetFailureLocation(v7, 0, 16, -1073741492, 0);
          *(_DWORD *)(v7 + 296) = v10;
          *(_DWORD *)(v7 + 300) = v8;
        }
        return v22;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
      {
        v24 = *(unsigned int *)(FreeBin + 16);
        v8 += v24;
        if ( v9 )
        {
          HvAddToLayoutStats(v9, v24, v16, v17);
          HvMoveLayoutStats(v25);
        }
      }
      else
      {
        v19 = (_DWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        v20 = (unsigned int)v19[2];
        if ( (unsigned int)v20 > v12 - v8
          || (unsigned int)v20 < 0x20
          || (v20 & 0xFFF) != 0
          || *v19 != 1852400232
          || v19[1] != v8 )
        {
          v22 = -1073741492;
          if ( !v7 )
            return v22;
          SetFailureLocation(v7, 0, 16, -1073741492, 32);
          goto LABEL_23;
        }
        v21 = HvCheckBin(v20, v19, v16, &v27, BitMapHeader, v9, v7);
        v22 = v21;
        if ( v21 < 0 )
        {
          if ( !v7 )
            return v22;
          SetFailureLocation(v7, 0, 16, v21, 48);
LABEL_23:
          *(_DWORD *)(v7 + 296) = v10;
          *(_DWORD *)(v7 + 300) = v8;
          *(_QWORD *)(v7 + 304) = v19;
          return v22;
        }
        v8 += v19[2];
      }
      v11 = a1;
    }
    ++v10;
    v6 += 158;
    v8 = 0x80000000;
    if ( v10 <= 1 )
      continue;
    return 0;
  }
}
