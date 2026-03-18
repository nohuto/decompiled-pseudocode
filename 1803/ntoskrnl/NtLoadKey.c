/*
 * XREFs of NtLoadKey @ 0x1405E9F34
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14049E7D4 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
