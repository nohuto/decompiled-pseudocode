/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18000D180 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800188EC (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800C5D2C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int8 *a5)
{
  int v6; // eax
  struct IBitmapSource *v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r15
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v19; // ecx
  int v20; // r9d
  unsigned int v21; // [rsp+28h] [rbp-41h]
  struct IUnknown *v22; // [rsp+38h] [rbp-31h]
  unsigned int v23; // [rsp+58h] [rbp-11h] BYREF
  struct IBitmapSource *v24; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h] BYREF
  struct IUnknown *v26; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 *v27; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+80h] [rbp+17h] BYREF
  int v29; // [rsp+88h] [rbp+1Fh]
  int v30; // [rsp+8Ch] [rbp+23h]
  unsigned int v31; // [rsp+C8h] [rbp+5Fh] BYREF

  v29 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 60);
  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  v30 = v6;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v28)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
  {
    v15 = -2147024809;
    v21 = 250;
    v20 = -2147024809;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72);
    HIDWORD(v28) = *(_DWORD *)(a1 + 108);
    LODWORD(v28) = v12;
    v29 = v12 == 10;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v27, &v31, &v23, &v26) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v19 = v31 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v16 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v31,
              v23 - v19,
              &v27[v19],
              a3,
              a4,
              a5);
      v15 = v16;
      if ( v16 >= 0 )
        goto LABEL_7;
      v21 = 286;
    }
    else
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
      v14 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v28,
              a3,
              a4,
              a5,
              v22,
              &v24);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x12Du);
        v10 = v24;
        goto LABEL_7;
      }
      v10 = v24;
      v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v24)(
              v24,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v25);
      v15 = v16;
      if ( v16 < 0 )
      {
        v21 = 304;
      }
      else
      {
        v16 = CD3DDeviceLevel1::CopyTexture(v13, *(struct IUnknown **)(a1 + 16), *(unsigned int *)(a1 + 144), a2, v25);
        v15 = v16;
        if ( v16 >= 0 )
          goto LABEL_7;
        v21 = 312;
      }
    }
    v20 = v16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
LABEL_7:
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  ReleaseInterfaceNoNULL<IWICBitmap>(v25);
  ReleaseInterfaceNoNULL<IBitmapSource>(v10);
  return v15;
}
