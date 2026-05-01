/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004AC8
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180004D10 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180089590 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099950 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800A00C8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1800DC170 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180005A1C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  signed __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  signed __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v4 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v12 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v4, &v12) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v12;
      }
    }
    v5 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v5 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v5 + 8 * v7 + 8); i; i = *(_QWORD *)(i + 48) )
      {
        if ( *(_DWORD *)(i + 40) == CurrentThreadId )
          goto LABEL_17;
      }
      if ( v2
        && (ProcessHeap = GetProcessHeap(), v9 = HeapAlloc(ProcessHeap, 0, 0x38uLL), (i = (signed __int64)v9) != 0) )
      {
        memset(v9, 0, 0x28uLL);
        *(_WORD *)i = 40;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0LL;
        *(_DWORD *)(i + 16) = 0;
        *(_QWORD *)(i + 24) = 0LL;
        *(_DWORD *)(i + 32) = 0;
        *(_DWORD *)(i + 40) = CurrentThreadId;
        *(_QWORD *)(i + 48) = 0LL;
        _m_prefetchw((const void *)(v5 + 8 * v7 + 8));
        do
        {
          v10 = *(_QWORD *)(v5 + 8 * v7 + 8);
          *(_QWORD *)(i + 48) = v10;
        }
        while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v7 + 8), i, v10) );
      }
      else
      {
        i = 0LL;
      }
LABEL_17:
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v5 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}
