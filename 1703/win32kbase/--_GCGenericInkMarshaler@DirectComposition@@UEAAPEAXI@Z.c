/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01405C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v3; // rcx

  v3 = (DirectComposition::CGenericInkMarshaler *)((char *)this + 96);
  *(_QWORD *)v3 = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v3);
  *((_QWORD *)this + 5) = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CGenericInkMarshaler *)((char *)this + 40));
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
