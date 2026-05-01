/*
 * XREFs of ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x18023A640
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180235C40 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1802392B4 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@Comp.c)
 *     ??0?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x180239648 (--0-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualityPre.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18023AB80 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShel.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1802BA9D8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitask.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  int v5; // eax
  unsigned int i; // ebx
  int v7; // eax
  int v8; // eax
  struct IInspectable *v9; // rdx
  void **v10; // r9
  int ApplicationViewForItemData; // eax
  int v12; // eax
  __int64 v13; // rsi
  const char *v14; // r9
  __int64 v15; // rbx
  void *v16; // rax
  char v17; // dl
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r14
  wil::details::in1diag3 *v21; // rcx
  void *v22; // rax
  void *v23; // rcx
  int v24; // eax
  const char *v25; // r9
  __int64 result; // rax
  __int64 v27; // [rsp+20h] [rbp-98h] BYREF
  void *v28[2]; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-80h] BYREF
  struct _GUID v30; // [rsp+40h] [rbp-78h] BYREF
  LPARAM lParam[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v33[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v34[8]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  _QWORD *v37; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+20h] BYREF

  v37 = a3;
  v33[1] = -2LL;
  v3 = (__int64)a3;
  v4 = a2;
  try
  {
    *a3 = 0LL;
    *(_OWORD *)v28 = 0LL;
    v28[0] = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(a1);
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 56LL))(v4, &v29);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        32LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)v5);
    for ( i = 0; ; ++i )
    {
      v38 = i;
      if ( i >= v29 )
        break;
      try
      {
        v27 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 48LL))(v4, i, &v27);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            38LL,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
            (const char *)(unsigned int)v7);
        *(_QWORD *)v30.Data4 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v27 + 96LL))(v27, v30.Data4);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            41LL,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
            (const char *)(unsigned int)v8);
        *(_QWORD *)&v30.Data1 = 0LL;
        ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(
                                       *(AppViewDataSourceHelpers **)v30.Data4,
                                       v9,
                                       &v30,
                                       v10);
        if ( ApplicationViewForItemData < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            44LL,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
            (const char *)(unsigned int)ApplicationViewForItemData);
        v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)&v30.Data1 + 72LL))(
                *(_QWORD *)&v30.Data1,
                v33);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            47LL,
            (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
            (const char *)(unsigned int)v12);
        std::map<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Try_emplace<HWND__ * const &,>(
          (__int64 *)v28,
          (unsigned __int64)v34,
          v33);
        v13 = *(_QWORD *)(v34[0] + 40LL);
        *(_QWORD *)(v34[0] + 40LL) = v27;
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v30);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)v30.Data4);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v27);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x33,
          (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
          v14);
        v3 = (__int64)v37;
        v4 = a2;
        i = v38;
        continue;
      }
    }
    v15 = 0LL;
    v37 = 0LL;
    v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = 0LL;
    if ( v16 )
      v18 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>(
              (__int64)v16,
              v17);
    v19 = v18;
    v20 = 0LL;
    if ( v18 )
    {
      v15 = v18;
      v37 = (_QWORD *)v18;
      v19 = 0LL;
      v20 = v18;
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v21 = retaddr;
    if ( !v18 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        55LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)0x8007000ELL);
    *(_OWORD *)lParam = 0LL;
    v22 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode(v21);
    lParam[0] = (LPARAM)v28[0];
    v28[0] = v22;
    v23 = (void *)lParam[1];
    lParam[1] = (LPARAM)v28[1];
    v28[1] = v23;
    v32 = v15;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    EnumWindows((WNDENUMPROC)lambda_b9dfef47cb72abb824d2e234dc99521a_::_lambda_invoker_cdecl_, (LPARAM)lParam);
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, v3);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        86LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
        (const char *)(unsigned int)v24);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v32);
    std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
      lParam,
      &v38,
      *(_QWORD *)lParam[0]);
    std::_Deallocate((char *)lParam[0], 1uLL, 0x30uLL);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v37);
    std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::erase(
      v28,
      &v37,
      *(_QWORD *)v28[0]);
    std::_Deallocate((char *)v28[0], 1uLL, 0x30uLL);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v37) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x59,
                     (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
                     v25);
    return (unsigned int)v37;
  }
  return result;
}
