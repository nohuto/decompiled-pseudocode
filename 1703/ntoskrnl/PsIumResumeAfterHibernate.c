/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1401388EC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x1401ED798 (VslRegisterLogPages.c)
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
