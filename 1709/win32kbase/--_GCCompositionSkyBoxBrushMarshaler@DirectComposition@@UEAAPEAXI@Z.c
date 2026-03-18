/*
 * XREFs of ??_GCCompositionSkyBoxBrushMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FA60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CCompositionSkyBoxBrushMarshaler *__fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionSkyBoxBrushMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
