/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x180097818
 * Callers:
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$2 @ 0x180068FE2 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CSerialWorkQueue::WorkCallback_::_1_::dtor$0 @ 0x1800691B0 (_CSerialWorkQueue--WorkCallback_--_1_--dtor$0.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x180069836 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x18006992F (_CSerialWorkQueue--TimerCallback_--_1_--dtor$0.c)
 *     _CPdcActivationClient::ActivatorCallback_::_1_::dtor$0 @ 0x1800D446D (_CPdcActivationClient--ActivatorCallback_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$2 @ 0x1800D4F3E (_CCaptureNotifier--AcquireReference_--_1_--dtor$2.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x1800F48E6 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
