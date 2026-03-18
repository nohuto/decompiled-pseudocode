/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180081434
 * Callers:
 *     ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180081740 (-GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@.c)
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C55F4 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     ?Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1802130A8 (-Create@CSectionBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180213180 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x180081560 (-MapSection@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x180083234 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(CSectionBitmapRealization *this)
{
  struct IBitmapSource *v1; // rsi
  _QWORD *v2; // r14
  unsigned int v3; // edi
  INT v6; // eax
  INT v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int RequiredBufferSize; // eax
  unsigned int v11; // r11d
  int v12; // eax
  int v13; // eax
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
    v6 = *((_DWORD *)this + 102);
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 103);
      if ( v7 )
      {
        v16.X = 0;
        v16.Y = 0;
        v16.Width = v6;
        v15[0] = *((_DWORD *)this + 105);
        v15[1] = *((_DWORD *)this + 38);
        v8 = *((_DWORD *)this + 49);
        v16.Height = v7;
        v15[2] = v8;
        v9 = CSectionBitmapRealization::MapSection(this);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x16Fu);
        }
        else
        {
          RequiredBufferSize = GetRequiredBufferSize(*((enum DXGI_FORMAT *)this + 105), *((_DWORD *)this + 104), &v16);
          v12 = HrCreateBitmapFromMemoryEx(
                  *((_DWORD *)this + 102),
                  *((_DWORD *)this + 103),
                  (const struct PixelFormatInfo *)v15,
                  v11,
                  RequiredBufferSize,
                  *((unsigned __int8 **)this + 53),
                  v14,
                  &v17);
          v3 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x181u);
            v1 = v17;
          }
          else
          {
            v1 = v17;
            v13 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, _QWORD *))v17)(
                    v17,
                    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                    v2);
            v3 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x183u);
            else
              (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, *v2);
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v1);
  return v3;
}
