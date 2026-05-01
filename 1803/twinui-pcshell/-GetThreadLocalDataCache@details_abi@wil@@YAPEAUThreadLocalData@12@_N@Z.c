/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800611F0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppI.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800613C0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180082FD0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180086850 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x1800FF3CC (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800FC314 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v3; // rax
  __int64 v4; // rsi
  DWORD CurrentThreadId; // edi
  unsigned __int64 v6; // r8
  signed __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v10; // rcx
  HANDLE ProcessHeap; // rax
  void *v12; // rax
  signed __int64 v13; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  if ( !wil::details_abi::g_pProcessLocalData )
    return 0LL;
  if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
  {
    v10 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
    v14 = 0LL;
    if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v10, &v14) >= 0
      && !*(_QWORD *)(v1 + 8) )
    {
      *(_QWORD *)(v1 + 8) = v14;
    }
  }
  v3 = *(_QWORD *)(v1 + 8);
  if ( !v3 )
    return 0LL;
  v4 = v3 + 32;
  if ( v3 == -32 )
    return 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v6 = CurrentThreadId % 0xAuLL;
  v7 = *(_QWORD *)(v4 + 8 * v6 + 8);
  v8 = v4 + 8 * v6;
  if ( v7 )
  {
    while ( *(_DWORD *)(v7 + 40) != CurrentThreadId )
    {
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( !v2 )
      return 0LL;
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
    v7 = (signed __int64)v12;
    if ( !v12 )
      return 0LL;
    memset_0(v12, 0, 0x28uLL);
    *(_WORD *)v7 = 40;
    *(_DWORD *)(v7 + 4) = 0;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 40) = CurrentThreadId;
    *(_QWORD *)(v7 + 48) = 0LL;
    _m_prefetchw((const void *)(v8 + 8));
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v7 + 48) = v13;
    }
    while ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8), v7, v13) );
  }
  if ( v7 )
  {
    if ( !*(_QWORD *)(v7 + 8) )
      *(_QWORD *)(v7 + 8) = v4 + 4;
  }
  return (struct wil::details_abi::ThreadLocalData *)v7;
}
