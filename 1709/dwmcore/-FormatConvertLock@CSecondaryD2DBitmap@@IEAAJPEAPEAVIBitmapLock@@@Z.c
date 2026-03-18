/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150710
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180092360 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18015093C (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(CSecondaryD2DBitmap *this, struct IBitmapLock **a2)
{
  struct IBitmapSource *v3; // rsi
  __int64 v4; // rcx
  struct IBitmapSource *v6; // rdi
  int v7; // ecx
  signed int v8; // eax
  unsigned int v9; // ebx
  signed int v10; // eax
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  struct WICRect *v14; // rdx
  signed int v15; // eax
  signed int v16; // eax
  struct IUnknown *v18; // [rsp+30h] [rbp-39h]
  unsigned int v19; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-1Dh] BYREF
  struct IBitmapSource *v23; // [rsp+50h] [rbp-19h] BYREF
  struct IBitmapSource *v24; // [rsp+58h] [rbp-11h] BYREF
  struct IBitmapDest *v25; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v26[4]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int8 *v27; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp+17h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp+27h] BYREF

  v3 = 0LL;
  v4 = (__int64)*a2;
  v25 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v28);
  v26[0] = *((_DWORD *)this + 46);
  v7 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 13) + 24LL))((char *)this + 104, v29)
                 + 4);
  v26[2] = *((_DWORD *)this + 62);
  v26[1] = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 32LL))(*a2, &v22, &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x196u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a2 + 40LL))(*a2, &v20);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x198u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned __int8 **))(*(_QWORD *)*a2 + 48LL))(
              *a2,
              &v19,
              &v27);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x199u);
      }
      else
      {
        v12 = HrCreateBitmapFromMemoryEx(v22, v21, (const struct PixelFormatInfo *)v28, v20, v19, v27, v18, &v24);
        v9 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1A4u);
          v6 = v24;
        }
        else
        {
          v6 = v24;
          v13 = CFormatConverter::HrConvertBitmap(v24, (const struct PixelFormatInfo *)v26, &v23);
          v9 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1ABu);
            v3 = v23;
          }
          else
          {
            v3 = v23;
            v15 = HrCreateDestBitmapCopy(v23, v14, &v25);
            v9 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1B2u);
            }
            else
            {
              ReleaseInterface<IBitmapLock>((__int64 *)a2);
              v16 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v25 + 24LL))(
                      v25,
                      0LL,
                      1LL,
                      a2);
              v9 = v16;
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x1BBu);
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v25);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v3);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v6);
  return v9;
}
