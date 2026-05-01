/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x1801DBF58
 * Callers:
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BCF2C (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1801DBEA0 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v14[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Host", 0x25u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, HSTRING, _QWORD))(*(_QWORD *)this + 48LL))(
         this,
         string,
         &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v14[0] = 0LL;
  v8 = (**v13)(v13, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 272LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *))v14[0])(
         v14[0],
         &GUID_fdae1e57_9570_4461_bab5_532c0f899149,
         a2);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 273LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_11:
  v10 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_13:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  return v7;
}
