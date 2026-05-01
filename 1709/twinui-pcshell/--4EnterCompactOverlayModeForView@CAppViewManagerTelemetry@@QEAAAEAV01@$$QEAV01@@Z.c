/*
 * XREFs of ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049650
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800423A0 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180049474 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049578 (--4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180049860 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800499DC (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800499DC.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A78 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int128 v5; // xmm0
  HANDLE ProcessHeap; // rax
  char v7; // al
  volatile signed __int32 *v8; // rcx
  char *v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD v14[40]; // [rsp+20h] [rbp-178h] BYREF

  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    a1);
  v4 = a1 + 56;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  v5 = *(_OWORD *)(a2 + 64);
  v14[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  *(_OWORD *)(a1 + 64) = v5;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  if ( *(_BYTE *)(a1 + 120) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  v7 = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = v7;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  wil::StoredFailureInfo::operator=(a1 + 136, a2 + 136);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  v8 = *(volatile signed __int32 **)(a1 + 304);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
    {
      v9 = *(char **)(a1 + 304);
      if ( v9 )
      {
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v9 + 8);
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
    v8 = (volatile signed __int32 *)(v10 + 8);
    v4 = (v10 + 8) & -(__int64)(v10 != 0);
  }
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 40) = v4 + 40;
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
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  v14[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v14);
  return a1;
}
