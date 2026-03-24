/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00299A8
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018C0 (ACPIMapNamedTable.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C002F460 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C003513C (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0035340 (ACPIReleaseGlobalLock.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C0091388 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 *     ACPIGlobalInitialize @ 0x1C00996BC (ACPIGlobalInitialize.c)
 *     ACPILoadProcessDSDT @ 0x1C009A65C (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C009A774 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00299A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00299A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00299A8: mov     [rsp+arg_0], rbx
 * 00000001C00299AD: mov     [rsp+arg_8], rbp
 * 00000001C00299B2: mov     [rsp+arg_10], rsi
 * 00000001C00299B7: push    rdi
 * 00000001C00299B8: push    r14
 * 00000001C00299BA: push    r15
 * 00000001C00299BC: sub     rsp, 40h
 * 00000001C00299C0: mov     r14d, r8d
 * 00000001C00299C3: mov     sil, dl
 * 00000001C00299C6: mov     edi, r8d
 * 00000001C00299C9: movzx   ebp, r9w
 * 00000001C00299CD: shr     rdi, 10h
 * 00000001C00299D1: mov     r15, rcx
 * 00000001C00299D4: lea     ebx, [r14-1]
 * 00000001C00299D8: mov     r10d, ebx
 * 00000001C00299DB: and     ebx, 1Fh
 * 00000001C00299DE: shr     r10, 5
 * 00000001C00299E2: lea     rax, [rdi+rdi*4]
 * 00000001C00299E6: and     r10d, 7FFh
 * 00000001C00299ED: mov     edx, ebx
 * 00000001C00299EF: mov     ebx, 8
 * 00000001C00299F4: lea     r11, [r10+rax*4]
 * 00000001C00299F8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00299FF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0029A04: bt      eax, edx
 * 00000001C0029A07: jnb     short loc_1C0029A50
 * 00000001C0029A09: lea     rcx, [rdi+rdi*4]
 * 00000001C0029A0D: add     rcx, rcx
 * 00000001C0029A10: cmp     [r10+rcx*8+29h], sil
 * 00000001C0029A15: jb      short loc_1C0029A50
 * 00000001C0029A17: and     [rsp+58h+var_28], 0
 * 00000001C0029A1D: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0029A25: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0029A2C: mov     r8, [rsp+58h+arg_20]
 * 00000001C0029A34: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0029A39: mov     [rsp+58h+var_30], rbx
 * 00000001C0029A3E: mov     [rsp+58h+var_38], rdx
 * 00000001C0029A43: lea     edx, [rbx+23h]
 * 00000001C0029A46: movzx   r9d, r9w
 * 00000001C0029A4A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0029A50: and     [rsp+58h+var_20], 0
 * 00000001C0029A56: lea     rax, [rsp+58h+arg_28]
 * 00000001C0029A5E: mov     r9, [rsp+58h+arg_20]
 * 00000001C0029A66: mov     r8d, r14d
 * 00000001C0029A69: mov     [rsp+58h+var_28], rbx
 * 00000001C0029A6E: mov     rcx, r15
 * 00000001C0029A71: mov     [rsp+58h+var_30], rax
 * 00000001C0029A76: movzx   edx, sil
 * 00000001C0029A7A: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0029A7F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0029A85: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0029A8A: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0029A8F: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0029A94: add     rsp, 40h
 * 00000001C0029A98: pop     r15
 * 00000001C0029A9A: pop     r14
 * 00000001C0029A9C: pop     rdi
 * 00000001C0029A9D: retn
 */
