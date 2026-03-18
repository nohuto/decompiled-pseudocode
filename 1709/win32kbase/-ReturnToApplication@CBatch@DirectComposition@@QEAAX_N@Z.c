/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54
 * Callers:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C002F888 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C003393C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0033E48 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0034E30 (NtDCompositionSubmitDWMBatch.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C002EDF4 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C002EE28 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00331C8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  int v3; // edx

  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v3 = *((_DWORD *)this + 28);
  if ( v3 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v3);
    *((_DWORD *)this + 28) = 0;
  }
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(
      *((DirectComposition::CApplicationChannel **)this + 1),
      this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(
    *((DirectComposition::CApplicationChannel **)this + 1),
    this);
}
