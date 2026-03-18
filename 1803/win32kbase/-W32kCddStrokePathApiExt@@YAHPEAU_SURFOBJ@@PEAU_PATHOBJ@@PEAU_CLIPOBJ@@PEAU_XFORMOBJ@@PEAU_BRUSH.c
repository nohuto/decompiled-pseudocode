/*
 * XREFs of ?W32kCddStrokePathApiExt@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0072CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddStrokePathApiExt(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8,
        struct _W32KCDD_ENG_CALLBACKS *a9)
{
  int v13; // eax
  unsigned int v14; // r10d

  v13 = IsW32kCddStrokePathSupported();
  v14 = 0;
  if ( v13 >= 0 )
    return (unsigned int)W32kCddStrokePath(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return v14;
}
