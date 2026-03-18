/*
 * XREFs of ??_GCPathGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000F7D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CPathGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CBaseClipMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
