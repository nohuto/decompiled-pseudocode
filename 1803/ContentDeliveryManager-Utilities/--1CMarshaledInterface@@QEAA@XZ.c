/*
 * XREFs of ??1CMarshaledInterface@@QEAA@XZ @ 0x180068160
 * Callers:
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64___::Get_::_1_::dtor$0 @ 0x1800C53AF (_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundation--Collections--IVectorView_Wind.c)
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64___::Get_::_1_::dtor$1 @ 0x1800C53BB (_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundation--Collections--IVe_ea_1800C53BB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMarshaledInterface::~CMarshaledInterface(CMarshaledInterface *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
