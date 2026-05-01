/*
 * XREFs of ?GetPackageFullNameFromAppIdForUser@StateRepository@Shared@DevPlat@@YAJPEAUHSTRING__@@0PEAPEAU4@@Z @ 0x1801DE470
 * Callers:
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x180180C70 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DevPlat::Shared::StateRepository::GetPackageFullNameFromAppIdForUser(
        DevPlat::Shared::StateRepository *this,
        HSTRING a2,
        HSTRING *a3,
        HSTRING *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int ActivationFactory; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HSTRING v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  HSTRING v16; // rcx
  HSTRING v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  HSTRING v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( !a2 )
  {
    v7 = 39LL;
LABEL_5:
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\base\\appmodel\\execmodel\\shared\\utility\\staterepoutil.cpp",
      (const char *)0x80070057LL);
LABEL_26:
    v16 = v23;
    goto LABEL_28;
  }
  if ( !a3 )
  {
    v7 = 40LL;
    goto LABEL_5;
  }
  if ( this )
  {
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_b07904dd_31f6_452c_a738_fa5a2fda337b, &v25);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 46LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\base\\appmodel\\execmodel\\shared\\utility\\staterepoutil.cpp",
        (const char *)(unsigned int)ActivationFactory);
      goto LABEL_26;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, DevPlat::Shared::StateRepository *, __int64 *))(*(_QWORD *)v25 + 80LL))(
                          v25,
                          this,
                          &v24);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 49LL;
      goto LABEL_25;
    }
  }
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v11 = v27;
  v12 = string;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  ActivationFactory = RoGetActivationFactory(v12, &GUID_6795a838_4013_4a1a_943d_0f8db4f3d396, &v27);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 54LL;
    goto LABEL_25;
  }
  v13 = v26;
  v14 = v27;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, __int64 *))(*(_QWORD *)v14 + 432LL))(
                        v14,
                        v24,
                        a2,
                        &v26);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 57LL;
    goto LABEL_25;
  }
  v15 = v26;
  WindowsDeleteString(v23);
  v23 = 0LL;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 208LL))(v15, &v23);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 60LL;
    goto LABEL_25;
  }
  v17 = v23;
  v16 = 0LL;
  v23 = 0LL;
  v8 = 0;
  *a3 = v17;
LABEL_28:
  WindowsDeleteString(v16);
  v18 = v24;
  v23 = 0LL;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v8;
}
