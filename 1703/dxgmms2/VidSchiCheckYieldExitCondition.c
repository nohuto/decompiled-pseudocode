/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C0011E18
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0011E64 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(struct _VIDSCH_NODE *a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 1944) && (v5 = *((_QWORD *)a1 + 240)) != 0 && a2 > *((_QWORD *)a1 + 241) + v5 )
  {
    VidSchiStopNodeYield(a1);
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
}
