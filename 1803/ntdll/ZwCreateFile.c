/*
 * XREFs of ZwCreateFile @ 0x18009B560
 * Callers:
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086810 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_18008A3C0 @ 0x18008A3C0 (sub_18008A3C0.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 *     sub_18010C9B4 @ 0x18010C9B4 (sub_18010C9B4.c)
 *     sub_18010E570 @ 0x18010E570 (sub_18010E570.c)
 *     sub_18010E690 @ 0x18010E690 (sub_18010E690.c)
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
