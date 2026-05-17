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

__int64 NtOpenSection()
{
  __int64 result; // rax

  result = 55LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
