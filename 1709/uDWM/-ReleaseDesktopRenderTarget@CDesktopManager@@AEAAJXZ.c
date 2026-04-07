/*
 * XREFs of ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EB3C
 * Callers:
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006E7F8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18003D64C (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EC5C (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::ReleaseDesktopRenderTarget(CDesktopManager *this)
{
  unsigned int v1; // edi
  int v3; // eax
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57), 0LL);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 8) + 16LL) + 720LL))(
           *(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 8) + 24LL),
           0LL);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x503u);
      return v1;
    }
    v4 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 17) = 0LL;
  }
  CDesktopManager::ReleaseRenderTarget(this);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 11) = 0LL;
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 9) = 0LL;
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 16) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
  return v1;
}
