/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801E11AC
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@3@Z @ 0x1801E6B20 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x1801DFD68 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        const struct tagRECT *a8,
        struct ID3D11Resource *a9,
        unsigned int a10,
        unsigned int a11,
        const struct tagRECT *a12)
{
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  const struct tagRECT *v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v31[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  _QWORD v33[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 v37; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+F8h] [rbp-8h]
  unsigned int v39; // [rsp+FCh] [rbp-4h]

  v27 = a12;
  v29 = 0LL;
  v28 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v30[0] = 0LL;
  v30[1] = 0LL;
  memset_0(v31, 0, 0x48uLL);
  v38 = a10;
  v39 = a11;
  v37 = 0LL;
  v16 = CD3DDeviceLevel1::EnsureVideoProcessor(this, a5, a6, a10, a11);
  v17 = v16;
  if ( v16 < 0 )
  {
    v26 = 2638;
    goto LABEL_13;
  }
  v18 = *((_QWORD *)this + 83);
  HIDWORD(v35) = 1;
  HIDWORD(v36) = a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  v16 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v18 + 64LL))(
          v18,
          a2,
          *((_QWORD *)this + 85),
          &v35,
          &v29);
  v17 = v16;
  if ( v16 < 0 )
  {
    v26 = 2646;
    goto LABEL_13;
  }
  v19 = *((_QWORD *)this + 83);
  LODWORD(v30[0]) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  v20 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)v19 + 72LL))(
          v19,
          a9,
          *((_QWORD *)this + 85),
          v30,
          &v28);
  v17 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xA5Du);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 84) + 240LL))(
    *((_QWORD *)this + 84),
    *((_QWORD *)this + 86),
    0LL,
    1LL,
    a8);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 84) + 248LL))(
    *((_QWORD *)this + 84),
    *((_QWORD *)this + 86),
    0LL,
    1LL,
    v27);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 84) + 104LL))(
    *((_QWORD *)this + 84),
    *((_QWORD *)this + 86),
    1LL,
    &v37);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 84) + 592LL))(
    *((_QWORD *)this + 84),
    *((_QWORD *)this + 86),
    0LL,
    a4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 84) + 296LL))(
    *((_QWORD *)this + 84),
    *((_QWORD *)this + 86),
    0LL,
    0LL);
  if ( a7 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v21 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, const struct tagRECT **))this + 84))(
            *((_QWORD *)this + 84),
            &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261,
            &v27);
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xA78u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      goto LABEL_14;
    }
    v22 = *((_QWORD *)this + 86);
    v33[0] = 0LL;
    v33[1] = 0LL;
    v33[2] = 1000LL;
    v34 = 13108200;
    (*(void (__fastcall **)(const struct tagRECT *, __int64, _QWORD, __int64, int, _QWORD *))(*(_QWORD *)&v27->left
                                                                                            + 648LL))(
      v27,
      v22,
      0LL,
      1LL,
      28,
      v33);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  }
  v23 = *((_QWORD *)this + 84);
  v32 = v29;
  v24 = *((_QWORD *)this + 86);
  v31[0] = 1;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v23 + 424LL))(
          v23,
          v24,
          v28,
          0LL,
          1,
          v31);
  v17 = v16;
  if ( v16 < 0 )
  {
    v26 = 2700;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v26);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  return v17;
}
