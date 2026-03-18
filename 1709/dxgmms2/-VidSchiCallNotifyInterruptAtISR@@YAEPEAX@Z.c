/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002C4B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000C340 (VidSchiLogInterrupt.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(unsigned int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, a3, 4016);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 64), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (__int64)a1[1], 0LL);
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, (__int64)&EventProfilerExit, v5, 4016);
  return 1;
}
