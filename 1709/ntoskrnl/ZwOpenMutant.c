/*
 * XREFs of ZwOpenMutant @ 0x14017FC20
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
