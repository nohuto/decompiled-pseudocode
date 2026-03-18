/*
 * XREFs of ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01F0B98
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01C0AC8 (TransformRegionBetweenCoordinateSpaces.c)
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

  v3 = (int *)(a1 + 24);
  v4 = (__int16)a2;
  v6 = SHIWORD(a2);
  v19 = *(_OWORD *)(a1 + 24);
  if ( !a3 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 28);
    goto LABEL_10;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 28) - 1;
    v4 = (__int16)a2 - (*(_DWORD *)(a1 + 32) - *v3) / 2;
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = EngMulDiv(*(_DWORD *)(a1 + 32) - *v3, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 16) - *(_DWORD *)(a1 + 8));
    v12 = v6
        - *(_DWORD *)(a1 + 28)
        - EngMulDiv(
            *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 272),
            *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 12));
    v4 -= v11;
LABEL_10:
    v13 = v4 - *v3;
    LODWORD(v19) = v13 + v19;
    DWORD2(v19) += v13;
    HIDWORD(v19) += v12;
    DWORD1(v19) += v12;
    goto LABEL_11;
  }
  if ( v8 != 1 )
    return 0LL;
  v10 = (__int16)a2 - *v3;
  LODWORD(v19) = v10 + v19;
  DWORD2(v19) += v10;
LABEL_11:
  v14 = *(_DWORD *)(a1 + 180);
  if ( (v14 & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 56) = v19;
  else
    *(_OWORD *)v3 = v19;
  if ( (v14 & 0x40) != 0 )
    return 1LL;
  v15 = *(_QWORD *)a1;
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !*(_QWORD *)(v16 + 216) )
    return IntersectRect((int *)&v19, v3, (int *)(a1 + 72));
  v20 = *(_QWORD *)(v16 + 216);
  v17 = TransformRegionBetweenCoordinateSpaces(v15, v16, &v20);
  v18 = GreRectInRegion(v20, v3);
  if ( v17 )
    GreDeleteObject(v20);
  return v18;
}
