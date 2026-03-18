/*
 * XREFs of ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801BBA1C
 * Callers:
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801BB03C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801BB244 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801BB9A4 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801BBB20 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Initialize(CBitmapColorKey *this, struct IBitmapSource *a2, const __m128i *a3)
{
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // ecx
  struct IPixelFormat **v9; // rdi
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int inited; // eax
  signed int v13; // eax
  enum DXGI_FORMAT v15[2]; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  _BYTE v17[16]; // [rsp+40h] [rbp-38h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v17);
  v7 = *(_QWORD *)v6;
  LODWORD(v6) = *(_DWORD *)(v6 + 8);
  *(_QWORD *)v15 = v7;
  v16 = v6;
  if ( (int)CBitmapColorKey::IsSupportedColorKeyFormat((enum DXGI_FORMAT)v7) >= 0 || v8 == 2 )
  {
    v9 = (struct IPixelFormat **)((char *)this + 32);
    *((_QWORD *)this + 4) = a2;
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    v9 = (struct IPixelFormat **)((char *)this + 32);
    v15[0] = DXGI_FORMAT_R32G32B32A32_FLOAT;
    v10 = CFormatConverter::HrConvertBitmap(a2, (const struct PixelFormatInfo *)v15, (struct IBitmapSource **)this + 4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x150u);
      return v11;
    }
  }
  inited = CBitmapColorKey::InitPixelFormatInfo(this, *v9);
  v11 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x15Bu);
  }
  else
  {
    v13 = CBitmapColorKey::InitColorKey(this, a3);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x160u);
  }
  return v11;
}
