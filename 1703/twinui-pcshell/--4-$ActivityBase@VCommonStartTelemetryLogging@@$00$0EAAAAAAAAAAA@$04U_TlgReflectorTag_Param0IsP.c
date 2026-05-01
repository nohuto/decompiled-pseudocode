/*
 * XREFs of ??4?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180158B34
 * Callers:
 *     ??4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180152D74 (--4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801531F8 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A43AC (--4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180148390 (--1-$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_180148390.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  HANDLE ProcessHeap; // rax
  char v7; // al
  volatile signed __int32 *v8; // rcx
  void *v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx

  v2 = a2 + 56;
  v3 = a1 + 56;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  if ( *(_BYTE *)(a1 + 120) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(v3 + 56));
    *(_BYTE *)(v3 + 64) = 0;
  }
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(v2 + 56);
  v7 = *(_BYTE *)(v2 + 64);
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_BYTE *)(v3 + 64) = v7;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(v2 + 76);
  wil::StoredFailureInfo::operator=(v3 + 80, v2 + 80);
  *(_DWORD *)(v3 + 72) = *(_DWORD *)(v2 + 72);
  v8 = *(volatile signed __int32 **)(a1 + 304);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
    {
      v9 = *(void **)(a1 + 304);
      if ( v9 )
      {
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v9 + 8);
        operator delete(v9);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v10 = *(_QWORD *)(a1 + 304);
    if ( v10 )
      v3 = v10 + 8;
    else
      v3 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 40) = v3 + 40;
  v11 = (_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) )
  {
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v12 = wil::details::g_pThreadFailureCallbacks
          ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)v8,
                        1)
          : 0LL;
      *v11 = v12;
      if ( v12 )
      {
        *(_QWORD *)(a1 + 24) = *v12;
        *v12 = v11;
        *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 32) )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  *(_QWORD *)(a2 + 48) = v2;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
