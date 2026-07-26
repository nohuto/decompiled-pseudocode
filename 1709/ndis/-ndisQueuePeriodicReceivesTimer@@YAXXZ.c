/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0023A14
 * Callers:
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0023888 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006A864 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006A950 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C0097F38 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0 = DueTime;
    if ( !DueTime.QuadPart )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C0097F30 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C0097F30 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
