/*
 * XREFs of NtLoadKey @ 0x1405F232C
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1404E1FEC (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
