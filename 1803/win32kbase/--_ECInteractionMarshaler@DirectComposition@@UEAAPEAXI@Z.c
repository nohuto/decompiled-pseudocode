/*
 * XREFs of ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00045C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0004560 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionMarshaler *this,
        char a2)
{
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
