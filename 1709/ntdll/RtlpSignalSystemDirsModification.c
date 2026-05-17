/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800DE8E4
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180088670 (RtlpInvalidatePathCache.c)
 */

signed __int64 __fastcall RtlpSignalSystemDirsModification(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v5 = RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v6 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v6 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
