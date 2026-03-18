/*
 * XREFs of WMIInitialize @ 0x1408A38C4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x14089F818 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x1408C90FC (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x1408C9868 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x1408C9E2C (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(int a1, __int64 a2)
{
  char v2; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    WmipInitializeRegistration(a1);
    return 1;
  }
  WmipInitializeAllocs();
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  return v2;
}
