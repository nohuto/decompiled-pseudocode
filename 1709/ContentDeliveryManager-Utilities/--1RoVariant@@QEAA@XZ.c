/*
 * XREFs of ??1RoVariant@@QEAA@XZ @ 0x180061894
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$7 @ 0x1800B8BAF (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$7.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$1 @ 0x1800B8F48 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800B8F48.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b____::_1_::dtor$7 @ 0x1800B8FF0 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B8FF0.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf____::_1_::dtor$7 @ 0x1800B90BC (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B90BC.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64__::_1_::dtor$7 @ 0x1800B91D0 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B91D0.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64__::_1_::dtor$7 @ 0x1800B926C (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B926C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::~RoVariant(RoVariant *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( ((*((_DWORD *)this + 2) - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
