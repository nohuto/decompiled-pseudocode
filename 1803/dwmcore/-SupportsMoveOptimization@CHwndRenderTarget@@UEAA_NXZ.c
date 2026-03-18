/*
 * XREFs of ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x180062FA0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwndRenderTarget::SupportsMoveOptimization(CHwndRenderTarget *this, __int64 a2)
{
  LOBYTE(a2) = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1184LL) == 1 )
    LOBYTE(a2) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 22) + 488LL))(
                   *((_QWORD *)this + 22),
                   a2);
  return a2;
}
