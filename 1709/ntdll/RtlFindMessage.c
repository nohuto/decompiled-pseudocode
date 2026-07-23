/*
 * XREFs of RtlFindMessage @ 0x180021A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindMessageInTable @ 0x180021980 (RtlFindMessageInTable.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  int v5; // edi
  NTSTATUS result; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-38h] BYREF

  v5 = (int)DllHandle;
  v9[0] = MessageTableId;
  v9[2] = MessageLanguageId;
  v9[1] = 1LL;
  v9[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v9, 4, 64, (__int64)v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(v5);
    if ( result >= 0 )
      return RtlFindMessageInTable((int *)v8[1], MessageId, MessageEntry);
  }
  return result;
}
