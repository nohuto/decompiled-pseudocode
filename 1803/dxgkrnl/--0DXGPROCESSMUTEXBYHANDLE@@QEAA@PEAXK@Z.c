/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4
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
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 18) = 0;
  *((_BYTE *)this + 38) = 0;
  result = this;
  *((_DWORD *)this + 8) = a3;
  return result;
}
