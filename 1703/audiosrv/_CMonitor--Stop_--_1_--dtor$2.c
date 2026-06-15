/*
 * XREFs of _CMonitor::Stop_::_1_::dtor$2 @ 0x1800B80C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Stop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 96),
           a2);
}
