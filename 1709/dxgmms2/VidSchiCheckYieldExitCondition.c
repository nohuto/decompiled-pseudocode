/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0013194
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00130A0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00131E0 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(struct _VIDSCH_NODE *a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 1960) && (v5 = *((_QWORD *)a1 + 242)) != 0 && a2 > *((_QWORD *)a1 + 243) + v5 )
  {
    VidSchiStopNodeYield(a1);
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
}
