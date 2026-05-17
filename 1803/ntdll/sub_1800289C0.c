/*
 * XREFs of sub_1800289C0 @ 0x1800289C0
 * Callers:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 *     sub_18007C99C @ 0x18007C99C (sub_18007C99C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800289C0(unsigned int *a1)
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
