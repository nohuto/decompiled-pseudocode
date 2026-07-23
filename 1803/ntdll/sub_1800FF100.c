/*
 * XREFs of sub_1800FF100 @ 0x1800FF100
 * Callers:
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800FEEC4 @ 0x1800FEEC4 (sub_1800FEEC4.c)
 */

__int64 __fastcall sub_1800FF100(__int64 a1, __int64 a2, unsigned int a3, char **a4)
{
  USHORT v5; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a3 == 1 )
  {
    *a4 = (char *)16;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
      *a4 = sub_1800FEEC4(v5, BackTrace, BackTraceHash[0]);
    }
  }
  return 0LL;
}
