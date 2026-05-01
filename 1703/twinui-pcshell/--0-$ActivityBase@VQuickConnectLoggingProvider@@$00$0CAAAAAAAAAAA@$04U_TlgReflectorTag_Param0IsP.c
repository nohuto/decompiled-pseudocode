/*
 * XREFs of ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AEF7C
 * Callers:
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x1800AB590 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18006E8CC (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??1?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB760 (--1-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *Local; // rcx
  volatile signed __int32 *v6; // rcx
  void *v7; // rbx
  volatile signed __int32 *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  volatile signed __int32 *v11; // rcx
  void *v12; // r14
  volatile signed __int32 *v13; // rcx
  void *v14; // rbx
  volatile signed __int32 *v15; // rax

  v2 = a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(a1, 1);
  else
    Local = 0LL;
  *(_QWORD *)v2 = Local;
  if ( Local )
  {
    *(_QWORD *)(v2 + 16) = *Local;
    *Local = v2;
    *(_DWORD *)(v2 + 24) = GetCurrentThreadId();
  }
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  memset((void *)(a1 + 136), 0, 0x90uLL);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v2);
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    v6 = *(volatile signed __int32 **)(a1 + 304);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        v7 = *(void **)(a1 + 304);
        if ( v7 )
        {
          wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v7 + 8);
          operator delete(v7);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
    v8 = (volatile signed __int32 *)a2[38];
    *(_QWORD *)(a1 + 304) = v8;
    if ( v8 )
      _InterlockedIncrement(v8);
  }
  else
  {
    v9 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *v9 = 1;
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v9 + 2),
        (__int64)(a2 + 7));
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = *(volatile signed __int32 **)(a1 + 304);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
        {
          v12 = *(void **)(a1 + 304);
          if ( v12 )
          {
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v12 + 8);
            operator delete(v12);
          }
        }
        *(_QWORD *)(a1 + 304) = 0LL;
      }
      *(_QWORD *)(a1 + 304) = v10;
      *(_QWORD *)(a1 + 48) = v10 + 2;
      v13 = (volatile signed __int32 *)a2[38];
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
        {
          v14 = (void *)a2[38];
          if ( v14 )
          {
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<QuickConnectLoggingProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)v14 + 8);
            operator delete(v14);
          }
        }
        a2[38] = 0LL;
      }
      v15 = *(volatile signed __int32 **)(a1 + 304);
      a2[38] = v15;
      if ( v15 )
        _InterlockedIncrement(v15);
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
