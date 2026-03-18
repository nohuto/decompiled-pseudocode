/*
 * XREFs of SiGetSystemPartition @ 0x14057DB70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x14057E0DC (SiIsWinPEBoot.c)
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x14077E0A0 (SiGetBiosSystemPartition.c)
 */

__int64 __fastcall SiGetSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  char IsWinPEBoot; // bp
  __int64 v6; // r8
  int FirmwareBootDeviceName; // ebx
  int BiosSystemPartition; // eax
  const WCHAR *v10; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v10) = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot
    || (FirmwareBootDeviceName = SiGetFirmwareBootDeviceName(1LL, 0LL, 0LL, a2), FirmwareBootDeviceName < 0) )
  {
    if ( a1 == 1 )
    {
      BiosSystemPartition = SiGetBiosSystemPartition(a2);
    }
    else
    {
      if ( a1 != 2 )
      {
        FirmwareBootDeviceName = -1073741637;
        goto LABEL_10;
      }
      BiosSystemPartition = SiGetEfiSystemDevice(1LL, v4, a2);
    }
    FirmwareBootDeviceName = BiosSystemPartition;
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
      if ( FirmwareBootDeviceName != -1073740719 )
        return (unsigned int)FirmwareBootDeviceName;
      if ( !IsWinPEBoot )
        return (unsigned int)FirmwareBootDeviceName;
      if ( a1 != 2 )
        return (unsigned int)FirmwareBootDeviceName;
      LOBYTE(v6) = 1;
      if ( (int)SiGetFirmwareBootDeviceName(1LL, &v10, v6, a2) < 0 )
        return (unsigned int)FirmwareBootDeviceName;
    }
    return 0;
  }
  return (unsigned int)FirmwareBootDeviceName;
}
