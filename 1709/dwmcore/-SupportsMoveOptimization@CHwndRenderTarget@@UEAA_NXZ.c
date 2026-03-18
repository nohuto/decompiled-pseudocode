/*
 * XREFs of ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x1800173E0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwndRenderTarget::SupportsMoveOptimization(CHwndRenderTarget *this, __int64 a2)
{
  LOBYTE(a2) = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1160LL) == 1 )
    LOBYTE(a2) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 440LL))(
                   *((_QWORD *)this + 15),
                   a2);
  return a2;
}
