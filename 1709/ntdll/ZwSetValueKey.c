/*
 * XREFs of ZwSetValueKey @ 0x1800A0CB0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180084340 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008BCC0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlWriteRegistryValue @ 0x18008C780 (RtlWriteRegistryValue.c)
 *     RtlApplyRXact @ 0x18008CF00 (RtlApplyRXact.c)
 *     RtlpNtSetValueKey @ 0x180090670 (RtlpNtSetValueKey.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6450 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E17F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAE4 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
