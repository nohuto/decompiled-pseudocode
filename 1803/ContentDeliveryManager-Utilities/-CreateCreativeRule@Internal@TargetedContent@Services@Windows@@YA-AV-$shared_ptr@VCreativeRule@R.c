/*
 * XREFs of ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F3D8
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F600 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F8D0 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18005FE58 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180060AF0 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::CreateCreativeRule(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  WCHAR *StringRawBuffer; // r12
  WCHAR *v8; // r15
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  HSTRING v14; // [rsp+98h] [rbp+50h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+58h] BYREF
  _DWORD *v16; // [rsp+A8h] [rbp+60h]

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(string) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v14 = 0LL;
  WindowsDeleteString(0LL);
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &v14);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( WindowsIsStringEmpty(v14) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18005F5F0LL);
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(v14, 0LL);
  v8 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  v9 = operator new(0x50uLL);
  v16 = v9;
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
    *((_QWORD *)v9 + 5) = 7LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_WORD *)v9 + 8) = 0;
    v10 = -1LL;
    if ( *v8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v8[v11] );
    }
    std::wstring::assign(v9 + 4, v8);
    *((_QWORD *)v9 + 9) = 7LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_WORD *)v9 + 24) = 0;
    if ( *StringRawBuffer )
    {
      do
        ++v10;
      while ( StringRawBuffer[v10] );
    }
    std::wstring::assign(v9 + 12, StringRawBuffer);
  }
  else
  {
    v9 = 0LL;
  }
  a1[1] = v9;
  *a1 = v9 + 4;
  WindowsDeleteString(v14);
  v14 = 0LL;
  WindowsDeleteString(string);
  return a1;
}
