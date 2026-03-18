/*
 * XREFs of HvlIsCoreSharingPossible @ 0x14017B2CC
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14017BD30 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x1407F6C58 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  return (HvlpFlags & 2) == 0 || (HvlpRootFlags & 0x400) != 0 || HvlpSchedulerType != 1 && HvlpSchedulerType != 3;
}
