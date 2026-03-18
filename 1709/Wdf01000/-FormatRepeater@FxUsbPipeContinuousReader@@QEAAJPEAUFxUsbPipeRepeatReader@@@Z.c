/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008E0D8
 * Callers:
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008D024 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C008E7F0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C008EE9C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0010AB0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00246B0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C008D29C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008DE38 (-DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  FxRequestContext *v5; // rax
  IFxMemory *v7; // rdi
  size_t v8; // rbx
  void *v9; // rax
  IFxMemory *v10; // rdx
  int v11; // ebx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int64 v13; // rax
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+90h] [rbp+30h] BYREF

  Request = Repeater->Request;
  memset(&buf.u, 0, sizeof(buf.u));
  buf.DataType = FxRequestBufferUnspecified;
  FxUsbPipeContinuousReader::DeleteMemory(this, Request);
  *(_QWORD *)&params.Size = 24LL;
  *(&params.Status + 1) = 0;
  params.Status = -1073741637;
  params.NewIrp = 0LL;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) >= 0 )
  {
    v7 = &pMemory->IFxMemory;
    v8 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v9 = (void *)v7->GetBuffer(v7);
    memset(v9, 0, v8);
    if ( pMemory )
      v10 = &pMemory->IFxMemory;
    else
      v10 = 0LL;
    FxRequestBuffer::SetMemory(&buf, v10, &this->m_Offsets);
    v11 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v11 >= 0 )
    {
      m_RequestContext = Request->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
      HIDWORD(m_RequestContext[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v13 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v13 = 0LL;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = v13;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    else if ( !Request->m_RequestContext )
    {
      FxObject::DeleteFromFailedCreate(pMemory);
    }
    return (unsigned int)v11;
  }
  else
  {
    v5 = Request->m_RequestContext;
    if ( v5 )
      v5->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
}
