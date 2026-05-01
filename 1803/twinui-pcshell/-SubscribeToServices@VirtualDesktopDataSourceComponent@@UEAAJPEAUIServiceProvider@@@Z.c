/*
 * XREFs of ?SubscribeToServices@VirtualDesktopDataSourceComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025B920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopDataSourceComponent::SubscribeToServices(
        VirtualDesktopDataSourceComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopPinnedApps,
         &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_VirtualDesktopManager,
           &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
           &v12);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
        (const char *)(unsigned int)v6);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      goto LABEL_15;
    }
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 13) + 32LL))(
             *((_QWORD *)this + 13),
             v12,
             v11);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**((_QWORD **)this + 14) + 24LL))(
               *((_QWORD *)this + 14),
               v13,
               v12,
               v11,
               *((_QWORD *)this + 13));
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = 0;
          goto LABEL_13;
        }
        v8 = 57LL;
      }
      else
      {
        v8 = 56LL;
      }
    }
    else
    {
      v8 = 54LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)v7);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
    (const char *)(unsigned int)v4);
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v5;
}
