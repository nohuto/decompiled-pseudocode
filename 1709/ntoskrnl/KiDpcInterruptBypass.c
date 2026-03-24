/*
 * XREFs of KiDpcInterruptBypass @ 0x140187950
 * Callers:
 *     KiChainedDispatch @ 0x1401823B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140182B50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140182DA0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140182FF0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140183240 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183480 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x140187950
 * Reason: Hex-Rays returned no pseudocode for 0x140187950
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187950: sub     rsp, 8
 * 0000000140187954: mov     ecx, 2
 * 0000000140187959: mov     cr8, rcx
 * 000000014018795D: sti
 * 000000014018795E: mov     al, [rbp-57h]
 * 0000000140187961: mov     rcx, gs:188h
 * 000000014018796A: mov     [rcx+186h], al
 * 0000000140187970: call    KiDispatchInterrupt
 * 0000000140187975: cli
 * 0000000140187976: add     rsp, 8
 * 000000014018797A: retn
 */
