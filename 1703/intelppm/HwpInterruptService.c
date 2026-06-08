/*
 * XREFs of HwpInterruptService @ 0x1C0006C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HwpInterruptService()
{
  unsigned __int64 v0; // rax

  v0 = __readmsr(0x777u);
  __writemsr(0x777u, v0 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v0 & 1) != 0 )
    KeInsertQueueDpc(
      (PRKDPC)(*(_QWORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + KeGetPcr()->Prcb.Number) + 240LL)
             + 288LL),
      0LL,
      0LL);
  return 1;
}
