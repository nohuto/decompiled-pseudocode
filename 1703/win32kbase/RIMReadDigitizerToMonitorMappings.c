/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C00085B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01071F0 (rimReadSingleDigitizerToMonitorMappings.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(__int64 a1)
{
  int result; // eax
  __int64 v3; // rbx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
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
    v3 = Win32AllocPoolZInit(0x20CuLL);
    if ( v3 )
    {
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 10LL);
      rimReadSingleDigitizerToMonitorMappings(a1, KeyHandle, 20LL);
      Win32FreePool(v3);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
