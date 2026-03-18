/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00DF910
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E03A0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E0800 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpGetLastInputProcessTime(struct tagQ *const a1, int a2, unsigned int *a3, unsigned int *a4)
{
  if ( !a1 )
  {
    *a3 = 0;
LABEL_3:
    *a4 = 0;
    return;
  }
  *a3 = a2 - *((_DWORD *)a1 + 102);
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_3;
  *a4 = a2 - *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL);
}
