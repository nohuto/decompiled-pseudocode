/*
 * XREFs of ??_GCDropShadowMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0001370
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::`scalar deleting destructor'(
        DirectComposition::CDropShadowMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
