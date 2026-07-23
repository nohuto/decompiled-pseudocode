/*
 * XREFs of ZwPowerInformation @ 0x18009B690
 * Callers:
 *     sub_1800839FC @ 0x1800839FC (sub_1800839FC.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800E6A00 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800E6E90 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800E6F00 (RtlUnlockBootStatusData.c)
 *     sub_1800E71DC @ 0x1800E71DC (sub_1800E71DC.c)
 *     sub_1800FF1D0 @ 0x1800FF1D0 (sub_1800FF1D0.c)
 *     sub_1800FF2CC @ 0x1800FF2CC (sub_1800FF2CC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 95;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
