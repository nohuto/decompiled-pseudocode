/*
 * XREFs of NtDelayExecution @ 0x14052DEA0
 * Callers:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Intervala; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)Interval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Intervala = *Interval;
  }
  else
  {
    Intervala = *Interval;
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Intervala);
}
