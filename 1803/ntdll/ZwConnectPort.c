/*
 * XREFs of ZwConnectPort @ 0x18009BE70
 * Callers:
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 158LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
