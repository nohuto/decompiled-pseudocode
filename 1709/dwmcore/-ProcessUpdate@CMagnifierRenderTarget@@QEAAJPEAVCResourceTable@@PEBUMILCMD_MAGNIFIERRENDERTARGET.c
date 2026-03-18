/*
 * XREFs of ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180138884
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180138D20 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18014A10C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessUpdate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET *a3)
{
  _OWORD *v3; // rdi
  unsigned int v6; // ebx
  signed int updated; // eax
  _OWORD *v8; // rdi

  v3 = (_OWORD *)((char *)this + 344);
  if ( *((_DWORD *)this + 86) <= 6u )
  {
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x31u);
    }
    else
    {
      *((_DWORD *)this + 76) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 77) = *((_DWORD *)a3 + 5);
      *v3 = *(_OWORD *)((char *)a3 + 8);
      v3[1] = *(_OWORD *)((char *)a3 + 24);
      v3[2] = *(_OWORD *)((char *)a3 + 40);
      v3[3] = *(_OWORD *)((char *)a3 + 56);
      v3[4] = *(_OWORD *)((char *)a3 + 72);
      v3[5] = *(_OWORD *)((char *)a3 + 88);
      v3[6] = *(_OWORD *)((char *)a3 + 104);
      v8 = v3 + 8;
      *(v8 - 1) = *(_OWORD *)((char *)a3 + 120);
      *v8 = *(_OWORD *)((char *)a3 + 136);
      v8[1] = *(_OWORD *)((char *)a3 + 152);
      v8[2] = *(_OWORD *)((char *)a3 + 168);
      v8[3] = *(_OWORD *)((char *)a3 + 184);
      v8[4] = *(_OWORD *)((char *)a3 + 200);
      CMagnifierRenderTarget::StopSlicer(this);
      *((_DWORD *)this + 154) = 0;
      *((_DWORD *)this + 160) = 0;
      COffScreenRenderTarget::ReleaseRenderTargets(this);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x2Eu);
  }
  return v6;
}
