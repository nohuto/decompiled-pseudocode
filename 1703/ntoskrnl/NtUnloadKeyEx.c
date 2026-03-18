/*
 * XREFs of NtUnloadKeyEx @ 0x1404CA8FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
