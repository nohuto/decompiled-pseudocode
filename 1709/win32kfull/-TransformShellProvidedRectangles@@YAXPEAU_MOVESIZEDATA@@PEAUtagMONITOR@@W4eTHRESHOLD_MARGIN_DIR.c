/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01D91F8
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01DA9AC (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01D7FD8 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall TransformShellProvidedRectangles(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  int v8; // esi
  int v10; // r14d
  int v11; // r15d
  int v13; // r12d
  char OverlapCoordinatesForArrangement; // al
  const struct tagRECT *v15; // rdx
  int *v16; // rbx
  char v17; // r13
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // ecx
  int v22; // edx
  __int64 result; // rax
  int v24; // r8d
  int v25; // edx
  __int128 v26; // [rsp+20h] [rbp-10h] BYREF

  v8 = *(_DWORD *)(a1 + 112);
  v10 = *(_DWORD *)(a1 + 104);
  v11 = *(_DWORD *)(a1 + 116);
  v13 = *(_DWORD *)(a1 + 108);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                       (const struct tagRECT *const)(*(_QWORD *)(a2 + 40) + 44LL),
                                       a4,
                                       0);
  v15 = a4;
  v16 = a7;
  v17 = OverlapCoordinatesForArrangement;
  TransformRectBetweenCoordinateSpaces(a7, v15, *(_QWORD *)(a1 + 16), a6);
  v26 = *GetMonitorWorkRectForWindow(&v26, a2, *(struct tagWND **)(a1 + 16));
  IntersectRect(v16, v16, (int *)&v26);
  if ( (unsigned int)GetWindowExtendedMargin(*(_QWORD *)(a1 + 16), (__int64)&a7) )
  {
    v18 = (unsigned __int16)a7 + WORD1(a7);
    v10 -= v18;
    v8 -= v18;
    v13 -= WORD2(a7) + HIWORD(a7);
    v11 -= WORD2(a7) + HIWORD(a7);
  }
  if ( a3 == 1 )
  {
    if ( *v16 > (int)v26 )
      *v16 = v26;
    v19 = *v16;
    v20 = v16[2] - *v16;
    if ( v20 < v10 )
      v16[2] = v19 + v10;
    if ( v20 >= v8 )
      v16[2] = v19 + v8;
  }
  else
  {
    if ( v16[2] < SDWORD2(v26) )
      v16[2] = DWORD2(v26);
    v21 = v16[2];
    v22 = v21 - *v16;
    if ( v22 < v10 )
      *v16 = v21 - v10;
    if ( v22 >= v8 )
      *v16 = v21 - v8;
  }
  if ( (v17 & 2) != 0 && v16[1] > SDWORD1(v26) )
    v16[1] = DWORD1(v26);
  if ( (v17 & 8) != 0 && v16[3] < SHIDWORD(v26) )
    v16[3] = HIDWORD(v26);
  result = (unsigned int)v16[3];
  v24 = v16[1];
  v25 = v16[3] - v24;
  if ( v25 < v13 )
  {
    if ( (v17 & 2) != 0 )
    {
      result = (unsigned int)(v24 + v13);
      v16[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v13);
      v16[1] = result;
    }
  }
  if ( v25 >= v11 )
  {
    if ( (v17 & 2) != 0 )
    {
      v16[3] = v11 + v16[1];
    }
    else
    {
      result = (unsigned int)(v16[3] - v11);
      v16[1] = result;
    }
  }
  if ( a5 )
  {
    if ( a8 )
      return TransformRectBetweenCoordinateSpaces(a8, a5, *(_QWORD *)(a1 + 16), a6);
  }
  return result;
}
