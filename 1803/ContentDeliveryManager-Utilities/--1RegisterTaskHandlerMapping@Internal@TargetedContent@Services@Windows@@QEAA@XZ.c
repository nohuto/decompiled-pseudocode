/*
 * XREFs of ??1RegisterTaskHandlerMapping@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18002EEF0
 * Callers:
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$1 @ 0x1800C2A92 (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$1.c)
 *     _ContentManagement::_dynamic_initializer_for__c_notificationHandlerTypeMappings___::_1_::dtor$3 @ 0x1800C2AAA (_ContentManagement--_dynamic_initializer_for__c_notificationHandlerTypeMappings___--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$1 @ 0x1800C4C8E (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800C4C8E.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$3 @ 0x1800C4CA6 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800C4CA6.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerStateTransitionSetupMapping___::_1_::dtor$5 @ 0x1800C4CC2 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerS_ea_1800C4CC2.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$1 @ 0x1800C55A5 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800C55A5.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$3 @ 0x1800C55BD (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800C55BD.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_triggerPredicateKindMap___::_1_::dtor$5 @ 0x1800C55D9 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_triggerP_ea_1800C55D9.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$1 @ 0x1800C5601 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800C5601.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$3 @ 0x1800C5619 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800C5619.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_predicateKindHandlerMap___::_1_::dtor$5 @ 0x1800C5635 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_predicat_ea_1800C5635.c)
 *     _Windows::Services::TargetedContent::Internal::_dynamic_initializer_for__c_registerTaskHandlerMap___::_1_::dtor$1 @ 0x1800C57F7 (_Windows--Services--TargetedContent--Internal--_dynamic_initializer_for__c_register_ea_1800C57F7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping::~RegisterTaskHandlerMapping(
        Windows::Services::TargetedContent::Internal::RegisterTaskHandlerMapping *this,
        __int64 a2)
{
  char *v2; // rbx
  char *v3; // rcx

  v2 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
}
