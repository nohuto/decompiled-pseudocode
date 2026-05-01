/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c999dea8893325250a33bf4039428575___::Run @ 0x18008BF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x18008C068 (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c999dea8893325250a33bf4039428575___::Run(
        __int64 a1)
{
  DWORD WindowThreadProcessId; // edi
  const unsigned __int16 (*v2)[60]; // rdx
  __int64 v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v12[4]; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v13 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*(HWND *)(a1 + 16), &dwProcessId);
  v10 = 0LL;
  v3 = *(_QWORD *)Windows::Internal::StringReference::StringReference(&string, v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v10);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory);
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  v9 = 0LL;
  v5 = v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 48LL))(
         v5,
         dwProcessId,
         WindowThreadProcessId,
         &v9);
  if ( v6 < 0 )
  {
    v8 = 2147LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v12);
  if ( v6 < 0 )
  {
    v8 = 2150LL;
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
