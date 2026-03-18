/*
 * XREFs of ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01D8938
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01DBAC0 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01C4214 (TransformRegionBetweenCoordinateSpaces.c)
 */

__int64 __fastcall MoveRect(__int64 a1, int a2, int a3)
{
  int *v3; // r15
  int v4; // edi
  int v6; // r14d
  int v7; // r8d
  int v8; // r8d
  int v10; // edi
  INT v11; // ebx
  int v12; // r14d
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  unsigned int v18; // edi
  __int128 v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+50h] [rbp+20h] BYREF

  v3 = (int *)(a1 + 40);
  v4 = (__int16)a2;
  v6 = SHIWORD(a2);
  v19 = *(_OWORD *)(a1 + 40);
  if ( !a3 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44);
    goto LABEL_10;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44) - 1;
    v13 = (__int16)a2 - (*(_DWORD *)(a1 + 48) - *v3) / 2 - *v3;
LABEL_11:
    LODWORD(v19) = v13 + v19;
    DWORD2(v19) += v13;
    HIDWORD(v19) += v12;
    DWORD1(v19) += v12;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = EngMulDiv(*(_DWORD *)(a1 + 48) - *v3, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
    v12 = v6
        - *(_DWORD *)(a1 + 44)
        - EngMulDiv(
            *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 44),
            *(_DWORD *)(a1 + 288),
            *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 28));
    v4 -= v11;
LABEL_10:
    v13 = v4 - *v3;
    goto LABEL_11;
  }
  if ( v8 != 1 )
    return 0LL;
  v10 = (__int16)a2 - *v3;
  LODWORD(v19) = v10 + v19;
  DWORD2(v19) += v10;
LABEL_12:
  v14 = *(_DWORD *)(a1 + 196);
  if ( (v14 & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v19;
  else
    *(_OWORD *)v3 = v19;
  if ( (v14 & 0x40) != 0 )
    return 1LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !*(_QWORD *)(v16 + 216) )
    return IntersectRect(&v19, v3, (int *)(a1 + 88));
  v20 = *(_QWORD *)(v16 + 216);
  v17 = TransformRegionBetweenCoordinateSpaces(v15, v16, &v20);
  v18 = GreRectInRegion(v20, v3);
  if ( v17 )
    GreDeleteObject(v20);
  return v18;
}
