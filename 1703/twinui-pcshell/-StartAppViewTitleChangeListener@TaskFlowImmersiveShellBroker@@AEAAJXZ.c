/*
 * XREFs of ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800D4700
 * Callers:
 *     _lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator() @ 0x1800D3B60 (_lambda_9519b51f5876991f6a0f1ef563cf8f11_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(TaskFlowImmersiveShellBroker *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v12; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v13 = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewTitleChangeListener",
         0x45u,
         &v12,
         &v13);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1800D4834LL);
  }
  ActivationFactory = RoGetActivationFactory(v13, &GUID_647a61b2_1338_468e_a372_32e0271185c2, &v11);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 303LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_12;
  }
  v6 = v11;
  v7 = (_QWORD *)((char *)this + 160);
  v8 = *((_QWORD *)this + 20);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 48LL))(
                        v6,
                        *((_QWORD *)this + 18),
                        (char *)this + 160);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 304LL;
    goto LABEL_10;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 305LL;
    goto LABEL_10;
  }
  v4 = 0;
LABEL_12:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
