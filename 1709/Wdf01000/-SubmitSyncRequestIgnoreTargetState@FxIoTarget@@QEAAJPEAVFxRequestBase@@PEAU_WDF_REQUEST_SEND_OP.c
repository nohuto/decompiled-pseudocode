/*
 * XREFs of ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00889D0
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C008A810 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C008EDCC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0091484 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0094880 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSyncRequestIgnoreTargetState(
        FxIoTarget *this,
        FxRequest *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v6; // rax
  const void *_a1; // rdx
  _WDF_REQUEST_SEND_OPTIONS Options; // [rsp+30h] [rbp-18h] BYREF

  m_Globals = this->m_Globals;
  if ( RequestOptions )
  {
    v6 = HIDWORD(*(_QWORD *)&RequestOptions->Size);
    Options = *RequestOptions;
    if ( (v6 & 4) == 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x39u, WPP_FxIoTarget_cpp_Traceguids, _a1);
      }
      Options.Flags |= 4u;
    }
  }
  else
  {
    Options.Size = 16;
    Options.Flags = 4;
    Options.Timeout = 0LL;
  }
  return FxIoTarget::SubmitSync(this, Request, &Options, 0LL);
}
