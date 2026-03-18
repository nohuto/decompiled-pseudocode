/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180087E60
 * Callers:
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x180087BC0 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180088020 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D0D58 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D0E30 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18000AEE8 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x180087F94 (-MapSection@CSectionBitmapRealization@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  struct IBitmapSource *v1; // rsi
  _QWORD *v2; // r14
  unsigned int v3; // edi
  INT v5; // eax
  INT v6; // ecx
  int v7; // eax
  signed int v8; // eax
  unsigned int RequiredBufferSize; // eax
  unsigned int v10; // r11d
  signed int v11; // eax
  signed int v12; // eax
  struct IUnknown *v14; // [rsp+30h] [rbp-30h]
  _DWORD v15[4]; // [rsp+40h] [rbp-20h] BYREF
  struct WICRect v16; // [rsp+50h] [rbp-10h] BYREF
  struct IBitmapSource *v17; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 432);
  v3 = 0;
  v17 = 0LL;
  if ( !*((_QWORD *)this + 54) )
  {
    v5 = *((_DWORD *)this + 102);
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 103);
      if ( v6 )
      {
        v16.X = 0;
        v16.Y = 0;
        v16.Width = v5;
        v15[0] = *((_DWORD *)this + 105);
        v15[1] = *((_DWORD *)this + 38);
        v7 = *((_DWORD *)this + 49);
        v16.Height = v6;
        v15[2] = v7;
        v8 = CSectionBitmapRealization::MapSection(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x16Fu);
        }
        else
        {
          RequiredBufferSize = GetRequiredBufferSize(
                                 (enum DXGI_FORMAT)*((_DWORD *)this + 105),
                                 *((unsigned int *)this + 104),
                                 &v16);
          v11 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 102),
                  *((_DWORD *)this + 103),
                  (const struct PixelFormatInfo *)v15,
                  v10,
                  RequiredBufferSize,
                  *((unsigned __int8 **)this + 53),
                  v14,
                  &v17);
          v3 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x181u);
            v1 = v17;
          }
          else
          {
            v1 = v17;
            v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, _QWORD *))v17)(
                    v17,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v3 = v12;
            if ( v12 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x183u);
            else
              (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, *v2);
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v1);
  return v3;
}
