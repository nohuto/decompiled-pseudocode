/*
 * XREFs of sub_180070A54 @ 0x180070A54
 * Callers:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007C99C @ 0x18007C99C (sub_18007C99C.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_180070A54(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rtt

  result = a2;
  if ( (a2 & 1) == 0 )
    return sub_180070AAC(a1, result, 0LL);
  while ( 1 )
  {
    v4 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v5;
        v6 = v4[1];
      }
      while ( !v6 );
      if ( v4 != (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
    }
    v7 = result;
    result = _InterlockedCompareExchange64(a1, result - 4, result);
    if ( v7 == result )
      break;
    if ( (result & 1) == 0 )
      return sub_180070AAC(a1, result, 0LL);
  }
  return result;
}
