/*
 * XREFs of ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145EF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CArithmeticCompositeEffectMarshaler *__fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    Win32FreePool(v5);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
