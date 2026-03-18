/*
 * XREFs of VidSchiWorkerThread @ 0x1C0076620
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSetSchedulerStatus @ 0x1C00769DC (VidSchiSetSchedulerStatus.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  __int64 v2; // rcx

  StartContext[18] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 15LL);
  v2 = StartContext[2];
  *((_DWORD *)StartContext + 49) = 15;
  DpiSetSchedulerCallbackState(*(_QWORD *)(v2 + 192), 3LL);
  StartContext[178] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 175, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable(StartContext);
}
