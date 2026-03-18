/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00A05B0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0103F08 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01B4664 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E8C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::FinishCommand(BLTQUEUE *this, int a2)
{
  *((_DWORD *)this + 108) = a2;
  *((LARGE_INTEGER *)this + 91) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 376), 0, 0);
}
