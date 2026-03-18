/*
 * XREFs of ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0141610
 * Callers:
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C013FDDC (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C0015FA0 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001984C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001D424 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ForceRender(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5)
{
  _DWORD *v9; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[23], 0x18uLL, &v11) )
    return 3221225473LL;
  v9 = v11;
  *(_DWORD *)v11 = 24;
  v9[2] = a2;
  v9[3] = a3;
  v9[5] = a5;
  v9[1] = 6;
  v9[4] = a4;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)a1, 0LL, 1, 0LL);
}
