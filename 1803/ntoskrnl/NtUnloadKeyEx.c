/*
 * XREFs of NtUnloadKeyEx @ 0x14054C9FC
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
