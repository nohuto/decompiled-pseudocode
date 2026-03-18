/*
 * XREFs of ??_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0028740
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CCrossChannelParentVisualMarshaler *__fastcall DirectComposition::CCrossChannelParentVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
