/*
 * XREFs of ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x1800B530C
 * Callers:
 *     _CMonitor::Start_::_1_::dtor$5 @ 0x1800B7EA5 (_CMonitor--Start_--_1_--dtor$5.c)
 *     _CMonitor::Start_::_1_::dtor$6 @ 0x1800B7EE7 (_CMonitor--Start_--_1_--dtor$6.c)
 *     _CMonitor::Stop_::_1_::dtor$2 @ 0x1800B80C7 (_CMonitor--Stop_--_1_--dtor$2.c)
 *     _CMonitor::Stop_::_1_::dtor$3 @ 0x1800B80D3 (_CMonitor--Stop_--_1_--dtor$3.c)
 * Callees:
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x1800B5594 (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
        CMonitor::SampleDataBlock **a1,
        unsigned int a2)
{
  CMonitor::SampleDataBlock *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CMonitor::SampleDataBlock::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
