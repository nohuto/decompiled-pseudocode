/*
 * XREFs of sub_1800662B0 @ 0x1800662B0
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_18007177C @ 0x18007177C (sub_18007177C.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B450 (RtlTryAcquireSRWLockShared.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800662B0(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  int v5; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned __int64)NtCurrentTeb();
    if ( *(_DWORD *)(*(_QWORD *)(result + 96) + 184LL) == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v5 = 0;
  result = (v1 - 1) & (unsigned int)v3;
  v4 = result + v1;
  if ( v4 )
  {
    do
    {
      _mm_pause();
      result = (unsigned int)(v5 + 1);
      v5 = result;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
