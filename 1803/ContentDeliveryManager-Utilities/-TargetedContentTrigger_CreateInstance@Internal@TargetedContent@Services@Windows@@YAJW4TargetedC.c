/*
 * XREFs of ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180059A78
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E108 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180028884 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180058C90 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
        int a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl **a7)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v12; // rax
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v13; // rbx
  wil::details::in1diag3 *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v17; // [rsp+A0h] [rbp+38h]

  *a7 = 0LL;
  if ( WindowsIsStringEmpty(a2) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(a3) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(a4) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x118,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    goto LABEL_19;
  }
  v17 = 0LL;
  v12 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                      0xC0uLL,
                                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v12);
    LODWORD(a4) = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
                    (__int64)v13,
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6);
    if ( (int)a4 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v13 + 8LL))(v13);
      v17 = v13;
      if ( v13 )
        (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v13 + 16LL))(v13);
      LODWORD(a4) = 0;
    }
    else if ( v13 )
    {
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    LODWORD(a4) = -2147024882;
  }
  v14 = retaddr;
  if ( (int)a4 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x11B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)a4);
    JUMPOUT(0x180059C3CLL);
  }
  *a7 = v17;
  return 0LL;
}
