/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1401B4470
 * Callers:
 *     HviCopyMemory @ 0x140294178 (HviCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
