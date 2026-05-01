/*
 * XREFs of ?_Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x18001AD24
 * Callers:
 *     ?OnCancel@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180019CD0 (-OnCancel@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VC.c)
 * Callees:
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019410 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncOpti.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001AEA4 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // cl
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx

  if ( (_DWORD)a2 == 2 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 204)) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 216) + 8LL))(
        *(_QWORD *)(a1 + 216),
        a2,
        a3,
        a1 + 240);
      v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 212), 0xFFFFFFFF) == 0;
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 208)) == 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 216) + 8LL))(
          *(_QWORD *)(a1 + 216),
          1LL,
          2147943623LL,
          a1 + 240);
        v4 = _InterlockedAdd((volatile signed __int32 *)(a1 + 212), 0xFFFFFFFF) == 0;
      }
      if ( v4 )
      {
        v5 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 216);
        if ( v5 )
          (**v5)(v5, 1LL);
        *(_QWORD *)(a1 + 216) = 0LL;
        if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 272) )
          Windows::Internal::ComTaskPool::s_dwThreadIdReuse = GetCurrentThreadId();
        _InterlockedAdd((volatile signed __int32 *)(a1 + 224), 1u);
        if ( *(_QWORD *)(a1 + 112) )
        {
          v6 = *(_QWORD *)(a1 + 112);
          if ( v6 )
          {
            *(_QWORD *)(a1 + 112) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1 + 8);
      }
    }
  }
  else if ( (_DWORD)a2 == 1 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 208)) == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 216) + 8LL))(
           *(_QWORD *)(a1 + 216),
           1LL,
           a3,
           a1 + 240);
    if ( v7 >= 0 && *(_BYTE *)(a1 + 249) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF) != 1 )
        return;
      v8 = *(unsigned int *)(a1 + 236);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
      a1,
      v8);
  }
}
