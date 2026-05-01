/*
 * XREFs of ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18001BC60
 * Callers:
 *     ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304 (-_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSi.c)
 * Callees:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::ApplyOperation(
        CWinRTApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // r10
  volatile int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  struct IImmersiveApplication *v15; // rdx
  int (*v16)(CApplicationManager *__hidden, struct IImmersiveApplication *, struct IApplicationViewOperation *); // rax
  int v17; // eax
  CApplicationManager *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+70h] [rbp+40h]
  CApplicationManager *v22; // [rsp+78h] [rbp+48h] BYREF

  v21 = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = 0LL;
  v6 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v4 = v7;
    v5 = v7;
    v6 = v7;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v5 )
  {
    v9 = v4[6];
    v10 = *(_QWORD *)(v9 + 592);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v9 + 592));
    v21 = v10;
  }
  if ( v6 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 36), v8) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v21 )
  {
    v11 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      -2);
    goto LABEL_23;
  }
  v22 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, CApplicationManager **))v21)(
          v21,
          &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
          &v22);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 392LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)v13,
      -2);
    goto LABEL_21;
  }
  v15 = (struct IImmersiveApplication *)*((_QWORD *)this + 25);
  v16 = *(int (**)(CApplicationManager *__hidden, struct IImmersiveApplication *, struct IApplicationViewOperation *))(*(_QWORD *)v22 + 32LL);
  if ( v16 == CApplicationManager::ApplyOperation )
    v17 = CApplicationManager::ApplyOperation(v22, v15, a2);
  else
    v17 = ((__int64 (__fastcall *)(CApplicationManager *, struct IImmersiveApplication *, struct IApplicationViewOperation *))v16)(
            v22,
            v15,
            a2);
  v11 = v17;
  if ( v17 < 0 )
  {
    v13 = (unsigned int)v17;
    v14 = 393LL;
    goto LABEL_20;
  }
LABEL_21:
  v18 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_23:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v11;
}
