/*
 * XREFs of NtLoadKey @ 0x1405D5D18
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1404D4860 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
