/*
 * XREFs of _lambda_e597d3828395d9deb7c49889950b0259_::operator() @ 0x1801A3318
 * Callers:
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A70F8 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e597d3828395d9deb7c49889950b0259_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int ActivationFactory; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15[1] = -2LL;
  v15[0] = *(_QWORD *)(*a1 + 208);
  v2 = v15[0];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v15);
  if ( !v2 )
  {
LABEL_14:
    v4 = 0;
    goto LABEL_15;
  }
  v13 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.TaskFlow.DataEngine.FileActivityListener",
    0x40u,
    0x3Fu);
  ActivationFactory = RoGetActivationFactory(v17, &GUID_e73e0a75_15f4_479f_a515_948333fbd48a, &v13);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 582LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_10;
  }
  v6 = v13;
  v7 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*a1 + 232));
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, v2, v7 + 232);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 583LL;
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(*a1 + 232);
  v14 = v8;
  if ( !v8
    || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8),
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8),
        v4 = v9,
        v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24C,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_10:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return v4;
}
