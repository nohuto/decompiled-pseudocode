/*
 * XREFs of WPP_RECORDER_SF_dDDq @ 0x1C0005B68
 * Callers:
 *     IrqTranslateResources @ 0x1C00866E0 (IrqTranslateResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDq @ 0x1C0005B68
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005B68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005B68: mov     [rsp+arg_0], rbx
 * 00000001C0005B6D: mov     [rsp+arg_8], rbp
 * 00000001C0005B72: push    rdi
 * 00000001C0005B73: sub     rsp, 70h
 * 00000001C0005B77: mov     rbx, rcx
 * 00000001C0005B7A: mov     edi, 4
 * 00000001C0005B7F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005B86: lea     ebp, [rdi+6]
 * 00000001C0005B89: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0005B90: jnz     loc_1C002D018
 * 00000001C0005B96: and     [rsp+78h+var_10], 0
 * 00000001C0005B9C: lea     rax, [rsp+78h+arg_40]
 * 00000001C0005BA4: mov     [rsp+78h+var_18], 8
 * 00000001C0005BAD: lea     r9, WPP_8d4189f7e3d53cc77bc05be41993d710_Traceguids
 * 00000001C0005BB4: mov     [rsp+78h+var_20], rax
 * 00000001C0005BB9: mov     r8d, 14h
 * 00000001C0005BBF: mov     [rsp+78h+var_28], rdi
 * 00000001C0005BC4: lea     rax, [rsp+78h+arg_38]
 * 00000001C0005BCC: mov     [rsp+78h+var_30], rax
 * 00000001C0005BD1: mov     edx, edi
 * 00000001C0005BD3: mov     [rsp+78h+var_38], rdi
 * 00000001C0005BD8: lea     rax, [rsp+78h+arg_30]
 * 00000001C0005BE0: mov     [rsp+78h+var_40], rax
 * 00000001C0005BE5: mov     rcx, rbx
 * 00000001C0005BE8: lea     rax, [rsp+78h+arg_28]
 * 00000001C0005BF0: mov     [rsp+78h+var_48], rdi
 * 00000001C0005BF5: mov     [rsp+78h+var_50], rax
 * 00000001C0005BFA: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0005BFF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005C05: lea     r11, [rsp+78h+var_8]
 * 00000001C0005C0A: mov     rbx, [r11+10h]
 * 00000001C0005C0E: mov     rbp, [r11+18h]
 * 00000001C0005C12: mov     rsp, r11
 * 00000001C0005C15: pop     rdi
 * 00000001C0005C16: retn
 * 00000001C002D018: cmp     [rcx+29h], dil
 * 00000001C002D01C: jb      loc_1C0005B96
 * 00000001C002D022: and     [rsp+78h+var_18], 0
 * 00000001C002D028: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002D030: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D037: lea     r8, WPP_8d4189f7e3d53cc77bc05be41993d710_Traceguids
 * 00000001C002D03E: mov     rcx, [rcx+18h]
 * 00000001C002D042: mov     [rsp+78h+var_20], 8
 * 00000001C002D04B: mov     [rsp+78h+var_28], rdx
 * 00000001C002D050: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D058: mov     [rsp+78h+var_30], rdi
 * 00000001C002D05D: mov     [rsp+78h+var_38], rdx
 * 00000001C002D062: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D06A: mov     [rsp+78h+var_40], rdi
 * 00000001C002D06F: mov     [rsp+78h+var_48], rdx
 * 00000001C002D074: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D07C: mov     [rsp+78h+var_50], rdi
 * 00000001C002D081: mov     [rsp+78h+var_58], rdx
 * 00000001C002D086: mov     edx, 2Bh ; '+'
 * 00000001C002D08B: movzx   r9d, bp
 * 00000001C002D08F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D095: nop
 * 00000001C002D096: jmp     loc_1C0005B96
 */
