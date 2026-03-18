/*
 * XREFs of ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200
 * Callers:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180080178 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18008FD08 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x1801B79F0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801B7AA0 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801D2828 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801D3DF4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180082270 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x18008233C (--0CD3DTexture@@IEAA@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateFromTexture(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        bool a3,
        struct CD3DDeviceLevel1 *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DTexture *v9; // rax
  CD3DTexture *v10; // rbx
  signed int v11; // eax
  DWORD v12; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]

  *a5 = 0LL;
  v9 = (CD3DTexture *)HeapAlloc(WPF::g_processHeap, 0, 0x100uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CD3DTexture::CD3DTexture(v9, a3);
  *((_QWORD *)v10 + 30) = 0LL;
  *((_QWORD *)v10 + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v10 = &CD3DVidMemOnlyTexture::`vftable'{for `CMILPoolResource'};
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  v11 = CD3DTexture::Init(v10, (struct CD3DDeviceLevel1 *)((char *)a4 + 896), a1, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x10Eu);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xCEu);
    CMILPoolResource::Release(v10);
  }
  else
  {
    *a5 = v10;
  }
  return v12;
}
