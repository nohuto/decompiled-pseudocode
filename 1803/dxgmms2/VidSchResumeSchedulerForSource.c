/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C00BDF00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00BC34C (VidSchiResumeFlipQueues.c)
 */

void __fastcall VidSchResumeSchedulerForSource(__int64 a1, int a2)
{
  if ( a2 )
    VidSchiResumeFlipQueues(a1, a2);
}
