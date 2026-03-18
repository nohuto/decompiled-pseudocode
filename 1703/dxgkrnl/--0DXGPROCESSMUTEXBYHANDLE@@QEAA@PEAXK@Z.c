/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C009AE30 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatistics @ 0x1C017D700 (DxgkQueryStatistics.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C017F8F0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01A2B00 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01A3910 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        int a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 30) = 0;
  result = this;
  *((_DWORD *)this + 6) = a3;
  return result;
}
