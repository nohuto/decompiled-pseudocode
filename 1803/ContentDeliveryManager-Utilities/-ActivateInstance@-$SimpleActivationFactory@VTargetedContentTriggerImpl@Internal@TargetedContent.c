/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180027EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180028884 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Make@?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x18005A088 (-Make@-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v3; // rax
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  volatile signed __int64 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                     0xC0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = (_QWORD *)Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v3);
    v6 = v5 + 23;
    v7 = (volatile signed __int64 *)v5[23];
    if ( v7 )
    {
      *v6 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v7);
    }
    v8 = Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>::Make(v6);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180027F68LL);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
