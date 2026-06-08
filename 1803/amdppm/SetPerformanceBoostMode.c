/*
 * XREFs of SetPerformanceBoostMode @ 0x1C0001330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SetPerformanceBoostMode(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+18h] [rbp+18h]

  v3 = __readmsr(0xC0010015);
  if ( (unsigned int)(a2 - 1) <= 1 )
    LODWORD(v3) = v3 & 0xFDFFFFFF;
  else
    LODWORD(v3) = v3 | 0x2000000;
  result = v3;
  __writemsr(0xC0010015, v3);
  return result;
}
