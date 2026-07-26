/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0012D20
 * Callers:
 *     ndisInterruptDpc @ 0x1C0003D80 (ndisInterruptDpc.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006B164 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006B250 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C0098DF8 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0 = DueTime;
    if ( !DueTime.QuadPart )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C0098DF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C0098DF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
