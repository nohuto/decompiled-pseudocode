/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x14043D8F0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 95) == 0 ? 0xC000010A : 0;
}
