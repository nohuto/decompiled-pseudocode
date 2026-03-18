/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x14069216C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
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
