/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180240060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9___ @ 0x18023B418 (wil--ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9___.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18023CDE4 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18023FEE0 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241454 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  struct EventRegistrationToken v9; // r8
  char *Ptr; // rbx
  char *v11; // r14
  volatile signed __int32 *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown **v18; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v19; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v21; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v22; // [rsp+88h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v21);
  if ( v6 < 0 )
  {
    v7 = 1658LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v21 )
  {
    if ( v21 != 4 )
      return 0LL;
    wil::Feature<__WilFeatureTraits_Feature_EnhancingXamlSipExperience>::ReportUsageToService(v5);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v22, this + 52);
    Ptr = (char *)this[53].Ptr;
    v11 = (char *)this[54].Ptr;
    while ( Ptr != v11 && !(unsigned int)SHIsSameObject(**(struct IUnknown ***)Ptr, a2) )
      Ptr += 16;
    v16[0] = Ptr;
    if ( Ptr != this[54].Ptr )
    {
      v12 = (volatile signed __int32 *)*((_QWORD *)Ptr + 1);
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = (volatile signed __int32 *)*((_QWORD *)Ptr + 1);
      }
      v18 = *(struct IUnknown ***)Ptr;
      v19 = v12;
      v13 = TouchKeyboardExperienceManager::DismissView(
              (TouchKeyboardExperienceManager *)this,
              (struct KBViewInfo *)v18);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 1695LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
        if ( v12 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
        return (unsigned int)v6;
      }
      v17[0] = (__int64)this;
      v17[1] = (__int64)v16;
      v13 = wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9___(v17);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 1699LL;
        goto LABEL_22;
      }
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    wil::Feature<__WilFeatureTraits_Feature_EnhancingXamlSipExperience>::ReportUsageToService(v15);
    return 0LL;
  }
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[14].QueryInterface)(a2, 4LL);
  if ( v6 < 0 )
  {
    v7 = 1663LL;
    goto LABEL_3;
  }
  v6 = TouchKeyboardExperienceManager::OnViewCreated((TouchKeyboardExperienceManager *)this, a2, v9);
  if ( v6 < 0 )
  {
    v7 = 1664LL;
    goto LABEL_3;
  }
  return 0LL;
}
