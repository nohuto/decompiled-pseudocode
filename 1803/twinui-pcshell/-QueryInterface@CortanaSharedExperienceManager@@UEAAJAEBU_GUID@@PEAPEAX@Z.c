/*
 * XREFs of ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180068060
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B130 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4F70 (-QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4F80 (-QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4F90 (-QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x180068000 (-AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18015B704 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18015B704.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::QueryInterface(
        CortanaSharedExperienceManager *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  CTaskContinuityActivitiesExperienceManager **v4; // r8
  CTaskContinuityActivitiesExperienceManager *v5; // r9
  _DWORD *v6; // rcx
  __int64 (__fastcall *v7)(CTaskContinuityActivitiesExperienceManager *); // rax
  int CanCastTo; // ebx
  _QWORD *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe) )
    {
      *v10 = v11;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    v11 + 8,
                    v12);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  v7 = *(__int64 (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)v5 + 8LL);
  if ( v7 == CTaskContinuityActivitiesExperienceManager::AddRef )
    CTaskContinuityActivitiesExperienceManager::AddRef(v5);
  else
    v7(v5);
  return 0;
}
