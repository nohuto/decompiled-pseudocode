/*
 * XREFs of imp_WdfIoQueueGetState @ 0x1C0002BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned int *QueueCount,
        unsigned int *DriverCount)
{
  __int64 Offset; // r8
  FxIoQueue *v7; // rcx
  unsigned int m_DriverIoCount; // r8d
  unsigned int m_RequestCount; // edx
  __int64 result; // rax
  FxIoQueue *pQueue; // [rsp+30h] [rbp-18h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v7 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxIoQueue *)((char *)v7 - Offset);
  }
  if ( v7->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v7 = pQueue;
  }
  m_DriverIoCount = v7->m_DriverIoCount;
  m_RequestCount = v7->m_Queue.m_RequestCount;
  if ( QueueCount )
    *QueueCount = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  result = pQueue->m_QueueState & 3;
  if ( !m_RequestCount )
    result = (unsigned int)result | 4;
  if ( !m_DriverIoCount )
    result = (unsigned int)result | 8;
  if ( pQueue->m_PowerManaged )
  {
    if ( pQueue->m_PowerState != FxIoQueuePowerOn )
      return (unsigned int)result | 0x10;
  }
  return result;
}
