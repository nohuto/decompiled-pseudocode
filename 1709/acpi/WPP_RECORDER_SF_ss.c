/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0053A40
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C00178B0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x1C0053A40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0053A40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0053A40: mov     rax, rsp
 * 00000001C0053A43: mov     [rax+8], rbx
 * 00000001C0053A47: mov     [rax+10h], rbp
 * 00000001C0053A4B: mov     [rax+18h], rsi
 * 00000001C0053A4F: mov     [rax+20h], rdi
 * 00000001C0053A53: push    r12
 * 00000001C0053A55: push    r13
 * 00000001C0053A57: push    r15
 * 00000001C0053A59: sub     rsp, 50h
 * 00000001C0053A5D: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0053A64: lea     r12, aNull_0; "NULL"
 * 00000001C0053A6B: mov     rdi, [rsp+68h+arg_30]
 * 00000001C0053A73: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0053A77: mov     rsi, [rsp+68h+arg_28]
 * 00000001C0053A7F: mov     rbp, rcx
 * 00000001C0053A82: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0053A89: lea     r15d, [rbx+6]
 * 00000001C0053A8D: lea     r13d, [rbx+0Ch]
 * 00000001C0053A91: jz      loc_1C0053B2A
 * 00000001C0053A97: cmp     byte ptr [rdx+29h], 2
 * 00000001C0053A9B: jb      loc_1C0053B2A
 * 00000001C0053AA1: test    rdi, rdi
 * 00000001C0053AA4: jz      short loc_1C0053AB7
 * 00000001C0053AA6: mov     rdx, rbx
 * 00000001C0053AA9: inc     rdx
 * 00000001C0053AAC: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0053AB0: jnz     short loc_1C0053AA9
 * 00000001C0053AB2: inc     rdx
 * 00000001C0053AB5: jmp     short loc_1C0053ABA
 * 00000001C0053AB7: mov     rdx, r15
 * 00000001C0053ABA: test    rdi, rdi
 * 00000001C0053ABD: mov     r9, rdi
 * 00000001C0053AC0: cmovz   r9, r12
 * 00000001C0053AC4: test    rsi, rsi
 * 00000001C0053AC7: jz      short loc_1C0053ADB
 * 00000001C0053AC9: mov     r8, rbx
 * 00000001C0053ACC: inc     r8
 * 00000001C0053ACF: cmp     byte ptr [rsi+r8], 0
 * 00000001C0053AD4: jnz     short loc_1C0053ACC
 * 00000001C0053AD6: inc     r8
 * 00000001C0053AD9: jmp     short loc_1C0053ADE
 * 00000001C0053ADB: mov     r8, r15
 * 00000001C0053ADE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0053AE5: test    rsi, rsi
 * 00000001C0053AE8: mov     rcx, rsi
 * 00000001C0053AEB: cmovz   rcx, r12
 * 00000001C0053AEF: and     [rsp+68h+var_28], 0
 * 00000001C0053AF5: mov     [rsp+68h+var_30], rdx
 * 00000001C0053AFA: mov     edx, 2Bh ; '+'
 * 00000001C0053AFF: mov     [rsp+68h+var_38], r9
 * 00000001C0053B04: mov     [rsp+68h+var_40], r8
 * 00000001C0053B09: lea     r8, WPP_a7cfc44ef7fe3d6eb8e4d5c01bae5db1_Traceguids
 * 00000001C0053B10: mov     [rsp+68h+var_48], rcx
 * 00000001C0053B15: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0053B1C: movzx   r9d, r13w
 * 00000001C0053B20: mov     rcx, [rcx+18h]
 * 00000001C0053B24: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0053B2A: test    rdi, rdi
 * 00000001C0053B2D: jz      short loc_1C0053B40
 * 00000001C0053B2F: mov     rax, rbx
 * 00000001C0053B32: inc     rax
 * 00000001C0053B35: cmp     byte ptr [rdi+rax], 0
 * 00000001C0053B39: jnz     short loc_1C0053B32
 * 00000001C0053B3B: inc     rax
 * 00000001C0053B3E: jmp     short loc_1C0053B43
 * 00000001C0053B40: mov     rax, r15
 * 00000001C0053B43: test    rdi, rdi
 * 00000001C0053B46: cmovz   rdi, r12
 * 00000001C0053B4A: test    rsi, rsi
 * 00000001C0053B4D: jz      short loc_1C0053B5D
 * 00000001C0053B4F: inc     rbx
 * 00000001C0053B52: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0053B56: jnz     short loc_1C0053B4F
 * 00000001C0053B58: inc     rbx
 * 00000001C0053B5B: jmp     short loc_1C0053B60
 * 00000001C0053B5D: mov     rbx, r15
 * 00000001C0053B60: test    rsi, rsi
 * 00000001C0053B63: lea     r9, WPP_a7cfc44ef7fe3d6eb8e4d5c01bae5db1_Traceguids
 * 00000001C0053B6A: mov     edx, 2
 * 00000001C0053B6F: mov     rcx, rbp
 * 00000001C0053B72: cmovz   rsi, r12
 * 00000001C0053B76: and     [rsp+68h+var_20], 0
 * 00000001C0053B7C: mov     [rsp+68h+var_28], rax
 * 00000001C0053B81: mov     [rsp+68h+var_30], rdi
 * 00000001C0053B86: mov     [rsp+68h+var_38], rbx
 * 00000001C0053B8B: lea     r8d, [rdx+13h]
 * 00000001C0053B8F: mov     [rsp+68h+var_40], rsi
 * 00000001C0053B94: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0053B9A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0053BA0: lea     r11, [rsp+68h+var_18]
 * 00000001C0053BA5: mov     rbx, [r11+20h]
 * 00000001C0053BA9: mov     rbp, [r11+28h]
 * 00000001C0053BAD: mov     rsi, [r11+30h]
 * 00000001C0053BB1: mov     rdi, [r11+38h]
 * 00000001C0053BB5: mov     rsp, r11
 * 00000001C0053BB8: pop     r15
 * 00000001C0053BBA: pop     r13
 * 00000001C0053BBC: pop     r12
 * 00000001C0053BBE: retn
 */
