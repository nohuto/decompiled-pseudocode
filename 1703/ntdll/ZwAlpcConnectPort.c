/*
 * XREFs of ZwAlpcConnectPort @ 0x1800A61B0
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     RtlConnectToSm @ 0x18008E4F0 (RtlConnectToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcConnectPort()
{
  __int64 result; // rax

  result = 118LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
