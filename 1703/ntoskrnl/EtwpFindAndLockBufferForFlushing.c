/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x14070F5F0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = a1 + 96;
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 == v2 )
    v4 = 0LL;
  else
    v4 = v3 - 56;
  while ( 1 )
  {
    if ( !v4 )
      return v4;
    if ( *(_QWORD *)(v4 + 24) == a2 )
      break;
    v5 = *(_QWORD *)(v4 + 56);
    v4 = v5 - 56;
    if ( v5 == v2 )
      v4 = 0LL;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
  {
    if ( *(_QWORD *)(v4 + 24) == a2 )
      return v4;
    _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
  }
  return 0LL;
}
