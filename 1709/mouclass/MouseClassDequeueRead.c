/*
 * XREFs of MouseClassDequeueRead @ 0x1C00026EC
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00037C0 (MouseClassServiceCallback.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MouseClassDequeueRead(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  _QWORD *v5; // rax

  v1 = 0LL;
  v2 = (__int64 **)(a1 + 152);
  do
  {
    if ( *v2 == (__int64 *)v2 )
      break;
    v3 = *v2;
    if ( (__int64 **)(*v2)[1] == v2 )
    {
      v4 = (__int64 *)*v3;
      if ( *(__int64 **)(*v3 + 8) == v3 )
        continue;
    }
    __fastfail(3u);
    *v2 = v4;
    v1 = v3 - 21;
    v4[1] = (__int64)v2;
    if ( !_InterlockedExchange64(v1 + 13, 0LL) )
    {
      v5 = v1 + 21;
      v1 = 0LL;
      v5[1] = v5;
      *v5 = v5;
    }
  }
  while ( !v1 );
  return v1;
}
