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

char *__fastcall RtlCommitDebugInfo_0(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  char *v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 7) & 0xFFFFFFF8);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v8 = (char *)a1 + v4;
      v7 = v5 - v4;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v8, 0LL, &v7, 4096, 4) >= 0 )
      {
        a1[10] += v7;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
