/*
 * XREFs of ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18003AE68
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // zf
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 168) == 0LL;
  *(_DWORD *)(a1 + 308) = a4;
  *(_QWORD *)(a1 + 200) = a3;
  if ( !v4 )
  {
    v6[0] = *(_DWORD *)(a1 + 240);
    v6[1] = *(_DWORD *)(a1 + 296);
    v6[2] = *(_DWORD *)(a1 + 300);
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 200LL))(a1, v6);
  }
  return 0LL;
}
