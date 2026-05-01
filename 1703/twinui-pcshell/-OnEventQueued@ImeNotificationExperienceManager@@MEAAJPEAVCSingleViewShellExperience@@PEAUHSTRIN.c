/*
 * XREFs of ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009FA20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall ImeNotificationExperienceManager::OnEventQueued(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  HRESULT v7; // eax
  const char *v8; // r9
  int v9; // eax
  INT32 result; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = -2LL;
  try
  {
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)&off_1801BD028);
    result = 0;
    v7 = WindowsCompareStringOrdinal(a3, (HSTRING)v6[1].Reserved.Reserved1, &result);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    }
    else if ( !result )
    {
      if ( hProvider > 5u
        && (qword_18023E100 & 0x400000000000LL) != 0
        && (qword_18023E108 & 0x400000000000LL) == qword_18023E108 )
      {
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F9B9C, 0LL, 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
      }
      v9 = CSingleViewShellExperience::DestroyView((ImeNotificationExperienceManager *)((char *)this + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_CaughtException(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      v8);
  }
}
