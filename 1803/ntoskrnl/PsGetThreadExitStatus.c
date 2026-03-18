/*
 * XREFs of PsGetThreadExitStatus @ 0x140581B90
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return (NTSTATUS)Thread[1].Timer.Header.WaitListHead.Blink;
  ExReleaseRundownProtection(p_WaitStatus);
  return 259;
}
