/*
 * XREFs of PerfHvReadFeedback @ 0x1C000BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfHvReadFeedback(unsigned int *a1, char a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  HvlReadPerformanceStateCounters(a1[1], *a1, &v12, v11);
  if ( a2 )
  {
    v8 = v12;
    v9 = v11[0];
    *a3 = v12 - *((_QWORD *)a1 + 2);
    result = v9 - *((_QWORD *)a1 + 1);
    *a4 = result;
    *((_QWORD *)a1 + 2) = v8;
    *((_QWORD *)a1 + 1) = v9;
  }
  else
  {
    *a3 = v12;
    result = v11[0];
    *a4 = v11[0];
  }
  return result;
}
