/*
 * XREFs of IopIsProcessAppContainer @ 0x14012BDD8
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IopFileObjectRevoked @ 0x14008AB40 (IopFileObjectRevoked.c)
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1405943CC (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
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
