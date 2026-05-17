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

char *__fastcall RtlCommitDebugInfo_0(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF
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
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v6, 4096, 4) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
