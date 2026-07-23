/*
 * XREFs of ZwDeleteValueKey @ 0x1800A6CB0
 * Callers:
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     RtlInitializeRXact @ 0x18008E7F0 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008F5B0 (RtlDeleteRegistryValue.c)
 *     RtlApplyRXact @ 0x1800E5090 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  NTSTATUS result; // eax

  result = 206;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
