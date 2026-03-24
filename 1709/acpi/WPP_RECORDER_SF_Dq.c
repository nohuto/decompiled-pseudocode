/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C000E590
 * Callers:
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A8500 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C000E590
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E590
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E590: mov     [rsp+arg_0], rbx
 * 00000001C000E595: push    rdi
 * 00000001C000E596: sub     rsp, 50h
 * 00000001C000E59A: mov     rdi, rcx
 * 00000001C000E59D: movzx   ebx, r9w
 * 00000001C000E5A1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000E5A8: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C000E5AF: jnz     loc_1C003903A
 * 00000001C000E5B5: and     [rsp+58h+var_10], 0
 * 00000001C000E5BB: lea     rax, [rsp+58h+arg_30]
 * 00000001C000E5C3: mov     [rsp+58h+var_18], 8
 * 00000001C000E5CC: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C000E5D3: mov     [rsp+58h+var_20], rax
 * 00000001C000E5D8: mov     edx, 4
 * 00000001C000E5DD: lea     rax, [rsp+58h+arg_28]
 * 00000001C000E5E5: mov     [rsp+58h+var_28], 4
 * 00000001C000E5EE: mov     [rsp+58h+var_30], rax
 * 00000001C000E5F3: mov     rcx, rdi
 * 00000001C000E5F6: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C000E5FB: lea     r8d, [rdx+10h]
 * 00000001C000E5FF: call    cs:__imp_WppAutoLogTrace
 * 00000001C000E605: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000E60A: add     rsp, 50h
 * 00000001C000E60E: pop     rdi
 * 00000001C000E60F: retn
 * 00000001C003903A: cmp     byte ptr [rcx+29h], 4
 * 00000001C003903E: jb      loc_1C000E5B5
 * 00000001C0039044: and     [rsp+58h+var_18], 0
 * 00000001C003904A: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0039052: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0039059: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0039060: mov     rcx, [rcx+18h]
 * 00000001C0039064: mov     [rsp+58h+var_20], 8
 * 00000001C003906D: mov     [rsp+58h+var_28], rdx
 * 00000001C0039072: lea     rdx, [rsp+58h+arg_28]
 * 00000001C003907A: mov     [rsp+58h+var_30], 4
 * 00000001C0039083: mov     [rsp+58h+var_38], rdx
 * 00000001C0039088: mov     edx, 2Bh ; '+'
 * 00000001C003908D: movzx   r9d, bx
 * 00000001C0039091: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0039097: nop
 * 00000001C0039098: jmp     loc_1C000E5B5
 */
