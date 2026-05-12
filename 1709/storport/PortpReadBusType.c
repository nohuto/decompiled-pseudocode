/*
 * XREFs of PortpReadBusType @ 0x1C00631A8
 * Callers:
 *     PortReadStorageBusType @ 0x1C0063130 (PortReadStorageBusType.c)
 * Callees:
 *     <none>
 */

bool __fastcall PortpReadBusType(HANDLE KeyHandle, char *KeyValueInformation, int *a3)
{
  int v6; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BusType");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *a3 = v6;
  return v6 < 127;
}
