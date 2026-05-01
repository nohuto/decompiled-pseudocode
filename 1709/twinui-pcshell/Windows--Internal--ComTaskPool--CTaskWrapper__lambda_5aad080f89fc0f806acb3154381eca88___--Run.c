/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run @ 0x1800C9260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C4110 (-ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact@ExperienceManager_CheckAn.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run(
        __int64 a1)
{
  struct wil::details::IFailureCallback *v2; // rbx
  __int64 v3; // r8
  int v4; // eax
  HANDLE ProcessHeap; // rax
  LPVOID v6[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v7; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = (struct wil::details::IFailureCallback *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 80);
  if ( *(_DWORD *)v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v6,
      v2,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 40));
  }
  else
  {
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    v10 = 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 24));
  if ( v4 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedDelayLoadedContact(v2);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x441,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v7);
  if ( LOBYTE(v6[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6[2]);
  }
}
