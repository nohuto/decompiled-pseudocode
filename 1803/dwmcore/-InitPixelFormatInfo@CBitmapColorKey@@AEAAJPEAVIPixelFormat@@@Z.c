/*
 * XREFs of ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801F6448
 * Callers:
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801F56A4 (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801F64C0 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801F65B0 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::InitPixelFormatInfo(CBitmapColorKey *this, struct IPixelFormat *a2)
{
  __int64 v3; // rax
  int IsSupportedColorKeyFormat; // eax
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IPixelFormat *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v6);
  *((_QWORD *)this + 5) = *(_QWORD *)v3;
  *((_DWORD *)this + 12) = *(_DWORD *)(v3 + 8);
  IsSupportedColorKeyFormat = CBitmapColorKey::IsSupportedColorKeyFormat((enum DXGI_FORMAT)*((_DWORD *)this + 10));
  if ( IsSupportedColorKeyFormat < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsSupportedColorKeyFormat, 0x17Du);
  return 0LL;
}
