/*
 * XREFs of ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C
 * Callers:
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004A490 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x18007CF68 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x18007D204 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007DA30 (-Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180084A58 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ @ 0x180084E80 (-Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008AD40 (-Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008AE80 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008E3C8 (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008E990 (-Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008FA8C (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<ContentManagement::IContentManagementBroker>(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8[2] = (const WCHAR *)-2LL;
  v8[0] = L"ContentManagement.ContentManagementBroker";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v9, v8);
  v7 = 0LL;
  v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v7)(v7, &GUID_44431c59_c5ec_4253_94f7_27563a8a242f, a1);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18004EE09LL);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return a1;
}
