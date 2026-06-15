/*
 * XREFs of ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x1800A76FC
 * Callers:
 *     ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x1800A7474 (--1-$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1800AA83C (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1800AB090 (-Stop@CMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 */

void **__fastcall CMonitor::SampleDataBlock::`scalar deleting destructor'(void **this)
{
  free(this[3]);
  this[3] = 0LL;
  operator delete(this);
  return this;
}
