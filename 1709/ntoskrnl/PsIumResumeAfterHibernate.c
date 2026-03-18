/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14024F600
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1401F2608 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
