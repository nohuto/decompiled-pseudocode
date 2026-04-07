/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180018044
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180017690 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  int v2; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 568LL))(*((_QWORD *)this + 25));
  *((_DWORD *)this + 41) = v2;
  *((_DWORD *)this + 42) = v2;
}
