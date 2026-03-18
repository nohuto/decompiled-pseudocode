/*
 * XREFs of PoSetUserPresent @ 0x14015B530
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(a1, a2);
  result = PopSetSystemState(4LL, v2);
  if ( CurrentIrql < 2u )
    return PopReleasePolicyLock();
  return result;
}
