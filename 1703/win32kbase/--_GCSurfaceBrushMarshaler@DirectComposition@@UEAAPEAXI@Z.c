/*
 * XREFs of ??_GCSurfaceBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0024B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CSurfaceBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
