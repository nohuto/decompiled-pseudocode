/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18006F1FC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___ @ 0x18006CB60 (Windows--Internal--ComTaskPool--QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___ @ 0x18006CC90 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180049370 (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rdi
  bool v8; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  if ( v2 )
  {
    v6 = wil::details::g_pThreadFailureCallbacks
       ? (__int64 *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(a1, 1)
       : 0LL;
    *(_QWORD *)v3 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v3 + 16) = *v6;
      *v6 = v3;
      *(_DWORD *)(v3 + 24) = GetCurrentThreadId();
    }
  }
  v7 = a1 + 56;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a2 + 56);
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  if ( *(_QWORD *)(a1 + 304) )
    v7 = (*(_QWORD *)(a1 + 304) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 304) != 0LL);
  *(_QWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 40) = v7 + 40;
  v8 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  result = a1;
  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  return result;
}
