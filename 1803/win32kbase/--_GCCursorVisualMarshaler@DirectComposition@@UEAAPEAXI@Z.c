/*
 * XREFs of ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0001340
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CCursorVisualMarshaler *__fastcall DirectComposition::CCursorVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CCursorVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
