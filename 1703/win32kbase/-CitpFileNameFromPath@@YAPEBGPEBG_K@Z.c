/*
 * XREFs of ?CitpFileNameFromPath@@YAPEBGPEBG_K@Z @ 0x1C00539AC
 * Callers:
 *     ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C0053894 (-CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00539D4 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CitpFileNameFromPath(const unsigned __int16 *a1, __int64 a2)
{
  const unsigned __int16 *i; // rax

  for ( i = &a1[a2 - 1]; ; --i )
  {
    if ( i <= a1 )
      return a1;
    if ( *i == 92 )
      break;
  }
  return i + 1;
}
