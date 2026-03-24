/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0052F40
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x1C0052F40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0052F40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0052F40: mov     rax, rsp
 * 00000001C0052F43: mov     [rax+8], rbx
 * 00000001C0052F47: mov     [rax+10h], rbp
 * 00000001C0052F4B: mov     [rax+18h], rsi
 * 00000001C0052F4F: mov     [rax+20h], rdi
 * 00000001C0052F53: push    r12
 * 00000001C0052F55: push    r13
 * 00000001C0052F57: push    r15
 * 00000001C0052F59: sub     rsp, 50h
 * 00000001C0052F5D: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0052F64: lea     r12, aNull_0; "NULL"
 * 00000001C0052F6B: mov     rdi, [rsp+68h+arg_30]
 * 00000001C0052F73: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0052F77: mov     rsi, [rsp+68h+arg_28]
 * 00000001C0052F7F: mov     rbp, rcx
 * 00000001C0052F82: test    dword ptr [r10+2Ch], 100000h
 * 00000001C0052F8A: lea     r15d, [rbx+6]
 * 00000001C0052F8E: lea     r13d, [rbx+0Ch]
 * 00000001C0052F92: jz      loc_1C0053025
 * 00000001C0052F98: cmp     byte ptr [r10+29h], 2
 * 00000001C0052F9D: jb      loc_1C0053025
 * 00000001C0052FA3: test    rdi, rdi
 * 00000001C0052FA6: jz      short loc_1C0052FB9
 * 00000001C0052FA8: mov     rcx, rbx
 * 00000001C0052FAB: inc     rcx
 * 00000001C0052FAE: cmp     byte ptr [rdi+rcx], 0
 * 00000001C0052FB2: jnz     short loc_1C0052FAB
 * 00000001C0052FB4: inc     rcx
 * 00000001C0052FB7: jmp     short loc_1C0052FBC
 * 00000001C0052FB9: mov     rcx, r15
 * 00000001C0052FBC: test    rdi, rdi
 * 00000001C0052FBF: mov     r9, rdi
 * 00000001C0052FC2: cmovz   r9, r12
 * 00000001C0052FC6: test    rsi, rsi
 * 00000001C0052FC9: jz      short loc_1C0052FDD
 * 00000001C0052FCB: mov     r8, rbx
 * 00000001C0052FCE: inc     r8
 * 00000001C0052FD1: cmp     byte ptr [rsi+r8], 0
 * 00000001C0052FD6: jnz     short loc_1C0052FCE
 * 00000001C0052FD8: inc     r8
 * 00000001C0052FDB: jmp     short loc_1C0052FE0
 * 00000001C0052FDD: mov     r8, r15
 * 00000001C0052FE0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0052FE7: test    rsi, rsi
 * 00000001C0052FEA: mov     rdx, rsi
 * 00000001C0052FED: cmovz   rdx, r12
 * 00000001C0052FF1: and     [rsp+68h+var_28], 0
 * 00000001C0052FF7: mov     [rsp+68h+var_30], rcx
 * 00000001C0052FFC: mov     rcx, [r10+18h]
 * 00000001C0053000: mov     [rsp+68h+var_38], r9
 * 00000001C0053005: mov     [rsp+68h+var_40], r8
 * 00000001C005300A: lea     r8, WPP_a7cfc44ef7fe3d6eb8e4d5c01bae5db1_Traceguids
 * 00000001C0053011: mov     [rsp+68h+var_48], rdx
 * 00000001C0053016: mov     edx, 2Bh ; '+'
 * 00000001C005301B: movzx   r9d, r13w
 * 00000001C005301F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0053025: test    rdi, rdi
 * 00000001C0053028: jz      short loc_1C005303B
 * 00000001C005302A: mov     rax, rbx
 * 00000001C005302D: inc     rax
 * 00000001C0053030: cmp     byte ptr [rdi+rax], 0
 * 00000001C0053034: jnz     short loc_1C005302D
 * 00000001C0053036: inc     rax
 * 00000001C0053039: jmp     short loc_1C005303E
 * 00000001C005303B: mov     rax, r15
 * 00000001C005303E: test    rdi, rdi
 * 00000001C0053041: cmovz   rdi, r12
 * 00000001C0053045: test    rsi, rsi
 * 00000001C0053048: jz      short loc_1C0053058
 * 00000001C005304A: inc     rbx
 * 00000001C005304D: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0053051: jnz     short loc_1C005304A
 * 00000001C0053053: inc     rbx
 * 00000001C0053056: jmp     short loc_1C005305B
 * 00000001C0053058: mov     rbx, r15
 * 00000001C005305B: test    rsi, rsi
 * 00000001C005305E: lea     r9, WPP_a7cfc44ef7fe3d6eb8e4d5c01bae5db1_Traceguids
 * 00000001C0053065: mov     edx, 2
 * 00000001C005306A: mov     rcx, rbp
 * 00000001C005306D: cmovz   rsi, r12
 * 00000001C0053071: and     [rsp+68h+var_20], 0
 * 00000001C0053077: mov     [rsp+68h+var_28], rax
 * 00000001C005307C: mov     [rsp+68h+var_30], rdi
 * 00000001C0053081: mov     [rsp+68h+var_38], rbx
 * 00000001C0053086: lea     r8d, [rdx+13h]
 * 00000001C005308A: mov     [rsp+68h+var_40], rsi
 * 00000001C005308F: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0053095: call    cs:__imp_WppAutoLogTrace
 * 00000001C005309B: lea     r11, [rsp+68h+var_18]
 * 00000001C00530A0: mov     rbx, [r11+20h]
 * 00000001C00530A4: mov     rbp, [r11+28h]
 * 00000001C00530A8: mov     rsi, [r11+30h]
 * 00000001C00530AC: mov     rdi, [r11+38h]
 * 00000001C00530B0: mov     rsp, r11
 * 00000001C00530B3: pop     r15
 * 00000001C00530B5: pop     r13
 * 00000001C00530B7: pop     r12
 * 00000001C00530B9: retn
 */
