/*
 * XREFs of _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5b3b11bf504546ef5d7da292238c7b0___::Run @ 0x18000EF00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b5b3b11bf504546ef5d7da292238c7b0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180012D50 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x1800148E0 (-GetPresentedWindow@CFrameApplicationPresentation@@UEBA-AV-$ComPtr@UITaskWindow@@@WRL@Microsoft@.c)
 *     ?SetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAUHWND__@@@Z @ 0x180016EC0 (-SetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAUHWND__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1800436E0 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800476B0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x180047DF0 (-SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x180112400 (WPP_SF_qd.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJ@CFramePresentationTelemetry@@SAXAEBJ@Z @ 0x18013569C (--$FailedSettingPresentedWindowOnFrame@AEBJ@CFramePresentationTelemetry@@SAXAEBJ@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180136A60 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall lambda_8e77f3627fbb508724cf2b62e627d849_::operator()(CFrameApplicationPresentation **a1)
{
  __int64 v2; // rdi
  CFrameApplicationPresentation *v3; // rcx
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebx
  signed __int64 *v6; // rdi
  signed __int64 v7; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  signed __int64 v10; // rax
  CTaskWindow *v11; // rbx
  CTaskWindow *v12; // rcx
  char v13; // bl
  __int64 (*v14)(void); // rax
  HWND NativeWindow; // rax
  HWND v16; // r13
  CFrameApplicationPresentation *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  CFrameApplicationPresentation *v20; // r14
  __int64 (__fastcall *v21)(__int64, __int64 *); // rax
  __int64 *PresentedWindow; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  CFrameApplicationPresentation *v25; // rcx
  void (__fastcall *v26)(__int64, __int64 *); // rax
  __int64 v27; // rdx
  CFrameApplicationPresentation *v28; // rcx
  void (__fastcall *v29)(CFrameApplicationPresentation *, _QWORD); // rax
  CApplicationFrameWrapper *v30; // rcx
  __int64 (__fastcall *v31)(CApplicationFrameWrapper *__hidden, HWND); // rax
  int v32; // eax
  PSRWLOCK v33; // rsi
  PVOID Ptr; // rbx
  void *v35; // rsi
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  void (*v38)(void); // rax
  __int64 (__fastcall *v39)(void *); // rax
  CFrameApplicationPresentation *v40; // rax
  __int64 v41; // r8
  CFrameApplicationPresentation *v42; // rcx
  __int64 v43; // rdx
  void (__fastcall *v44)(CFrameApplicationPresentation *, __int64, __int64); // rax
  CFrameApplicationPresentation *v45; // rsi
  __int64 (__fastcall *v46)(CFrameApplicationPresentation *, __int64 *); // rax
  char *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r14
  __int64 v50; // rcx
  void (__fastcall *v51)(CFrameApplicationPresentation *, __int64 *); // rax
  __int64 v52; // rdx
  CFrameApplicationPresentation *v53; // rcx
  HWND v54; // rdx
  CApplicationManager *v55; // rcx
  void (*v56)(void); // rax
  _QWORD *v57; // rcx
  __int64 v58; // rax
  int v59; // ebx
  CFrameApplicationPresentation *v60; // rbx
  __int64 v61; // rax
  HANDLE v62; // rax
  __int64 v63; // [rsp+20h] [rbp-E0h]
  __int64 v64; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  int v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h]
  LPVOID lpMem; // [rsp+70h] [rbp-90h]
  char v73; // [rsp+78h] [rbp-88h]
  __int128 v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h]
  DWORD v76; // [rsp+98h] [rbp-68h]
  int *v77; // [rsp+A0h] [rbp-60h]
  PVOID v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v80[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h]
  _QWORD v82[2]; // [rsp+D8h] [rbp-28h] BYREF
  CFrameApplicationPresentation *v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  __int64 v86; // [rsp+100h] [rbp+0h]
  HWND v87; // [rsp+108h] [rbp+8h]
  __int64 v88; // [rsp+110h] [rbp+10h]
  void *v89; // [rsp+118h] [rbp+18h]
  __int64 v90; // [rsp+120h] [rbp+20h]
  char v91; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]
  char v93; // [rsp+180h] [rbp+80h]
  unsigned int v94; // [rsp+188h] [rbp+88h] BYREF
  int v95; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v96; // [rsp+198h] [rbp+98h]

  v85 = -2LL;
  v2 = (__int64)(a1 + 2);
  v3 = a1[8];
  if ( *(_DWORD *)v3 != 1 )
  {
    memset_0(&v70, 0, 0x20uLL);
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0;
    v77 = 0LL;
    goto LABEL_14;
  }
  v73 = 0;
  v70 = *((_DWORD *)v3 + 10);
  v71 = *((_QWORD *)v3 + 6);
  if ( *((_BYTE *)v3 + 64) )
    wil::details::StoredCallContextInfo::AssignMessage(
      (wil::details::StoredCallContextInfo *)&v70,
      *((const unsigned __int16 **)v3 + 7));
  else
    lpMem = (LPVOID)*((_QWORD *)v3 + 7);
  *(_QWORD *)&v74 = 0LL;
  *((_QWORD *)&v74 + 1) = v2;
  v75 = 0LL;
  v76 = 0;
  v77 = &v70;
  v4 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_109;
  CurrentThreadId = GetCurrentThreadId();
  v6 = (signed __int64 *)(v4 + 8 * (CurrentThreadId % 0xAuLL));
  v7 = *v6;
  if ( *v6 )
  {
    while ( *(_DWORD *)(v7 + 8) != CurrentThreadId )
    {
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_8;
    }
    goto LABEL_11;
  }
LABEL_8:
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v7 = (signed __int64)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    v9[2] = CurrentThreadId;
    *((_QWORD *)v9 + 2) = 0LL;
    _m_prefetchw(v6);
    do
    {
      v10 = *v6;
      *(_QWORD *)(v7 + 16) = *v6;
    }
    while ( v10 != _InterlockedCompareExchange64(v6, v7, v10) );
  }
  else
  {
LABEL_109:
    v7 = 0LL;
  }
LABEL_11:
  *(_QWORD *)&v74 = v7;
  if ( v7 )
  {
    v75 = *(_QWORD *)v7;
    *(_QWORD *)v7 = &v74;
    v76 = GetCurrentThreadId();
  }
  v2 = (__int64)(a1 + 2);
LABEL_14:
  v11 = (CTaskWindow *)**((_QWORD **)a1[1] + 13);
  v12 = *a1;
  if ( *a1 && v11 )
  {
    if ( v12 == v11 )
    {
      v13 = 1;
    }
    else
    {
      v67 = 0LL;
      v66 = 0LL;
      if ( (**(int (__fastcall ***)(CTaskWindow *, GUID *, __int64 *))v12)(
             v12,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v67) < 0 )
        goto LABEL_116;
      v59 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, __int64 *))v11)(
              v11,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v66);
      if ( v59 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
      if ( v59 < 0 || (v13 = 1, v67 != v66) )
LABEL_116:
        v13 = 0;
      v12 = *a1;
    }
  }
  else
  {
    v13 = 0;
  }
  v93 = v13;
  v14 = *(__int64 (**)(void))(*(_QWORD *)v12 + 32LL);
  if ( (char *)v14 == (char *)CTaskWindow::GetNativeWindow )
    NativeWindow = CTaskWindow::GetNativeWindow(v12);
  else
    NativeWindow = (HWND)v14();
  v16 = NativeWindow;
  v17 = a1[1];
  if ( NativeWindow == **((HWND **)v17 + 14) && v13 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0);
  }
  else
  {
    if ( !IsWindowVisible(*((HWND *)v17 + 16)) )
      ShowWindowAsync(*((HWND *)a1[1] + 16), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v60 = a1[1];
      v61 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
      LODWORD(v63) = *((_DWORD *)v60 + 12);
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids, v61);
    }
    v18 = (__int64)a1[1];
    v19 = **(_QWORD **)(v18 + 104);
    v86 = v19;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = (__int64)a1[1];
    }
    v20 = *a1;
    v80[1] = v18;
    v81 = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 56LL);
    if ( (char *)v21 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
      PresentedWindow = (__int64 *)CFrameApplicationPresentation::GetPresentedWindow(v18, &v68);
    else
      PresentedWindow = (__int64 *)v21(v18, &v68);
    v23 = 0LL;
    if ( &v79 != PresentedWindow )
    {
      v23 = *PresentedWindow;
      *PresentedWindow = 0LL;
    }
    v79 = 0LL;
    v81 = v23;
    v24 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( *(CFrameApplicationPresentation **)(v18 + 80) != v20 || *(HWND *)(v18 + 88) != v16 )
      *(_BYTE *)(v18 + 96) = 0;
    v25 = *(CFrameApplicationPresentation **)(v18 + 80);
    if ( v25 != v20 )
    {
      if ( v20 )
      {
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v20 + 8LL))(v20);
        v25 = *(CFrameApplicationPresentation **)(v18 + 80);
      }
      *(_QWORD *)(v18 + 80) = v20;
      if ( v25 )
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    *(_QWORD *)(v18 + 88) = v16;
    v26 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 56LL);
    if ( (char *)v26 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
      CFrameApplicationPresentation::GetPresentedWindow(v18, &v64);
    else
      v26(v18, &v64);
    v27 = v64;
    if ( v64 != v23 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 568) + 520LL))(*(_QWORD *)(v18 + 568));
      v27 = v64;
    }
    if ( v27 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( v23 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( (unsigned int)GetWindowBand(*((_QWORD *)a1[1] + 16), &v94) )
    {
      v28 = *a1;
      v29 = *(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD))(*(_QWORD *)*a1 + 24LL);
      if ( (char *)v29 == (char *)CTaskWindow::SetBandId )
        CTaskWindow::SetBandId(v28, v94);
      else
        v29(v28, v94);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v30 = (CApplicationFrameWrapper *)*((_QWORD *)a1[1] + 15);
    v31 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *__hidden, HWND))(*(_QWORD *)v30 + 48LL);
    if ( v31 == CApplicationFrameWrapper::SetPresentedWindow )
      v32 = CApplicationFrameWrapper::SetPresentedWindow(v30, v16);
    else
      v32 = v31(v30, v16);
    v95 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x274,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v32,
        v63);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &>(&v95);
    }
    if ( v16 )
    {
      v87 = v16;
      v33 = CApplicationManagerUtility::g_pIAMGlobals;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v80[0] = (__int64)Ptr;
      if ( Ptr )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        v78 = Ptr;
        v82[0] = Ptr;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        v82[1] = v16;
        v96 = (unsigned int)v33[15].Ptr;
        v35 = 0LL;
        v88 = 0LL;
        v36 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v37 = v36;
        if ( v36 )
        {
          *v36 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
          *((_DWORD *)v36 + 3) = 1;
          *v36 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
          {
            v38 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
            if ( (char *)v38 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
              Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
            else
              v38();
          }
          *v37 = off_180318A40;
          v37[2] = 0LL;
          if ( v37 + 2 != v82 )
          {
            v37[2] = Ptr;
            v78 = 0LL;
            v82[0] = 0LL;
          }
          v37[3] = v16;
          v35 = v37;
        }
        v89 = v35;
        if ( v35 )
        {
          v90 = 0LL;
          Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v96, v35, v63);
          v39 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL);
          if ( v39 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v35);
          else
            v39(v35);
        }
        if ( v78 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v78 + 16LL))(v78);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v80);
      }
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(a1[1], **((HWND **)a1[1] + 14));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v40 = a1[1];
    v41 = (unsigned int)(*((_DWORD *)v40 + 52) != 0) + 4;
    v42 = *a1;
    v43 = *((_QWORD *)v40 + 16);
    v44 = *(void (__fastcall **)(CFrameApplicationPresentation *, __int64, __int64))(*(_QWORD *)*a1 + 208LL);
    if ( (char *)v44 == (char *)CTaskWindow::SetPresentationState )
      CTaskWindow::SetPresentationState(v42, v43, v41);
    else
      v44(v42, v43, v41);
    if ( v19 && !v93 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 208LL))(v19, *((_QWORD *)a1[1] + 16), 0LL);
    v83 = a1[1];
    v45 = v83;
    v84 = 0LL;
    v46 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v83 + 56LL);
    if ( (char *)v46 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
      v47 = (char *)CFrameApplicationPresentation::GetPresentedWindow(v83, &v69);
    else
      v47 = (char *)v46(v83, &v69);
    v48 = 0LL;
    v49 = 0LL;
    if ( &v91 != v47 )
    {
      v48 = *(_QWORD *)v47;
      *(_QWORD *)v47 = 0LL;
      v49 = v48;
    }
    v84 = v48;
    v50 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    *((_BYTE *)v45 + 96) = 1;
    v51 = *(void (__fastcall **)(CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)v45 + 56LL);
    if ( (char *)v51 == (char *)CFrameApplicationPresentation::GetPresentedWindow )
      CFrameApplicationPresentation::GetPresentedWindow(v45, &v65);
    else
      v51(v45, &v65);
    v52 = v65;
    if ( v65 != v49 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 71) + 520LL))(*((_QWORD *)v45 + 71));
      v52 = v65;
    }
    if ( v52 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    v53 = a1[1];
    v54 = (HWND)**((_QWORD **)v53 + 14);
    if ( v54 )
    {
      if ( !*((_DWORD *)v53 + 52) )
      {
        v55 = (CApplicationManager *)*((_QWORD *)v53 + 72);
        if ( v55 )
        {
          v56 = *(void (**)(void))(*(_QWORD *)v55 + 192LL);
          if ( (char *)v56 == (char *)CApplicationManager::FixDialogOwnershipForWindow )
            CApplicationManager::FixDialogOwnershipForWindow(v55, v54);
          else
            v56();
        }
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v76 )
  {
    if ( v76 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v63);
    v76 = 0;
    v57 = (_QWORD *)v74;
    v58 = *(_QWORD *)v74;
    if ( *(_QWORD *)v74 )
    {
      while ( (__int128 *)v58 != &v74 )
      {
        v57 = (_QWORD *)(v58 + 16);
        *(_QWORD *)&v74 = v58 + 16;
        v58 = *(_QWORD *)(v58 + 16);
        if ( !v58 )
          goto LABEL_98;
      }
      *v57 = v75;
    }
LABEL_98:
    *(_QWORD *)&v74 = 0LL;
  }
  if ( v73 )
  {
    v62 = GetProcessHeap();
    HeapFree(v62, 0, lpMem);
  }
}
