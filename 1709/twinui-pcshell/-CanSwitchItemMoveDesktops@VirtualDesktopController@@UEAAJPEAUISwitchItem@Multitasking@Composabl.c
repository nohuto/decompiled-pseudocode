/*
 * XREFs of ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x1801B7F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1801926A0 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::CanSwitchItemMoveDesktops(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  AppViewDataSourceHelpers *v9; // rbx
  __int64 *v10; // rax
  struct IInspectable *v11; // rdx
  void **v12; // r9
  int ApplicationViewForItemData; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  AppViewDataSourceHelpers *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  AppViewDataSourceHelpers *v21; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0;
  v6 = this + 13;
  AcquireSRWLockShared(this + 13);
  if ( !this[10].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_15;
  }
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *, AppViewDataSourceHelpers **))(*(_QWORD *)a2 + 96LL))(
         a2,
         &v21);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    v9 = v21;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(
                                   v9,
                                   v11,
                                   (const struct _GUID *)v10,
                                   v12);
    v7 = ApplicationViewForItemData;
    if ( ApplicationViewForItemData >= 0 )
    {
      ApplicationViewForItemData = (*(__int64 (__fastcall **)(PVOID, __int64, int *))(*(_QWORD *)this[10].Ptr + 40LL))(
                                     this[10].Ptr,
                                     v20,
                                     &v19);
      v7 = ApplicationViewForItemData;
      if ( ApplicationViewForItemData >= 0 )
      {
        *a3 = v19 != 0;
        v7 = 0;
LABEL_11:
        v15 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_13;
      }
      v14 = 172LL;
    }
    else
    {
      v14 = 169LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)ApplicationViewForItemData);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xA6,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_15:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
