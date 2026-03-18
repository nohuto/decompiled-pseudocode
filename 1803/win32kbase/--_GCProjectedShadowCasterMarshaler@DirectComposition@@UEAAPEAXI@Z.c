/*
 * XREFs of ??_GCProjectedShadowCasterMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0150E10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CProjectedShadowCasterMarshaler *__fastcall DirectComposition::CProjectedShadowCasterMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowCasterMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
