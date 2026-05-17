/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800D81B0
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
    result = &qword_18015D6E8;
    *a1 = &qword_18015D6E8;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_180159770;
    *a2 = &dword_180159770;
  }
  return result;
}
