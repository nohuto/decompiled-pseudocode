/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C023470C
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C023475C (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(__int64 a1, char a2)
{
  int v3; // ebx
  __int64 v4; // rax
  _DWORD *result; // rax

  v3 = a1;
  if ( (_DWORD)a1 == -2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
  }
  for ( result = qword_1C007BE38; result && (v3 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
