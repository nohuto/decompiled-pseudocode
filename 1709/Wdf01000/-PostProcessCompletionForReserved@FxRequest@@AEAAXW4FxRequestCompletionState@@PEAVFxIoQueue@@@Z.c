/*
 * XREFs of ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C14C
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0063FFC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00648C8 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletionForReserved(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  if ( State )
  {
    if ( (State & 0x80u) == 0 )
      FxIoQueue::RequestCompletedCallback(Queue, this, (unsigned __int8)Queue);
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 960, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  this->Release(this, (void *)1348761414, 963, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
