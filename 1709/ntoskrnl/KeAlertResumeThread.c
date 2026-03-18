/*
 * XREFs of KeAlertResumeThread @ 0x140202738
 * Callers:
 *     NtAlertResumeThread @ 0x14071A93C (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     KeResumeThread @ 0x14011CDF8 (KeResumeThread.c)
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
