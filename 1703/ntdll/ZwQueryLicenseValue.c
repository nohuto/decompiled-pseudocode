/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A7BB0
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800795F0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180084790 (RtlGetProductInfo.c)
 *     sub_1800FA22C @ 0x1800FA22C (sub_1800FA22C.c)
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

  result = 326;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
