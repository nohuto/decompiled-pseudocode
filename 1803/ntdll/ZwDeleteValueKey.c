/*
 * XREFs of ZwDeleteValueKey @ 0x18009C4B0
 * Callers:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     RtlInitializeRXact @ 0x18008A4F0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008ABF0 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800DFB20 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 208;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
