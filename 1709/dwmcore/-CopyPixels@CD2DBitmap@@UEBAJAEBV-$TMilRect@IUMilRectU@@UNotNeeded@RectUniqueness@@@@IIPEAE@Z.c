/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18004BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18000A4A4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18004C8A8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int8 *a5)
{
  int v6; // eax
  struct IBitmapSource *v10; // r14
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r13
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
  struct IUnknown *v25; // [rsp+68h] [rbp-1h] BYREF
  __int64 v26; // [rsp+70h] [rbp+7h] BYREF
  struct IUnknown *v27; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 *v28; // [rsp+80h] [rbp+17h] BYREF
  __int64 v29; // [rsp+88h] [rbp+1Fh] BYREF
  int v30; // [rsp+90h] [rbp+27h]
  int v31; // [rsp+94h] [rbp+2Bh]
  unsigned int v32; // [rsp+C8h] [rbp+5Fh] BYREF

  v30 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 60);
  v27 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v31 = v6;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v29)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
  {
    v15 = -2147024809;
    v21 = 251;
    v20 = -2147024809;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72);
    HIDWORD(v29) = *(_DWORD *)(a1 + 108);
    LODWORD(v29) = v12;
    v30 = v12 == 10;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v28, &v32, &v23, &v27) )
    {
      PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
      v19 = v32 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v16 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v32,
              v23 - v19,
              &v28[v19],
              a3,
              a4,
              a5);
      v15 = v16;
      if ( v16 >= 0 )
        goto LABEL_8;
      v21 = 287;
    }
    else
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
      v14 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v29,
              a3,
              a4,
              a5,
              v22,
              &v24);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x12Eu);
        v10 = v24;
        goto LABEL_8;
      }
      v10 = v24;
      v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v24)(
              v24,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v26);
      v15 = v16;
      if ( v16 < 0 )
      {
        v21 = 305;
      }
      else
      {
        v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
                *(_QWORD *)(a1 + 24),
                &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                &v25);
        v15 = v16;
        if ( v16 < 0 )
        {
          v21 = 308;
        }
        else
        {
          v16 = CD3DDeviceLevel1::CopyTexture(v13, v25, *(unsigned int *)(a1 + 144), a2, v26);
          v15 = v16;
          if ( v16 >= 0 )
            goto LABEL_8;
          v21 = 316;
        }
      }
    }
    v20 = v16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21);
LABEL_8:
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v25);
  ReleaseInterfaceNoNULL<CManipulationManager>(v26);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v10);
  return v15;
}
