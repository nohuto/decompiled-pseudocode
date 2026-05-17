/*
 * XREFs of sub_1800DF0F4 @ 0x1800DF0F4
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     RtlQueryWnfStateData @ 0x180081350 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AE0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_180104A98 @ 0x180104A98 (sub_180104A98.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

char *sub_1800DF0F4()
{
  char *result; // rax
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  char v3; // [rsp+48h] [rbp-31h] BYREF
  __int64 v4; // [rsp+50h] [rbp-29h]
  unsigned int v5; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    ZwQuerySystemInformation();
    v1 = ~(unsigned __int64)(v5 - 1);
    v2 = v1 & (*(unsigned int *)&NtCurrentTeb()->ReservedPad1 + v5 - 1LL);
    if ( v2 )
      v2 += v5;
    result = &v3;
    if ( v2 < 3 * v5 )
      v2 = 3 * v5;
    if ( ((unsigned __int64)&v3 & v1) - v2 >= v4 + (unsigned __int64)(17 * v5) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
