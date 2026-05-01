/*
 * XREFs of ??4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180071128
 * Callers:
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x1800678B8 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020E94 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049578 (--4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180071340 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int128 v6; // xmm0
  HANDLE ProcessHeap; // rax
  char v8; // al
  volatile signed __int32 *v9; // rcx
  void *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD v15[40]; // [rsp+20h] [rbp-178h] BYREF

  LOBYTE(a3) = *(_DWORD *)(a1 + 32) != 0;
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v15,
    a1,
    a3);
  v5 = a1 + 56;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  v6 = *(_OWORD *)(a2 + 64);
  v15[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  *(_OWORD *)(a1 + 64) = v6;
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
  v8 = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = v8;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  wil::StoredFailureInfo::operator=(a1 + 136, a2 + 136);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  v9 = *(volatile signed __int32 **)(a1 + 304);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = *(void **)(a1 + 304);
      if ( v10 )
      {
        wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10 + 8);
        operator delete(v10);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v11 = *(_QWORD *)(a1 + 304);
    v9 = (volatile signed __int32 *)(v11 + 8);
    v5 = (v11 + 8) & -(__int64)(v11 != 0);
  }
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 40) = v5 + 40;
  v12 = (_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) )
  {
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v13 = wil::details::g_pThreadFailureCallbacks
          ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)v9,
                        1)
          : 0LL;
      *v12 = v13;
      if ( v13 )
      {
        *(_QWORD *)(a1 + 24) = *v13;
        *v13 = v12;
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
  v15[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  return a1;
}
