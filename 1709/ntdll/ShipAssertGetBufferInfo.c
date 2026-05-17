/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DD920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_1801600F0;
    *a1 = &qword_1801600F0;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_18015CDE8;
    *a2 = &dword_18015CDE8;
  }
  return result;
}
