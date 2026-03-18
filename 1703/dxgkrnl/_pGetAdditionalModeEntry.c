/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C01E6560
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01E65A0 (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  _DWORD *result; // rax

  v4 = a1;
  if ( (_DWORD)a1 == -2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  for ( result = qword_1C0070F18; result && v4 != result[2]; result = *(_DWORD **)result )
    ;
  return result;
}
