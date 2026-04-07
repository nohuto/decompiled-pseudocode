/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2@Z @ 0x180042A7C
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x1800420D8 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMagnifierControl *__fastcall CMagnifierControl::CMagnifierControl(
        CMagnifierControl *this,
        struct IDwmChannel *a2,
        struct CResource *a3,
        struct CVisual *a4,
        struct CVisual *a5)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMagnifierControl::`vftable';
  *((_DWORD *)this + 2) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 64),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *((_QWORD *)this + 4) = a4;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  *((_QWORD *)this + 6) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  return this;
}
