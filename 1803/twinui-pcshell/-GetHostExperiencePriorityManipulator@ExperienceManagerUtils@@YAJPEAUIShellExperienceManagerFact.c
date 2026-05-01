/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180309394
 * Callers:
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180177C9C (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803092EC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *); // [rsp+20h] [rbp-40h] BYREF
  UAPViewWrapper *v11[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v11[1] = (UAPViewWrapper *)-2LL;
  v11[0] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Host",
    0x26u,
    0x25u);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v11);
  v5 = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64, UAPViewWrapper **))(*(_QWORD *)this + 48LL))(
         this,
         v13,
         v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, _QWORD))v11[0])(
           v11[0],
           &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef,
           &v10);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v10)(v10, &GUID_fdae1e57_9570_4461_bab5_532c0f899149, a2);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 273LL;
    }
    else
    {
      v8 = 272LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10E,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v11);
  return v6;
}
