/*
 * XREFs of ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N0@Z @ 0x1801597D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180159850 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015A00C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::PostPresent(CIndirectSwapchainRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v4; // rcx
  int Buffer; // eax
  int v6; // eax

  v2 = 0;
  if ( a2 )
  {
    v4 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    if ( *((_BYTE *)v4 + 512) || *((_BYTE *)v4 + 513) )
    {
      if ( *((_QWORD *)this + 58)
        || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v4), v2 = Buffer, Buffer >= 0) )
      {
        v6 = CIndirectSwapchainRenderTarget::Present(this, 0, 0);
        v2 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x134u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Buffer, 0x12Fu);
      }
    }
  }
  return v2;
}
