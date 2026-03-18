/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0013234
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0013140 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013280 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(struct _VIDSCH_NODE *a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 1992) && (v5 = *((_QWORD *)a1 + 246)) != 0 && a2 > *((_QWORD *)a1 + 247) + v5 )
  {
    VidSchiStopNodeYield(a1);
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
}
