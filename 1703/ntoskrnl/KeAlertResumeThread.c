/*
 * XREFs of KeAlertResumeThread @ 0x1401FCAB8
 * Callers:
 *     NtAlertResumeThread @ 0x1406E3FCC (NtAlertResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x1400256A4 (KeResumeThread.c)
 *     KeAlertThread @ 0x1401201B0 (KeAlertThread.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeAlertThread(a1, 0);
  result = KeResumeThread(a1);
  __writecr8(CurrentIrql);
  return result;
}
