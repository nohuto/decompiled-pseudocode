/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C000221C (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0014DB0 (NtDCompositionSubmitDWMBatch.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C001617C (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C014485C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x1C0147030 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00466A4 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C009FA60 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0146DC0 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  char v2; // dl
  int v4; // eax

  v2 = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 28);
  *((_BYTE *)this + 32) = v2;
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v4);
    *((_DWORD *)this + 28) = 0;
    v2 = *((_BYTE *)this + 32);
  }
  if ( (v2 & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(
      *((DirectComposition::CApplicationChannel **)this + 1),
      this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(
    *((DirectComposition::CApplicationChannel **)this + 1),
    this);
}
