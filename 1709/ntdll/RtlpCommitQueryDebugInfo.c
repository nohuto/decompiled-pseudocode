/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x180017914
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180016FC4 (RtlQueryProcessModuleInformation.c)
 *     RtlCommitDebugInfo @ 0x1800D8490 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D84B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D8640 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8A20 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8E54 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D91F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800D9820 (RtlpWalkCallbackRoutine.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB4E4 (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  ULONG_PTR v6; // [rsp+50h] [rbp+18h] BYREF
  char *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9] + ((a2 + 7) & 0xFFFFFFF8);
    v4 = a1[10];
    if ( v3 <= v4 )
    {
LABEL_6:
      result = (char *)a1 + a1[9];
      a1[9] = v3;
      return result;
    }
    if ( v3 < a1[11] )
    {
      v7 = (char *)a1 + v4;
      v6 = v3 - v4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v7, 0LL, &v6, 0x1000u, 4u) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
