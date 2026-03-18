/*
 * XREFs of ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008DE10 (-CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbPipeTransferContext::CopyParameters(FxUsbPipeTransferContext *this, FxRequestBase *Request)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *m_Urb; // r8

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.PipeWrite.Length = m_Urb->TransferBufferLength;
  FxUsbRequestContext::CopyParameters(this, Request);
}
