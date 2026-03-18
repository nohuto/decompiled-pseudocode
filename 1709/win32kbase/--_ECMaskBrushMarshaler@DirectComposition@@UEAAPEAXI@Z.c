/*
 * XREFs of ??_ECMaskBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0023480
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CMaskBrushMarshaler *__fastcall DirectComposition::CMaskBrushMarshaler::`vector deleting destructor'(
        DirectComposition::CMaskBrushMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CMaskBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
