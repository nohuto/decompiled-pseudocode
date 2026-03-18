/*
 * XREFs of NtUnloadKey2 @ 0x1405F3054
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  return CmUnloadKey((__int64)TargetKey, Flags, 0, 0LL);
}
