/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     DrvGetCurrentDpiInfo @ 0x1C005B6E8 (DrvGetCurrentDpiInfo.c)
 *     CitGetMonitorInfo @ 0x1C005CB10 (CitGetMonitorInfo.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A6E44 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F7F08 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2504);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2520);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2536);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2552);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
