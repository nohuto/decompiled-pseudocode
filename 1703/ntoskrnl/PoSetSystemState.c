/*
 * XREFs of PoSetSystemState @ 0x14022DCB0
 * Callers:
 *     PoRegisterSystemState @ 0x14022DBD0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x14014ABF4 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock(Flags);
    v2 = 1;
  }
  PopSetSystemState(Flags, 7u);
  if ( v2 )
    PopReleasePolicyLock(v4, v3, v5);
}
