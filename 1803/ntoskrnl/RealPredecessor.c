/*
 * XREFs of RealPredecessor @ 0x1400D0C14
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x14014CD50 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x14015D6D0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x14028C660 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    for ( result = (_QWORD *)*a1; (_QWORD *)result[1] == a1; result = (_QWORD *)*result )
      a1 = result;
    if ( (_QWORD *)result[2] != a1 || (_QWORD *)*result == result )
      return 0LL;
  }
  return result;
}
