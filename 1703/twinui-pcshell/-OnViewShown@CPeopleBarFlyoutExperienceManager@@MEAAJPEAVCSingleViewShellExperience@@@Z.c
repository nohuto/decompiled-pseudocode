/*
 * XREFs of ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A39C8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D9A4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewShown(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  char *v4; // rsi
  int v5; // eax
  int v6; // ebx
  HANDLE ProcessHeap; // rax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-48h]
  char v11; // [rsp+48h] [rbp-40h]
  _BYTE v12[24]; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (char *)this + 224;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (CPeopleBarFlyoutExperienceManager *)((char *)this + 224),
    (wil::ActivityThreadWatcher *)&v9);
  v5 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
         (char *)this + 536,
         *((unsigned int *)this + 142),
         ((unsigned __int64)this - 24) & -(__int64)(this != (CPeopleBarFlyoutExperienceManager *)40),
         *((_QWORD *)a2 + 3));
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v5);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v4);
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return 0LL;
}
