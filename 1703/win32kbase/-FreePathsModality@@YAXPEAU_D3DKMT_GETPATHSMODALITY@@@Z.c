/*
 * XREFs of ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00578E4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     GetPathsModality @ 0x1C0057970 (GetPathsModality.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F3EA0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00F95B0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C018B9E0)();
    Win32FreePool((__int64)a1);
  }
}
