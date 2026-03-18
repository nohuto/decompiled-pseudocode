/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00F18E0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C00FEAB0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatistics @ 0x1C01810E0 (DxgkQueryStatistics.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01839B0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkGetProcessDeviceLostSupport @ 0x1C01BA4A0 (DxgkGetProcessDeviceLostSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01BA6D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01BAA50 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01BAF20 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01BB8B0 (DxgkTrimProcessCommitment.c)
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
