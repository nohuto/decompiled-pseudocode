/*
 * XREFs of NtOpenProcess @ 0x14059A0A0
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1405E883C (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 */

NTSTATUS __stdcall NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenProcess(
           (_DWORD)ProcessHandle,
           DesiredAccess,
           (_DWORD)ObjectAttributes,
           (_DWORD)ClientId,
           PreviousMode,
           PreviousMode);
}
