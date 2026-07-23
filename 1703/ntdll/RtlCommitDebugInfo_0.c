/*
 * XREFs of RtlCommitDebugInfo_0 @ 0x1800682D4
 * Callers:
 *     sub_180067988 @ 0x180067988 (sub_180067988.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     sub_1800953D0 @ 0x1800953D0 (sub_1800953D0.c)
 *     sub_1800955A0 @ 0x1800955A0 (sub_1800955A0.c)
 *     RtlCommitDebugInfo @ 0x1800D9600 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800D9C04 @ 0x1800D9C04 (sub_1800D9C04.c)
 *     sub_1800DBEFC @ 0x1800DBEFC (sub_1800DBEFC.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 */

PVOID __cdecl RtlCommitDebugInfo_0(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  SIZE_T v3; // rdi
  SIZE_T CommitSize; // rcx
  PVOID result; // rax
  ULONG_PTR v6; // [rsp+50h] [rbp+18h] BYREF
  char *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)Size <= 0xFFFFFFF8 )
  {
    v3 = Buffer->OffsetFree + (((_DWORD)Size + 7) & 0xFFFFFFF8);
    CommitSize = Buffer->CommitSize;
    if ( v3 <= CommitSize )
    {
LABEL_6:
      result = (char *)Buffer + Buffer->OffsetFree;
      Buffer->OffsetFree = v3;
      return result;
    }
    if ( v3 < Buffer->ViewSize )
    {
      v7 = (char *)Buffer + CommitSize;
      v6 = v3 - CommitSize;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v7, 0LL, &v6, 0x1000u, 4u) >= 0 )
      {
        Buffer->CommitSize += v6;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
