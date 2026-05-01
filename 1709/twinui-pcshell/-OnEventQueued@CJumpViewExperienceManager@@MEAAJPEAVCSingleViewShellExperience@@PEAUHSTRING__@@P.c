/*
 * XREFs of ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800BE3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800BDB08 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnEventQueued(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v7; // rax
  HRESULT v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  HRESULT v13; // eax
  __int64 v14; // rax
  HRESULT v15; // eax
  int v16; // eax
  INT32 result; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v18,
         (const WCHAR **)&JumpViewExperienceEvents::DismissForLaunch);
  result = 0;
  v8 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v7 + 24), &result);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    JUMPOUT(0x1800BE57ELL);
  }
  if ( result )
  {
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v18,
            (const WCHAR **)&JumpViewExperienceEvents::DismissToCaller);
    result = 0;
    v13 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v12 + 24), &result);
    if ( v13 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      __debugbreak();
    }
    if ( result )
    {
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v18,
              (const WCHAR **)&JumpViewExperienceEvents::Focus);
      result = 0;
      v15 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v14 + 24), &result);
      if ( v15 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
        __debugbreak();
      }
      if ( !result )
      {
        if ( *((_QWORD *)a2 + 3)
          && *((_DWORD *)a2 + 10) == 2
          && (v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 80LL))(*((_QWORD *)a2 + 10)),
              v9 = v16,
              v16 < 0) )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1DC,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v16);
        }
        else
        {
          v9 = 0;
        }
        if ( v9 < 0 )
        {
          v10 = 603LL;
          goto LABEL_5;
        }
      }
    }
    else
    {
      v9 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 1);
      if ( v9 < 0 )
      {
        v10 = 599LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v9 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 0);
    if ( v9 < 0 )
    {
      v10 = 594LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
