/*
 * XREFs of ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0090B60
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C008DE10 (-CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::CopyParameters(FxUsbDeviceControlContext *this, FxRequestBase *Request)
{
  _URB_CONTROL_TRANSFER *m_Urb; // r8

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.DeviceControlTransfer.Length = m_Urb->TransferBufferLength;
  FxUsbRequestContext::CopyParameters(this, Request);
}
