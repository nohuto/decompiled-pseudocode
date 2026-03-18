/*
 * XREFs of ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801AE3F8
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B97A0 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18008CDD4 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Init(CBaseRenderTarget *this, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _BYTE v8[4]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 23) + 120LL) + 24LL))(
    *((_QWORD *)this + 23) + 120LL,
    v8);
  v6 = *((_QWORD *)this + 23);
  v9 = *((_DWORD *)this + 78);
  v10 = *((_DWORD *)this + 79);
  *((_DWORD *)this + 81) = a3;
  *((_QWORD *)this + 27) = a2;
  *((_DWORD *)this + 2) = *(_DWORD *)(v6 + 140);
  *((_DWORD *)this + 3) = *(_DWORD *)(v6 + 144);
  (*(void (__fastcall **)(CBaseRenderTarget *, _BYTE *))(*(_QWORD *)this + 208LL))(this, v8);
  return CBaseRenderTarget::Init(this);
}
