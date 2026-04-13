/*
 * XREFs of ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x180069E28
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006D02C (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EC24 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B888 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v10[1] = -2LL;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(v10);
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)v10[0] + 72LL))(v10[0], a2, a3, &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x132,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  *a1 = 0LL;
  v7 = v10[0];
  WindowsDeleteString(0LL);
  *a1 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v7 + 112LL))(v7, v12, a1);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x180069F32LL);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  return a1;
}
