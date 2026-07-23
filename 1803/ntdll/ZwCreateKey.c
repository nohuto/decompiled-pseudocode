/*
 * XREFs of ZwCreateKey @ 0x18009AE60
 * Callers:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_180076424 @ 0x180076424 (sub_180076424.c)
 *     sub_180089438 @ 0x180089438 (sub_180089438.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800DD5D8 @ 0x1800DD5D8 (sub_1800DD5D8.c)
 *     sub_1800E9B84 @ 0x1800E9B84 (sub_1800E9B84.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpNtCreateKey @ 0x1800FBF20 (RtlpNtCreateKey.c)
 *     sub_18010E964 @ 0x18010E964 (sub_18010E964.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  NTSTATUS result; // eax

  result = 29;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
