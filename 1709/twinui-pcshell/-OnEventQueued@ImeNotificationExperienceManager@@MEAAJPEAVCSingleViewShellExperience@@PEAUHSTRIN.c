/*
 * XREFs of ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AA2E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ImeNotificationExperienceManager::OnEventQueued(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v6; // rax
  HRESULT v7; // eax
  const char *v8; // r9
  int v9; // eax
  INT32 result; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = -2LL;
  try
  {
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_180214710);
    result = 0;
    v7 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v6 + 24), &result);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    }
    else if ( !result )
    {
      if ( hProvider > 5u
        && (qword_1802B2100 & 0x400000000000LL) != 0
        && (qword_1802B2108 & 0x400000000000LL) == qword_1802B2108 )
      {
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18025B1C2, 0LL, 0LL, 2u, &pData);
      }
      v9 = CSingleViewShellExperience::DestroyView((ImeNotificationExperienceManager *)((char *)this + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_CaughtException(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      v8);
  }
}
