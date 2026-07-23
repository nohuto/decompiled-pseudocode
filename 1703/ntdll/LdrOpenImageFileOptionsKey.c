/*
 * XREFs of LdrOpenImageFileOptionsKey @ 0x1800E21D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrOpenImageFileOptionsKey(PUNICODE_STRING SubKey, BOOLEAN Wow64, PHANDLE NewKeyHandle)
{
  return sub_18007C34C(&SubKey->Length, 9u, NewKeyHandle);
}
