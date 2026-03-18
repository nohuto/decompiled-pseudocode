/*
 * XREFs of EtwpLogRefSetAutoMark @ 0x14074D59C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x1400B9B10 (RtlStringCbCopyA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x1407474E0 (EtwpSetMark.c)
 */

__int64 __fastcall EtwpLogRefSetAutoMark(char a1, __int64 a2)
{
  const char *v3; // r8
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-38h] BYREF
  char pszDest[28]; // [rsp+34h] [rbp-34h] BYREF

  if ( a1 )
  {
    v3 = "RefSetStart::AutoMark";
    v6 = 1;
    v4 = 26;
  }
  else
  {
    v6 = 0;
    v3 = "RefSetStop::AutoMark";
    v4 = 25;
  }
  RtlStringCbCopyA(pszDest, 0x16uLL, v3);
  return EtwpSetMark(a2, &v6, v4, 1, 0);
}
