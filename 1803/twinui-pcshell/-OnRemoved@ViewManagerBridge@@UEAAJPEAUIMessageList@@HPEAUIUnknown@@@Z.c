/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180057030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x18008E378 (-StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnRemoved(
        RTL_SRWLOCK **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  RTL_SRWLOCK **v4; // rdi
  void **v5; // r15
  int v8; // eax
  void *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  void *v12; // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 (__fastcall ***v15)(void *, GUID *, __int64 *); // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  void *v21; // [rsp+20h] [rbp-198h] BYREF
  __int64 v22; // [rsp+28h] [rbp-190h] BYREF
  __int64 v23; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-180h] BYREF
  __int64 v25; // [rsp+40h] [rbp-178h]
  void **v26; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-160h] BYREF
  int v28; // [rsp+70h] [rbp-148h]
  _BYTE v29[248]; // [rsp+88h] [rbp-130h] BYREF
  _BYTE v30[16]; // [rsp+180h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v25 = -2LL;
  try
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))a4->lpVtbl->QueryInterface)(
           a4,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           &v21);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x416,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8,
        (int)v21);
    }
    else
    {
      v9 = v21;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        &v26,
        "OnRemoved");
      v5 = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
      v26 = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
      ViewManagerInteropTraceLogging::OnRemoved::StartActivity((ViewManagerInteropTraceLogging::OnRemoved *)&v26, v9);
      v10 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v21 + 152LL))(v21, &v24);
      v11 = retaddr;
      if ( v10 >= 0 )
      {
        ViewEventDispatcher::ViewDestroyed(this[8], v24);
        v23 = 0LL;
        v12 = v21;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        v13 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v12 + 104LL))(v12, &v23);
        v14 = retaddr;
        v4 = this - 2;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 64LL))(
                  v23,
                  (unsigned __int64)(this + 1) & -(__int64)(this != (RTL_SRWLOCK **)16));
          v14 = retaddr;
          v4 = this - 2;
          if ( v13 >= 0 )
            goto LABEL_6;
          v19 = 1058LL;
LABEL_16:
          wil::details::in1diag3::_Log_Hr(
            v14,
            (void *)v19,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v13,
            (int)v21);
LABEL_6:
          v22 = 0LL;
          v15 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))v21;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
          v16 = (**v15)(v15, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v22);
          v17 = retaddr;
          if ( v16 < 0 )
          {
            v20 = 1062LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 64LL))(
                    v22,
                    (unsigned __int64)(this - 1) & -(__int64)(v4 != 0LL));
            v17 = retaddr;
            if ( v16 >= 0 )
            {
LABEL_8:
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v26);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
              v26 = v5;
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
              wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v30);
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(v29);
              if ( v28 )
                wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v27);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
              return 0LL;
            }
            v20 = 1064LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)v20,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v16,
            (int)v21);
          goto LABEL_8;
        }
LABEL_14:
        v19 = 1056LL;
        goto LABEL_16;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x41B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10,
      (int)v21);
    goto LABEL_14;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
