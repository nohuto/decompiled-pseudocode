/*
 * XREFs of ??_ECRectangleClipMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0056FE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CRectangleClipMarshaler *__fastcall DirectComposition::CRectangleClipMarshaler::`vector deleting destructor'(
        DirectComposition::CRectangleClipMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CBaseClipMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
