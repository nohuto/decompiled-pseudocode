/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run @ 0x180117B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFFD8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18011131C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run(
        __int64 a1)
{
  __int64 v2; // r8
  PeoplePaneViewManager *v3; // rcx
  RTL_SRWLOCK *v4; // r14
  int v5; // eax
  HANDLE ProcessHeap; // rax
  LPVOID v7[4]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v8; // [rsp+68h] [rbp+27h] BYREF
  __int64 v9; // [rsp+78h] [rbp+37h]
  int v10; // [rsp+80h] [rbp+3Fh]
  __int64 v11; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v2 = *(_QWORD *)(a1 + 136);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v7,
      (struct wil::details::IFailureCallback *)(a1 + 88),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  v4 = *(RTL_SRWLOCK **)(a1 + 16);
  v5 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
         v3,
         *(const unsigned __int16 **)(a1 + 24),
         *(const unsigned __int16 **)(a1 + 56));
  if ( v5 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      a1 + 88,
      0);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF1,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v4, *(char **)(a1 + 24));
  }
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v8);
  if ( LOBYTE(v7[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7[2]);
  }
}
