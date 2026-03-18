/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0016028
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0012A30 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtDCompositionSynchronize @ 0x1C0063D00 (NtDCompositionSynchronize.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C01453A8 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C014557C (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0147A28 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C0147AE4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0147C38 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this)
{
  if ( !*((_QWORD *)this + 21) )
    *((_QWORD *)this + 21) = DirectComposition::CApplicationChannel::GetBatchFragment(this, 0, 1);
}
