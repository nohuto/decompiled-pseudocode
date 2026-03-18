/*
 * XREFs of ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001984C
 * Callers:
 *     NtDCompositionSynchronize @ 0x1C007EAC0 (NtDCompositionSynchronize.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0087850 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C0140070 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0140250 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0141400 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01414BC (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C0141610 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C5F8 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::PreallocateNextBatch(
        DirectComposition::CApplicationChannel *this)
{
  if ( !*((_QWORD *)this + 23) )
    *((_QWORD *)this + 23) = DirectComposition::CApplicationChannel::GetBatchFragment(this, 0, 1);
}
