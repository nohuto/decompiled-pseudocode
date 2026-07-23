/*
 * XREFs of RtlFindMessage @ 0x180069F10
 * Callers:
 *     <none>
 * Callees:
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
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
  result = sub_180032DB4(DllHandle, (__int64)v10, 4u, 0x40u, (__int64)&ResourceDataEntry);
  if ( result >= 0 )
  {
    result = LdrAccessResource_0(DllHandle, ResourceDataEntry, &ResourceBuffer, 0LL);
    if ( result >= 0 )
      return sub_180069FBC(ResourceBuffer, MessageId, MessageEntry);
  }
  return result;
}
