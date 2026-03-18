/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEA_N@Z @ 0x180137960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18013715C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180137B88 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTarget *v5; // rbp
  signed int Buffer; // eax
  signed int v7; // eax
  signed int v8; // eax

  v2 = 0;
  *a2 = 0;
  if ( !*((_BYTE *)this + 146) )
    return v2;
  v5 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
  Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v2 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Buffer, 0xD9u);
  }
  else
  {
    if ( *((_BYTE *)this + 146) && (*((_BYTE *)this + 392) & 8) == 0 )
    {
      v7 = COffScreenRenderTarget::Render(this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xE5u);
        goto LABEL_11;
      }
      *((_BYTE *)this + 392) |= 4u;
      v8 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v5);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xE9u);
        goto LABEL_11;
      }
    }
    *a2 = 1;
  }
LABEL_11:
  if ( v2 == -2003304307 )
    CIndirectSwapchainRenderTarget::Unregister(v5);
  return v2;
}
