/*
 * XREFs of sub_1801005E0 @ 0x1801005E0
 * Callers:
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 */

__int64 __fastcall sub_1801005E0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  USHORT v5; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a3 == 1 )
  {
    *a4 = 16LL;
  }
  else if ( a3 > 1 && (a3 <= 3 || a3 - 5 <= 1) )
  {
    if ( a4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
      *a4 = sub_1801003C4(v5, BackTrace, BackTraceHash[0]);
    }
  }
  return 0LL;
}
