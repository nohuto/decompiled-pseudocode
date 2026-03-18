/*
 * XREFs of KeAlertResumeThread @ 0x14023FD80
 * Callers:
 *     NtAlertResumeThread @ 0x14077E33C (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     KeResumeThread @ 0x1400BD808 (KeResumeThread.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeAlertThread(a1, 0LL);
  result = KeResumeThread(a1);
  __writecr8(CurrentIrql);
  return result;
}
