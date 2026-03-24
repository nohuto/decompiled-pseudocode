/*
 * XREFs of KiDpcInterruptBypass @ 0x140187EA0
 * Callers:
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401830D0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140183320 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140183570 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401837C0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187EE0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140188550 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140187EA0
 * Reason: Hex-Rays returned no pseudocode for 0x140187EA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187EA0: sub     rsp, 8
 * 0000000140187EA4: mov     ecx, 2
 * 0000000140187EA9: mov     cr8, rcx
 * 0000000140187EAD: sti
 * 0000000140187EAE: mov     al, [rbp-57h]
 * 0000000140187EB1: mov     rcx, gs:188h
 * 0000000140187EBA: mov     [rcx+186h], al
 * 0000000140187EC0: call    KiDispatchInterrupt
 * 0000000140187EC5: cli
 * 0000000140187EC6: add     rsp, 8
 * 0000000140187ECA: retn
 */
