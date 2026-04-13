/*
 * XREFs of ??1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ @ 0x18002D798
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$3 @ 0x1800B6022 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$5 @ 0x1800B8BD3 (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$5.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::dtor$4 @ 0x1800B8E7F (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b____::_1_::dtor$10 @ 0x1800B9014 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B9014.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf____::_1_::dtor$10 @ 0x1800B90E0 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B90E0.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64__::_1_::dtor$10 @ 0x1800B91F4 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B91F4.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64__::_1_::dtor$10 @ 0x1800B9290 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B9290.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CreativeFramework::Triggers::ValueSetHelper::~ValueSetHelper(
        CreativeFramework::Triggers::ValueSetHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
