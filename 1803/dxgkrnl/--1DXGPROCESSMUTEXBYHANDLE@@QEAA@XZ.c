/*
 * XREFs of ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00D2C90 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C010F9D0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C01B8670 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01B88D0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01B8C80 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01B97B0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C01BA380 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 36) )
    DXGPROCESSMUTEXBYHANDLE::Release(this);
}
