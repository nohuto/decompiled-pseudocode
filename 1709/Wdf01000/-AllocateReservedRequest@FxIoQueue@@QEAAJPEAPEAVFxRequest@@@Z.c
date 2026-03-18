/*
 * XREFs of ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001A678
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001B918 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0037E90 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C007C0AC (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int _a1; // eax
  int v8; // esi
  FxRequest *v9; // rdi
  unsigned __int64 v11; // rdx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v14; // rbx
  int v15; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  *Request = 0LL;
  m_CxDeviceInfo = this->m_CxDeviceInfo;
  if ( m_CxDeviceInfo )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  _a1 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, 0LL, &pRequest);
  v8 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Au, WPP_FxIoQueue_cpp_Traceguids, _a1);
    return (unsigned int)v8;
  }
  v9 = pRequest;
  pRequest->m_Reserved = 1;
  v9->m_IoQueue = this;
  v9->m_ForwardProgressQueue = this;
  v9->m_Completed = 0;
  if ( this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method )
  {
    v9->m_Presented = 1;
    if ( v9->m_ObjectSize )
      v11 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    m_FwdProgContext = this->m_FwdProgContext;
    m_ObjectSize = this->m_ObjectSize;
    v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v14 = 0LL;
    v15 = m_FwdProgContext->m_IoReservedResourcesAllocate.Method((WDFQUEUE__ *)v14, (WDFREQUEST__ *)v11);
    v8 = v15;
    if ( v15 >= 0 )
      goto LABEL_6;
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x6Bu, WPP_FxIoQueue_cpp_Traceguids, v15);
    FxRequest::FreeRequest(v9);
  }
  if ( v8 >= 0 )
LABEL_6:
    *Request = v9;
  return (unsigned int)v8;
}
