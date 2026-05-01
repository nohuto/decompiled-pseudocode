/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18017664C
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180178080 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18006C11C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F5EB0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18017535C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18017535C.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180178A08 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180178A7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  unsigned __int64 v2; // rdx
  const wchar_t *v3; // rdx
  HRESULT v4; // eax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  UINT32 v8; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string[2]; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *Src[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v11[2]; // [rsp+48h] [rbp-20h]
  unsigned __int64 v12; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  try
  {
    WindowsGetStringRawBuffer(this[41], &v8);
    *(_QWORD *)v11 = 0LL;
    v12 = 7LL;
    LOWORD(Src[0]) = 0;
    v2 = v8 + 43;
    if ( v2 >= 8 )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(
        (const void **)Src,
        v2);
      *(_QWORD *)v11 = 0LL;
    }
    std::wstring::append(Src);
    std::wstring::append(Src, 1LL, 32LL);
    std::wstring::append(Src);
    string[0] = 0LL;
    v3 = (const wchar_t *)Src;
    if ( v12 >= 8 )
      v3 = Src[0];
    v4 = Microsoft::WRL::Wrappers::HString::Set(string, v3, v11[0]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        786LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = CSingleViewShellExperience::SetArgs(this + 16, string[0]);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        787LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    std::wstring::_Tidy_deallocate((__int64)Src);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x316,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
                           v6);
  }
  return result;
}
