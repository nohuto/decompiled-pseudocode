/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C0027E60
 * Callers:
 *     LogError @ 0x1C0027DB8 (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1C0027E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0027E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0027E60: mov     rax, rsp
 * 00000001C0027E63: mov     [rax+8], rbx
 * 00000001C0027E67: mov     [rax+10h], rsi
 * 00000001C0027E6B: mov     [rax+18h], rdi
 * 00000001C0027E6F: mov     [rax+20h], r12
 * 00000001C0027E73: push    r13
 * 00000001C0027E75: sub     rsp, 50h
 * 00000001C0027E79: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0027E80: lea     r12, aNull_0; "NULL"
 * 00000001C0027E87: mov     rdi, [rsp+58h+arg_30]
 * 00000001C0027E8F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0027E93: mov     rsi, rcx
 * 00000001C0027E96: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0027E9D: lea     r13d, [rbx+0Bh]
 * 00000001C0027EA1: jnz     loc_1C003EB4C
 * 00000001C0027EA7: test    rdi, rdi
 * 00000001C0027EAA: jz      loc_1C003EBCF
 * 00000001C0027EB0: inc     rbx
 * 00000001C0027EB3: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0027EB7: jnz     short loc_1C0027EB0
 * 00000001C0027EB9: inc     rbx
 * 00000001C0027EBC: test    rdi, rdi
 * 00000001C0027EBF: lea     rax, [rsp+58h+arg_28]
 * 00000001C0027EC7: mov     edx, 2
 * 00000001C0027ECC: lea     r9, WPP_d3ed3b0dc6a63daeb2b8b7e6f0fb5f7f_Traceguids
 * 00000001C0027ED3: cmovz   rdi, r12
 * 00000001C0027ED7: mov     rcx, rsi
 * 00000001C0027EDA: and     [rsp+58h+var_10], 0
 * 00000001C0027EE0: mov     [rsp+58h+var_18], rbx
 * 00000001C0027EE5: mov     [rsp+58h+var_20], rdi
 * 00000001C0027EEA: lea     r8d, [rdx+13h]
 * 00000001C0027EEE: mov     [rsp+58h+var_28], 4
 * 00000001C0027EF7: mov     [rsp+58h+var_30], rax
 * 00000001C0027EFC: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0027F02: call    cs:__imp_WppAutoLogTrace
 * 00000001C0027F08: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0027F0D: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0027F12: mov     rdi, [rsp+58h+arg_10]
 * 00000001C0027F17: mov     r12, [rsp+58h+arg_18]
 * 00000001C0027F1C: add     rsp, 50h
 * 00000001C0027F20: pop     r13
 * 00000001C0027F22: retn
 * 00000001C003EB4C: cmp     byte ptr [rdx+29h], 2
 * 00000001C003EB50: jb      loc_1C0027EA7
 * 00000001C003EB56: test    rdi, rdi
 * 00000001C003EB59: jz      short loc_1C003EB6C
 * 00000001C003EB5B: mov     rdx, rbx
 * 00000001C003EB5E: inc     rdx
 * 00000001C003EB61: cmp     byte ptr [rdi+rdx], 0
 * 00000001C003EB65: jnz     short loc_1C003EB5E
 * 00000001C003EB67: inc     rdx
 * 00000001C003EB6A: jmp     short loc_1C003EB71
 * 00000001C003EB6C: mov     edx, 5
 * 00000001C003EB71: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003EB78: lea     r8, WPP_d3ed3b0dc6a63daeb2b8b7e6f0fb5f7f_Traceguids
 * 00000001C003EB7F: test    rdi, rdi
 * 00000001C003EB82: movzx   r9d, r13w
 * 00000001C003EB86: mov     rcx, rdi
 * 00000001C003EB89: cmovz   rcx, r12
 * 00000001C003EB8D: and     [rsp+58h+var_18], 0
 * 00000001C003EB93: mov     [rsp+58h+var_20], rdx
 * 00000001C003EB98: mov     edx, 2Bh ; '+'
 * 00000001C003EB9D: mov     [rsp+58h+var_28], rcx
 * 00000001C003EBA2: lea     rcx, [rsp+58h+arg_28]
 * 00000001C003EBAA: mov     [rsp+58h+var_30], 4
 * 00000001C003EBB3: mov     [rsp+58h+var_38], rcx
 * 00000001C003EBB8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003EBBF: mov     rcx, [rcx+18h]
 * 00000001C003EBC3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003EBC9: nop
 * 00000001C003EBCA: jmp     loc_1C0027EA7
 * 00000001C003EBCF: mov     ebx, 5
 * 00000001C003EBD4: jmp     loc_1C0027EBC
 */
