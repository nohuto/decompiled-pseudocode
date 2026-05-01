/*
 * XREFs of _lambda_d635cc18682befb9f716ac46036b0176_::operator() @ 0x1801A2FE4
 * Callers:
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6D14 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x1801A49B4 (-GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d635cc18682befb9f716ac46036b0176_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  TaskFlowImmersiveShellBroker *v4; // rcx
  int AppViewManager; // eax
  unsigned int v6; // edi
  int ActivationFactory; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 v20[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v20[1] = -2LL;
  v20[0] = *(_QWORD *)(*a1 + 208);
  v2 = v20[0];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v20);
  if ( !v2 )
  {
LABEL_21:
    v6 = 0;
    goto LABEL_22;
  }
  v3 = *a1;
  v4 = *(TaskFlowImmersiveShellBroker **)(*a1 + 280);
  *(_QWORD *)(*a1 + 280) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  AppViewManager = TaskFlowImmersiveShellBroker::GetAppViewManager(v4, (struct IApplicationViewCollection **)(v3 + 280));
  v6 = AppViewManager;
  if ( AppViewManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x218,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)AppViewManager);
    goto LABEL_22;
  }
  v18 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.TaskFlow.DataEngine.AppActivitySessionListener",
    0x46u,
    0x45u);
  ActivationFactory = RoGetActivationFactory(v22, &GUID_dedccd90_c958_4fe8_a9d9_afeafddcf9f3, &v18);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 539LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_17;
  }
  v9 = v18;
  v10 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*a1 + 248));
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, v2, v10 + 248);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v8 = 540LL;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(*a1 + 248);
  v19 = v11;
  if ( !v11 )
  {
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    goto LABEL_21;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v14 = *a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*a1 + 256));
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v11)(
            v11,
            &GUID_6f30f429_debf_4daa_828e_31bb48d53939,
            v14 + 256);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = 545LL;
      goto LABEL_16;
    }
    goto LABEL_19;
  }
  v13 = 544LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_17:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  return v6;
}
