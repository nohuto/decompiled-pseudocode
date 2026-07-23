/*
 * XREFs of LdrOpenImageFileOptionsKey @ 0x1800DBE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrOpenImageFileOptionsKey(PUNICODE_STRING SubKey, BOOLEAN Wow64, PHANDLE NewKeyHandle)
{
  return sub_180076270(&SubKey->Length, 9LL, 0, NewKeyHandle);
}
