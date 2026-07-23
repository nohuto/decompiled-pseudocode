/*
 * XREFs of PoSetSystemState @ 0x1402787A0
 * Callers:
 *     PoRegisterSystemState @ 0x1402786C0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14016DB24 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(Flags);
  PopSetSystemState(Flags, 7u);
  if ( CurrentIrql < 2u )
    PopReleasePolicyLock();
}
