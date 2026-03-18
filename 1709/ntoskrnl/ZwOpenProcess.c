/*
 * XREFs of ZwOpenProcess @ 0x14017DD80
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
