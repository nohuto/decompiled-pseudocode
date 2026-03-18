/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180149030
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B43CC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x10Fu);
  }
  else if ( (*((_BYTE *)this + 392) & 8) != 0 )
  {
    return 142213130;
  }
  return v3;
}
