/*
 * XREFs of ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0022AC0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002DBD0 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002DC00 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
}
