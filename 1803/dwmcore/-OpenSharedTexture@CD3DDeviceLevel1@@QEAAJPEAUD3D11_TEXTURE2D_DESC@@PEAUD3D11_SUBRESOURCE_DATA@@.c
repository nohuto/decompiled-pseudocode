/*
 * XREFs of ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180074C24
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180088DA0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801EDE60 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenSharedTexture(
        CD3DDeviceLevel1 *this,
        struct D3D11_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void *a4,
        bool a5,
        struct ID3D11Texture2D **a6)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &OPEN_SHARED_TEXTURE_EVENT_Start, a4);
  v9 = (__int64 *)*((_QWORD *)this + 81);
  v10 = *v9;
  if ( a5 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 384))(
            v9,
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v12 = v11;
    if ( v11 >= 0 )
    {
LABEL_5:
      ((void (__fastcall *)(_QWORD, struct D3D11_TEXTURE2D_DESC *))(*a6)->lpVtbl->GetDesc)(*a6, a2);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7B5u);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 224))(
            v9,
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v12 = v14;
    if ( v14 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7BBu);
  }
LABEL_6:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &OPEN_SHARED_TEXTURE_EVENT_Stop);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v12, 7LL);
}
