/*
 * XREFs of ??_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0141FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CPencilMarshaler *__fastcall DirectComposition::CPencilMarshaler::`scalar deleting destructor'(
        DirectComposition::CPencilMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CPencilMarshaler::`vftable';
  v4 = (DirectComposition::CPencilMarshaler *)((char *)this + 144);
  *(_QWORD *)v4 = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
