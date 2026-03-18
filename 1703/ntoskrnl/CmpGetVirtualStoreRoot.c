/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1406678D4
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     CmpGetMappingHiveForString @ 0x1404D3514 (CmpGetMappingHiveForString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(_QWORD *a1, _DWORD *a2)
{
  int VirtualizationID; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a1);
    RtlFreeUnicodeString(&UnicodeString);
    if ( VirtualizationID >= 0 )
      *a2 = *(_DWORD *)(*(_QWORD *)(*a1 + 64LL) + 36LL);
  }
  return (unsigned int)VirtualizationID;
}
