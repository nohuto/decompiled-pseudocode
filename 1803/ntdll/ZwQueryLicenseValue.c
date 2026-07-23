/*
 * XREFs of ZwQueryLicenseValue @ 0x18009D410
 * Callers:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180075690 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x18007FB70 (RtlGetProductInfo.c)
 *     sub_1800F81DC @ 0x1800F81DC (sub_1800F81DC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 331;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
