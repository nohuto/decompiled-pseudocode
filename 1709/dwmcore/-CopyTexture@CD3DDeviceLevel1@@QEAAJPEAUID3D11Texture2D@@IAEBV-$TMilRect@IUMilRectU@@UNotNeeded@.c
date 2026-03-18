/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18004BFC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004C1D0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD070 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801AD370 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800BE3E0 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, struct IUnknown *a2, __int64 a3, int *a4, __int64 a5)
{
  struct IUnknown v5; // rax
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  unsigned __int8 *v17; // rdi
  int v18; // eax
  struct IBitmapSource *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  int v25; // eax
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-8Ch] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v34[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A4h] [rbp-5Ch]
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D4h] [rbp-2Ch]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  int v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E4h] [rbp-1Ch]
  int v50; // [rsp+F0h] [rbp-10h] BYREF
  int v51; // [rsp+F4h] [rbp-Ch]
  int v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+10Ch] [rbp+Ch]
  __int64 v54; // [rsp+114h] [rbp+14h]
  __int128 v55; // [rsp+120h] [rbp+20h]

  v34[0] = "DWM Temp Readback (bitmap1)";
  v5.lpVtbl = a2->lpVtbl;
  LODWORD(v34[1]) = 27;
  v26 = 0LL;
  AddRef = v5.lpVtbl[3].AddRef;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v55 = *(_OWORD *)v34;
  ((void (__fastcall *)(struct IUnknown *, int *))AddRef)(a2, &v50);
  v10 = *(_QWORD *)(a1 + 648);
  v50 = a4[2] - *a4;
  v51 = a4[3] - a4[1];
  v53 = 3LL;
  v54 = 0x20000LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
  v11 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v10 + 40LL))(v10, &v50, 0LL, &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v11, 0xC12u);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v26 + 40LL))(
    v26,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v55),
    v55);
  v13 = *(_QWORD *)(a1 + 656);
  v44 = *a4;
  v45 = a4[1];
  v47 = a4[2];
  v48 = a4[3];
  v46 = 0;
  v49 = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v13 + 368LL))(
    v13,
    v26,
    0LL,
    0LL,
    0,
    0);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 656)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 656),
          v26,
          0LL,
          1LL,
          0,
          v34);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v14, 0xC2Cu);
    goto LABEL_12;
  }
  v32 = v52;
  v33 = 0LL;
  v39 = v50;
  v40 = v51;
  v42 = a4[2] - *a4;
  v43 = a4[3] - a4[1];
  v38 = 0LL;
  v41 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, &v38, 2LL, &v27);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v15, 0xC49u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 24LL))(v27, v36);
    v16 = LODWORD(v34[1]) * (a4[3] - a4[1]);
    v17 = v34[0];
    v33 = v37;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v18 = HrCreateBitmapFromMemoryEx(
            a4[2] - *a4,
            a4[3] - a4[1],
            (const struct PixelFormatInfo *)&v32,
            (unsigned int)v34[1],
            v16,
            v17,
            a2,
            &v28);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v18, 0xC64u);
    }
    else
    {
      if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v32, (const struct PixelFormatInfo *)v36) )
      {
        v19 = v28;
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      v25 = CFormatConverter::HrConvertBitmap(v28, (const struct PixelFormatInfo *)v36, &v29);
      v12 = v25;
      if ( v25 >= 0 )
      {
        v19 = v29;
LABEL_7:
        v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, &v30, &v35);
        v12 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v20, 0xC77u);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 40LL))(v27, &v31);
          v12 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v21, 0xC78u);
          }
          else
          {
            v22 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 48LL))(
                    v19,
                    &v41,
                    v31,
                    v30,
                    v35);
            v12 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v22, 0xC8Bu);
          }
        }
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0418, 9u, v25, 0xC72u);
    }
  }
LABEL_11:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 656) + 120LL))(*(_QWORD *)(a1 + 656), v26, 0LL);
LABEL_12:
  v23 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, v12, 0);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v26);
  return v23;
}
