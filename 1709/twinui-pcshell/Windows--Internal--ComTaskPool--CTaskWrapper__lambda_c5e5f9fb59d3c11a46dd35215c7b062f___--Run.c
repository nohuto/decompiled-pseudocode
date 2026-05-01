/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5e5f9fb59d3c11a46dd35215c7b062f___::Run @ 0x180144F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5e5f9fb59d3c11a46dd35215c7b062f___::Run(
        __int64 a1)
{
  DWORD WindowThreadProcessId; // edi
  int ActivationFactory; // eax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v10[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*(HWND *)(a1 + 16), &dwProcessId);
  v7 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v7);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x82A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_12;
  }
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 48LL))(
         v7,
         dwProcessId,
         WindowThreadProcessId,
         &v8);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 48LL))(v8, v10);
    if ( v3 >= 0 )
      goto LABEL_10;
    v4 = 2099LL;
  }
  else
  {
    v4 = 2096LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_12:
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
