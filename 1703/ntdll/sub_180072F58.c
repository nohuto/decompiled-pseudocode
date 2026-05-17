/*
 * XREFs of sub_180072F58 @ 0x180072F58
 * Callers:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180072F00 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800F2DD0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlGetElementGenericTableAvl @ 0x1800F2F00 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180072F58(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rax
  _QWORD *j; // rcx

  v1 = a1;
  v2 = 0LL;
  v3 = a1[2];
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
      v3 = i;
    return (_QWORD *)v3;
  }
  else
  {
    for ( j = (_QWORD *)*v1; (_QWORD *)j[2] == v1; j = (_QWORD *)*j )
      v1 = j;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
      return (_QWORD *)*v1;
    return (_QWORD *)v2;
  }
}
