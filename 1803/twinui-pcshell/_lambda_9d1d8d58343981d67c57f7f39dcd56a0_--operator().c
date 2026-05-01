/*
 * XREFs of _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x1801E1798
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___::Run @ 0x1801E1C50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800590A4 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x1801E1CA0 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()(_DWORD *a1)
{
  char v2; // bl
  __int64 *v3; // r14
  __int64 *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-188h] BYREF
  void *v9; // [rsp+28h] [rbp-180h] BYREF
  __int128 v10; // [rsp+30h] [rbp-178h]
  __int64 v11; // [rsp+40h] [rbp-168h]
  _QWORD v12[40]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v11 = -2LL;
  *(_BYTE *)(*(_QWORD *)a1 + 40LL) = a1[6] == 1;
  v2 = *(_BYTE *)(*(_QWORD *)a1 + 40LL);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"PdcNotificationCallback");
  v12[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)v12,
    v2 != 0);
  try
  {
    v9 = 0LL;
    v10 = 0LL;
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 24LL),
      &v9);
    v4 = (__int64 *)v9;
    v3 = (__int64 *)v10;
    while ( v4 != v3 )
    {
      v8 = *v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 56LL))(
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        v8,
        *(_BYTE *)(*(_QWORD *)a1 + 40LL) != 0 ? 2 : 0);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v8);
      ++v4;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
    v6 = (__int64 *)v9;
    if ( v9 )
    {
      v7 = (__int64 *)v10;
      if ( v9 != (void *)v10 )
      {
        do
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v6++);
        while ( v6 != v7 );
        v6 = (__int64 *)v9;
      }
      std::_Deallocate((char *)v6, (__int64)(*((_QWORD *)&v10 + 1) - (_QWORD)v6) >> 3, 8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v5);
  }
  v12[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
}
