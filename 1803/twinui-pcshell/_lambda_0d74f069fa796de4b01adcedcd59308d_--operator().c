/*
 * XREFs of _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e039250a5e9a10031e161b6cc2d8aa5b___::Run @ 0x18000F050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e039250a5e9a10031e161b6cc2d8aa5b___--Run.c)
 * Callees:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180009230 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010804 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x1800148E0 (-GetPresentedWindow@CFrameApplicationPresentation@@UEBA-AV-$ComPtr@UITaskWindow@@@WRL@Microsoft@.c)
 *     ?SetSystemVisualAnimation@CApplicationFrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180016D50 (-SetSystemVisualAnimation@CApplicationFrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z.c)
 *     ?SetSystemVisual@CApplicationFrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180016E80 (-SetSystemVisual@CApplicationFrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1800436E0 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18004C0B0 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     WPP_SF_Ld @ 0x180132694 (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x180135424 (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180136A60 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall lambda_0d74f069fa796de4b01adcedcd59308d_::operator()(unsigned int *a1)
{
  CFramePresentationTelemetry::SetSystemVisual *v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 CurrentThreadId; // r15
  unsigned __int64 v6; // r14
  signed __int64 i; // rcx
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  int v16; // r12d
  CImmersiveApp **v17; // r14
  __int64 (__fastcall *v18)(__int64, __int64 *); // rax
  char *PresentedWindow; // rax
  struct ITaskWindow *v20; // rbx
  struct ITaskWindow *v21; // r15
  __int64 v22; // rcx
  void (__fastcall *v23)(__int64, struct ITaskWindow **); // rax
  struct ITaskWindow *v24; // rcx
  void (__fastcall *v25)(CImmersiveApp *__hidden, struct ITaskWindow *); // rax
  CImmersiveApp *v26; // rcx
  __int64 v27; // rcx
  HWND v28; // rdx
  CApplicationManager *v29; // rcx
  void (*v30)(void); // rax
  __int128 *v31; // rax
  __int128 **v32; // rcx
  __int64 v33; // rcx
  void (__fastcall *v34)(__int64, _QWORD); // rax
  __int64 v35; // rcx
  void (__fastcall *v36)(__int64, __int64); // rax
  PVOID Ptr; // rcx
  HWND v38; // rdx
  __int64 (__fastcall *v39)(__int64, HWND, int); // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v41; // rax
  signed __int64 v42; // rax
  __int64 v43; // rcx
  HANDLE v44; // rax
  int v46; // [rsp+20h] [rbp-69h]
  int v47; // [rsp+50h] [rbp-39h] BYREF
  __int64 v48; // [rsp+58h] [rbp-31h]
  LPVOID lpMem; // [rsp+60h] [rbp-29h]
  char v50; // [rsp+68h] [rbp-21h]
  __int128 v51; // [rsp+70h] [rbp-19h] BYREF
  __int128 *v52; // [rsp+80h] [rbp-9h]
  DWORD v53; // [rsp+88h] [rbp-1h]
  int *v54; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  struct ITaskWindow *v56; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v57; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v58; // [rsp+100h] [rbp+77h] BYREF
  char v59; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = (CFramePresentationTelemetry::SetSystemVisual *)(a1 + 4);
  v3 = *((_QWORD *)a1 + 8);
  if ( *(_DWORD *)v3 == 1 )
  {
    v50 = 0;
    v47 = *(_DWORD *)(v3 + 40);
    v48 = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v47,
        *(const unsigned __int16 **)(v3 + 56));
    else
      lpMem = *(LPVOID *)(v3 + 56);
    *(_QWORD *)&v51 = 0LL;
    *((_QWORD *)&v51 + 1) = v2;
    v52 = 0LL;
    v53 = 0;
    v54 = &v47;
    v4 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_66;
    CurrentThreadId = GetCurrentThreadId();
    v6 = CurrentThreadId % 0xA;
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)CurrentThreadId )
        goto LABEL_10;
    }
    ProcessHeap = GetProcessHeap();
    v41 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    i = (signed __int64)v41;
    if ( v41 )
    {
      *(_QWORD *)v41 = 0LL;
      v41[2] = CurrentThreadId;
      *((_QWORD *)v41 + 2) = 0LL;
      _m_prefetchw((const void *)(v4 + 8 * v6));
      do
      {
        v42 = *(_QWORD *)(v4 + 8 * v6);
        *(_QWORD *)(i + 16) = v42;
      }
      while ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v6), i, v42) );
    }
    else
    {
LABEL_66:
      i = 0LL;
    }
LABEL_10:
    *(_QWORD *)&v51 = i;
    if ( i )
    {
      v52 = *(__int128 **)i;
      *(_QWORD *)i = &v51;
      v53 = GetCurrentThreadId();
    }
  }
  else
  {
    memset_0(&v47, 0, 0x20uLL);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0;
    v54 = 0LL;
  }
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v43 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v43 + 104) )
    {
      if ( !*a1 )
      {
        v58 = *(_QWORD *)(v43 + 544);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v58);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
  {
    v33 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL);
    v34 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 208LL);
    if ( (char *)v34 == (char *)CApplicationFrameWrapper::SetSystemVisualAnimation )
      CApplicationFrameWrapper::SetSystemVisualAnimation(v33, 0LL);
    else
      v34(v33, 0LL);
  }
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL);
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL);
  v10 = *a1;
  if ( (char *)v9 == (char *)CApplicationFrameWrapper::SetSystemVisual )
    CApplicationFrameWrapper::SetSystemVisual(v8, v10);
  else
    v9(v8, v10);
  if ( *((_BYTE *)a1 + 5) )
  {
    v35 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL);
    v36 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 208LL);
    if ( (char *)v36 == (char *)CApplicationFrameWrapper::SetSystemVisualAnimation )
      CApplicationFrameWrapper::SetSystemVisualAnimation(v35, 1LL);
    else
      v36(v35, 1LL);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v46 = *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL);
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids, *a1);
  }
  v11 = *((_QWORD *)a1 + 1);
  v12 = **(_QWORD **)(v11 + 104);
  if ( v12 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v11 + 208) != 0) + 4;
    v14 = *(_QWORD *)(v11 + 128);
    v15 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 208LL);
    if ( (char *)v15 == (char *)CTaskWindow::SetPresentationState )
      CTaskWindow::SetPresentationState(v12, v14, v13);
    else
      v15(v12, v14, v13);
  }
  v16 = *a1;
  v17 = (CImmersiveApp **)*((_QWORD *)a1 + 1);
  v18 = (__int64 (__fastcall *)(__int64, __int64 *))*((_QWORD *)*v17 + 7);
  if ( (char *)v18 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
    PresentedWindow = (char *)CFrameApplicationPresentation::GetPresentedWindow(v17, &v57);
  else
    PresentedWindow = (char *)v18((__int64)v17, &v57);
  v20 = 0LL;
  v21 = 0LL;
  if ( &v59 != PresentedWindow )
  {
    v20 = *(struct ITaskWindow **)PresentedWindow;
    *(_QWORD *)PresentedWindow = 0LL;
    v21 = v20;
  }
  v22 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v16 == *((_DWORD *)v17 + 52) )
    *((_BYTE *)v17 + 528) = 1;
  v23 = (void (__fastcall *)(__int64, struct ITaskWindow **))*((_QWORD *)*v17 + 7);
  if ( (char *)v23 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
    CFrameApplicationPresentation::GetPresentedWindow(v17, &v56);
  else
    v23((__int64)v17, &v56);
  v24 = v56;
  if ( v56 != v21 )
  {
    v25 = *(void (__fastcall **)(CImmersiveApp *__hidden, struct ITaskWindow *))(*(_QWORD *)v17[71] + 520LL);
    v26 = v17[71];
    if ( v25 == CImmersiveApp::OnPresentedWindowChanged )
      CImmersiveApp::OnPresentedWindowChanged(v26, v56);
    else
      v25(v26, v56);
    v24 = v56;
  }
  if ( v24 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v20 + 16LL))(v20);
  v27 = *((_QWORD *)a1 + 1);
  v28 = **(HWND **)(v27 + 112);
  if ( v28 )
  {
    if ( !*(_DWORD *)(v27 + 208) )
    {
      v29 = *(CApplicationManager **)(v27 + 576);
      if ( v29 )
      {
        v30 = *(void (**)(void))(*(_QWORD *)v29 + 192LL);
        if ( (char *)v30 == (char *)CApplicationManager::FixDialogOwnershipForWindow )
          CApplicationManager::FixDialogOwnershipForWindow(v29, v28);
        else
          v30();
      }
    }
  }
  if ( *((_BYTE *)a1 + 4) )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
    v38 = *(HWND *)(*((_QWORD *)a1 + 1) + 128LL);
    v39 = *(__int64 (__fastcall **)(__int64, HWND, int))(*(_QWORD *)Ptr + 24LL);
    if ( v39 == CPrivilegedPresentationOperations::SetShellCloak )
      CPrivilegedPresentationOperations::SetShellCloak((__int64)Ptr, v38, 0);
    else
      v39((__int64)Ptr, v38, 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(v31) = wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  if ( v53 )
  {
    if ( v53 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v46);
    v53 = 0;
    v32 = (__int128 **)v51;
    while ( 1 )
    {
      v31 = *v32;
      if ( !*v32 )
        break;
      if ( v31 == &v51 )
      {
        LODWORD(v31) = (_DWORD)v52;
        *v32 = v52;
        break;
      }
      v32 = (__int128 **)(v31 + 1);
      *(_QWORD *)&v51 = v31 + 1;
    }
    *(_QWORD *)&v51 = 0LL;
  }
  if ( v50 )
  {
    v44 = GetProcessHeap();
    LODWORD(v31) = HeapFree(v44, 0, lpMem);
  }
  return (int)v31;
}
