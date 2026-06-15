/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x18007BF24
 * Callers:
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$1 @ 0x18005B8F4 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$1.c)
 *     _CPdcActivationClient::ActivatorCallback_::_1_::dtor$0 @ 0x1800AE0B1 (_CPdcActivationClient--ActivatorCallback_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$1 @ 0x1800C4435 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$1.c)
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
