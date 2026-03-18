/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18013857C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18014A10C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  signed int updated; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _OWORD *v8; // rdi
  __int128 v9; // xmm0
  _OWORD *v10; // rdi
  unsigned int v12; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 37) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((enum DXGI_FORMAT *)a3 + 5));
  v6 = updated;
  if ( updated < 0 )
  {
    v12 = 87;
    goto LABEL_7;
  }
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 6);
  v7 = *((_DWORD *)a3 + 7);
  v8 = (_OWORD *)((char *)a3 + 16);
  *((_DWORD *)this + 77) = v7;
  if ( *(_DWORD *)v8 <= 6u )
  {
    *(_OWORD *)((char *)this + 344) = *v8;
    *(_OWORD *)((char *)this + 360) = v8[1];
    *(_OWORD *)((char *)this + 376) = v8[2];
    *(_OWORD *)((char *)this + 392) = v8[3];
    *(_OWORD *)((char *)this + 408) = v8[4];
    *(_OWORD *)((char *)this + 424) = v8[5];
    *(_OWORD *)((char *)this + 440) = v8[6];
    v9 = v8[7];
    v10 = v8 + 8;
    *(_OWORD *)((char *)this + 456) = v9;
    *(_OWORD *)((char *)this + 472) = *v10;
    *(_OWORD *)((char *)this + 488) = v10[1];
    *(_OWORD *)((char *)this + 504) = v10[2];
    *(_OWORD *)((char *)this + 520) = v10[3];
    *(_OWORD *)((char *)this + 536) = v10[4];
    updated = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), this);
    v6 = updated;
    if ( updated >= 0 )
      return v6;
    v12 = 99;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, v12);
    return v6;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x5Eu);
  return v6;
}
