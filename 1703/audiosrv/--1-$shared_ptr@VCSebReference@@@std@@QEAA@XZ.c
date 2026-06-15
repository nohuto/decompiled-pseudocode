/*
 * XREFs of ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x18007C218
 * Callers:
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$2 @ 0x18005B82A (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$2.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x18005B869 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x18005B88F (_CSebNotifier--AcquireSebReference_--_1_--dtor$1.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x18005B8CE (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
