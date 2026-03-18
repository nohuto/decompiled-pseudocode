/*
 * XREFs of ??_ECHwndBitmapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145C60
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CHwndBitmapMarshaler *__fastcall DirectComposition::CHwndBitmapMarshaler::`vector deleting destructor'(
        DirectComposition::CHwndBitmapMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHwndBitmapMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
