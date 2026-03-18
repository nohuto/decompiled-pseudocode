/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E7690
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@WNI@EAAJ_N@Z @ 0x1800DE360 (-Present@CHwDisplayRenderTarget@@WNI@EAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(CHwDisplayRenderTarget *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD))(*((_QWORD *)this + 27) + 240LL))(
           (char *)this + 216,
           a2,
           0LL,
           0LL);
}
