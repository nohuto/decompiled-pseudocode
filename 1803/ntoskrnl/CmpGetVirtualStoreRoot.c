/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1406F5614
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmpGetMappingHiveForString @ 0x1405C0518 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1405C08C4 (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  int VirtualizationID; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&DestinationString, a1);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&DestinationString, a2);
    if ( VirtualizationID >= 0 )
      *a3 = *(_DWORD *)(*(_QWORD *)(*a2 + 64LL) + 36LL);
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)VirtualizationID;
}
