/*
 * XREFs of ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C008D890
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089CE0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A810 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008DF5C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008E264 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C008EDCC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C008D944 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbPipeRequestContext::FxUsbPipeRequestContext(FxUsbPipeRequestContext *this, _FX_URB_TYPE FxUrbType)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x12u);
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  if ( FxUrbType )
    this->m_Urb = 0LL;
  else
    this->m_Urb = &this->m_UrbLegacy;
}
