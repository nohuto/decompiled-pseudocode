/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180149090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B428C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B44A8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, char a2, bool *a3)
{
  unsigned int v3; // ebx
  CIndirectSwapchainRenderTarget *v7; // rsi
  int Buffer; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax

  v3 = 0;
  *a3 = 0;
  if ( !*((_BYTE *)this + 224) )
    return v3;
  v7 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
  Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v3 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xDCu);
  }
  else
  {
    if ( *((_BYTE *)this + 224) && (*((_BYTE *)this + 392) & 8) == 0 )
    {
      LOBYTE(v9) = a2;
      v10 = COffScreenRenderTarget::Render(this, v9, a3);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE8u);
        goto LABEL_11;
      }
      *((_BYTE *)this + 392) |= 4u;
      v11 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(v7);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xECu);
        goto LABEL_11;
      }
    }
    *a3 = 1;
  }
LABEL_11:
  if ( v3 == -2003304307 )
    CIndirectSwapchainRenderTarget::Unregister(v7);
  return v3;
}
