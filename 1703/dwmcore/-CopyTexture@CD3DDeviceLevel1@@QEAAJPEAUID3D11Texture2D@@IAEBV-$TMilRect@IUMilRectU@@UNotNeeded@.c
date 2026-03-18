/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180026550 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180026710 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18019BAF0 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18019BE10 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x1800C7670 (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, __int64 *a2, int a3, _DWORD *a4, __int64 a5)
{
  __int64 v5; // rax
  void (__fastcall *v8)(__int64 *, int *); // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned __int8 *v20; // rdi
  int v21; // eax
  struct IBitmapSource *v22; // rdi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  int v28; // eax
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v31; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v32; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-8Ch] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v36; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v37[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  __int64 v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+CCh] [rbp-34h]
  _DWORD v47[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+F4h] [rbp-Ch]
  int v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+10Ch] [rbp+Ch]
  __int64 v52; // [rsp+114h] [rbp+14h]
  __int128 v53; // [rsp+120h] [rbp+20h]

  v37[0] = "DWM Temp Readback (bitmap1)";
  v5 = *a2;
  LODWORD(v37[1]) = 27;
  v30 = 0LL;
  v8 = *(void (__fastcall **)(__int64 *, int *))(v5 + 80);
  v31 = 0LL;
  v32 = 0LL;
  v29 = 0LL;
  v53 = *(_OWORD *)v37;
  v8(a2, &v48);
  v11 = *(_QWORD *)(a1 + 640);
  v48 = a4[2] - *a4;
  v49 = a4[3] - a4[1];
  v51 = 3LL;
  v52 = 0x20000LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v30);
  v12 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, &v48, 0LL, &v30);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v12, 0xB7Fu);
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v30 + 40LL))(
    v30,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v53),
    v53);
  v14 = *(_QWORD *)(a1 + 648);
  v47[0] = *a4;
  v47[1] = a4[1];
  v47[3] = a4[2];
  v47[4] = a4[3];
  v47[2] = 0;
  v47[5] = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64 *, int, _DWORD *))(*(_QWORD *)v14 + 368LL))(
    v14,
    v30,
    0LL,
    0LL,
    0,
    0,
    a2,
    a3,
    v47);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 648)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 648),
          v30,
          0LL,
          1LL,
          0,
          v37);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v15, 0xB99u);
    goto LABEL_13;
  }
  v35 = v50;
  v36 = 0LL;
  v42 = v48;
  v43 = v49;
  v39 = 0LL;
  v40 = 0;
  v45 = a4[2] - *a4;
  v46 = a4[3] - a4[1];
  v41 = 0LL;
  v44 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v29);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, &v41, 2LL, &v29);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v16, 0xBB7u);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v39);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v17, 0xBBCu);
    }
    else
    {
      HIDWORD(v39) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
      v19 = LODWORD(v37[1]) * (a4[3] - a4[1]);
      v20 = v37[0];
      v36 = __PAIR64__(v18, HIDWORD(v39));
      v40 = v18;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v31);
      v21 = HrCreateBitmapFromMemoryEx(
              a4[2] - *a4,
              a4[3] - a4[1],
              (const struct PixelFormatInfo *)&v35,
              (unsigned int)v37[1],
              v19,
              v20,
              0LL,
              &v31);
      v13 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v21, 0xBD4u);
      }
      else
      {
        if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v35, (const struct PixelFormatInfo *)&v39) )
        {
          v22 = v31;
          goto LABEL_8;
        }
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v32);
        v28 = CFormatConverter::HrConvertBitmap(v31, (const struct PixelFormatInfo *)&v39, &v32);
        v13 = v28;
        if ( v28 >= 0 )
        {
          v22 = v32;
LABEL_8:
          v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v29 + 64LL))(v29, &v33, &v38);
          v13 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v23, 0xBE7u);
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 56LL))(v29, &v34);
            v13 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v24, 0xBE8u);
            }
            else
            {
              v25 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 64LL))(
                      v22,
                      &v44,
                      v34,
                      v33,
                      v38);
              v13 = v25;
              if ( v25 < 0 )
                MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v25, 0xBFBu);
            }
          }
          goto LABEL_12;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1801D6050, 9u, v28, 0xBE2u);
      }
    }
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 648) + 120LL))(*(_QWORD *)(a1 + 648), v30, 0LL);
LABEL_13:
  v26 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v13, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v30);
  return v26;
}
