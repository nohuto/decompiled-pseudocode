/*
 * XREFs of ?SubscribeToServices@VirtualDesktopDataSourceComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B3D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopDataSourceComponent::SubscribeToServices(
        VirtualDesktopDataSourceComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF

  v13 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  v12 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopNotificationService,
         &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
         &v12);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 51LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         v13,
         v12);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 53LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         v13,
         v12,
         *((_QWORD *)this + 14));
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 54LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_11:
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_13:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
