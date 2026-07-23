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

NTSTATUS __cdecl ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
