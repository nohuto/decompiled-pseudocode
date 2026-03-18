/*
 * XREFs of NtUnloadKey2 @ 0x14061469C
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}
