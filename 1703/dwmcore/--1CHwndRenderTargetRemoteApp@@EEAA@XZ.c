/*
 * XREFs of ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180155988
 * Callers:
 *     ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x180155A70 (--_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180187194 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(CHwndRenderTargetRemoteApp *this)
{
  char *v1; // rdi
  const struct _TlgProvider_t *v3; // rdx
  __int64 v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rdx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  v1 = (char *)this + 72;
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 104);
  ReleaseInterface<CDisplay>((__int64 *)this + 14);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 105);
  v4 = *((_QWORD *)this + 103);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 856);
    v7 = *(_QWORD *)(v4 + 832);
    if ( v6 )
    {
      do
      {
        if ( v1 == *(char **)(v7 + 8LL * (unsigned int)v5) )
          break;
        LODWORD(v5) = (_DWORD)v5 + 1;
      }
      while ( (unsigned int)v5 < v6 );
    }
    if ( (unsigned int)v5 < v6 )
    {
      if ( (unsigned int)v5 < v6 - 1 )
      {
        do
        {
          v8 = (unsigned int)((_DWORD)v5 + 1);
          *(_QWORD *)(v7 + 8LL * (unsigned int)v5) = *(_QWORD *)(v7 + 8 * v8);
          LODWORD(v5) = (_DWORD)v5 + 1;
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v4 + 856) - 1 );
      }
      --*(_DWORD *)(v4 + 856);
    }
    CMILRefCountBase::Release(*((CMILRefCountBase **)this + 103));
  }
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, v3);
  DwmCoreAsimov::CDwmEventManager::EndUsageLogging((DwmCoreAsimov::CDwmEventManager *)Manager, this);
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
