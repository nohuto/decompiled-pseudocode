/*
 * XREFs of ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180078E80
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800229D0 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180078DD4 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18000FDAC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = (CDWMDisplaySet *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    CDWMDisplaySet::Release(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
  return 0LL;
}
