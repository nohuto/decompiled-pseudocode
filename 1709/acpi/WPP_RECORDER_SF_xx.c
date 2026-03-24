/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C000F8D8
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0088020 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xx @ 0x1C000F8D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F8D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F8D8: mov     [rsp+arg_0], rbx
 * 00000001C000F8DD: mov     [rsp+arg_8], rsi
 * 00000001C000F8E2: push    rdi
 * 00000001C000F8E3: sub     rsp, 50h
 * 00000001C000F8E7: mov     rbx, rcx
 * 00000001C000F8EA: mov     esi, 0Ch
 * 00000001C000F8EF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000F8F6: lea     edi, [rsi-4]
 * 00000001C000F8F9: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C000F900: jnz     loc_1C003AAB0
 * 00000001C000F906: and     [rsp+58h+var_10], 0
 * 00000001C000F90C: lea     rax, [rsp+58h+arg_30]
 * 00000001C000F914: mov     [rsp+58h+var_18], rdi
 * 00000001C000F919: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C000F920: mov     [rsp+58h+var_20], rax
 * 00000001C000F925: mov     edx, 4
 * 00000001C000F92A: lea     rax, [rsp+58h+arg_28]
 * 00000001C000F932: mov     [rsp+58h+var_28], rdi
 * 00000001C000F937: mov     [rsp+58h+var_30], rax
 * 00000001C000F93C: mov     rcx, rbx
 * 00000001C000F93F: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000F944: lea     r8d, [rdx+10h]
 * 00000001C000F948: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F94E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000F953: mov     rsi, [rsp+58h+arg_8]
 * 00000001C000F958: add     rsp, 50h
 * 00000001C000F95C: pop     rdi
 * 00000001C000F95D: retn
 * 00000001C003AAB0: cmp     byte ptr [rcx+29h], 4
 * 00000001C003AAB4: jb      loc_1C000F906
 * 00000001C003AABA: and     [rsp+58h+var_18], 0
 * 00000001C003AAC0: lea     rdx, [rsp+58h+arg_30]
 * 00000001C003AAC8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003AACF: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C003AAD6: mov     rcx, [rcx+18h]
 * 00000001C003AADA: mov     [rsp+58h+var_20], rdi
 * 00000001C003AADF: mov     [rsp+58h+var_28], rdx
 * 00000001C003AAE4: lea     rdx, [rsp+58h+arg_28]
 * 00000001C003AAEC: mov     [rsp+58h+var_30], rdi
 * 00000001C003AAF1: mov     [rsp+58h+var_38], rdx
 * 00000001C003AAF6: mov     edx, 2Bh ; '+'
 * 00000001C003AAFB: movzx   r9d, si
 * 00000001C003AAFF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003AB05: nop
 * 00000001C003AB06: jmp     loc_1C000F906
 */
