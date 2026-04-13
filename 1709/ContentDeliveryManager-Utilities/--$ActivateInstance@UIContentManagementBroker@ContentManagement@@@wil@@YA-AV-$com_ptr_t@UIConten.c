/*
 * XREFs of ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110
 * Callers:
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800467D0 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z @ 0x1800726A4 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z @ 0x18007291C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z.c)
 *     ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180072F90 (-Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180079A48 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ @ 0x180079E50 (-Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007F3C0 (-Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007F4FC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x180083008 (-WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x180083400 (-Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008445C (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<ContentManagement::IContentManagementBroker>(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = (const WCHAR *)-2LL;
  v7[0] = L"ContentManagement.ContentManagementBroker";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v8, v7);
  v6 = 0LL;
  v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v6)(v6, &GUID_44431c59_c5ec_4253_94f7_27563a8a242f, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}
