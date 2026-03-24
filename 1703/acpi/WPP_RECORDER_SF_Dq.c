/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C0005C74
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A5A60 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C0005C74
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005C74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005C74: mov     [rsp+arg_0], rbx
 * 00000001C0005C79: push    rdi
 * 00000001C0005C7A: sub     rsp, 50h
 * 00000001C0005C7E: mov     rdi, rcx
 * 00000001C0005C81: movzx   ebx, r9w
 * 00000001C0005C85: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C8C: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0005C93: jnz     loc_1C002D0F4
 * 00000001C0005C99: and     [rsp+58h+var_10], 0
 * 00000001C0005C9F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005CA7: mov     [rsp+58h+var_18], 8
 * 00000001C0005CB0: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0005CB7: mov     [rsp+58h+var_20], rax
 * 00000001C0005CBC: mov     edx, 4
 * 00000001C0005CC1: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005CC9: mov     [rsp+58h+var_28], 4
 * 00000001C0005CD2: mov     [rsp+58h+var_30], rax
 * 00000001C0005CD7: mov     rcx, rdi
 * 00000001C0005CDA: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C0005CDF: lea     r8d, [rdx+10h]
 * 00000001C0005CE3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005CE9: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005CEE: add     rsp, 50h
 * 00000001C0005CF2: pop     rdi
 * 00000001C0005CF3: retn
 * 00000001C002D0F4: cmp     byte ptr [rcx+29h], 4
 * 00000001C002D0F8: jb      loc_1C0005C99
 * 00000001C002D0FE: and     [rsp+58h+var_18], 0
 * 00000001C002D104: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002D10C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D113: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C002D11A: mov     rcx, [rcx+18h]
 * 00000001C002D11E: mov     [rsp+58h+var_20], 8
 * 00000001C002D127: mov     [rsp+58h+var_28], rdx
 * 00000001C002D12C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002D134: mov     [rsp+58h+var_30], 4
 * 00000001C002D13D: mov     [rsp+58h+var_38], rdx
 * 00000001C002D142: mov     edx, 2Bh ; '+'
 * 00000001C002D147: movzx   r9d, bx
 * 00000001C002D14B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D151: nop
 * 00000001C002D152: jmp     loc_1C0005C99
 */
