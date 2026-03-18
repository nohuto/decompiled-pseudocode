/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@0II2@Z @ 0x180197840
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2@Z @ 0x18019C130 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x1801967C8 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        const struct tagRECT *a7,
        struct ID3D11Resource *a8,
        unsigned int a9,
        unsigned int a10,
        const struct tagRECT *a11)
{
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v23; // [rsp+20h] [rbp-D1h]
  __int64 v24; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A9h] BYREF
  const struct tagRECT *v26; // [rsp+50h] [rbp-A1h]
  _QWORD v27[3]; // [rsp+58h] [rbp-99h] BYREF
  _DWORD v28[8]; // [rsp+70h] [rbp-81h] BYREF
  __int64 v29; // [rsp+90h] [rbp-61h]
  __int64 v30; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-29h]
  __int64 v32; // [rsp+D0h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp-19h]
  unsigned int v34; // [rsp+DCh] [rbp-15h]

  v26 = a11;
  v25 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v27[0] = 0LL;
  v27[1] = 0LL;
  memset_0(v28, 0, 0x48uLL);
  v33 = a9;
  v34 = a10;
  v32 = 0LL;
  v15 = CD3DDeviceLevel1::EnsureVideoProcessor(this, a5, a6, a9, a10);
  v16 = v15;
  if ( v15 < 0 )
  {
    v23 = 2500;
    goto LABEL_9;
  }
  v17 = *((_QWORD *)this + 82);
  HIDWORD(v30) = 1;
  HIDWORD(v31) = a3;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v25);
  v15 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v17 + 64LL))(
          v17,
          a2,
          *((_QWORD *)this + 84),
          &v30,
          &v25);
  v16 = v15;
  if ( v15 < 0 )
  {
    v23 = 2508;
    goto LABEL_9;
  }
  v18 = *((_QWORD *)this + 82);
  LODWORD(v27[0]) = 1;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v24);
  v19 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)v18 + 72LL))(
          v18,
          a8,
          *((_QWORD *)this + 84),
          v27,
          &v24);
  v16 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x9D3u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 83) + 240LL))(
      *((_QWORD *)this + 83),
      *((_QWORD *)this + 85),
      0LL,
      1LL,
      a7);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 83) + 248LL))(
      *((_QWORD *)this + 83),
      *((_QWORD *)this + 85),
      0LL,
      1LL,
      v26);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 83) + 104LL))(
      *((_QWORD *)this + 83),
      *((_QWORD *)this + 85),
      1LL,
      &v32);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 83) + 592LL))(
      *((_QWORD *)this + 83),
      *((_QWORD *)this + 85),
      0LL,
      a4);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 83) + 296LL))(
      *((_QWORD *)this + 83),
      *((_QWORD *)this + 85),
      0LL,
      0LL);
    v20 = *((_QWORD *)this + 83);
    v29 = v25;
    v21 = *((_QWORD *)this + 85);
    v28[0] = 1;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v20 + 424LL))(
            v20,
            v21,
            v24,
            0LL,
            1,
            v28);
    v16 = v15;
    if ( v15 < 0 )
    {
      v23 = 2546;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v23);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v25);
  return v16;
}
