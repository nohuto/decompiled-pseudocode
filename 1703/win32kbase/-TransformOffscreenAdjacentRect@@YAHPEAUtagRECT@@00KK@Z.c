/*
 * XREFs of ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00DE394
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00DE308 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  struct tagMONITOR *AdjacentMonitor; // rax
  struct tagRECT *v10; // rdx
  LONG top; // edx
  LONG right; // ecx
  LONG bottom; // ecx
  __int64 result; // rax
  LONG left; // edx
  LONG v16; // ecx
  LONG v17; // edx
  bool v18; // cc
  LONG v19; // ecx
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF

  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v10 = a3;
  if ( a1->left < a3->left )
    v10 = a1;
  a1->left = v10->left;
  top = a3->top;
  if ( a1->top < top )
    top = a1->top;
  a1->top = top;
  right = a3->right;
  if ( a1->right > right )
    right = a1->right;
  a1->right = right;
  bottom = a3->bottom;
  if ( a1->bottom > bottom )
    bottom = a1->bottom;
  a1->bottom = bottom;
  result = TransformRectBetweenCoordinateSpacesPerMonitor(&v20, a3, a4, a5, AdjacentMonitor);
  left = v20.left;
  v16 = v20.right;
  if ( a2->left < v20.left )
    left = a2->left;
  a2->left = left;
  v17 = v20.top;
  if ( a2->top < v20.top )
    v17 = a2->top;
  v18 = a2->right <= v16;
  a2->top = v17;
  if ( !v18 )
    v16 = a2->right;
  a2->right = v16;
  v19 = v20.bottom;
  if ( a2->bottom > v20.bottom )
    v19 = a2->bottom;
  a2->bottom = v19;
  return result;
}
