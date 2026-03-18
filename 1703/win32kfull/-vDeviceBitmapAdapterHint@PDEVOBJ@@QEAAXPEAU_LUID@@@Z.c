/*
 * XREFs of ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C026B1C8
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreWindowResizeComplete @ 0x1C024EE98 (GreWindowResizeComplete.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02812D0 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 *     ?MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1C0283900 (-MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::vDeviceBitmapAdapterHint(PDEVOBJ *this, struct _LUID *a2)
{
  struct _LUID *v2; // rcx

  v2 = *(struct _LUID **)(*(_QWORD *)this + 1816LL);
  if ( v2 )
    v2[13] = *a2;
}
