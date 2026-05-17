/*
 * XREFs of RtlBackoff @ 0x1800697A0
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x180069730 (RtlTryAcquireSRWLockShared.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180075E00 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlBackoff(unsigned int *a1)
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
