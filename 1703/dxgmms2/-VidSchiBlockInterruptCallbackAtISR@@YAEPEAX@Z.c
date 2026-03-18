/*
 * XREFs of ?VidSchiBlockInterruptCallbackAtISR@@YAEPEAX@Z @ 0x1C002A980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchiBlockInterruptCallbackAtISR(_QWORD *a1)
{
  DpiSetSchedulerCallbackState(*(_QWORD *)(a1[2] + 192LL), 1LL);
  return 1;
}
