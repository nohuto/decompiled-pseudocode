/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E5EC
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0014714 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CF18 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C001F300 (--_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C013F910 (--_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01405C0 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z @ 0x1C01406C0 (--_E-$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0141780 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_G?$CDCompDynamicArray@E@DirectComposition@@UEAAPEAXI@Z @ 0x1C0141F60 (--_G-$CDCompDynamicArray@E@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0141FA0 (--_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(
        DirectComposition::CDCompDynamicArrayBase *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CDCompDynamicArrayBase::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    Win32FreePool(v1);
}
