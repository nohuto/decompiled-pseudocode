/*
 * XREFs of sub_180107084 @ 0x180107084
 * Callers:
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 * Callees:
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180107084(__int64 a1, _QWORD *a2, _WORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp-18h]
  __int16 v7; // [rsp+34h] [rbp-14h]

  result = ZwTraceControl();
  if ( !(_DWORD)result )
  {
    *a2 = v6;
    *a3 = v7;
  }
  return result;
}
