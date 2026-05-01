/*
 * XREFs of _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x1801C0DBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::Run @ 0x1801C46E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800F67B4 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D4C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1801C3ABC (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801C4300 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator()(__int64 a1)
{
  __int64 v2; // rbp
  PeoplePaneViewManager *v3; // r14
  const unsigned __int16 **v4; // rsi
  char v5; // di
  PeoplePaneViewManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[80]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = a1 + 72;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 72),
    (wil::ActivityThreadWatcher *)v10);
  v3 = *(PeoplePaneViewManager **)a1;
  v4 = (const unsigned __int16 **)(a1 + 8);
  v5 = 1;
  v7 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
         v6,
         *(const unsigned __int16 **)(a1 + 8),
         *(const unsigned __int16 **)(a1 + 40));
  v8 = v7;
  if ( v7 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v8 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v5 )
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v3, *v4);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
  return v8;
}
