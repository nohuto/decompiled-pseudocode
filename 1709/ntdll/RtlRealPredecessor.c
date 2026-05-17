/*
 * XREFs of RtlRealPredecessor @ 0x180001BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRealPredecessor(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rax
  _QWORD *j; // rcx

  v1 = a1;
  v2 = 0LL;
  v3 = a1[1];
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 16); i; i = *(_QWORD *)(i + 16) )
      v3 = i;
    return (_QWORD *)v3;
  }
  else
  {
    for ( j = (_QWORD *)*v1; (_QWORD *)j[1] == v1; j = (_QWORD *)*j )
      v1 = j;
    if ( *(_QWORD **)(*v1 + 16LL) == v1 )
      return (_QWORD *)*v1;
    return (_QWORD *)v2;
  }
}
