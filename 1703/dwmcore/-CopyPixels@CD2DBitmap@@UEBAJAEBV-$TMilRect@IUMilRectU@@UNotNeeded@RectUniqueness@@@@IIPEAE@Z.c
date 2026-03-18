/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180026550
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800263E0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007E394 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
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
  unsigned int v22; // [rsp+58h] [rbp-11h] BYREF
  struct IBitmapSource *v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v24; // [rsp+68h] [rbp-1h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h] BYREF
  struct IUnknown *v26; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 *v27; // [rsp+80h] [rbp+17h] BYREF
  __int64 v28; // [rsp+88h] [rbp+1Fh] BYREF
  int v29; // [rsp+90h] [rbp+27h]
  int v30; // [rsp+94h] [rbp+2Bh]
  unsigned int v31; // [rsp+C8h] [rbp+5Fh] BYREF

  v29 = *(_DWORD *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 60);
  v26 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v30 = v6;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v28, a2)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
  {
    v15 = -2147024809;
    v21 = 244;
    v20 = -2147024809;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 72);
    HIDWORD(v28) = *(_DWORD *)(a1 + 108);
    LODWORD(v28) = v12;
    v29 = v12 == 10;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v27, &v31, &v22, &v26) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v19 = v31 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v16 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v31,
              v22 - v19,
              &v27[v19],
              a3,
              a4,
              a5);
      v15 = v16;
      if ( v16 >= 0 )
        goto LABEL_8;
      v21 = 280;
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
              0LL,
              &v23);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x127u);
        v10 = v23;
        goto LABEL_8;
      }
      v10 = v23;
      v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v23)(
              v23,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v25);
      v15 = v16;
      if ( v16 < 0 )
      {
        v21 = 298;
      }
      else
      {
        v16 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(a1 + 24))(
                *(_QWORD *)(a1 + 24),
                &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                &v24);
        v15 = v16;
        if ( v16 < 0 )
        {
          v21 = 301;
        }
        else
        {
          v16 = CD3DDeviceLevel1::CopyTexture(v13, v24, *(_DWORD *)(a1 + 144), a2, v25);
          v15 = v16;
          if ( v16 >= 0 )
            goto LABEL_8;
          v21 = 309;
        }
      }
    }
    v20 = v16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
LABEL_8:
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v24);
  ReleaseInterfaceNoNULL<CD2DPencil>(v25);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v10);
  return v15;
}
