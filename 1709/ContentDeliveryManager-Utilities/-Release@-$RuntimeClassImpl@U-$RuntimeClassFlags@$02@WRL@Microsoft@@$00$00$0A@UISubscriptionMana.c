/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042710
 * Callers:
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x18003DD30 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ.c)
 *     _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x180040120 (_lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator().c)
 *     _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_ @ 0x1800402AC (_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_.c)
 *     ??1?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180041A3C (--1-$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180043B98 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ??_E?$CTaskWrapper@V_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180044E10 (--_E-$CTaskWrapper@V_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180044EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180044EB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180044F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180044F00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180044F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISub_ea_180044F50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 9);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 9, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 64))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
