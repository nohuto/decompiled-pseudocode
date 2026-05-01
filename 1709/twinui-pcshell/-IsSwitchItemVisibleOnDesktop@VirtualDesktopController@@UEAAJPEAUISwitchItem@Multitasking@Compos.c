/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1801B7B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1801926A0 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        bool *a4)
{
  __int64 (__fastcall **v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  AppViewDataSourceHelpers *v12; // rbx
  __int64 *v13; // rax
  struct IInspectable *v14; // rdx
  void **v15; // r9
  int ApplicationViewForItemData; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  AppViewDataSourceHelpers *v22; // rcx
  __int64 v23; // rcx
  AppViewDataSourceHelpers *v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v29; // [rsp+70h] [rbp+30h] BYREF
  __int64 v30; // [rsp+78h] [rbp+38h] BYREF

  v27[1] = -2LL;
  *a4 = 0;
  v26 = 0LL;
  v7 = *a3;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
  v9 = (*v7)(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *, AppViewDataSourceHelpers **))(*(_QWORD *)a2 + 96LL))(
          a2,
          &v25);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v30 = 0LL;
    v12 = v25;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(
                                   v12,
                                   v14,
                                   (const struct _GUID *)v13,
                                   v15);
    v10 = ApplicationViewForItemData;
    if ( ApplicationViewForItemData >= 0 )
    {
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(v26, v27);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v19 + 24LL))(*v19, v30, &v29);
      v20 = v27[0];
      if ( v27[0] )
      {
        v27[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v10 >= 0 )
      {
        *a4 = v29 != 0;
        v10 = 0;
LABEL_13:
        v21 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        goto LABEL_15;
      }
      v17 = (unsigned int)v10;
      v18 = 132LL;
    }
    else
    {
      v17 = (unsigned int)ApplicationViewForItemData;
      v18 = 129LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v17);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x7E,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v11);
LABEL_15:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_17:
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v10;
}
