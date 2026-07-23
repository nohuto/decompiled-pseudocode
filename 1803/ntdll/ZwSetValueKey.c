/*
 * XREFs of ZwSetValueKey @ 0x18009B6B0
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 *     RtlWriteRegistryValue @ 0x180089A30 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800D0368 @ 0x1800D0368 (sub_1800D0368.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800DFB20 (RtlApplyRXact.c)
 *     sub_1800E9B84 @ 0x1800E9B84 (sub_1800E9B84.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x1800FBF70 (RtlpNtSetValueKey.c)
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
