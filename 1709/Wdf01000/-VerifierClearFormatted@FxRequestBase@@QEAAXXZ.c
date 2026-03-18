/*
 * XREFs of ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C00643E4
 * Callers:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006140 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0064414 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 * Callees:
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007C068 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierClearFormatted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::ClearVerifierFlags(this, 128);
  }
}
