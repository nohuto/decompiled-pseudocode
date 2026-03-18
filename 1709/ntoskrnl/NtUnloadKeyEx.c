/*
 * XREFs of NtUnloadKeyEx @ 0x14046EE5C
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  return CmUnloadKey((__int64)TargetKey, 0, 1, Event);
}
