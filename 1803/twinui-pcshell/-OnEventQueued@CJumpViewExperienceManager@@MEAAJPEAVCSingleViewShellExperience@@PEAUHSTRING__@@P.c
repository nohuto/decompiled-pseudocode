/*
 * XREFs of ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801773A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18007B1C8 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnEventQueued(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v7; // rax
  HSTRING v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  HSTRING v13; // r8
  __int64 v14; // rax
  HSTRING v15; // r8
  int v16; // eax
  _BYTE v17[32]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v17,
         (const WCHAR **)&JumpViewExperienceEvents::DismissForLaunch);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v7 + 24), v8) )
  {
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v17,
            (const WCHAR **)&JumpViewExperienceEvents::DismissToCaller);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v12 + 24), v13) )
    {
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v17,
              (const WCHAR **)&JumpViewExperienceEvents::Focus);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v14 + 24), v15) )
      {
        if ( *((_QWORD *)a2 + 3)
          && *((_DWORD *)a2 + 10) == 2
          && (v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 80LL))(*((_QWORD *)a2 + 10)),
              v9 = v16,
              v16 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DA,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v16);
        }
        else
        {
          v9 = 0;
        }
        if ( v9 < 0 )
        {
          v10 = 596LL;
          goto LABEL_4;
        }
      }
    }
    else
    {
      v9 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 1);
      if ( v9 < 0 )
      {
        v10 = 592LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v9 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 0);
    if ( v9 < 0 )
    {
      v10 = 587LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
