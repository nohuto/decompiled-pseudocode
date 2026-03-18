/*
 * XREFs of RIMReadTTMRegistrySettings @ 0x1C008CE0C
 * Callers:
 *     RIMInitialize @ 0x1C008CCE0 (RIMInitialize.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C008CEA4 (rimRegQueryRegistryDWord.c)
 */

__int64 RIMReadTTMRegistrySettings()
{
  unsigned int v0; // eax
  char v1; // r9
  int v2; // r8d
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\INPUT");
  v0 = rimRegQueryRegistryDWord(&DestinationString, L"WakeOnInputDeviceTypes", 6LL);
  v1 = v0;
  v2 = (v0 >> 1) & 1 | 2;
  if ( (v0 & 4) == 0 )
    v2 = (v0 >> 1) & 1;
  v3 = v2 | 0x10;
  if ( (v0 & 8) == 0 )
    v3 = v2;
  v4 = v3 | 4;
  if ( (v0 & 0x10) == 0 )
    v4 = v3;
  v5 = v4 | 8;
  if ( (v0 & 0x20) == 0 )
    v5 = v4;
  result = v5 | 0x20;
  if ( (v1 & 0x80) == 0 )
    result = v5;
  gWakeOnDeviceTypes = result;
  return result;
}
