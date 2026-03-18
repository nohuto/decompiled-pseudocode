/*
 * XREFs of ??_ECColorBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0025C40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CColorBrushMarshaler *__fastcall DirectComposition::CColorBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CColorBrushMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CColorBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
