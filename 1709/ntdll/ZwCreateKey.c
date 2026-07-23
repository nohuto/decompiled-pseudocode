/*
 * XREFs of ZwCreateKey @ 0x1800A0460
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180079D00 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x18008447C (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008BCC0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpNtCreateKey @ 0x180090760 (RtlpNtCreateKey.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E25F8 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAE4 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x18010E6B0 (OpenOrCreateKeyWithFlags.c)
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
