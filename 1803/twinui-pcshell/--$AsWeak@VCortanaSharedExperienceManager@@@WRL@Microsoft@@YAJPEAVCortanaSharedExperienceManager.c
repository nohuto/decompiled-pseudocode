/*
 * XREFs of ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180159D80
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18015A81C (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x180068000 (-AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18015B704 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18015B704.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(
        CTaskContinuityActivitiesExperienceManager *this,
        __int64 *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r9
  int v7; // edi
  int CanCastTo; // eax
  __int64 (__fastcall *v9)(CTaskContinuityActivitiesExperienceManager *); // rax
  int v10; // eax
  volatile int *v11; // rdx
  CTaskContinuityActivitiesExperienceManager *v12; // rdi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, volatile int *); // rax
  __int64 (__fastcall *v15)(__int64, volatile int *); // rax
  CTaskContinuityActivitiesExperienceManager *v17; // [rsp+50h] [rbp+30h] BYREF

  v17 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000038_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v9 = *(__int64 (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)this + 8LL);
    if ( v9 == CTaskContinuityActivitiesExperienceManager::AddRef )
      CTaskContinuityActivitiesExperienceManager::AddRef(this);
    else
      v9(this);
    v7 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v5, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe) )
    {
      v7 = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    (char *)this + 8,
                    v6);
      this = v17;
      v7 = CanCastTo;
      if ( CanCastTo < 0 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)this + 8LL))(this);
  }
LABEL_11:
  if ( v7 >= 0 )
  {
    v17 = 0LL;
    v10 = (*(__int64 (__fastcall **)(CTaskContinuityActivitiesExperienceManager *, CTaskContinuityActivitiesExperienceManager **))(*(_QWORD *)this + 24LL))(
            this,
            &v17);
    v11 = (volatile int *)v17;
    v7 = v10;
    if ( v10 >= 0 )
    {
      v12 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)v17 + 8LL))(v17);
        v11 = (volatile int *)v17;
      }
      v13 = *a2;
      *a2 = (__int64)v12;
      if ( v13 )
      {
        v14 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v13 + 16LL);
        if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v13,
            v11);
        else
          v14(v13, v11);
        v11 = (volatile int *)v17;
      }
      v7 = 0;
    }
    if ( v11 )
    {
      v17 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v11 + 16LL);
      if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          (__int64)v11,
          v11);
      else
        ((void (__fastcall *)(volatile int *))v15)(v11);
    }
  }
  if ( this )
    (*(void (__fastcall **)(CTaskContinuityActivitiesExperienceManager *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v7;
}
