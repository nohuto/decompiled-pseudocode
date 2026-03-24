/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000E138
 * Callers:
 *     ACPIMapNamedTable @ 0x1C000DD20 (ACPIMapNamedTable.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C00205B4 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0020748 (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0052860 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0088208 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C008BB10 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A8888 (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00AD048 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessDSDT @ 0x1C00AE720 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00AE7D8 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C000E138
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E138
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E138: mov     [rsp+arg_0], rbx
 * 00000001C000E13D: mov     [rsp+arg_8], rbp
 * 00000001C000E142: mov     [rsp+arg_10], rsi
 * 00000001C000E147: push    rdi
 * 00000001C000E148: push    r14
 * 00000001C000E14A: push    r15
 * 00000001C000E14C: sub     rsp, 40h
 * 00000001C000E150: mov     r14d, r8d
 * 00000001C000E153: mov     sil, dl
 * 00000001C000E156: mov     edi, r8d
 * 00000001C000E159: movzx   ebp, r9w
 * 00000001C000E15D: shr     rdi, 10h
 * 00000001C000E161: mov     r15, rcx
 * 00000001C000E164: lea     ebx, [r14-1]
 * 00000001C000E168: mov     r10d, ebx
 * 00000001C000E16B: and     ebx, 1Fh
 * 00000001C000E16E: shr     r10, 5
 * 00000001C000E172: lea     rax, [rdi+rdi*4]
 * 00000001C000E176: and     r10d, 7FFh
 * 00000001C000E17D: mov     edx, ebx
 * 00000001C000E17F: mov     ebx, 8
 * 00000001C000E184: lea     r11, [r10+rax*4]
 * 00000001C000E188: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000E18F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000E194: bt      eax, edx
 * 00000001C000E197: jb      loc_1C0038B2C
 * 00000001C000E19D: and     [rsp+58h+var_20], 0
 * 00000001C000E1A3: lea     rax, [rsp+58h+arg_28]
 * 00000001C000E1AB: mov     r9, [rsp+58h+arg_20]
 * 00000001C000E1B3: mov     r8d, r14d
 * 00000001C000E1B6: mov     [rsp+58h+var_28], rbx
 * 00000001C000E1BB: mov     rcx, r15
 * 00000001C000E1BE: mov     [rsp+58h+var_30], rax
 * 00000001C000E1C3: movzx   edx, sil
 * 00000001C000E1C7: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000E1CC: call    cs:__imp_WppAutoLogTrace
 * 00000001C000E1D2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000E1D7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000E1DC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000E1E1: add     rsp, 40h
 * 00000001C000E1E5: pop     r15
 * 00000001C000E1E7: pop     r14
 * 00000001C000E1E9: pop     rdi
 * 00000001C000E1EA: retn
 * 00000001C0038B2C: lea     rcx, [rdi+rdi*4]
 * 00000001C0038B30: add     rcx, rcx
 * 00000001C0038B33: cmp     [r10+rcx*8+29h], sil
 * 00000001C0038B38: jb      loc_1C000E19D
 * 00000001C0038B3E: and     [rsp+58h+var_28], 0
 * 00000001C0038B44: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0038B4C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038B53: mov     r8, [rsp+58h+arg_20]
 * 00000001C0038B5B: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0038B60: mov     [rsp+58h+var_30], rbx
 * 00000001C0038B65: mov     [rsp+58h+var_38], rdx
 * 00000001C0038B6A: mov     edx, 2Bh ; '+'
 * 00000001C0038B6F: movzx   r9d, bp
 * 00000001C0038B73: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038B79: nop
 * 00000001C0038B7A: jmp     loc_1C000E19D
 */
