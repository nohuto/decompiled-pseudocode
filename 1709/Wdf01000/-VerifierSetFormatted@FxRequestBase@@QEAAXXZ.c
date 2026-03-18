/*
 * XREFs of ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0037A24
 * Callers:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002376C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfRequestFormatRequestUsingCurrentType @ 0x1C0037890 (imp_WdfRequestFormatRequestUsingCurrentType.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0089524 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C008FC80 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00941D8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007818C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

void __fastcall FxRequestBase::VerifierSetFormatted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerifierIO )
      FxRequestBase::SetVerifierFlags(this, 128);
  }
}
