/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8
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
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        __int64 a2,
        __int64 a3)
{
  if ( *((_BYTE *)this + 28) )
    DXGPROCESSMUTEXBYHANDLE::Release(this, a2, a3);
}
