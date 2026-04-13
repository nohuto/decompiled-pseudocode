/*
 * XREFs of ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180058220
 * Callers:
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x1800585A0 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x180059430 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180059C60 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18004BBF8 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?0PEBD@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@$$QEAPEBD@Z @ 0x18005CFDC (--$-0PEBD@-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QE.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector(_QWORD *a1, HSTRING a2)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rdx
  void **v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  void **v11; // [rsp+30h] [rbp-11h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-9h]
  __int64 v13; // [rsp+40h] [rbp-1h]
  void *v14[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v15; // [rsp+58h] [rbp+17h]
  unsigned __int64 v16; // [rsp+60h] [rbp+1Fh]
  void *v17[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v18; // [rsp+78h] [rbp+37h]
  unsigned __int64 v19; // [rsp+80h] [rbp+3Fh]

  v13 = -2LL;
  v12 = a1;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( *StringRawBuffer )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( StringRawBuffer[v4] );
  }
  std::wstring::assign(v14, StringRawBuffer);
  v5 = v14;
  if ( v16 >= 8 )
    v5 = (void **)v14[0];
  v6 = (char *)v14;
  if ( v16 >= 8 )
    v6 = (char *)v14[0];
  v19 = 15LL;
  v18 = 0LL;
  LOBYTE(v17[0]) = 0;
  std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
    (__int64)v17,
    v6,
    (char *)v5 + 2 * v15);
  v7 = v17;
  if ( v19 >= 0x10 )
    v7 = (void **)v17[0];
  v11 = v7;
  v8 = operator new(0xA0uLL);
  v12 = v8;
  if ( v8 )
    v9 = std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v8,
           &v11);
  else
    v9 = 0LL;
  a1[1] = v9;
  *a1 = v9 + 16;
  if ( v19 >= 0x10 )
    operator delete(v17[0]);
  v19 = 15LL;
  v18 = 0LL;
  LOBYTE(v17[0]) = 0;
  if ( v16 >= 8 )
    operator delete(v14[0]);
  return a1;
}
