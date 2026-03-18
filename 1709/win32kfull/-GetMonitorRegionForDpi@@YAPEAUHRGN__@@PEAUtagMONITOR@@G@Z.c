/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C023A6EC
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1C0115C10 (IsSmallerThanScreen.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v5; // r11
  __int64 v6; // rbx
  __m128i v7; // [rsp+20h] [rbp-38h] BYREF
  __m128i v8; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a2);
  if ( DpiDepSysMetCachePlateauSlot == -1 )
    DpiDepSysMetCachePlateauSlot = 0;
  v6 = v5 + 8LL * DpiDepSysMetCachePlateauSlot;
  if ( !*(_QWORD *)(v6 + 80) )
  {
    v8 = *GetMonitorRectForDpi(&v7, v5, a2);
    SetOrCreateRectRgnIndirectPublic(v6 + 80, &v8);
  }
  return *(HRGN *)(v6 + 80);
}
