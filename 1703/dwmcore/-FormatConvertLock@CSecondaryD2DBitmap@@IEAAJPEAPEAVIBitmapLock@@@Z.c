/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015B134
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180006ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800C69E0 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015B3B0 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(CSecondaryD2DBitmap *this, struct IBitmapLock **a2)
{
  struct IBitmapSource *v3; // rsi
  struct IBitmapSource *v5; // rdi
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 *v12; // rcx
  enum DXGI_COLOR_SPACE_TYPE v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct WICRect *v20; // rdx
  int v21; // eax
  int v22; // eax
  unsigned int v24; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-1Dh] BYREF
  struct IBitmapSource *v28; // [rsp+50h] [rbp-19h] BYREF
  struct IBitmapSource *v29; // [rsp+58h] [rbp-11h] BYREF
  struct IBitmapDest *v30; // [rsp+60h] [rbp-9h] BYREF
  int v31; // [rsp+68h] [rbp-1h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v32[2]; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned __int8 *v33; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+80h] [rbp+17h] BYREF
  int v35; // [rsp+88h] [rbp+1Fh]

  v34 = 0LL;
  v3 = 0LL;
  v30 = 0LL;
  v35 = 0;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 46);
  v7 = (__int64 *)*a2;
  v31 = v6;
  *(_QWORD *)v32 = 0LL;
  v29 = 0LL;
  v8 = *v7;
  v28 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 24))(v7, &v34);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x18Fu);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    v12 = (__int64 *)*a2;
    HIDWORD(v34) = v11;
    v35 = (*(__int64 (__fastcall **)(__int64 *))(*v12 + 40))(v12);
    v13 = (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 14) + 40LL))((char *)this + 112);
    v14 = *((_DWORD *)this + 46);
    v32[0] = v13;
    GetPixelFormatColorSpace(v14, &v32[1]);
    v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 48LL))(*a2, &v27, &v26);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x19Au);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v25);
      v10 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x19Cu);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned __int8 **))(*(_QWORD *)*a2 + 64LL))(
                *a2,
                &v24,
                &v33);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x19Du);
        }
        else
        {
          v18 = HrCreateBitmapFromMemoryEx(v27, v26, (enum DXGI_FORMAT *)&v34, v25, v24, v33, 0LL, &v29);
          v10 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1A8u);
            v5 = v29;
          }
          else
          {
            v5 = v29;
            v19 = CFormatConverter::HrConvertBitmap(v29, (const struct PixelFormatInfo *)&v31, &v28);
            v10 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1AFu);
              v3 = v28;
            }
            else
            {
              v3 = v28;
              v21 = HrCreateDestBitmapCopy(v28, v20, &v30);
              v10 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1B6u);
              }
              else
              {
                ReleaseInterface<IBitmapLock>((__int64 *)a2);
                v22 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v30 + 24LL))(
                        v30,
                        0LL,
                        1LL,
                        a2);
                v10 = v22;
                if ( v22 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1BFu);
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v30);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v3);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v5);
  return v10;
}
