/*
 * XREFs of ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18019BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v20[6]; // [rsp+48h] [rbp-18h] BYREF
  struct IBitmapSource *v21; // [rsp+80h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 - 184);
  v6 = 0LL;
  v19 = 0LL;
  v20[0] = 0;
  v20[1] = 0;
  v20[2] = v5;
  v9 = *(_DWORD *)(a1 - 180);
  v21 = 0LL;
  v20[3] = v9;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v10 = -2003292412;
    v18 = 804;
LABEL_13:
    v16 = v10;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v20, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = -2147024809;
    v18 = 809;
    goto LABEL_13;
  }
  v14 = HrCreateBitmapFromMemoryEx(
          a2[2] - *a2,
          *(_DWORD *)(v11 + 12) - a2[1],
          (enum DXGI_FORMAT *)(a1 + 24),
          v13,
          v12,
          a5,
          0LL,
          &v21);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x335u);
    v6 = v21;
  }
  else
  {
    v6 = v21;
    v15 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v21)(
            v21,
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v19);
    v10 = v15;
    if ( v15 < 0 )
    {
      v18 = 824;
      goto LABEL_9;
    }
    v15 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 128LL),
            *(__int64 **)(*(_QWORD *)(a1 - 24) + 136LL),
            *(_DWORD *)(*(_QWORD *)(a1 - 24) + 144LL),
            a2,
            v19);
    v10 = v15;
    if ( v15 < 0 )
    {
      v18 = 832;
LABEL_9:
      v16 = v15;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v18);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v19);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v6);
  return v10;
}
