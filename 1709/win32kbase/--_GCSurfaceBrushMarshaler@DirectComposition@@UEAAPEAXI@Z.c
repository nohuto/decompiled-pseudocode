/*
 * XREFs of ??_GCSurfaceBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0028B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CSurfaceBrushMarshaler *__fastcall DirectComposition::CSurfaceBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CSurfaceBrushMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSurfaceBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
