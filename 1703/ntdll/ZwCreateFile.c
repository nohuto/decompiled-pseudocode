/*
 * XREFs of ZwCreateFile @ 0x1800A5DA0
 * Callers:
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_1800537C0 @ 0x1800537C0 (sub_1800537C0.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_18007D4C0 @ 0x18007D4C0 (sub_18007D4C0.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C720 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_18008CEF0 @ 0x18008CEF0 (sub_18008CEF0.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EB2F0 (RtlCreateBootStatusDataFile.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
