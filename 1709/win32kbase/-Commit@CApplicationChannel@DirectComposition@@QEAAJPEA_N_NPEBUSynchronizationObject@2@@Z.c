/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4
 * Callers:
 *     NtDCompositionCommitChannel @ 0x1C0023710 (NtDCompositionCommitChannel.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002EED0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0033398 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0089A04 (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C013F4A0 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C013F674 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C014092C (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01409E8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0140B3C (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 * Callees:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C002F888 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        char a3,
        const struct DirectComposition::SynchronizationObject *a4)
{
  char v8; // si
  struct DirectComposition::CBatch *v10; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CBatch *v11; // [rsp+38h] [rbp-10h] BYREF

  do
  {
    v8 = DirectComposition::CApplicationChannel::BuildBatch(this, &v10, &v11, a3);
    if ( v10 )
      DirectComposition::CApplicationChannel::SubmitBatch(
        this,
        (LARGE_INTEGER *)v10,
        v11,
        *((_BYTE *)this + 48) & 1,
        a4);
  }
  while ( !v8 );
  if ( a2 )
    *a2 = *((_DWORD *)this + 129) != 0;
  return 0LL;
}
