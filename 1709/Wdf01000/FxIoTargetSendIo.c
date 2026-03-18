/*
 * XREFs of FxIoTargetSendIo @ 0x1C00867C0
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1C00877D0 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x1C0087820 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0012824 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0024520 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00640B8 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00641E0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0065430 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00654C8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C007809C (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     WPP_IFR_SF_qqD @ 0x1C0086A2C (WPP_IFR_SF_qqD.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0089524 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  int v14; // ebx
  FxRequestBase *v15; // r8
  int v16; // eax
  _WDF_MEMORY_DESCRIPTOR *v17; // rsi
  int v18; // eax
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int64 v20; // rax
  FxFileObject *_a3; // [rsp+30h] [rbp-D8h]
  FxRequestBuffer ioBuf; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h]
  FxSyncRequest v25; // [rsp+68h] [rbp-A0h] BYREF
  FxIoContext Context; // [rsp+198h] [rbp+90h] BYREF
  FxIoTarget *pTarget; // [rsp+278h] [rbp+170h] BYREF

  *(_OWORD *)&ioBuf.u.RefMdl.Offsets = 0uLL;
  LODWORD(ioBuf.u.Memory.Memory) = 0;
  v24 = 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&Context);
  FxSyncRequest::FxSyncRequest(&v25, m_Globals, &Context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v12, v13, 0x1Cu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, MajorCode);
  v14 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v14 >= 0 )
  {
    v16 = FxValidateRequestOptions(m_Globals, RequestOptions, v15);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v17 = IoBuffer;
      if ( IoBuffer
        && (v18 = FxRequestBuffer::ValidateMemoryDescriptor((FxRequestBuffer *)&ioBuf.u, m_Globals, IoBuffer, 0),
            v14 = v18,
            v18 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v17, v18);
      }
      else
      {
        v14 = FxIoTarget::FormatIoRequest(
                pTarget,
                v25.m_TrueRequest,
                MajorCode,
                (FxRequestBuffer *)&ioBuf.u,
                DeviceOffset,
                _a3);
        if ( v14 < 0 )
        {
          WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, MajorCode, v14);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            m_TrueRequest = v25.m_TrueRequest;
            if ( v25.m_TrueRequest->m_ObjectSize )
              v20 = (unsigned __int64)v25.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
            else
              v20 = 0LL;
            if ( v20 )
              m_TrueRequest = (FxRequestBase *)v20;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, m_TrueRequest);
          }
          v14 = FxIoTarget::SubmitSync(pTarget, (FxRequest *)v25.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesReturned )
            *BytesReturned = v25.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v16);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v25);
  FxIoContext::~FxIoContext(&Context);
  return (unsigned int)v14;
}
