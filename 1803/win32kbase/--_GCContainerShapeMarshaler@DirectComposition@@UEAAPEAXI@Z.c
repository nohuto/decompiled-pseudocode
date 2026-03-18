/*
 * XREFs of ??_GCContainerShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145BA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CContainerShapeMarshaler *__fastcall DirectComposition::CContainerShapeMarshaler::`scalar deleting destructor'(
        DirectComposition::CContainerShapeMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CContainerShapeMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
