/*
 * XREFs of ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18001C970
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001C890 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180044D10 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::SetFocus(CWinRTApplicationView *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // r10
  volatile int *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD); // rax
  int v15; // eax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v19; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  v19 = 0LL;
  v2 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v3 = 0LL;
  v4 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v2 = v5;
    v3 = v5;
    v4 = v5;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v3 )
  {
    v7 = v2[6];
    v8 = *(_QWORD *)(v7 + 592);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v7 + 592));
    v19 = v8;
  }
  if ( v4 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v4 + 36), v6) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v19 )
  {
    v9 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      -2);
    goto LABEL_23;
  }
  v20 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19)(
          v19,
          &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
          &v20);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 74LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)v11,
      -2);
    goto LABEL_21;
  }
  v13 = *((_QWORD *)this + 25);
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 64LL);
  if ( v14 == CApplicationManager::ActivateApplication )
    v15 = CApplicationManager::ActivateApplication(v20, v13, 0LL);
  else
    v15 = v14(v20, v13, 0LL);
  v9 = v15;
  if ( v15 < 0 )
  {
    v11 = (unsigned int)v15;
    v12 = 75LL;
    goto LABEL_20;
  }
LABEL_21:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_23:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v9;
}
