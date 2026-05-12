/*
 * XREFs of RaidUnitGetInitialTimestamp @ 0x1C0013EE4
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C005E5BC (PortRegistryWriteDeviceKey.c)
 *     PortRegistryReadDeviceKey @ 0x1C005FF8C (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidUnitGetInitialTimestamp(__int64 a1)
{
  int DeviceKey; // r8d
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF
  __int64 *v8; // [rsp+80h] [rbp+28h] BYREF
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF

  v6 = 8;
  v8 = &v9;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v4, L"InitialTimestamp");
  DeviceKey = PortRegistryReadDeviceKey(
                *(_QWORD *)(a1 + 8),
                (unsigned int)&DestinationString,
                (unsigned int)&v4,
                11,
                (__int64)&v8,
                (__int64)&v6);
  v7 = MEMORY[0xFFFFF78000000014];
  if ( DeviceKey >= 0 )
  {
    if ( MEMORY[0xFFFFF78000000014] < v9 )
      DeviceKey = -1073741823;
    else
      *(_QWORD *)(a1 + 2568) = v9;
  }
  if ( DeviceKey < 0 )
  {
    PortRegistryWriteDeviceKey(
      *(_QWORD *)(a1 + 8),
      (unsigned int)&DestinationString,
      (unsigned int)&v4,
      11,
      (__int64)&v7,
      8);
    DeviceKey = 0;
    *(_QWORD *)(a1 + 2568) = v7;
  }
  return (unsigned int)DeviceKey;
}
