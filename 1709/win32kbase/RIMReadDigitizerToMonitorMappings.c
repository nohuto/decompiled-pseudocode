/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C0098660
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C0105680 (rimReadSingleDigitizerToMonitorMappings.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(__int64 a1)
{
  int result; // eax
  void *v3; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v3 = Win32AllocPoolZInit(0x20CuLL, 1836086098LL);
    if ( v3 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 10LL);
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 20LL);
      Win32FreePool((__int64)v3);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
