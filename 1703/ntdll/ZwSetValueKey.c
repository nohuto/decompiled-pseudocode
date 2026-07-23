/*
 * XREFs of ZwSetValueKey @ 0x1800A5EF0
 * Callers:
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlWriteRegistryValue @ 0x18008F620 (RtlWriteRegistryValue.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 *     RtlApplyRXact @ 0x1800E5090 (RtlApplyRXact.c)
 *     sub_1800EDDC4 @ 0x1800EDDC4 (sub_1800EDDC4.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x1800FD990 (RtlpNtSetValueKey.c)
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
