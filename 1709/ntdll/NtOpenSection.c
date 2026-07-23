/*
 * XREFs of NtOpenSection @ 0x1800A07A0
 * Callers:
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 *     LdrpFindKnownDll @ 0x18004D750 (LdrpFindKnownDll.c)
 *     LdrGetKnownDllSectionHandle @ 0x180085A50 (LdrGetKnownDllSectionHandle.c)
 *     _ResOpenFileMapping @ 0x1801104C4 (_ResOpenFileMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
