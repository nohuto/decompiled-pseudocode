/*
 * XREFs of ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800470F4
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007CA60 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F3010 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800C28BC (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Init(CBaseRenderTarget *this, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _BYTE v8[4]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 25) + 120LL) + 24LL))(
    *((_QWORD *)this + 25) + 120LL,
    v8);
  v6 = *((_QWORD *)this + 25);
  v9 = *((_DWORD *)this + 82);
  v10 = *((_DWORD *)this + 83);
  *((_DWORD *)this + 85) = a3;
  *((_QWORD *)this + 30) = a2;
  *((_DWORD *)this + 2) = *(_DWORD *)(v6 + 140);
  *((_DWORD *)this + 3) = *(_DWORD *)(v6 + 144);
  (*(void (__fastcall **)(CBaseRenderTarget *, _BYTE *))(*(_QWORD *)this + 248LL))(this, v8);
  return CBaseRenderTarget::Init(this);
}
