/*
 * XREFs of ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4B28
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B4CC0 (-GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUI.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B4D80 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18007DF6C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4A00 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4E60 (-MapSection@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::EnsureBitmapCacheSource(struct IUnknown *this)
{
  struct IBitmapSource *v1; // rsi
  struct IUnknown *v2; // r14
  unsigned int v3; // ebx
  INT lpVtbl; // eax
  INT lpVtbl_high; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int RequiredBufferSize; // eax
  unsigned int v10; // r11d
  int v11; // eax
  int v12; // eax
  struct WICRect v14; // [rsp+40h] [rbp-18h] BYREF
  struct IBitmapSource *v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = this + 57;
  v3 = 0;
  v15 = 0LL;
  if ( !this[57].lpVtbl )
  {
    lpVtbl = (INT)this[52].lpVtbl;
    if ( lpVtbl )
    {
      lpVtbl_high = HIDWORD(this[52].lpVtbl);
      if ( lpVtbl_high )
      {
        v14.X = 0;
        v14.Y = 0;
        v14.Width = lpVtbl;
        v14.Height = lpVtbl_high;
        if ( BYTE4(this[56].lpVtbl)
          || (v7 = CSectionBitmapRealization::CalcPixelFormatInfo((CSectionBitmapRealization *)this), v3 = v7, v7 >= 0) )
        {
          if ( this[54].lpVtbl
            || (v8 = CSectionBitmapRealization::MapSection((CSectionBitmapRealization *)this), v3 = v8, v8 >= 0) )
          {
            RequiredBufferSize = GetRequiredBufferSize(
                                   (enum DXGI_FORMAT)LODWORD(this[55].lpVtbl),
                                   LODWORD(this[53].lpVtbl),
                                   &v14);
            v11 = HrCreateBitmapFromMemoryEx(
                    (unsigned int)this[52].lpVtbl,
                    HIDWORD(this[52].lpVtbl),
                    (enum DXGI_FORMAT *)&this[55],
                    v10,
                    RequiredBufferSize,
                    (unsigned __int8 *)this[54].lpVtbl,
                    this,
                    &v15);
            v3 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xFAu);
              v1 = v15;
            }
            else
            {
              v1 = v15;
              v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IUnknown *))v15)(
                      v15,
                      &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                      v2);
              v3 = v12;
              if ( v12 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFCu);
              else
                ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))this[2].lpVtbl[1].QueryInterface)(
                  &this[2],
                  v2->lpVtbl);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEAu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE5u);
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v1);
  return v3;
}
