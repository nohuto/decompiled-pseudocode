/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18000FB0C
 * Callers:
 *     ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x18000DF88 (-TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA-AV12@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18000E5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-___ptr64.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x1800190E4 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  unsigned __int64 CurrentThreadId; // rbp
  unsigned __int64 v8; // rdi
  signed __int64 i; // rcx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v15; // rax
  signed __int64 v16; // rax
  HANDLE v17; // rax

  v3 = a1 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a3 )
  {
    v6 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_21;
    CurrentThreadId = GetCurrentThreadId();
    v8 = CurrentThreadId % 0xA;
    for ( i = *(_QWORD *)(v6 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)CurrentThreadId )
        goto LABEL_8;
    }
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      v15[2] = CurrentThreadId;
      *((_QWORD *)v15 + 2) = 0LL;
      _m_prefetchw((const void *)(v6 + 8 * v8));
      do
      {
        v16 = *(_QWORD *)(v6 + 8 * v8);
        *(_QWORD *)(i + 16) = v16;
      }
      while ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8 * v8), i, v16) );
    }
    else
    {
LABEL_21:
      i = 0LL;
    }
LABEL_8:
    *(_QWORD *)v3 = i;
    if ( i )
    {
      *(_QWORD *)(v3 + 16) = *(_QWORD *)i;
      *(_QWORD *)i = v3;
      *(_DWORD *)(v3 + 24) = GetCurrentThreadId();
    }
  }
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  memset_0((void *)(a1 + 96), 0, 0x20uLL);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  if ( *(_BYTE *)(a1 + 120) )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, *(LPVOID *)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  v10 = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = v10;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  wil::StoredFailureInfo::StoredFailureInfo(a1 + 136, a2 + 136);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v11 = *(_QWORD *)(a1 + 304);
  v12 = v11 + 8;
  if ( !v11 )
    v12 = a1 + 56;
  *(_QWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 40) = v12 + 40;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
