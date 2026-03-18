/*
 * XREFs of VidSchiWorkerThread @ 0x1C0081F30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSetSchedulerStatus @ 0x1C00821A0 (VidSchiSetSchedulerStatus.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  __int64 v2; // rcx

  StartContext[18] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  v2 = StartContext[2];
  *((_DWORD *)StartContext + 49) = 16;
  DpiSetSchedulerCallbackState(*(_QWORD *)(v2 + 192), 3LL);
  StartContext[181] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 178, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable(StartContext);
}
