/*
 * XREFs of RtlWow64PopAllCrossProcessWork @ 0x1800D65B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlWow64PopAllCrossProcessWork(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  _DWORD *v3; // r8
  signed __int64 v4; // rtt
  _DWORD *result; // rax
  _DWORD *v6; // rcx
  signed __int64 v7; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  do
  {
    if ( !(_DWORD)v1 )
      return 0LL;
    v3 = (_DWORD *)((char *)a1 + (unsigned int)v1);
    LODWORD(v7) = 0;
    HIDWORD(v7) = HIDWORD(v1) + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64(a1, v7, v1);
  }
  while ( v4 != v1 );
  result = 0LL;
  if ( v3 )
  {
    do
    {
      if ( *v3 )
        v6 = (_DWORD *)((char *)a1 + (unsigned int)*v3);
      else
        v6 = 0LL;
      if ( result )
        LODWORD(result) = (_DWORD)result - (_DWORD)a1;
      *v3 = (_DWORD)result;
      result = v3;
      v3 = v6;
    }
    while ( v6 );
  }
  return result;
}
