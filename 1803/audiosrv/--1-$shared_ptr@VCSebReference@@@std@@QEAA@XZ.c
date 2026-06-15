/*
 * XREFs of ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x180098434
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x180068FB0 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$1 @ 0x180068FD6 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$2 @ 0x180069756 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$2.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x1800697A0 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x1800697C6 (_CSebNotifier--AcquireSebReference_--_1_--dtor$1.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x180069810 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800D4F0C (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x1800D4F32 (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
