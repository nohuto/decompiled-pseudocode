/*
 * XREFs of ZwWriteFile @ 0x1800A5400
 * Callers:
 *     sub_180004554 @ 0x180004554 (sub_180004554.c)
 *     sub_180004C48 @ 0x180004C48 (sub_180004C48.c)
 *     sub_180051668 @ 0x180051668 (sub_180051668.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_1800884C4 @ 0x1800884C4 (sub_1800884C4.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EB2F0 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EB450 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     <none>
 */

__int64 ZwWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
