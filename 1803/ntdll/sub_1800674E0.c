/*
 * XREFs of sub_1800674E0 @ 0x1800674E0
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800671F0 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800888C0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1800EFFF0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800674E0(_QWORD *a1)
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
