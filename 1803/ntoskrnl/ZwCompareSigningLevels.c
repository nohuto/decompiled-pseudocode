/*
 * XREFs of ZwCompareSigningLevels @ 0x1401A8800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstSigningLevel);
}
