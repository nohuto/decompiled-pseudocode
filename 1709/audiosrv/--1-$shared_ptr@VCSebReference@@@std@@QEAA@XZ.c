/*
 * XREFs of ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x18005B958
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800383DE (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$1 @ 0x180038404 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x180039C49 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x180039C6F (_CSebNotifier--AcquireSebReference_--_1_--dtor$1.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x180039CAE (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$2 @ 0x180039DF9 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$2.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x18009D69B (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x18009D6C1 (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
