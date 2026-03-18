/*
 * XREFs of ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180044150 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800C6190 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801A184C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::FillTexture(CHwBitmapColorSource *this)
{
  struct IBitmapSource *v1; // rsi
  struct CBitmapColorKey *v2; // r14
  struct IBitmapSource *v3; // r12
  struct IBitmapSource *v4; // r15
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-30h]
  struct IBitmapSource *v15; // [rsp+30h] [rbp-20h] BYREF
  BOOL v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  int v19; // [rsp+90h] [rbp+40h] BYREF
  struct IWICBitmapSource *v20; // [rsp+98h] [rbp+48h] BYREF
  struct CBitmapColorKey *v21; // [rsp+A0h] [rbp+50h] BYREF
  struct IBitmapSource *v22; // [rsp+A8h] [rbp+58h] BYREF

  v1 = (struct IBitmapSource *)*((_QWORD *)this + 14);
  v2 = 0LL;
  v18 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  v22 = 0LL;
  if ( *((_BYTE *)this + 280) )
  {
    v11 = CBitmapColorKey::Create(v1, (CHwBitmapColorSource *)((char *)this + 284), &v21);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB63u);
      v2 = v21;
      goto LABEL_9;
    }
    v2 = v21;
    if ( v21 )
      v1 = (struct CBitmapColorKey *)((char *)v21 + 16);
    else
      v1 = 0LL;
  }
  if ( *((_DWORD *)this + 34) == *((_DWORD *)this + 36) && *((_DWORD *)this + 35) == *((_DWORD *)this + 37) )
  {
LABEL_4:
    v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)v1 + 24LL))(v1, &v19);
    v7 = v6;
    if ( v6 < 0 )
    {
      v14 = 2963;
    }
    else
    {
      v8 = *((_DWORD *)this + 58);
      if ( v8 != v19 && (v19 != 88 || v8 != 87) )
      {
        v12 = *((_DWORD *)this + 25);
        LODWORD(v15) = *((_DWORD *)this + 58);
        HIDWORD(v15) = *((_DWORD *)this + 24);
        v16 = v12 == 2;
        v13 = CFormatConverter::HrConvertBitmap(v1, (const struct PixelFormatInfo *)&v15, &v22);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xBABu);
          v4 = v22;
          goto LABEL_9;
        }
        v4 = v22;
        v1 = v22;
      }
      if ( *((_DWORD *)this + 54) < (unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 30))
        || *((_DWORD *)this + 55) < (unsigned int)(*((_DWORD *)this + 33) - *((_DWORD *)this + 31)) )
      {
        v7 = -2003304320;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304320, 0xBC2u);
        goto LABEL_9;
      }
      v6 = CHwBitmapColorSource::FillTextureWithTransformedSource(this, v1);
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_9;
      v14 = 3013;
    }
    goto LABEL_40;
  }
  v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v1)(v1, &IID_IWICBitmapSource, &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 2939;
  }
  else
  {
    v6 = WICCreateImagingFactory_Proxy(567LL, &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v14 = 2945;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v17 + 88LL))(v17, &v20);
      v7 = v6;
      if ( v6 < 0 )
      {
        v14 = 2947;
      }
      else
      {
        v6 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v20->lpVtbl[1].QueryInterface)(
               v20,
               v18,
               *((unsigned int *)this + 36),
               *((unsigned int *)this + 37),
               3);
        v7 = v6;
        if ( v6 >= 0 )
        {
          v10 = HrCreateBitmapFromWICBitmapSource(v20, &v15);
          v7 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB8Au);
            v3 = v15;
            goto LABEL_9;
          }
          v3 = v15;
          v1 = v15;
          goto LABEL_4;
        }
        v14 = 2952;
      }
    }
  }
LABEL_40:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v14);
LABEL_9:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v4);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v3);
  if ( v20 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v20->lpVtbl->Release)(v20);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  ReleaseInterfaceNoNULL<CD2DPencil>(v18);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return v7;
}
