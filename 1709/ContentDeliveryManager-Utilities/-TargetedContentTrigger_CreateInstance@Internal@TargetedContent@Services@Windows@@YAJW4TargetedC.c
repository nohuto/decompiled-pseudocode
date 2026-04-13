/*
 * XREFs of ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005598C
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062E60 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180025328 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180054F70 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
        int a1,
        HSTRING a2,
        char *a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl **a7)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v12; // rax
  int v13; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v17; // [rsp+A0h] [rbp+38h]

  *a7 = 0LL;
  if ( WindowsIsStringEmpty(a2) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty((HSTRING)a3) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(a4) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
  }
  v17 = 0LL;
  v12 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                      0xC0uLL,
                                                                                      (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v12 )
  {
    v14 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v12);
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
            (__int64)v14,
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 8LL))(v14);
      v17 = v14;
      if ( v14 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = 0;
    }
    else if ( v14 )
    {
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  *a7 = v17;
  return 0LL;
}
