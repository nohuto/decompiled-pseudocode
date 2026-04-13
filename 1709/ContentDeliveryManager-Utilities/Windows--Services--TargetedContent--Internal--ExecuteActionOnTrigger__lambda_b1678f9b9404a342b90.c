/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___ @ 0x18005B830
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W0PEBD@Z @ 0x18005B610 (--$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerMa.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18005F1FC (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F394 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const WCHAR *v10; // r13
  HSTRING v11; // rbx
  HSTRING v12; // rdi
  HSTRING v13; // rsi
  HSTRING v14; // r14
  HSTRING v15; // r15
  HSTRING v16; // r12
  __int64 v17; // rbx
  const char *v18; // r9
  __int64 result; // rax
  HSTRING v20; // [rsp+40h] [rbp-98h] BYREF
  HSTRING v21; // [rsp+48h] [rbp-90h] BYREF
  HSTRING v22; // [rsp+50h] [rbp-88h] BYREF
  HSTRING string; // [rsp+58h] [rbp-80h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-78h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-70h] BYREF
  PCWSTR v26; // [rsp+70h] [rbp-68h] BYREF
  PCWSTR v27; // [rsp+78h] [rbp-60h] BYREF
  PCWSTR v28; // [rsp+80h] [rbp-58h] BYREF
  const WCHAR *v29; // [rsp+88h] [rbp-50h] BYREF
  const WCHAR *v30[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  unsigned int v32; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+E8h] [rbp+10h]
  HSTRING v34; // [rsp+F0h] [rbp+18h] BYREF
  HSTRING v35; // [rsp+F8h] [rbp+20h] BYREF

  v33 = a2;
  v30[1] = (const WCHAR *)-2LL;
  try
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 48LL))(a1, &string);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v3);
    WindowsDeleteString(0LL);
    v22 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL))(a1, &v22);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v4);
    WindowsDeleteString(0LL);
    v21 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL))(a1, &v21);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5);
    WindowsDeleteString(0LL);
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL))(a1, &v20);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v6);
    v35 = 0LL;
    WindowsDeleteString(0LL);
    v35 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL))(a1, &v35);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v7);
    v34 = 0LL;
    WindowsDeleteString(0LL);
    v34 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL))(a1, &v34);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v32);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v9);
    v10 = (const WCHAR *)Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v32);
    Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v24, a1);
    v11 = v34;
    v12 = v35;
    v13 = v20;
    v14 = v21;
    v15 = v22;
    v16 = v24;
    WindowsGetStringRawBuffer(string, 0LL);
    WindowsGetStringRawBuffer(v11, 0LL);
    StringRawBuffer = WindowsGetStringRawBuffer(v12, 0LL);
    WindowsGetStringRawBuffer(v13, 0LL);
    v27 = WindowsGetStringRawBuffer(v14, 0LL);
    v28 = WindowsGetStringRawBuffer(v15, 0LL);
    v30[0] = WindowsGetStringRawBuffer(v16, 0LL);
    v29 = v10;
    v17 = v33;
    v26 = WindowsGetStringRawBuffer(**(HSTRING **)(v33 + 8), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationPreconditionFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const * &>(
      v30,
      &v29,
      &v28,
      &v27,
      &v26,
      &StringRawBuffer,
      (const unsigned __int16 *)(**(_QWORD **)(v17 + 16) + 8LL));
    WindowsDeleteString(v24);
    v24 = 0LL;
    WindowsDeleteString(v34);
    v34 = 0LL;
    WindowsDeleteString(v35);
    v35 = 0LL;
    WindowsDeleteString(v20);
    v20 = 0LL;
    WindowsDeleteString(v21);
    v21 = 0LL;
    WindowsDeleteString(v22);
    v22 = 0LL;
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x63,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v18);
  }
  return result;
}
