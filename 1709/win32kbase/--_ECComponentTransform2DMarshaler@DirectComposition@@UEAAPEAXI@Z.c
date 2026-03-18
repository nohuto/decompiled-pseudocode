/*
 * XREFs of ??_ECComponentTransform2DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0026A50
 * Callers:
 *     ??_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00AD720 (--_ECScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CComponentTransform2DMarshaler *__fastcall DirectComposition::CComponentTransform2DMarshaler::`vector deleting destructor'(
        DirectComposition::CComponentTransform2DMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
