/*
 * XREFs of sub_1800F7520 @ 0x1800F7520
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E71F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 *     sub_18010057C @ 0x18010057C (sub_18010057C.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_1800F7520()
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
