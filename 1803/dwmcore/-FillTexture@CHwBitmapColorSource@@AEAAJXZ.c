/*
 * XREFs of ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801F0700 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800B86CC (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801F5AAC (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180202554 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTexture(CHwBitmapColorSource *this)
{
  struct IBitmapSource *v1; // rbx
  struct CBitmapColorKey *v2; // rsi
  struct IBitmapSource *v3; // r15
  struct IBitmapSource *v4; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-50h]
  struct IWICBitmapSource *v15; // [rsp+30h] [rbp-40h] BYREF
  struct CBitmapColorKey *v16; // [rsp+38h] [rbp-38h] BYREF
  struct IBitmapSource *v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  struct IBitmapSource *v20; // [rsp+58h] [rbp-18h] BYREF
  BOOL v21; // [rsp+60h] [rbp-10h]

  v1 = (struct IBitmapSource *)*((_QWORD *)this + 15);
  v2 = 0LL;
  v19 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  if ( *((_BYTE *)this + 288) )
  {
    v6 = CBitmapColorKey::Create(v1, (CHwBitmapColorSource *)((char *)this + 292), &v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5Du);
      v2 = v16;
      goto LABEL_32;
    }
    v2 = v16;
    if ( v16 )
      v1 = (struct CBitmapColorKey *)((char *)v16 + 16);
    else
      v1 = 0LL;
  }
  if ( *((_DWORD *)this + 36) == *((_DWORD *)this + 38) && *((_DWORD *)this + 37) == *((_DWORD *)this + 39) )
  {
LABEL_13:
    v10 = *(_DWORD *)(*(__int64 (__fastcall **)(struct IBitmapSource *, struct IBitmapSource **))(*(_QWORD *)v1 + 24LL))(
                       v1,
                       &v20);
    v11 = *((_DWORD *)this + 60);
    if ( v11 != v10 && (v10 != 88 || v11 != 87) )
    {
      LODWORD(v20) = *((_DWORD *)this + 60);
      HIDWORD(v20) = *((_DWORD *)this + 24);
      v21 = *((_DWORD *)this + 25) == 2;
      v12 = CFormatConverter::HrConvertBitmap(v1, (const struct PixelFormatInfo *)&v20, &v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xBA4u);
        v4 = v17;
        goto LABEL_32;
      }
      v4 = v17;
      v1 = v17;
    }
    if ( *((_DWORD *)this + 56) < (unsigned int)(*((_DWORD *)this + 34) - *((_DWORD *)this + 32))
      || *((_DWORD *)this + 57) < (unsigned int)(*((_DWORD *)this + 35) - *((_DWORD *)this + 33)) )
    {
      v7 = -2003304320;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304320, 0xBBBu);
      goto LABEL_32;
    }
    v8 = CHwBitmapColorSource::FillTextureWithTransformedSource(this, v1);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_32;
    v14 = 3006;
    goto LABEL_31;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v1)(v1, &IID_IWICBitmapSource, &v19);
  v7 = v8;
  if ( v8 < 0 )
  {
    v14 = 2933;
  }
  else
  {
    v8 = WICCreateImagingFactory_Proxy(567LL, &v18);
    v7 = v8;
    if ( v8 < 0 )
    {
      v14 = 2939;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v18 + 88LL))(v18, &v15);
      v7 = v8;
      if ( v8 < 0 )
      {
        v14 = 2941;
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v15->lpVtbl[1].QueryInterface)(
               v15,
               v19,
               *((unsigned int *)this + 38),
               *((unsigned int *)this + 39),
               3);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v9 = HrCreateBitmapFromWICBitmapSource(v15, &v20);
          v7 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB84u);
            v3 = v20;
            goto LABEL_32;
          }
          v3 = v20;
          v1 = v20;
          goto LABEL_13;
        }
        v14 = 2946;
      }
    }
  }
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v14);
LABEL_32:
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v4);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v3);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v15);
  ReleaseInterfaceNoNULL<IWICBitmap>(v18);
  ReleaseInterfaceNoNULL<IWICBitmap>(v19);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v7;
}
