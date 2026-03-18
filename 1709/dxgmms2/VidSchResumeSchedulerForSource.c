/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C00B51F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 */

void __fastcall VidSchResumeSchedulerForSource(struct _VIDSCH_GLOBAL *a1, int a2)
{
  if ( a2 )
    VidSchiResumeFlipQueues(a1, a2);
}
