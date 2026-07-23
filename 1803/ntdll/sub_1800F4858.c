/*
 * XREFs of sub_1800F4858 @ 0x1800F4858
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E1EC0 (RtlQueryCriticalSectionOwner.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 *     sub_1800FF090 @ 0x1800FF090 (sub_1800FF090.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_1800F4858()
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
