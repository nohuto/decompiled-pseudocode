/*
 * XREFs of ??_G?$CDCompDynamicArray@E@DirectComposition@@UEAAPEAXI@Z @ 0x1C0141F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArray<unsigned char>::`scalar deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CDCompDynamicArray<unsigned char>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(a1);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)a1);
  return a1;
}
