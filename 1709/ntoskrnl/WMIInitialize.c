/*
 * XREFs of WMIInitialize @ 0x1408407F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140844394 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140856FF0 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x1408578B4 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140857CC0 (WmipGetSMBiosFromLoaderBlock.c)
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
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  return v2;
}
