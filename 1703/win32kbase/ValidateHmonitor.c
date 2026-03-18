/*
 * XREFs of ValidateHmonitor @ 0x1C0028100
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ValidateHmonitor()
{
  return HMValidateSharedHandle();
}
