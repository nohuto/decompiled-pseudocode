/*
 * XREFs of ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801AD070
 * Callers:
 *     <none>
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CopyPixels(__int64 a1, int *a2, __int64 a3, __int64 a4, unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  signed int v14; // eax
  int v15; // eax
  DWORD v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-40h]
  struct IUnknown *v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v21[6]; // [rsp+48h] [rbp-18h] BYREF
  struct IBitmapSource *v22; // [rsp+80h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 - 200);
  v6 = 0LL;
  v20 = 0LL;
  v21[0] = 0;
  v21[1] = 0;
  v21[2] = v5;
  v9 = *(_DWORD *)(a1 - 196);
  v22 = 0LL;
  v21[3] = v9;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v10 = -2003292412;
    v18 = 744;
LABEL_13:
    v16 = v10;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v21, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = -2147024809;
    v18 = 749;
    goto LABEL_13;
  }
  v14 = HrCreateBitmapFromMemoryEx(
          a2[2] - *a2,
          *(_DWORD *)(v11 + 12) - a2[1],
          (const struct PixelFormatInfo *)(a1 + 24),
          v13,
          v12,
          a5,
          v19,
          &v22);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2F9u);
    v6 = v22;
  }
  else
  {
    v6 = v22;
    v15 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v22)(
            v22,
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v20);
    v10 = v15;
    if ( v15 < 0 )
    {
      v18 = 764;
      goto LABEL_9;
    }
    v15 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL),
            *(struct IUnknown **)(*(_QWORD *)(a1 - 24) + 128LL),
            *(unsigned int *)(*(_QWORD *)(a1 - 24) + 136LL),
            a2,
            v20);
    v10 = v15;
    if ( v15 < 0 )
    {
      v18 = 772;
LABEL_9:
      v16 = v15;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v18);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v20);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v6);
  return v10;
}
