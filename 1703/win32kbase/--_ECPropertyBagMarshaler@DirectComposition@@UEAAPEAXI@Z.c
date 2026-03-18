/*
 * XREFs of ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C001F300
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CPropertyBagMarshaler *__fastcall DirectComposition::CPropertyBagMarshaler::`vector deleting destructor'(
        DirectComposition::CPropertyBagMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v3; // rcx

  v3 = (DirectComposition::CPropertyBagMarshaler *)((char *)this + 64);
  *(_QWORD *)v3 = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v3);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
