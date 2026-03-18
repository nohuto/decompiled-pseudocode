/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180137420
 * Callers:
 *     ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z @ 0x180137350 (-PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013782C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x10Bu);
  }
  else if ( (*((_BYTE *)this + 392) & 8) != 0 )
  {
    return 142213130;
  }
  return v3;
}
