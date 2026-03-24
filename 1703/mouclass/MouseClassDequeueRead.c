/*
 * XREFs of MouseClassDequeueRead @ 0x1C00019A0
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00016C0 (MouseClassServiceCallback.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MouseClassDequeueRead(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rdx
  __int64 *v3; // rdx
  __int64 v4; // rcx

  v1 = (__int64 **)(a1 + 152);
LABEL_2:
  v2 = 0LL;
  while ( *v1 != (__int64 *)v1 )
  {
    v3 = *v1;
    v4 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v1 = (__int64 *)v4;
    v2 = v3 - 21;
    *(_QWORD *)(v4 + 8) = v1;
    if ( !_InterlockedExchange64(v2 + 13, 0LL) )
    {
      v2[22] = (__int64)(v2 + 21);
      v2[21] = (__int64)(v2 + 21);
      goto LABEL_2;
    }
    if ( v2 )
      return v2;
  }
  return v2;
}
