/*
 * XREFs of NtUnloadKey @ 0x14059B87C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return CmUnloadKey((__int64)KeyObjectAttributes, 0, 0, 0LL);
}
