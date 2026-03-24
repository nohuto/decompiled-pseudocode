/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C004B19C
 * Callers:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C00174C8 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0017710 (ACPIReleaseGlobalLock.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00275F0 (OSNotifyCreateOperationRegion.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0049B90 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0049C20 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C004B19C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B19C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B19C: mov     [rsp+arg_0], rbx
 * 00000001C004B1A1: mov     [rsp+arg_8], rbp
 * 00000001C004B1A6: mov     [rsp+arg_10], rsi
 * 00000001C004B1AB: push    rdi
 * 00000001C004B1AC: push    r14
 * 00000001C004B1AE: push    r15
 * 00000001C004B1B0: sub     rsp, 50h
 * 00000001C004B1B4: mov     r14d, r8d
 * 00000001C004B1B7: mov     sil, dl
 * 00000001C004B1BA: mov     edi, r8d
 * 00000001C004B1BD: movzx   ebp, r9w
 * 00000001C004B1C1: shr     rdi, 10h
 * 00000001C004B1C5: mov     r15, rcx
 * 00000001C004B1C8: lea     ebx, [r14-1]
 * 00000001C004B1CC: mov     r10d, ebx
 * 00000001C004B1CF: and     ebx, 1Fh
 * 00000001C004B1D2: shr     r10, 5
 * 00000001C004B1D6: lea     rax, [rdi+rdi*4]
 * 00000001C004B1DA: and     r10d, 7FFh
 * 00000001C004B1E1: mov     edx, ebx
 * 00000001C004B1E3: mov     ebx, 4
 * 00000001C004B1E8: lea     r11, [r10+rax*4]
 * 00000001C004B1EC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004B1F3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C004B1F8: bt      eax, edx
 * 00000001C004B1FB: jnb     short loc_1C004B25A
 * 00000001C004B1FD: lea     rcx, [rdi+rdi*4]
 * 00000001C004B201: add     rcx, rcx
 * 00000001C004B204: cmp     [r10+rcx*8+29h], sil
 * 00000001C004B209: jb      short loc_1C004B25A
 * 00000001C004B20B: and     [rsp+68h+var_28], 0
 * 00000001C004B211: lea     rdx, [rsp+68h+arg_30]
 * 00000001C004B219: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B220: mov     r8, [rsp+68h+arg_20]
 * 00000001C004B228: mov     rcx, [r10+rcx*8+18h]
 * 00000001C004B22D: mov     [rsp+68h+var_30], rbx
 * 00000001C004B232: mov     [rsp+68h+var_38], rdx
 * 00000001C004B237: lea     rdx, [rsp+68h+arg_28]
 * 00000001C004B23F: mov     [rsp+68h+var_40], 8
 * 00000001C004B248: mov     [rsp+68h+var_48], rdx
 * 00000001C004B24D: lea     edx, [rbx+27h]
 * 00000001C004B250: movzx   r9d, r9w
 * 00000001C004B254: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B25A: and     [rsp+68h+var_20], 0
 * 00000001C004B260: lea     rax, [rsp+68h+arg_30]
 * 00000001C004B268: mov     r9, [rsp+68h+arg_20]
 * 00000001C004B270: mov     r8d, r14d
 * 00000001C004B273: mov     [rsp+68h+var_28], rbx
 * 00000001C004B278: mov     rcx, r15
 * 00000001C004B27B: mov     [rsp+68h+var_30], rax
 * 00000001C004B280: lea     rax, [rsp+68h+arg_28]
 * 00000001C004B288: mov     [rsp+68h+var_38], 8
 * 00000001C004B291: mov     [rsp+68h+var_40], rax
 * 00000001C004B296: movzx   edx, sil
 * 00000001C004B29A: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C004B29F: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B2A5: lea     r11, [rsp+68h+var_18]
 * 00000001C004B2AA: mov     rbx, [r11+20h]
 * 00000001C004B2AE: mov     rbp, [r11+28h]
 * 00000001C004B2B2: mov     rsi, [r11+30h]
 * 00000001C004B2B6: mov     rsp, r11
 * 00000001C004B2B9: pop     r15
 * 00000001C004B2BB: pop     r14
 * 00000001C004B2BD: pop     rdi
 * 00000001C004B2BE: retn
 */
