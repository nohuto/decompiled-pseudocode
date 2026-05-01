/*
 * XREFs of ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180056E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     ?GetDesiredNavigationLevel@ViewWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180052CB0 (-GetDesiredNavigationLevel@ViewWrapperBase@@UEAA-AW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnPropertyChanged(ViewManagerBridge *this, struct IMessageProxy *a2, __int16 a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v6; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  RTL_SRWLOCK *v11; // rbx
  unsigned int v12; // edi
  __int64 (*v13)(void); // rax
  int DesiredNavigationLevel; // eax
  __int64 v15; // rdx
  void (__fastcall *v16)(void *, char); // rax
  struct IViewWrapperInternal *v17; // rcx
  struct IViewWrapperInternal *v18; // [rsp+20h] [rbp-98h] BYREF
  __int64 v19; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+34h] [rbp-84h] BYREF
  __int64 v22; // [rsp+38h] [rbp-80h]
  RTL_SRWLOCK *v23; // [rsp+40h] [rbp-78h]
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-68h] BYREF
  int v25; // [rsp+58h] [rbp-60h]
  __int64 (__fastcall ***v26)(); // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v22 = -2LL;
  try
  {
    v19 = 0LL;
    if ( (**(int (__fastcall ***)(struct IMessageProxy *, GUID *, __int64 *))a2)(
           a2,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           &v19) < 0
      || a3 != 6 )
    {
LABEL_4:
      v6 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return 0LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 152LL))(v19, &v20);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3CF,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8,
        (int)v18);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 72LL))(v19, &v21);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 9);
        v12 = v20;
        if ( v21 != 1 )
          goto LABEL_4;
        v3 = v11 + 37;
        AcquireSRWLockExclusive(v11 + 37);
        v23 = v11 + 37;
        v18 = 0LL;
        if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)v11, v12, &v18) >= 0 )
        {
          v13 = *(__int64 (**)(void))(*(_QWORD *)v18 + 816LL);
          if ( (char *)v13 == (char *)ViewWrapperBase::GetDesiredNavigationLevel )
            DesiredNavigationLevel = ViewWrapperBase::GetDesiredNavigationLevel((__int64)v18);
          else
            DesiredNavigationLevel = v13();
          v24 = off_180323620;
          v25 = DesiredNavigationLevel;
          v26 = &v24;
          ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)v11, v12, (__int64)&v24);
          if ( v26 )
          {
            if ( v26 == &v24 )
              v15 = 0LL;
            else
              LOBYTE(v15) = 1;
            v16 = (void (__fastcall *)(void *, char))(*v26)[4];
            if ( v16 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
              std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v26, v15);
            else
              v16(v26, v15);
          }
          v17 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v17 + 16LL))(v17);
          }
          if ( v11 == (RTL_SRWLOCK *)-296LL )
            goto LABEL_4;
          goto LABEL_21;
        }
LABEL_26:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
        if ( !v3 )
          goto LABEL_4;
LABEL_21:
        ReleaseSRWLockExclusive(v3);
        goto LABEL_4;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x3D2,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9,
      (int)v18);
    goto LABEL_26;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
