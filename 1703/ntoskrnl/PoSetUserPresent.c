/*
 * XREFs of PoSetUserPresent @ 0x14014ABB0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopSetSystemState @ 0x14014ABF4 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(unsigned int a1)
{
  char v2; // bl
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  result = PopSetSystemState(4LL, a1);
  if ( v2 )
    return PopReleasePolicyLock(v5, v4, v6);
  return result;
}
