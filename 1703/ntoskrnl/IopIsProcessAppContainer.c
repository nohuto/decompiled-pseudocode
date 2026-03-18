/*
 * XREFs of IopIsProcessAppContainer @ 0x140005C2C
 * Callers:
 *     IopFileObjectRevoked @ 0x14004B8D4 (IopFileObjectRevoked.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140422530 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

bool __fastcall IopIsProcessAppContainer(struct _KPROCESS *a1)
{
  PACCESS_TOKEN v1; // rbx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(TokenInformation) = 0;
  v1 = PsReferencePrimaryToken(a1);
  SeQueryInformationToken(v1, TokenIsAppContainer, &TokenInformation);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  return (_DWORD)TokenInformation != 0;
}
