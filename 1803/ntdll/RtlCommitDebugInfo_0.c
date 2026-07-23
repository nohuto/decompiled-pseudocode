/*
 * XREFs of RtlCommitDebugInfo_0 @ 0x180077EAC
 * Callers:
 *     sub_180077744 @ 0x180077744 (sub_180077744.c)
 *     RtlCommitDebugInfo @ 0x1800D2600 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D2620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D2FD8 @ 0x1800D2FD8 (sub_1800D2FD8.c)
 *     sub_1800D3390 @ 0x1800D3390 (sub_1800D3390.c)
 *     sub_1800D39D0 @ 0x1800D39D0 (sub_1800D39D0.c)
 *     sub_1800D56BC @ 0x1800D56BC (sub_1800D56BC.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 */

PVOID __cdecl RtlCommitDebugInfo_0(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  SIZE_T OffsetFree; // rax
  SIZE_T CommitSize; // rcx
  SIZE_T v5; // rdi
  ULONG_PTR v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Size <= 0xFFFFFFF8 )
  {
    OffsetFree = Buffer->OffsetFree;
    CommitSize = Buffer->CommitSize;
    v5 = OffsetFree + (((_DWORD)Size + 7) & 0xFFFFFFF8);
    if ( v5 <= CommitSize )
    {
LABEL_6:
      Buffer->OffsetFree = v5;
      return (char *)Buffer + OffsetFree;
    }
    if ( v5 < Buffer->ViewSize )
    {
      v8 = (char *)Buffer + CommitSize;
      v7 = v5 - CommitSize;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, 0LL, &v7, 0x1000u, 4u) >= 0 )
      {
        Buffer->CommitSize += v7;
        OffsetFree = Buffer->OffsetFree;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
