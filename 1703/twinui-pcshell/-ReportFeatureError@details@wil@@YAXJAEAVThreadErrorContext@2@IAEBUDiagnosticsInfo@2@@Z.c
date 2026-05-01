/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18009FB50 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800D3674 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D37F0 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?FlushShellActivities@TaskFlowImmersiveShellBroker@@UEAAJXZ @ 0x1800D41A0 (-FlushShellActivities@TaskFlowImmersiveShellBroker@@UEAAJXZ.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180004538 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180082C5C (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180082EF4 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v4; // esi
  wil::details_abi::ThreadLocalData *v6; // rcx
  unsigned int v7; // ebp
  char LastError; // al
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  wil::details_abi::ThreadLocalData *v12; // rcx
  unsigned int v13[36]; // [rsp+20h] [rbp-98h] BYREF

  v4 = (int)this;
  v6 = *(wil::details_abi::ThreadLocalData **)a2;
  v7 = (unsigned int)a3;
  if ( *(_QWORD *)a2 && *((_QWORD *)v6 + 3) )
    LastError = wil::details_abi::ThreadLocalData::GetLastError(
                  v6,
                  (struct wil::FailureInfo *)v13,
                  *(_DWORD *)(a2 + 8),
                  v4);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset(v13, 0, sizeof(v13));
    v13[14] = *(unsigned __int16 *)(a4 + 24);
    *(_QWORD *)&v13[12] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v13[32] = *(_QWORD *)a4;
    v13[1] = v4;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v13);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    v12 = *(wil::details_abi::ThreadLocalData **)a2;
    if ( *(_QWORD *)a2 && *((_QWORD *)v12 + 3) )
      wil::details_abi::ThreadLocalData::GetLastError(v12, (struct wil::FailureInfo *)v13, *(_DWORD *)(a2 + 8), v4);
  }
  wil::details::RecordFeatureError(
    (wil::details *)v7,
    (__int64)v13,
    (const struct wil::FailureInfo *)a4,
    (const struct DiagnosticsInfo *)a4);
}
