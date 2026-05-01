/*
 * XREFs of ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18015FF60
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1803070E4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnEventQueued(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v6; // rax
  HSTRING v7; // r8
  const char *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_18034C400);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v6 + 24), v7) )
      goto LABEL_8;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      TlgWrite(v9, &unk_18038CC39, 0LL, 0LL, 2u, &pData);
    v10 = CSingleViewShellExperience::DestroyView((ImeNotificationExperienceManager *)((char *)this + 8));
    v11 = v10;
    if ( v10 >= 0 )
    {
LABEL_8:
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      result = v11;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAD,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                           v8);
  }
  return result;
}
