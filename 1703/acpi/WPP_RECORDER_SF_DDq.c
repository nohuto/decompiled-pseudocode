/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0016F74
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C008FB74 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C0016F74
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016F74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016F74: mov     [rsp+arg_0], rbx
 * 00000001C0016F79: mov     [rsp+arg_8], rbp
 * 00000001C0016F7E: push    rdi
 * 00000001C0016F7F: sub     rsp, 60h
 * 00000001C0016F83: mov     rbx, rcx
 * 00000001C0016F86: mov     edi, 4
 * 00000001C0016F8B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0016F92: lea     ebp, [rdi+0Fh]
 * 00000001C0016F95: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0016F9C: jnz     loc_1C0035700
 * 00000001C0016FA2: and     [rsp+68h+var_10], 0
 * 00000001C0016FA8: lea     rax, [rsp+68h+arg_38]
 * 00000001C0016FB0: mov     [rsp+68h+var_18], 8
 * 00000001C0016FB9: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0016FC0: mov     [rsp+68h+var_20], rax
 * 00000001C0016FC5: mov     r8d, 14h
 * 00000001C0016FCB: mov     [rsp+68h+var_28], rdi
 * 00000001C0016FD0: lea     rax, [rsp+68h+arg_30]
 * 00000001C0016FD8: mov     [rsp+68h+var_30], rax
 * 00000001C0016FDD: mov     edx, edi
 * 00000001C0016FDF: lea     rax, [rsp+68h+arg_28]
 * 00000001C0016FE7: mov     [rsp+68h+var_38], rdi
 * 00000001C0016FEC: mov     [rsp+68h+var_40], rax
 * 00000001C0016FF1: mov     rcx, rbx
 * 00000001C0016FF4: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0016FF9: call    cs:__imp_WppAutoLogTrace
 * 00000001C0016FFF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0017004: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0017009: add     rsp, 60h
 * 00000001C001700D: pop     rdi
 * 00000001C001700E: retn
 * 00000001C0035700: cmp     [rcx+29h], dil
 * 00000001C0035704: jb      loc_1C0016FA2
 * 00000001C003570A: and     [rsp+68h+var_18], 0
 * 00000001C0035710: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0035718: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003571F: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0035726: mov     rcx, [rcx+18h]
 * 00000001C003572A: mov     [rsp+68h+var_20], 8
 * 00000001C0035733: mov     [rsp+68h+var_28], rdx
 * 00000001C0035738: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0035740: mov     [rsp+68h+var_30], rdi
 * 00000001C0035745: mov     [rsp+68h+var_38], rdx
 * 00000001C003574A: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0035752: mov     [rsp+68h+var_40], rdi
 * 00000001C0035757: mov     [rsp+68h+var_48], rdx
 * 00000001C003575C: mov     edx, 2Bh ; '+'
 * 00000001C0035761: movzx   r9d, bp
 * 00000001C0035765: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003576B: nop
 * 00000001C003576C: jmp     loc_1C0016FA2
 */
