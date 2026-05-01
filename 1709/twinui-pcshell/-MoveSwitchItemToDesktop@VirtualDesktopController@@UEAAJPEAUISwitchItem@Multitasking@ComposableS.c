/*
 * XREFs of ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x1801B7D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1801926A0 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopController::MoveSwitchItemToDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // rdi
  int v7; // ebx
  __int64 (__fastcall **v8)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  int v11; // eax
  AppViewDataSourceHelpers *v12; // rbx
  __int64 *v13; // rax
  struct IInspectable *v14; // rdx
  void **v15; // r9
  int ApplicationViewForItemData; // eax
  PVOID Ptr; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  AppViewDataSourceHelpers *v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF
  AppViewDataSourceHelpers *v28; // [rsp+88h] [rbp+48h] BYREF

  v25[1] = -2LL;
  v6 = this + 13;
  AcquireSRWLockShared(this + 13);
  v25[2] = v6;
  if ( this[10].Ptr )
  {
    v24 = 0LL;
    v8 = *a3;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    v10 = (*v8)(
            (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
            &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
            v9);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v28 = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *, AppViewDataSourceHelpers **))(*(_QWORD *)a2 + 96LL))(
              a2,
              &v28);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v27 = 0LL;
        v12 = v28;
        v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
        ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(
                                       v12,
                                       v14,
                                       (const struct _GUID *)v13,
                                       v15);
        v7 = ApplicationViewForItemData;
        if ( ApplicationViewForItemData >= 0 )
        {
          Ptr = this[10].Ptr;
          v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(v24, v25);
          v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)Ptr + 32LL))(Ptr, v27, *v18);
          v19 = v25[0];
          if ( v25[0] )
          {
            v25[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          if ( v7 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9A,
              (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
              (const char *)(unsigned int)v7);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x98,
            (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
            (const char *)(unsigned int)ApplicationViewForItemData);
        }
        v20 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x95,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v11);
      }
      v21 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x92,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v10);
    }
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
