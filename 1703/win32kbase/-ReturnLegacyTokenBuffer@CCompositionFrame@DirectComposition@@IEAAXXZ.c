/*
 * XREFs of ?ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ @ 0x1C0013604
 * Callers:
 *     ?Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0013678 (-Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0012FA4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0029CBC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 */

void __fastcall DirectComposition::CCompositionFrame::ReturnLegacyTokenBuffer(
        DirectComposition::CCompositionFrame *this)
{
  CTokenManager *v2; // rcx

  v2 = (CTokenManager *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v2, v2);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
}
