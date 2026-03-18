/*
 * XREFs of PsIsProcessAppContainer @ 0x14058A3A4
 * Callers:
 *     IopFileObjectRevoked @ 0x1400EB844 (IopFileObjectRevoked.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14058A0FC (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

bool __fastcall PsIsProcessAppContainer(struct _KPROCESS *a1)
{
  char v1; // si
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  LODWORD(TokenInformation) = 0;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObject(v2);
  if ( v3 >= 0 )
    return (_DWORD)TokenInformation != 0;
  return v1;
}
