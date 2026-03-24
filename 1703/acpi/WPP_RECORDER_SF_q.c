/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0017654
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0001ED0 (ACPIMapNamedTable.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C00174C8 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0017710 (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051E20 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C00893F0 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C008FB74 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00A5DE8 (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00ABCB0 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessRSDT @ 0x1C00AC150 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00AC4F4 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00ADD68 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0017654
 * Reason: Hex-Rays returned no pseudocode for 0x1C0017654
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0017654: mov     [rsp+arg_0], rbx
 * 00000001C0017659: mov     [rsp+arg_8], rbp
 * 00000001C001765E: mov     [rsp+arg_10], rsi
 * 00000001C0017663: push    rdi
 * 00000001C0017664: push    r14
 * 00000001C0017666: push    r15
 * 00000001C0017668: sub     rsp, 40h
 * 00000001C001766C: mov     r14d, r8d
 * 00000001C001766F: mov     sil, dl
 * 00000001C0017672: mov     edi, r8d
 * 00000001C0017675: movzx   ebp, r9w
 * 00000001C0017679: shr     rdi, 10h
 * 00000001C001767D: mov     r15, rcx
 * 00000001C0017680: lea     ebx, [r14-1]
 * 00000001C0017684: mov     r10d, ebx
 * 00000001C0017687: and     ebx, 1Fh
 * 00000001C001768A: shr     r10, 5
 * 00000001C001768E: lea     rax, [rdi+rdi*4]
 * 00000001C0017692: and     r10d, 7FFh
 * 00000001C0017699: mov     edx, ebx
 * 00000001C001769B: mov     ebx, 8
 * 00000001C00176A0: lea     r11, [r10+rax*4]
 * 00000001C00176A4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00176AB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00176B0: bt      eax, edx
 * 00000001C00176B3: jb      loc_1C0035964
 * 00000001C00176B9: and     [rsp+58h+var_20], 0
 * 00000001C00176BF: lea     rax, [rsp+58h+arg_28]
 * 00000001C00176C7: mov     r9, [rsp+58h+arg_20]
 * 00000001C00176CF: mov     r8d, r14d
 * 00000001C00176D2: mov     [rsp+58h+var_28], rbx
 * 00000001C00176D7: mov     rcx, r15
 * 00000001C00176DA: mov     [rsp+58h+var_30], rax
 * 00000001C00176DF: movzx   edx, sil
 * 00000001C00176E3: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00176E8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00176EE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00176F3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00176F8: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00176FD: add     rsp, 40h
 * 00000001C0017701: pop     r15
 * 00000001C0017703: pop     r14
 * 00000001C0017705: pop     rdi
 * 00000001C0017706: retn
 * 00000001C0035964: lea     rcx, [rdi+rdi*4]
 * 00000001C0035968: add     rcx, rcx
 * 00000001C003596B: cmp     [r10+rcx*8+29h], sil
 * 00000001C0035970: jb      loc_1C00176B9
 * 00000001C0035976: and     [rsp+58h+var_28], 0
 * 00000001C003597C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0035984: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003598B: mov     r8, [rsp+58h+arg_20]
 * 00000001C0035993: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0035998: mov     [rsp+58h+var_30], rbx
 * 00000001C003599D: mov     [rsp+58h+var_38], rdx
 * 00000001C00359A2: mov     edx, 2Bh ; '+'
 * 00000001C00359A7: movzx   r9d, bp
 * 00000001C00359AB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00359B1: nop
 * 00000001C00359B2: jmp     loc_1C00176B9
 */
