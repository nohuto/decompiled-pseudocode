/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x1C00E4F4C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C005D840 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C005DEF0 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     FindAdjacentMonitor @ 0x1C00E4EC0 (FindAdjacentMonitor.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        LONG *a1,
        int *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  LONG left; // r8d
  LONG v10; // eax
  LONG top; // ecx
  LONG v12; // eax
  LONG right; // ecx
  LONG v14; // eax
  LONG bottom; // ecx
  __int64 AdjacentMonitor; // rax
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  bool v23; // cc
  int v24; // eax
  int v25; // ecx
  __int64 result; // rax
  __int128 v27; // [rsp+30h] [rbp-48h] BYREF

  left = a3->left;
  if ( *a1 < left )
    left = *a1;
  v10 = a1[1];
  *a1 = left;
  top = a3->top;
  if ( v10 < top )
    top = v10;
  v12 = a1[2];
  a1[1] = top;
  right = a3->right;
  if ( v12 > right )
    right = v12;
  v14 = a1[3];
  a1[2] = right;
  bottom = a3->bottom;
  if ( v14 > bottom )
    bottom = v14;
  a1[3] = bottom;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v17 = TransformRectBetweenCoordinateSpacesPerMonitor(&v27, a3, a4, a5, AdjacentMonitor);
  v18 = a2[2];
  v19 = v27;
  if ( *a2 < (int)v27 )
    v19 = *a2;
  v20 = a2[1];
  *a2 = v19;
  v21 = DWORD1(v27);
  if ( v20 < SDWORD1(v27) )
    v21 = v20;
  v22 = DWORD2(v27);
  v23 = v18 <= SDWORD2(v27);
  a2[1] = v21;
  if ( !v23 )
    v22 = v18;
  v24 = a2[3];
  a2[2] = v22;
  v25 = HIDWORD(v27);
  if ( v24 > SHIDWORD(v27) )
    v25 = v24;
  result = v17;
  a2[3] = v25;
  return result;
}
