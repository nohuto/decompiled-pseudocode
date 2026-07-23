/*
 * XREFs of ZwDeleteValueKey @ 0x1800A1A90
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180066AA0 (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x18008BCC0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008CDE0 (RtlDeleteRegistryValue.c)
 *     RtlApplyRXact @ 0x18008CF00 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E17F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 207;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
