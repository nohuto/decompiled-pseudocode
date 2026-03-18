/*
 * XREFs of ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C00144EC
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C5F8 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C007F180 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPool *this,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  bool result; // al

  if ( *((_BYTE *)this + 64) )
    return 0;
  v3 = *((_QWORD *)this + 5);
  if ( a2 > 4096 - v3 )
    return 0;
  *a3 = v3;
  result = 1;
  *((_BYTE *)this + 64) = 1;
  return result;
}
