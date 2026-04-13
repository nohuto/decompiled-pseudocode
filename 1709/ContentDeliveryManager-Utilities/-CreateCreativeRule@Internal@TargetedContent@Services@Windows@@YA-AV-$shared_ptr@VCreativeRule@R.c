/*
 * XREFs of ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005836C
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::CreateCreativeRule(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  WCHAR *StringRawBuffer; // r12
  WCHAR *v7; // r15
  _DWORD *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  HSTRING v13; // [rsp+98h] [rbp+50h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+58h] BYREF
  _DWORD *v15; // [rsp+A8h] [rbp+60h]

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(string) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v13 = 0LL;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(v13) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v13, 0LL);
  v7 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  v8 = operator new(0x50uLL);
  v15 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    if ( v8 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v8 + 5) = 7LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_WORD *)v8 + 8) = 0;
      v9 = -1LL;
      if ( *v7 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v7[v10] );
      }
      std::wstring::assign(v8 + 4, v7);
      *((_QWORD *)v8 + 9) = 7LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_WORD *)v8 + 24) = 0;
      if ( *StringRawBuffer )
      {
        do
          ++v9;
        while ( StringRawBuffer[v9] );
      }
      std::wstring::assign(v8 + 12, StringRawBuffer);
    }
  }
  else
  {
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v8 + 4;
  WindowsDeleteString(v13);
  v13 = 0LL;
  WindowsDeleteString(string);
  return a1;
}
