/*
 * XREFs of StorPortDebugPrint @ 0x1C001D350
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x1C001D418 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

ULONG StorPortDebugPrint(unsigned int a1, const CHAR *a2, ...)
{
  ULONG v3; // edi
  __int64 v4; // rbx
  ULONG TimeIncrement; // eax
  char pszDest[40]; // [rsp+30h] [rbp-48h] BYREF
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  memset(pszDest, 0, sizeof(pszDest));
  if ( a1 )
  {
    v3 = 2;
    if ( a1 > 2 )
    {
      v3 = 3;
      if ( a1 != 3 )
        v3 = a1;
    }
  }
  else
  {
    v3 = 1;
  }
  v4 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  RtlStringCbPrintfA(pszDest, 0x28uLL, "%I64u - STORMINI: ", v4 * TimeIncrement);
  return vDbgPrintExWithPrefix(pszDest, 0x5Au, v3, a2, va);
}
