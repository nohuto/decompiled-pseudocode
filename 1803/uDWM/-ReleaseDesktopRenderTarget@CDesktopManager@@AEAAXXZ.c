/*
 * XREFs of ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18004AF84
 * Callers:
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004A478 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180074654 (--1CDesktopManager@@EEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800753CC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18002719C (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800342A0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::ReleaseDesktopRenderTarget(CDesktopManager *this)
{
  CBaseObject *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  CDWMDisplaySet *v11; // rcx

  if ( *((_QWORD *)this + 8) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56), 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 8) + 16LL) + 736LL))(
      *(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 8) + 24LL),
      0LL);
    v2 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v2 )
    {
      CBaseObject::Release(v2);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, 0LL);
    v5 = *((_QWORD *)this + 9);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 17) = 0LL;
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 11) = 0LL;
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 16) = 0LL;
  }
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  v10 = *((_QWORD *)this + 18);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)this + 18) = 0LL;
  }
  v11 = (CDWMDisplaySet *)*((_QWORD *)this + 19);
  if ( v11 )
  {
    CDWMDisplaySet::Release(v11);
    *((_QWORD *)this + 19) = 0LL;
  }
}
