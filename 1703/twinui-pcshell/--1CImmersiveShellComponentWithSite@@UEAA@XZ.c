/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x1800EC0C0
 * Callers:
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1800EC8C4 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800ECDC4 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 *     ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x1800ECE00 (--_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(
        CImmersiveShellComponentWithSite *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 2) = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 3) = &CImmersiveShellComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
