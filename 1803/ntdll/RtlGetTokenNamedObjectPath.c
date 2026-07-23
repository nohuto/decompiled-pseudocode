/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180082490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return sub_180042B30(TokenHandle, 0LL, (_BYTE)Sid != 0, ObjectPath);
}
