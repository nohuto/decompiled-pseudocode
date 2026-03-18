/*
 * XREFs of ExpIoPoolDeadlockWorker @ 0x1407C5540
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x140712560 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpIoPoolDeadlockWorker(int *a1)
{
  return DbgkWerCaptureLiveKernelDump(L"IoThreadpool", 453, *a1, *((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, 0LL, 0);
}
