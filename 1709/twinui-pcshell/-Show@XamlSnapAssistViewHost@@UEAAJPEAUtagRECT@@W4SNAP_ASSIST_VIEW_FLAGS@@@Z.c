/*
 * XREFs of ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18016EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18015DAC8 (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18016129C (--1-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801614A8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18016FEC0 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1801705FC (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180170788 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x1801793C8 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall XamlSnapAssistViewHost::Show(__int64 *a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r13
  __int64 v5; // rdi
  const char *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __m128i v9; // xmm6
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // rcx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 (__fastcall ***v24)(_QWORD, void *, void **); // rcx
  void *v25; // r14
  int v26; // eax
  Microsoft::WRL::FtmBase *v27; // rdi
  Microsoft::WRL::FtmBase *v28; // rax
  Microsoft::WRL::FtmBase *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 *v34; // rdi
  __int64 *v35; // r10
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  struct _RTL_CRITICAL_SECTION *v39; // rcx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-278h]
  __int64 v42; // [rsp+38h] [rbp-270h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-268h]
  __int64 v44; // [rsp+48h] [rbp-260h]
  void *v45; // [rsp+50h] [rbp-258h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-250h]
  _DWORD v47[2]; // [rsp+60h] [rbp-248h] BYREF
  __int128 v48; // [rsp+68h] [rbp-240h]
  _DWORD v49[4]; // [rsp+78h] [rbp-230h] BYREF
  LPCRITICAL_SECTION v50; // [rsp+88h] [rbp-220h]
  int v51; // [rsp+90h] [rbp-218h]
  __int64 *v52; // [rsp+98h] [rbp-210h]
  char v53; // [rsp+A0h] [rbp-208h]
  __int64 v54; // [rsp+A8h] [rbp-200h]
  __int64 v55; // [rsp+B0h] [rbp-1F8h]
  __int64 v56; // [rsp+B8h] [rbp-1F0h]
  __int64 v57; // [rsp+C0h] [rbp-1E8h]
  void *v58; // [rsp+C8h] [rbp-1E0h]
  __int128 v59; // [rsp+D0h] [rbp-1D8h] BYREF
  _OWORD v60[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 v61; // [rsp+100h] [rbp-1A8h]
  __int64 v62; // [rsp+108h] [rbp-1A0h]
  void *v63; // [rsp+110h] [rbp-198h]
  __int64 v64; // [rsp+118h] [rbp-190h]
  _QWORD v65[4]; // [rsp+120h] [rbp-188h] BYREF
  int v66; // [rsp+140h] [rbp-168h]
  int *v67; // [rsp+148h] [rbp-160h]
  int *v68; // [rsp+150h] [rbp-158h]
  int v69; // [rsp+158h] [rbp-150h] BYREF
  char v70; // [rsp+15Ch] [rbp-14Ch]
  int v71; // [rsp+180h] [rbp-128h] BYREF
  const char *v72; // [rsp+188h] [rbp-120h]
  __int64 v73; // [rsp+190h] [rbp-118h]
  char v74; // [rsp+198h] [rbp-110h]
  __int64 v75; // [rsp+1A0h] [rbp-108h]
  _BYTE v76[144]; // [rsp+1A8h] [rbp-100h] BYREF
  __int64 v77; // [rsp+238h] [rbp-70h]
  __int64 v78; // [rsp+240h] [rbp-68h]
  __int64 v79; // [rsp+248h] [rbp-60h]
  __int64 v80; // [rsp+250h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  v54 = -2LL;
  v43 = a1;
  v44 = (__int64)a1;
  v4 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL));
  lpCriticalSection = v4;
  v50 = v4;
  v41 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v51 = v41;
  v65[1] = 0LL;
  v65[2] = v65;
  v65[3] = 0LL;
  v66 = 0;
  v67 = &v71;
  v68 = &v69;
  v69 = 0;
  v70 = 0;
  v74 = 0;
  v71 = 0;
  v72 = "ShowSnapAssist";
  v73 = 0LL;
  v75 = 1LL;
  v77 = 0LL;
  v78 = 0LL;
  memset(v76, 0, sizeof(v76));
  v79 = 0LL;
  v80 = 0LL;
  v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity((MultitaskingViewTelemetry::ShowSnapAssist *)v65);
  v52 = a1;
  v53 = 1;
  try
  {
    v45 = Platform::Details::Heap::Allocate(0x68uLL, 0xB0uLL);
    v49[0] = *a2;
    v49[1] = a2[1];
    v49[2] = a2[2];
    v49[3] = a2[3];
    v5 = XamlSnapAssistViewController::XamlSnapAssistViewController(
           (_DWORD)v45,
           (_DWORD)a1,
           a1[23],
           (unsigned int)v49,
           a1[10],
           a1[22]);
    v45 = (void *)v5;
    v7 = v5 + 16;
    if ( !v5 )
      v7 = 0LL;
    if ( v7 != a1[18] )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = a1[18];
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      a1[18] = v7;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  catch ( ... )
  {
    LODWORD(v43) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x6C,
                     (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                     v6);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v44);
    v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
    if ( v51 < 0 )
      return (unsigned int)v43;
    v39 = v50;
LABEL_122:
    LeaveCriticalSection(v39);
    return (unsigned int)v43;
  }
  v9 = *(__m128i *)a2;
  v47[0] = *a2;
  v47[1] = a2[1];
  v42 = 0LL;
  v10 = (__int64 *)a1[21];
  v11 = *v10;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v42);
  v13 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, GUID *, GUID *, __int64 *))(v11 + 96))(
          v10,
          v47,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v13);
    v15 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
    if ( v41 < 0 )
      return v14;
    v16 = v4;
LABEL_17:
    LeaveCriticalSection(v16);
    return v14;
  }
  v18 = _mm_cvtsi128_si32(v9);
  *(float *)&v48 = (float)v18;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  *((float *)&v48 + 1) = (float)v19;
  *((float *)&v48 + 2) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - v18);
  *((float *)&v48 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v19);
  v59 = v48;
  v20 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
          a1[19],
          &v59);
  v21 = v20;
  v44 = v20;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  v55 = v21;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = a1[17];
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(a1[17]);
  v56 = v22;
  v23 = a1[18];
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(a1[18]);
  v57 = v23;
  v24 = (__int64 (__fastcall ***)(_QWORD, void *, void **))a1[18];
  v25 = 0LL;
  v45 = 0LL;
  if ( v24 )
  {
    v26 = (**v24)(v24, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v45);
    if ( v26 < 0 )
      __abi_WinRTraiseException(v26);
    v25 = v45;
  }
  v44 = (__int64)v25;
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
  v58 = v25;
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  v60[1] = v9;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v61 = v22;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  v62 = v23;
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
  v63 = v25;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v64 = v21;
  v44 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v48 = 0LL;
  v28 = (Microsoft::WRL::FtmBase *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  if ( v28 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v28);
    *((_DWORD *)v29 + 13) = 1;
    *(_QWORD *)v29 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v29 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlExplorerHostWindowCreatedCallback>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v29 = off_1802B5768;
    *((_QWORD *)v29 + 5) = off_1802B57B8;
    *(__m128i *)((char *)v29 + 56) = v9;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    *((_QWORD *)v29 + 9) = v22;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    *((_QWORD *)v29 + 10) = v23;
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
    *((_QWORD *)v29 + 11) = v25;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    *((_QWORD *)v29 + 12) = v21;
    v27 = v29;
  }
  v30 = (__int64)v27 + 40;
  v31 = -(__int64)v27;
  v32 = v30 & -(__int64)(v31 != 0);
  if ( !v32 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)0x8007000ELL);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v33 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v43);
    v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
    if ( v41 < 0 )
      return v14;
    v16 = lpCriticalSection;
    goto LABEL_17;
  }
  v44 = v30 & -(__int64)(v31 != 0);
  v60[0] = v9;
  v34 = v43;
  v35 = (__int64 *)v43[20];
  v43 = v35;
  v36 = v34[24];
  if ( v36 )
  {
    v34[24] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    v35 = v43;
  }
  v37 = (*(__int64 (__fastcall **)(__int64 *, __int64, _OWORD *, GUID *, __int64 *))(*v35 + 24))(
          v35,
          v32,
          v60,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          v34 + 24);
  LODWORD(v43) = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v37);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v25 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v38 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v34);
    v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
    if ( v41 < 0 )
      return (unsigned int)v43;
    v39 = lpCriticalSection;
    goto LABEL_122;
  }
  *((_BYTE *)v34 + 112) = 1;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34[11] + 24LL))(v34[11], *((unsigned int *)v34 + 18));
  v53 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v65);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v40 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v65[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
  if ( v41 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
