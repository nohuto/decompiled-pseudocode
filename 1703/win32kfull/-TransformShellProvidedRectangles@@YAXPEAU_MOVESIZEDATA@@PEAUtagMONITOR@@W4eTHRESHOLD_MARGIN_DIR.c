/*
 * XREFs of ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01F14CC
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01F3018 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C01F02C0 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 */

__int64 __fastcall TransformShellProvidedRectangles(
        __int64 *a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8)
{
  int v8; // esi
  int v10; // ebp
  int v12; // r14d
  int v13; // r15d
  char OverlapCoordinatesForArrangement; // al
  const struct tagRECT *v16; // rdx
  int *v17; // rbx
  char v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rax
  int *v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // eax
  __int64 result; // rax
  int v32; // r8d
  int v33; // edx

  v8 = *((_DWORD *)a1 + 24);
  v10 = *((_DWORD *)a1 + 22);
  v12 = *((_DWORD *)a1 + 25);
  v13 = *((_DWORD *)a1 + 23);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                       (const struct tagRECT *const)(*(_QWORD *)(a2 + 40) + 76LL),
                                       a4,
                                       0);
  v16 = a4;
  v17 = a7;
  v18 = OverlapCoordinatesForArrangement;
  TransformRectBetweenCoordinateSpaces(a7, v16, *a1, a6);
  v19 = *a1;
  if ( (*(_DWORD *)(*a1 + 368) & 0xF) == 0
    && (v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
  {
    v21 = (int *)(*(_QWORD *)(a2 + 40) + 92LL);
  }
  else if ( (*(_DWORD *)(*a1 + 368) & 0xF) == 1
         && (v22 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 52LL) & 1) != 0 )
  {
    v21 = (int *)(*(_QWORD *)(a2 + 40) + 108LL);
  }
  else
  {
    v21 = (int *)(*(_QWORD *)(a2 + 40) + 76LL);
  }
  IntersectRect(v17, v17, v21);
  if ( (unsigned int)GetWindowExtendedMargin(*a1, &a7) )
  {
    v23 = (unsigned __int16)a7 + WORD1(a7);
    v10 -= v23;
    v8 -= v23;
    v13 -= WORD2(a7) + HIWORD(a7);
    v12 -= WORD2(a7) + HIWORD(a7);
  }
  if ( a3 == 1 )
  {
    if ( *v17 > *v21 )
      *v17 = *v21;
    v24 = *v17;
    v25 = v17[2] - *v17;
    if ( v25 < v10 )
      v17[2] = v24 + v10;
    if ( v25 >= v8 )
      v17[2] = v24 + v8;
  }
  else
  {
    v26 = v21[2];
    if ( v17[2] < v26 )
      v17[2] = v26;
    v27 = v17[2];
    v28 = v27 - *v17;
    if ( v28 < v10 )
      *v17 = v27 - v10;
    if ( v28 >= v8 )
      *v17 = v27 - v8;
  }
  if ( (v18 & 2) != 0 )
  {
    v29 = v21[1];
    if ( v17[1] > v29 )
      v17[1] = v29;
  }
  if ( (v18 & 8) != 0 )
  {
    v30 = v21[3];
    if ( v17[3] < v30 )
      v17[3] = v30;
  }
  result = (unsigned int)v17[3];
  v32 = v17[1];
  v33 = v17[3] - v32;
  if ( v33 < v13 )
  {
    if ( (v18 & 2) != 0 )
    {
      result = (unsigned int)(v32 + v13);
      v17[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v13);
      v17[1] = result;
    }
  }
  if ( v33 >= v12 )
  {
    if ( (v18 & 2) != 0 )
    {
      v17[3] = v12 + v17[1];
    }
    else
    {
      result = (unsigned int)(v17[3] - v12);
      v17[1] = result;
    }
  }
  if ( a5 )
  {
    if ( a8 )
      return TransformRectBetweenCoordinateSpaces(a8, a5, *a1, a6);
  }
  return result;
}
