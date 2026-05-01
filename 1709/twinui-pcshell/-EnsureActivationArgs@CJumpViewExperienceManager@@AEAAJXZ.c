/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1800BEE28
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x1800C04C0 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x1800C05DC (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C05DC.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800C0724 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800C0724.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801D2CA0 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  PCWSTR StringRawBuffer; // r14
  unsigned __int64 v3; // r8
  PCNZWCH v4; // rbx
  __int64 v5; // rdx
  PCNZWCH *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  PCNZWCH *v9; // rbx
  UINT32 v10; // ebx
  const WCHAR *v11; // rdi
  HRESULT v12; // eax
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  HSTRING string[2]; // [rsp+38h] [rbp-50h] BYREF
  PCNZWCH sourceString[2]; // [rsp+48h] [rbp-40h] BYREF
  UINT32 length[2]; // [rsp+58h] [rbp-30h]
  unsigned __int64 v20; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  try
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[41], (UINT32 *)&v16);
    *(_QWORD *)length = 0LL;
    v3 = 7LL;
    v20 = 7LL;
    LOWORD(sourceString[0]) = 0;
    if ( (unsigned int)(v16 + 43) >= 8uLL )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(sourceString);
      *(_QWORD *)length = 0LL;
      v3 = v20;
    }
    if ( v3 < 0x29 )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        sourceString,
        41LL);
    }
    else
    {
      *(_QWORD *)length = 41LL;
      v4 = sourceString[0];
      memmove((void *)sourceString[0], L"Windows.Internal.ShellExperience.JumpView", 0x52uLL);
      *((_WORD *)v4 + 41) = 0;
    }
    v5 = *(_QWORD *)length;
    if ( v20 == *(_QWORD *)length )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(sourceString);
    }
    else
    {
      ++*(_QWORD *)length;
      v6 = sourceString;
      if ( v20 >= 8 )
        v6 = (PCNZWCH *)sourceString[0];
      *(_DWORD *)((char *)v6 + 2 * v5) = 32;
    }
    v7 = *(_QWORD *)length;
    if ( (unsigned int)v16 > v20 - *(_QWORD *)length )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        sourceString,
        (unsigned int)v16);
    }
    else
    {
      v8 = *(_QWORD *)length + (unsigned int)v16;
      *(_QWORD *)length = v8;
      v9 = sourceString;
      if ( v20 >= 8 )
        v9 = (PCNZWCH *)sourceString[0];
      memmove((char *)v9 + 2 * v7, StringRawBuffer, 2LL * (unsigned int)v16);
      *((_WORD *)v9 + v8) = 0;
    }
    string[0] = 0LL;
    v10 = length[0];
    v11 = (const WCHAR *)sourceString;
    if ( v20 >= 8 )
      v11 = sourceString[0];
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v12 = WindowsCreateString(v11, v10, string);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x319,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v13 = CSingleViewShellExperience::SetArgs(this + 16, string[0]);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x31A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    std::wstring::~wstring((unsigned __int64 *)sourceString);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31D,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
                           v14);
  }
  return result;
}
