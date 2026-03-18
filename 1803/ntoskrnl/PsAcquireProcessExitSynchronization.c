/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1405614E0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 95) == 0 ? 0xC000010A : 0;
}
