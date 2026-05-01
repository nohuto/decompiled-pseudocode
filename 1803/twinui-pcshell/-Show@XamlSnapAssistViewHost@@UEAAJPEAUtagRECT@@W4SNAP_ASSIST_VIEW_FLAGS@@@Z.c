/*
 * XREFs of ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180218AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151734 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18020A47C (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x180217BD0 (MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180217D1C (_lambda_237a64fcb5f24c6cb49474a7b0122401_--_lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180217F74 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--__lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180217FF0 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180218590 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802190EC (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x1802224D8 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall XamlSnapAssistViewHost::Show(__int64 a1, __m128i *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  void *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  const char *v9; // r9
  __m128i v10; // xmm6
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rbx
  int XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  int v26[2]; // [rsp+30h] [rbp-248h] BYREF
  int v27[2]; // [rsp+38h] [rbp-240h] BYREF
  __int128 v28; // [rsp+40h] [rbp-238h] BYREF
  __m128i v29; // [rsp+50h] [rbp-228h] BYREF
  __int64 v30; // [rsp+60h] [rbp-218h] BYREF
  __int32 v31; // [rsp+68h] [rbp-210h]
  __int32 v32; // [rsp+6Ch] [rbp-20Ch]
  void *v33; // [rsp+70h] [rbp-208h] BYREF
  _DWORD v34[2]; // [rsp+78h] [rbp-200h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-1F8h]
  int v36; // [rsp+88h] [rbp-1F0h]
  __int64 v37; // [rsp+90h] [rbp-1E8h]
  char v38; // [rsp+98h] [rbp-1E0h]
  __int64 v39; // [rsp+A0h] [rbp-1D8h]
  __m128i v40; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v41[6]; // [rsp+C0h] [rbp-1B8h] BYREF
  _QWORD v42[40]; // [rsp+F0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v39 = -2LL;
  *(_QWORD *)&v28 = a1;
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v36 = v5;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v42,
    (__int64)"ShowSnapAssist");
  v42[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity((MultitaskingViewTelemetry::ShowSnapAssist *)v42);
  v37 = a1;
  v38 = 1;
  try
  {
    v33 = Platform::Details::Heap::Allocate(0x78uLL, 0xC0uLL);
    v30 = a2->m128i_i64[0];
    v31 = a2->m128i_i32[2];
    v32 = a2->m128i_i32[3];
    v6 = (void *)XamlSnapAssistViewController::XamlSnapAssistViewController(
                   (_DWORD)v33,
                   a1,
                   *(_QWORD *)(a1 + 184),
                   (unsigned int)&v30,
                   *(_QWORD *)(a1 + 80),
                   *(_QWORD *)(a1 + 176));
    v7 = (__int64)v6;
    v33 = v6;
    if ( v6 )
      v8 = (__int64)v6 + 16;
    else
      v8 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 144), v8);
    __abi_winrt_ptr_dtor(v7);
  }
  catch ( ... )
  {
    v29.m128i_i32[0] = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6C,
                         (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                         v9);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v28);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v42);
    if ( v36 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return v29.m128i_u32[0];
  }
  v10 = *a2;
  v29 = *a2;
  v34[0] = a2->m128i_i32[0];
  v34[1] = a2->m128i_i32[1];
  *(_QWORD *)v26 = 0LL;
  v11 = *(_QWORD *)(a1 + 168);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v26);
  v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, GUID *, GUID *, int *))(*(_QWORD *)v11 + 96LL))(
          v11,
          v34,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v26);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v12);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v26);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v42);
    if ( v5 >= 0 )
      LeaveCriticalSection(v4);
    return v13;
  }
  v15 = _mm_cvtsi128_si32(v10);
  *(float *)&v28 = (float)v15;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  *((float *)&v28 + 1) = (float)v16;
  *((float *)&v28 + 2) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) - v15);
  *((float *)&v28 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) - v16);
  v17 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
          *(_QWORD *)(a1 + 152),
          &v28);
  *(_QWORD *)&v28 = v17;
  v18 = __abi_winrt_ptr_ctor(v17);
  v33 = (void *)v18;
  __abi_winrt_ptr_dtor(v17);
  v19 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 136));
  *(_QWORD *)&v28 = v19;
  v20 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 144));
  v30 = v20;
  v21 = __abi_winrt_cast_to(
          0,
          *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 144),
          (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  *(_QWORD *)v27 = v21;
  *(_QWORD *)v27 = __abi_winrt_ptr_ctor(v21);
  __abi_winrt_ptr_dtor(v21);
  lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_(
    (__int64)v41,
    &v29,
    (__int64 *)&v28,
    &v30,
    (__int64 *)v27,
    (__int64 *)&v33);
  v29.m128i_i64[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29.m128i_i64);
  XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 = MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401_(
                                                                                     v29.m128i_i64,
                                                                                     (__int64)v41);
  v13 = XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401;
  if ( XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v41);
    __abi_winrt_ptr_dtor(*(__int64 *)v27);
    v23 = v20;
LABEL_13:
    __abi_winrt_ptr_dtor(v23);
    __abi_winrt_ptr_dtor(v19);
    __abi_winrt_ptr_dtor(v18);
    goto LABEL_8;
  }
  v40 = v10;
  v24 = *(_QWORD *)(a1 + 160);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 192));
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, __m128i *, GUID *, __int64))(*(_QWORD *)v24 + 24LL))(
          v24,
          v29.m128i_i64[0],
          &v40,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 192);
  v13 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v41);
    __abi_winrt_ptr_dtor(*(__int64 *)v27);
    v23 = v30;
    goto LABEL_13;
  }
  *(_BYTE *)(a1 + 112) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  v38 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29.m128i_i64);
  lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v41);
  __abi_winrt_ptr_dtor(*(__int64 *)v27);
  __abi_winrt_ptr_dtor(v30);
  __abi_winrt_ptr_dtor(v19);
  __abi_winrt_ptr_dtor(v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v26);
  MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v42);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
