/*
 * XREFs of ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0066F38
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0066ED8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     GetPathsModality @ 0x1C0066F68 (GetPathsModality.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F511C (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F9720 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C0190648)();
    Win32FreePool((__int64)a1);
  }
}
