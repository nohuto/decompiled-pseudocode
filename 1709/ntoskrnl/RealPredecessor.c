/*
 * XREFs of RealPredecessor @ 0x14012FCC0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x140154CA0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x140254580 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlGetElementGenericTableAvl @ 0x1402545E0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *j; // rax
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    for ( j = (_QWORD *)*a1; (_QWORD *)j[1] == a1; j = (_QWORD *)*j )
      a1 = j;
    result = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 16LL) != a1 || (_QWORD *)*result == result )
      return 0LL;
  }
  return result;
}
