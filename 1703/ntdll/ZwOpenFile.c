/*
 * XREFs of ZwOpenFile @ 0x1800A5960
 * Callers:
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_18006227C @ 0x18006227C (sub_18006227C.c)
 *     sub_18007B250 @ 0x18007B250 (sub_18007B250.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     RtlLockBootStatusData @ 0x180089980 (RtlLockBootStatusData.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_1800D6D28 @ 0x1800D6D28 (sub_1800D6D28.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
