/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@3@Z @ 0x1801E6B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x1801E0248 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801E11AC (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        CHwTextureRenderTarget *this,
        struct ID3D11Texture2D *a2,
        int a3,
        unsigned int a4,
        bool a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v12; // eax
  unsigned int v13; // ebx
  CD3DTexture *v14; // rcx
  CD3DDeviceLevel1 *v15; // rbx
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  int v17; // eax
  struct ID3D11Resource *v19; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v20[12]; // [rsp+68h] [rbp-70h] BYREF

  lpVtbl = a2->lpVtbl;
  v19 = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *, unsigned int *))lpVtbl->GetDesc)(a2, v20);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x29Bu);
  }
  else
  {
    v14 = (CD3DTexture *)*((_QWORD *)this + 4);
    v15 = *(CD3DDeviceLevel1 **)(*((_QWORD *)v14 + 2) + 80LL);
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(v14);
    v17 = CD3DDeviceLevel1::VideoProcessorBlt(
            v15,
            v19,
            a3,
            a4,
            v20[0],
            v20[1],
            a5,
            a6,
            D3D11ResourceNoRef,
            *((_DWORD *)this - 52),
            *((_DWORD *)this - 51),
            a7);
    v13 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2A7u);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v19);
  return v13;
}
