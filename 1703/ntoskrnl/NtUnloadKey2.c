/*
 * XREFs of NtUnloadKey2 @ 0x140586694
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}
