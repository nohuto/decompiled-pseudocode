/*
 * XREFs of sub_1800EFE7C @ 0x1800EFE7C
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800EFEC0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlGetElementGenericTableAvl @ 0x1800EFFF0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800EFE7C(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rcx

  result = (_QWORD *)a1[2];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[1]; i; i = (_QWORD *)i[1] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[2] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[1] == v3 )
      return a1;
    return (_QWORD *)v2;
  }
  return result;
}
