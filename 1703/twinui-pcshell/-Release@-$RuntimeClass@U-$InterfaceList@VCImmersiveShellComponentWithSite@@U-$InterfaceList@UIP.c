/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EBD60
 * Callers:
 *     ??1?$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EBA9C (--1-$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ECEBC (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800ED530 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inte_ea_1800ED530.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1800ED550 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inte_ea_1800ED550.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800ED590 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inte_ea_1800ED590.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x1800ED5A0 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inte_ea_1800ED5A0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800ED5C0 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inte_ea_1800ED5C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *(unsigned int *)(a1 + 92);
  while ( (_DWORD)v2 != 0x7FFFFFFF
       && (_DWORD)v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 16) + 64LL))(
        a1 + 16,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
