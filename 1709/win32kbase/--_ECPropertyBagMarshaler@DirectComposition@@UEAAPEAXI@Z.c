/*
 * XREFs of ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002AF10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

DirectComposition::CPropertyBagMarshaler *__fastcall DirectComposition::CPropertyBagMarshaler::`vector deleting destructor'(
        DirectComposition::CPropertyBagMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx

  v4 = a2;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  if ( (v4 & 1) != 0 )
    Win32FreePool(this, a2, a3);
  return this;
}
