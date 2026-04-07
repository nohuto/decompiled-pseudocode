/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F480
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F5EC (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003F614 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004031C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  GUID *v4; // r8
  int v5; // eax
  struct IBitmapSource *v6; // rcx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-20h]
  struct IWICBitmapSource *v10; // [rsp+68h] [rbp+28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  struct IBitmapSource *v12; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v2 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 311;
LABEL_20:
    v8 = v2;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    goto LABEL_13;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 80LL))(*((_QWORD *)this + 36), &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 314;
    goto LABEL_20;
  }
  v4 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 50) != 61 )
    v4 = &GUID_WICPixelFormat32bppPBGRA;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v11 + 64LL))(
         v11,
         *((_QWORD *)this + 32),
         v4,
         0LL,
         0LL,
         0LL,
         0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 325;
    goto LABEL_20;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 36) + 144LL))(
         *((_QWORD *)this + 36),
         v11,
         2LL,
         &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 329;
    goto LABEL_20;
  }
  if ( !v10 )
  {
    v3 = -2147024890;
    v9 = 330;
    v8 = -2147024890;
    goto LABEL_22;
  }
  v2 = ((__int64 (*)(void))v10->lpVtbl[1].Release)();
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 332;
    goto LABEL_20;
  }
  v5 = HrCreateBitmapFromWICBitmapSource(v10, &v12);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x151u);
    v6 = v12;
  }
  else
  {
    v6 = 0LL;
    *((_QWORD *)this + 33) = v12;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_13:
  if ( v10 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v10->lpVtbl->Release)(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
