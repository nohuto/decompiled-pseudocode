/*
 * XREFs of sub_1800D8968 @ 0x1800D8968
 * Callers:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     RtlQueryWnfStateData @ 0x18007C1B0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180081FA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_180106D08 @ 0x180106D08 (sub_180106D08.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

char *sub_1800D8968()
{
  char *result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // [rsp+48h] [rbp-31h] BYREF
  __int64 v5; // [rsp+50h] [rbp-29h]
  unsigned int v6; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    ZwQuerySystemInformation();
    v1 = ~(unsigned __int64)(v6 - 1);
    v2 = v1 & (*(unsigned int *)&NtCurrentTeb()->ReservedPad1 + v6 - 1LL);
    if ( v2 )
      v2 += v6;
    v3 = 3 * v6;
    if ( v2 < v3 )
      v2 = (unsigned int)v3;
    result = &v4;
    if ( ((unsigned __int64)&v4 & v1) - v2 >= v5 + (unsigned __int64)(17 * v6) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
