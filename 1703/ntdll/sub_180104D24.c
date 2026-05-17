/*
 * XREFs of sub_180104D24 @ 0x180104D24
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180104D24(__int64 a1, _QWORD *a2, _WORD *a3)
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
