/*
 * XREFs of RtlWow64PopCrossProcessWork @ 0x1800DC5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlWow64PopCrossProcessWork(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  _DWORD *v2; // r8
  signed __int64 v3; // rtt
  signed __int64 v5; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  do
  {
    if ( !(_DWORD)v1 )
      return 0LL;
    v2 = (_DWORD *)((char *)a1 + (unsigned int)v1);
    HIDWORD(v5) = HIDWORD(v1) + 1;
    LODWORD(v5) = *v2;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1, v5, v1);
  }
  while ( v3 != v1 );
  *v2 = 0;
  return v2;
}
