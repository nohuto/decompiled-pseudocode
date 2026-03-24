/*
 * XREFs of KiDpcInterruptBypass @ 0x1401B1570
 * Callers:
 *     KiChainedDispatch @ 0x1401AC000 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401AC7A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401AC9F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401ACE90 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x1401B15B0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1401B1C20 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1401B1570
 * Reason: Hex-Rays returned no pseudocode for 0x1401B1570
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B1570: sub     rsp, 8
 * 00000001401B1574: mov     ecx, 2
 * 00000001401B1579: mov     cr8, rcx
 * 00000001401B157D: sti
 * 00000001401B157E: mov     al, [rbp-57h]
 * 00000001401B1581: mov     rcx, gs:188h
 * 00000001401B158A: mov     [rcx+186h], al
 * 00000001401B1590: call    KiDispatchInterrupt
 * 00000001401B1595: cli
 * 00000001401B1596: add     rsp, 8
 * 00000001401B159A: retn
 */
