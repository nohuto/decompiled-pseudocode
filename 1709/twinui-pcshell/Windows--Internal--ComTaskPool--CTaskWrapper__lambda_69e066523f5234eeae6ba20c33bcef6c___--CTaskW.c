/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x1801DC290
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x1801DB81C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180049370 (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  int v6; // eax
  _QWORD *v7; // r14
  _QWORD *v8; // rcx
  __int64 v9; // rbp

  *(_QWORD *)a1 = &IAppViewDataSourceAdapter::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_180213F50;
  v4 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a1 + 48 != a2 + 32 )
  {
    *(_QWORD *)(a1 + 48) = *v5;
    *v5 = 0LL;
  }
  v6 = *(_DWORD *)(a2 + 72);
  v7 = (_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 56) = &wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v6 )
  {
    v8 = wil::details::g_pThreadFailureCallbacks
       ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                     (__int64)&wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable',
                     1)
       : 0LL;
    *v7 = v8;
    if ( v8 )
    {
      *(_QWORD *)(a1 + 80) = *v8;
      *v8 = v7;
      *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
    }
  }
  v9 = a1 + 112;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 112,
    a2 + 96);
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 344);
  *(_QWORD *)(a2 + 344) = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
    v9 = (*(_QWORD *)(a1 + 360) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 360) != 0LL);
  *(_QWORD *)(a1 + 104) = v9;
  *(_QWORD *)(a1 + 96) = v9 + 40;
  *(_QWORD *)(a2 + 88) = a2 + 96;
  if ( *(_DWORD *)(a2 + 72) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 48));
  *(_QWORD *)(a1 + 56) = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  return a1;
}
