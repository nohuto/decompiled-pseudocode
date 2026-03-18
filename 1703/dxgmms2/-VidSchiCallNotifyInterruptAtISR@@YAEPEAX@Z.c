/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002A9B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000AD40 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000B060 (VidSchiLogInterrupt.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(unsigned int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 4016);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 52), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a1[1], 0LL);
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 4016);
  return 1;
}
