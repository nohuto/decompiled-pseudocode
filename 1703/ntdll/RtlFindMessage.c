/*
 * XREFs of RtlFindMessage @ 0x180037F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_1800380AC @ 0x1800380AC (sub_1800380AC.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+30h] [rbp-48h] BYREF
  PVOID ResourceBuffer; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = sub_180035838(DllHandle, (__int64)v10, 4u, 0x40u, (__int64)&ResourceDataEntry);
  if ( result >= 0 )
  {
    result = LdrAccessResource_0(DllHandle, ResourceDataEntry, &ResourceBuffer, 0LL);
    if ( result >= 0 )
      return sub_1800380AC(ResourceBuffer, MessageId, MessageEntry);
  }
  return result;
}
