/*
 * XREFs of RealPredecessor @ 0x14003B308
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x14004C910 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1401527B0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x14023E620 (RtlGetElementGenericTableAvl.c)
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
