/*
 * XREFs of NtOpenProcess @ 0x1404C0C60
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406F37E4 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
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
