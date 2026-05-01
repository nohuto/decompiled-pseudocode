/*
 * XREFs of ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_&___ptr64_ @ 0x18000F1E0 (CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_-___ptr64_.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18002E5C0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18008A518 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18008C180 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleViewCreation_EnsureApplicationView(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *Ptr; // rcx
  __int64 (__fastcall *v5)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int ViewForApplication; // eax
  int v7; // ebx
  volatile int *v8; // rdx
  __int64 v9; // rcx
  HWND v10; // rcx
  RTL_SRWLOCK *v11; // rbx
  struct IApplicationView *v12; // rcx
  __int64 (__fastcall *v13)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **); // rax
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // r10
  struct IApplicationView *v18; // rcx
  struct IApplicationView *v19; // rax
  struct IImmersiveApplication *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-28h]
  unsigned int v23; // [rsp+28h] [rbp-20h]
  struct IApplicationView *v24; // [rsp+70h] [rbp+28h] BYREF
  struct IImmersiveApplication *v25; // [rsp+78h] [rbp+30h] BYREF
  __int64 v26; // [rsp+80h] [rbp+38h] BYREF
  __int64 v27; // [rsp+88h] [rbp+40h] BYREF

  v24 = this;
  *a3 = 0LL;
  v25 = 0LL;
  (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, struct IImmersiveApplication **))a2)(
    a2,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    &v25);
  v24 = 0LL;
  Ptr = (RTL_SRWLOCK *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v5 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **))*((_QWORD *)Ptr->Ptr + 7);
  if ( v5 == CApplicationViewManager::GetViewForApplication )
    ViewForApplication = CApplicationViewManager::GetViewForApplication(Ptr, v25, &v24);
  else
    ViewForApplication = v5(Ptr, v25, &v24);
  v7 = ViewForApplication;
  if ( ViewForApplication >= 0 )
    goto LABEL_25;
  v26 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v26);
  if ( v7 >= 0 )
  {
    v9 = v26;
    v27 = v26;
    if ( v26 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v26);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_____ptr64_(v9, &v27) >= 0 )
      SHProcessMessagesUntilEventsEx(v10, (void **)(v26 + 40), 1u, 0x1388u, v22, v23);
    v11 = (RTL_SRWLOCK *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v12 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IApplicationView **))*((_QWORD *)v11->Ptr + 7);
    if ( v13 == CApplicationViewManager::GetViewForApplication )
      v14 = CApplicationViewManager::GetViewForApplication(v11, v25, &v24);
    else
      v14 = v13(v11, v25, &v24);
    v7 = v14;
    if ( v27 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v27 + 36), v8) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 72LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v16 + 36), v8) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 72LL))(v17, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v7 >= 0 )
  {
LABEL_25:
    v19 = v24;
    v18 = 0LL;
    v24 = 0LL;
    *a3 = v19;
  }
  else
  {
    v18 = v24;
  }
  if ( v18 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v7;
}
