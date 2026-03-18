/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C007F5B0
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C007EB84 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C007F4AC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0105A38 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::FinishCommand(BLTQUEUE *this, int a2)
{
  *((_DWORD *)this + 108) = a2;
  *((LARGE_INTEGER *)this + 91) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 376), 0, 0);
}
