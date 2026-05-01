/*
 * XREFs of ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801408E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180132F28 (--1-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180133138 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180141830 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ??$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA?AV01@XZ @ 0x180141B90 (--$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA-AV01@XZ.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2___ @ 0x180141CF4 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014227C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x180144288 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall XamlSnapAssistViewHost::Show(unsigned __int64 a1, __int128 *a2)
{
  __int64 v4; // rdi
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // xmm6
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 (__fastcall ***v23)(_QWORD, void *, void **); // rcx
  void *v24; // rdi
  int v25; // eax
  void *v26; // r14
  int v27; // eax
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2; // rax
  void *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-258h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-250h] BYREF
  __int64 v40; // [rsp+40h] [rbp-248h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-240h] BYREF
  int v42; // [rsp+50h] [rbp-238h]
  void *v43; // [rsp+58h] [rbp-230h]
  __int64 v44; // [rsp+60h] [rbp-228h] BYREF
  char v45; // [rsp+68h] [rbp-220h]
  _QWORD v46[2]; // [rsp+70h] [rbp-218h] BYREF
  __int128 v47; // [rsp+80h] [rbp-208h] BYREF
  _DWORD v48[2]; // [rsp+90h] [rbp-1F8h] BYREF
  void *v49; // [rsp+98h] [rbp-1F0h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-1D8h]
  __int64 v52; // [rsp+B8h] [rbp-1D0h]
  void *v53; // [rsp+C0h] [rbp-1C8h]
  void *v54; // [rsp+C8h] [rbp-1C0h]
  __int64 v55; // [rsp+D0h] [rbp-1B8h]
  __int64 v56; // [rsp+D8h] [rbp-1B0h]
  __int64 v57; // [rsp+E0h] [rbp-1A8h]
  void *v58; // [rsp+E8h] [rbp-1A0h]
  __int128 v59; // [rsp+F0h] [rbp-198h] BYREF
  _QWORD v60[40]; // [rsp+100h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v55 = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
  MultitaskingViewTelemetry::ShowSnapAssist::Start<>((MultitaskingViewTelemetry::ShowSnapAssist *)v60);
  v46[0] = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v44, v46);
  try
  {
    v43 = Platform::Details::Heap::Allocate(0x68uLL, 0xB0uLL);
    v47 = *a2;
    v4 = XamlSnapAssistViewController::XamlSnapAssistViewController(
           (_DWORD)v43,
           a1,
           *(_QWORD *)(a1 + 176),
           (unsigned int)&v47,
           *(_QWORD *)(a1 + 72),
           *(_QWORD *)(a1 + 160));
    v43 = (void *)v4;
    v6 = v4 + 16;
    if ( !v4 )
      v6 = 0LL;
    if ( v6 != *(_QWORD *)(a1 + 136) )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = *(_QWORD *)(a1 + 136);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *(_QWORD *)(a1 + 136) = v6;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  catch ( ... )
  {
    LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x66,
                     (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                     v5);
    goto LABEL_119;
  }
  v8 = *a2;
  v48[0] = *(_DWORD *)a2;
  v48[1] = *((_DWORD *)a2 + 1);
  v38 = 0LL;
  v9 = *(__int64 **)(a1 + 152);
  v10 = *v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
  v12 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, GUID *, GUID *, __int64 *))(v10 + 96))(
          v9,
          v48,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v12);
LABEL_14:
    v14 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v45 )
      CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v44);
    v60[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v60);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v60);
    if ( v42 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v13;
  }
  v39 = 0LL;
  v47 = *a2;
  v16 = *(__int64 **)(a1 + 168);
  v17 = *v16;
  v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v39);
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, GUID *, __int64 *))(v17 + 32))(
          v16,
          &v47,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          v18);
  v13 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v19);
LABEL_23:
    v20 = (__int64)v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_14;
  }
  v21 = *(_QWORD *)(a1 + 128);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*(_QWORD *)(a1 + 128));
  v56 = v21;
  v22 = *(_QWORD *)(a1 + 136);
  if ( v22 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*(_QWORD *)(a1 + 136));
  v57 = v22;
  v23 = *(__int64 (__fastcall ****)(_QWORD, void *, void **))(a1 + 136);
  v24 = 0LL;
  v49 = 0LL;
  if ( v23 )
  {
    v25 = (**v23)(v23, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v49);
    if ( v25 < 0 )
      __abi_WinRTraiseException(v25);
    v24 = v49;
  }
  v43 = v24;
  if ( v24 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 8LL))(v24);
  v58 = v24;
  if ( v24 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
  v26 = 0LL;
  v46[0] = 0LL;
  if ( v39 )
  {
    v27 = (**v39)(v39, &GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb, v46);
    if ( v27 < 0 )
      __abi_WinRTraiseException(v27);
    v26 = (void *)v46[0];
  }
  v43 = v26;
  if ( v26 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
  *(_QWORD *)&v47 = v26;
  if ( v26 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
  v50 = v8;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v51 = v21;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v52 = v22;
  if ( v24 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 8LL))(v24);
  v53 = v24;
  if ( v26 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
  v54 = v26;
  v43 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2 = (_QWORD *)Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2___(&v40, &v50);
  v29 = (void *)((*XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2
                + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2 >> 64));
  *XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2 = 0LL;
  v30 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( !v29 )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8A,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)0x8007000ELL);
    if ( v54 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v26 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v24 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_23;
  }
  v43 = v29;
  v59 = v8;
  v31 = *(_QWORD *)(a1 + 144);
  v40 = v31;
  v32 = *(_QWORD *)(a1 + 184);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v31 = v40;
  }
  v33 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *, GUID *, unsigned __int64))(*(_QWORD *)v31 + 24LL))(
          v31,
          v29,
          &v59,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 184);
  LODWORD(v40) = v33;
  if ( v33 >= 0 )
  {
    *(_BYTE *)(a1 + 104) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(
      *(_QWORD *)(a1 + 80),
      *(unsigned int *)(a1 + 64));
    v45 = 0;
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v60);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v54 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v26 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v24 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v36 = (__int64)v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v60[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v60);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v60);
    if ( v42 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v33);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v54 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v26 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v24 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v34 = (__int64)v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
LABEL_119:
    if ( v45 )
      CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v44);
    v60[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v60);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v60);
    if ( v42 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v40;
  }
}
