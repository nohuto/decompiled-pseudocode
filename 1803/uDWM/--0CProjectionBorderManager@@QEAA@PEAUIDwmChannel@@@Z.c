/*
 * XREFs of ??0CProjectionBorderManager@@QEAA@PEAUIDwmChannel@@@Z @ 0x180041B38
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003F568 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CProjectionBorderManager *__fastcall CProjectionBorderManager::CProjectionBorderManager(
        CProjectionBorderManager *this,
        struct IDwmChannel *a2)
{
  *(_QWORD *)this = &CProjectionBorderManager::`vftable';
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = a2;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 440),
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 512),
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  return this;
}
