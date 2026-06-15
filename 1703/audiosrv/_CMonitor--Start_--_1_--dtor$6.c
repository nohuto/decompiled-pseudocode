/*
 * XREFs of _CMonitor::Start_::_1_::dtor$6 @ 0x1800B7EE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Start_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 224),
           a2);
}
