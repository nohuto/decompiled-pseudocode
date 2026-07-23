/*
 * XREFs of PoSetSystemState @ 0x140241290
 * Callers:
 *     PoRegisterSystemState @ 0x1402411B0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
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
