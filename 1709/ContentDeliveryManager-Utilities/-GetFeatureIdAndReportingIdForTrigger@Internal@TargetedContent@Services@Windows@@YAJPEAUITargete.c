/*
 * XREFs of ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x180060940
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060B90 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060DE0 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18005F040 (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
        __int64 this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  int v7; // eax
  int v8; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  wchar_t *v12; // rdx
  char *v13; // rax
  wchar_t *v14; // rdx
  const char *v15; // r9
  __int64 result; // rax
  HSTRING v17; // [rsp+20h] [rbp-68h] BYREF
  HSTRING string[2]; // [rsp+28h] [rbp-60h] BYREF
  wchar_t String[4]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h]
  unsigned __int64 v21; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  try
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)this + 64LL))(this, string);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v7);
    if ( WindowsIsStringEmpty(string[0]) )
    {
      this = 2147942487LL;
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070057LL);
    }
    WindowsDeleteString(0LL);
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)this + 96LL))(this, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v8);
    if ( WindowsIsStringEmpty(v17) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1D5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070057LL);
    }
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string[0], 0LL);
    v21 = 7LL;
    v20 = 0LL;
    String[0] = 0;
    v10 = -1LL;
    if ( *(_WORD *)StringRawBuffer )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)&StringRawBuffer[2 * v11] );
    }
    else
    {
      v11 = 0LL;
    }
    std::wstring::assign(String, StringRawBuffer, v11);
    *(_DWORD *)a2 = std::stoi(String, v12);
    if ( v21 >= 8 )
      operator delete(*(void **)String);
    v13 = (char *)WindowsGetStringRawBuffer(v17, 0LL);
    v21 = 7LL;
    v20 = 0LL;
    String[0] = 0;
    if ( *(_WORD *)v13 )
    {
      do
        ++v10;
      while ( *(_WORD *)&v13[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign(String, v13, v10);
    *(_WORD *)a3 = std::stoi(String, v14);
    if ( v21 >= 8 )
      operator delete(*(void **)String);
    WindowsDeleteString(v17);
    v17 = 0LL;
    WindowsDeleteString(string[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1DA,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                           v15);
  }
  return result;
}
