/*
 * XREFs of ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18015A4C4
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18015BD90 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x180068000 (-AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x18015AC00 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18015B704 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18015B704.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18015D7DC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CortanaSharedExperienceManager,IInspectable,IServiceProvider * &>(
        CortanaSharedExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CortanaSharedExperienceManager *v4; // rax
  int CanCastTo; // edi
  CortanaSharedExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(CTaskContinuityActivitiesExperienceManager *); // rax

  *a1 = 0LL;
  v4 = (CortanaSharedExperienceManager *)operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CortanaSharedExperienceManager::CortanaSharedExperienceManager(v4);
  CanCastTo = CortanaSharedExperienceManager::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v6;
      v11 = *(__int64 (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)v6 + 8LL);
      if ( v11 == CTaskContinuityActivitiesExperienceManager::AddRef )
        CTaskContinuityActivitiesExperienceManager::AddRef(v6);
      else
        v11(v6);
      CanCastTo = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v9, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe) )
    {
      *a1 = v6;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    (char *)v6 + 8,
                    v10);
      if ( CanCastTo < 0 )
        goto LABEL_14;
    }
    (*(void (__fastcall **)(CortanaSharedExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_14:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release((__int64)v6);
  return (unsigned int)CanCastTo;
}
