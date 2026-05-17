/*
 * XREFs of ZwSetInformationFile @ 0x1800A05A0
 * Callers:
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180065084 (EtwpCreateFile.c)
 *     LdrpResSetFilePointer @ 0x1800E38FC (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
