/*
 * XREFs of ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180130AC8
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x1801347B0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::FindRemoteAppRenderTarget(
        CRenderTargetManager *this,
        __int64 a2,
        struct CHwndRenderTarget **a3)
{
  __int64 v3; // rbx
  __int64 v7; // rcx
  struct CHwndRenderTarget *v8; // r14

  *a3 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 34) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 70LL) )
      {
        v8 = *(struct CHwndRenderTarget **)(*((_QWORD *)this + 14) + 8 * v3);
        if ( (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v8 + 272LL))(v8) == a2 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 34) )
        return 0LL;
    }
    *a3 = v8;
  }
  return 0LL;
}
