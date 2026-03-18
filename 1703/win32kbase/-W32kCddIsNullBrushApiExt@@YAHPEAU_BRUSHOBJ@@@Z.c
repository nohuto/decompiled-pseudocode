/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C007E790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  int IsNullBrushSupported; // eax
  unsigned int v3; // edx

  IsNullBrushSupported = IsW32kCddIsNullBrushSupported();
  v3 = 0;
  if ( IsNullBrushSupported >= 0 )
    return (unsigned int)W32kCddIsNullBrush(a1, 0LL);
  return v3;
}
