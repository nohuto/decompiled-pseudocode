/*
 * XREFs of ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180147698
 * Callers:
 *     ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x180147770 (--_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(CHwndRenderTargetRemoteApp *this)
{
  char *v1; // rdi
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rdx

  v1 = (char *)this + 72;
  *(_QWORD *)this = &CHwndRenderTargetRemoteApp::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTargetRemoteApp::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetRemoteApp::`vftable'{for `IVisualTreeClient'};
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 106);
  ReleaseInterface<CDisplay>((__int64 *)this + 14);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 107);
  v3 = *((_QWORD *)this + 105);
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 1104);
    v6 = *(_QWORD *)(v3 + 1080);
    if ( v5 )
    {
      do
      {
        if ( v1 == *(char **)(v6 + 8LL * v4) )
          break;
        ++v4;
      }
      while ( v4 < v5 );
    }
    if ( v4 < v5 )
    {
      if ( v4 < v5 - 1 )
      {
        do
        {
          v7 = v4 + 1;
          *(_QWORD *)(v6 + 8LL * v4++) = *(_QWORD *)(v6 + 8 * v7);
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v3 + 1104) - 1 );
      }
      --*(_DWORD *)(v3 + 1104);
    }
    CMILRefCountBase::Release(*((CMILRefCountBase **)this + 105));
  }
  CHwndRenderTarget::~CHwndRenderTarget(this);
}
