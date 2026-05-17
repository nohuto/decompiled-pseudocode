/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800DE950
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
    result = &qword_18015C6E8;
    *a1 = &qword_18015C6E8;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_180158DF0;
    *a2 = &dword_180158DF0;
  }
  return result;
}
