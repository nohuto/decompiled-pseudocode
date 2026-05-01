/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x180116674
 * Callers:
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x180117398 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@UEAA@XZ @ 0x1801175C4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIP.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011783C (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 *     ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x180117878 (--_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(
        CImmersiveShellComponentWithSite *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 3) = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
