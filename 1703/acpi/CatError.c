/*
 * XREFs of CatError @ 0x1C005BF4C
 * Callers:
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     RtlStringCchCatA @ 0x1C0056A64 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x1C005A85C (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

ULONG CatError(const char *a1, ...)
{
  __int64 v1; // rax
  ULONG result; // eax
  va_list argList; // [rsp+48h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(&pszDest, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( *(&pszDest + v1) );
  RtlStringCchVPrintfA(&pszDest + v1, 256 - v1, a1, argList);
  ConPrintf(&pszDest);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
