/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3@Z @ 0x18003D958
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3PEAPEAV1@@Z @ 0x18003CF30 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::CMagnifierControl(
        CMagnifierControl *this,
        struct IDwmChannel *a2,
        struct IDCompositionDesktopDevicePartner *a3,
        struct IDCompositionDesktopTargetPartner *a4,
        struct CVisual *a5,
        struct CVisual *a6)
{
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMagnifierControl::`vftable';
  *((_DWORD *)this + 2) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 1,
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 3) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 7) = a6;
  if ( a6 )
    _InterlockedIncrement((volatile signed __int32 *)a6 + 2);
  return this;
}
