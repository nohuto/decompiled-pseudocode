/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180055F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, PUNICODE_STRING ObjectPath)
{
  return sub_180057C00(TokenHandle);
}
