/*
 * XREFs of ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800D4448
 * Callers:
 *     _lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator() @ 0x1800D3B60 (_lambda_9519b51f5876991f6a0f1ef563cf8f11_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(TaskFlowImmersiveShellBroker *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v14; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  v14 = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.TaskFlow.DataEngine.AppActivitySessionListener",
         0x45u,
         &v13,
         &v14);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1800D45C5LL);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_123c8cac_27d7_4c83_989e_787cc26b90a3, &v12);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 240LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_16;
  }
  v6 = v12;
  v7 = (_QWORD *)((char *)this + 192);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 48LL))(
                        v6,
                        *((_QWORD *)this + 18),
                        (char *)this + 192);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 241LL;
    goto LABEL_14;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 242LL;
    goto LABEL_14;
  }
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
                        *v7,
                        &GUID_0a61d46b_4bac_4a46_ab6b_c62d31ffe96e,
                        (char *)this + 200);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 244LL;
    goto LABEL_14;
  }
  v4 = 0;
LABEL_16:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v4;
}
