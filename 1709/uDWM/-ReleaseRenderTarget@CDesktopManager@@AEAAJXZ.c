/*
 * XREFs of ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EC5C
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180017690 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EB3C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180032E30 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ReleaseRenderTarget(CDesktopManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CDWMDisplaySet *v4; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  v4 = (CDWMDisplaySet *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    CDWMDisplaySet::Release(v4);
    *((_QWORD *)this + 19) = 0LL;
  }
  return 0LL;
}
