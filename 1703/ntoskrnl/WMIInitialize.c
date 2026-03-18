/*
 * XREFs of WMIInitialize @ 0x1407FBEA0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x1407FF844 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140825904 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140826320 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140826580 (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(int a1, __int64 a2)
{
  char v2; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    WmipInitializeRegistration();
    return 1;
  }
  WmipInitializeAllocs();
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( (int)IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  return v2;
}
