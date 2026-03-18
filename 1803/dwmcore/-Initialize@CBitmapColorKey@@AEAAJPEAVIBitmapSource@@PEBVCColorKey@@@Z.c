/*
 * XREFs of ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801F64C0
 * Callers:
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801F5AAC (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801F5CD4 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801F6448 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801F65B0 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180202554 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Initialize(struct IPixelFormat **this, struct IBitmapSource *a2, const __m128i *a3)
{
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  int v8; // ecx
  struct IBitmapSource **v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  int inited; // eax
  int v13; // eax
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
    *v9 = a2;
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    v15[0] = DXGI_FORMAT_R32G32B32A32_FLOAT;
    v10 = CFormatConverter::HrConvertBitmap(a2, (const struct PixelFormatInfo *)v15, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x150u);
      return v11;
    }
  }
  inited = CBitmapColorKey::InitPixelFormatInfo((CBitmapColorKey *)this, this[4]);
  v11 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x15Bu);
  }
  else
  {
    v13 = CBitmapColorKey::InitColorKey((CBitmapColorKey *)this, a3);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x160u);
  }
  return v11;
}
