/*
 * XREFs of PoSetUserPresent @ 0x14016DAE0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopSetSystemState @ 0x14016DB24 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(a1);
  result = PopSetSystemState(4LL, v1);
  if ( CurrentIrql < 2u )
    return PopReleasePolicyLock();
  return result;
}
