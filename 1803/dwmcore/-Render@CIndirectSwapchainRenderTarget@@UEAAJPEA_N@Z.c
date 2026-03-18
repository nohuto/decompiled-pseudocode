/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180159DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801595E4 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015A00C (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v5; // rbp
  int Buffer; // eax
  int v7; // eax
  int v8; // eax

  v2 = 0;
  *a2 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v5 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
    v2 = Buffer;
    if ( Buffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Buffer, 0xE4u);
    }
    else if ( *((_BYTE *)this + 202) && *((_QWORD *)this + 58) )
    {
      v7 = COffScreenRenderTarget::Render(this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xF0u);
      }
      else
      {
        *((_BYTE *)this + 450) = 1;
        v8 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v5);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF4u);
        else
          *a2 = 1;
      }
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(v5);
  }
  return v2;
}
