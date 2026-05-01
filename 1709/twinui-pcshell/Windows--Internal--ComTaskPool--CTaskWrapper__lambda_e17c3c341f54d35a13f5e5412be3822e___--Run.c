/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run @ 0x1800C9350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_CheckAndPopulateContact_PopulatedContact@_N@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAX$$QEA_N@Z @ 0x1800C8E24 (--$ExperienceManager_CheckAndPopulateContact_PopulatedContact@_N@ExperienceManager_CheckAndPopul.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run(
        __int64 a1)
{
  struct wil::details::IFailureCallback *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  HANDLE ProcessHeap; // rax
  LPVOID v7[4]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v8; // [rsp+68h] [rbp+27h] BYREF
  __int64 v9; // [rsp+78h] [rbp+37h]
  int v10; // [rsp+80h] [rbp+3Fh]
  __int64 v11; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  bool v13; // [rsp+A8h] [rbp+67h] BYREF

  v2 = (struct wil::details::IFailureCallback *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 96);
  if ( *(_DWORD *)v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v7,
      v2,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 40));
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 40);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 48LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         v4);
  if ( v5 >= 0 )
  {
    v13 = *(_BYTE *)(a1 + 40) != 0;
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact_PopulatedContact<bool>(
      (__int64)v2,
      (__int64)&v13);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x424,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v8);
  if ( LOBYTE(v7[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7[2]);
  }
}
