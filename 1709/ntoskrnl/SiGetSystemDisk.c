/*
 * XREFs of SiGetSystemDisk @ 0x1405D3510
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x14057E0DC (SiIsWinPEBoot.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  bool IsWinPEBoot; // bp
  int FirmwareBootDeviceName; // ebx
  int BiosSystemDisk; // eax
  wchar_t *v11; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v11) = 1;
  IsWinPEBoot = SiIsWinPEBoot(a1, (__int64)a2, a3, a4);
  if ( !IsWinPEBoot )
  {
    FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(0, 0LL, 0, a2);
    if ( FirmwareBootDeviceName >= 0 )
      return (unsigned int)FirmwareBootDeviceName;
  }
  if ( a1 == 1 )
  {
    BiosSystemDisk = SiGetBiosSystemDisk(a2);
  }
  else
  {
    if ( a1 != 2 )
    {
      FirmwareBootDeviceName = -1073741637;
      goto LABEL_6;
    }
    BiosSystemDisk = SiGetEfiSystemDevice(0LL, v6, a2);
  }
  FirmwareBootDeviceName = BiosSystemDisk;
LABEL_6:
  if ( FirmwareBootDeviceName >= 0 )
  {
    FirmwareBootDeviceName = SiTranslateSymbolicLink(*a2, &v11);
    if ( FirmwareBootDeviceName >= 0 )
    {
      ExFreePoolWithTag((PVOID)*a2, 0);
      *a2 = v11;
      return (unsigned int)FirmwareBootDeviceName;
    }
    return 0;
  }
  if ( FirmwareBootDeviceName == -1073740719
    && IsWinPEBoot
    && a1 == 2
    && (int)SiGetFirmwareBootDeviceName(0, &v11, 1, a2) >= 0 )
  {
    return 0;
  }
  return (unsigned int)FirmwareBootDeviceName;
}
