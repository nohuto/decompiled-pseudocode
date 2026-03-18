/*
 * XREFs of SiGetSystemDisk @ 0x1405986E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x140569B70 (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemDisk @ 0x1407396C8 (SiGetBiosSystemDisk.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  bool IsWinPEBoot; // bp
  int FirmwareBootDeviceName; // ebx
  int v10; // edi
  int EfiSystemDevice; // eax
  wchar_t *v12; // [rsp+40h] [rbp+18h] BYREF

  IsWinPEBoot = SiIsWinPEBoot(a1, (__int64)a2, a3, a4);
  if ( IsWinPEBoot || (FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(0, 0, a2), FirmwareBootDeviceName < 0) )
  {
    v10 = a1 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        FirmwareBootDeviceName = -1073741637;
        goto LABEL_10;
      }
      EfiSystemDevice = SiGetEfiSystemDevice(0LL, v6, a2);
    }
    else
    {
      EfiSystemDevice = SiGetBiosSystemDisk(a2);
    }
    FirmwareBootDeviceName = EfiSystemDevice;
LABEL_10:
    if ( FirmwareBootDeviceName >= 0 )
    {
      FirmwareBootDeviceName = SiTranslateSymbolicLink(*a2, &v12);
      if ( FirmwareBootDeviceName >= 0 )
      {
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v12;
        return (unsigned int)FirmwareBootDeviceName;
      }
    }
    else if ( !IsWinPEBoot || (int)SiGetFirmwareBootDeviceName(0, 1, a2) < 0 )
    {
      return (unsigned int)FirmwareBootDeviceName;
    }
    return 0;
  }
  return (unsigned int)FirmwareBootDeviceName;
}
