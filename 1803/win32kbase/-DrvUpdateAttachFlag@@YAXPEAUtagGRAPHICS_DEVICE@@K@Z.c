/*
 * XREFs of ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C006E16C
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0068034 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 */

void __fastcall DrvUpdateAttachFlag(struct tagGRAPHICS_DEVICE *a1, int a2)
{
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  int ValueData; // [rsp+58h] [rbp+10h] BYREF

  ValueData = a2;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    *((_DWORD *)a1 + 65) = a2;
  }
  else
  {
    RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                             (unsigned __int16 *)a1,
                                             2,
                                             0LL,
                                             0LL,
                                             0,
                                             0LL,
                                             gProtocolType);
    if ( RegistryHandleFromDeviceMap )
    {
      RtlWriteRegistryValue(0x40000000u, RegistryHandleFromDeviceMap, L"Attach.ToDesktop", 4u, &ValueData, 4u);
      ZwClose(RegistryHandleFromDeviceMap);
    }
  }
}
