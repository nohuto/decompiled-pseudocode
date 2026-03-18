/*
 * XREFs of HMMarkObjectDestroy @ 0x1C00727D0
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00190F0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A130 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A200 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     DestroyKF @ 0x1C0071050 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     HMDestroyObject @ 0x1C00727A0 (HMDestroyObject.c)
 *     CleanupKeyboardLayouts @ 0x1C0075AC8 (CleanupKeyboardLayouts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  char *v1; // rax

  v1 = (char *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*a1;
  v1[25] |= 1u;
  if ( !a1[2] )
    return 1LL;
  v1[25] &= ~2u;
  return 0LL;
}
