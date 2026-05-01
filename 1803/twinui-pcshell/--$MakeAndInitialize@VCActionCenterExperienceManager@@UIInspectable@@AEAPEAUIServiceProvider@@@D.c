/*
 * XREFs of ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801530D0
 * Callers:
 *     ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180153CC0 (-GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007C390 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@789Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2524 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDis_ea_1800F2524.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180153310 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180154F78 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CActionCenterExperienceManager,IInspectable,IServiceProvider * &>(
        CActionCenterExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CActionCenterExperienceManager *v4; // rax
  int CanCastTo; // edi
  CActionCenterExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rdx

  *a1 = 0LL;
  v4 = (CActionCenterExperienceManager *)operator new(0x230uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CActionCenterExperienceManager::CActionCenterExperienceManager(v4);
    CanCastTo = CActionCenterExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, v8) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(CActionCenterExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
                      (__int64)v6 + 8,
                      v9);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CActionCenterExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      CActionCenterExperienceManager::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
