/*
 * XREFs of SiGetSystemPartition @ 0x140569620
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x140569B70 (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
 */

__int64 __fastcall SiGetSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  char IsWinPEBoot; // bp
  int FirmwareBootDeviceName; // ebx
  int v8; // esi
  int EfiSystemDevice; // eax
  const WCHAR *v10; // [rsp+40h] [rbp+18h]

  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot || (FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(1LL, 0LL, a2), FirmwareBootDeviceName < 0) )
  {
    v8 = a1 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        FirmwareBootDeviceName = -1073741637;
        goto LABEL_10;
      }
      EfiSystemDevice = SiGetEfiSystemDevice(1LL, v4, a2);
    }
    else
    {
      EfiSystemDevice = SiGetBiosSystemPartition(a2);
    }
    FirmwareBootDeviceName = EfiSystemDevice;
LABEL_10:
    if ( FirmwareBootDeviceName >= 0 )
    {
      FirmwareBootDeviceName = SiTranslateSymbolicLink(*a2);
      if ( FirmwareBootDeviceName >= 0 )
      {
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v10;
        return (unsigned int)FirmwareBootDeviceName;
      }
    }
    else
    {
      if ( !IsWinPEBoot )
        return (unsigned int)FirmwareBootDeviceName;
      LOBYTE(v4) = 1;
      if ( (int)SiGetFirmwareBootDeviceName(1LL, v4, a2) < 0 )
        return (unsigned int)FirmwareBootDeviceName;
    }
    return 0;
  }
  return (unsigned int)FirmwareBootDeviceName;
}
