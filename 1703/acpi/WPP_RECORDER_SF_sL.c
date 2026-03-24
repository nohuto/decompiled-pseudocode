/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C0056CAC
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1C00AB0E4 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1C0056CAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056CAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056CAC: mov     [rsp+arg_0], rbx
 * 00000001C0056CB1: mov     [rsp+arg_8], rbp
 * 00000001C0056CB6: mov     [rsp+arg_10], rsi
 * 00000001C0056CBB: push    rdi
 * 00000001C0056CBC: push    r12
 * 00000001C0056CBE: push    r13
 * 00000001C0056CC0: sub     rsp, 50h
 * 00000001C0056CC4: mov     rdi, [rsp+68h+arg_28]
 * 00000001C0056CCC: lea     r12, aNull; "NULL"
 * 00000001C0056CD3: xor     ebp, ebp
 * 00000001C0056CD5: mov     rsi, rcx
 * 00000001C0056CD8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056CDF: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0056CE3: lea     r13d, [rbp+11h]
 * 00000001C0056CE7: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0056CEE: jz      short loc_1C0056D66
 * 00000001C0056CF0: cmp     byte ptr [rcx+29h], 2
 * 00000001C0056CF4: jb      short loc_1C0056D66
 * 00000001C0056CF6: test    rdi, rdi
 * 00000001C0056CF9: jz      short loc_1C0056D0D
 * 00000001C0056CFB: mov     r8, rbx
 * 00000001C0056CFE: inc     r8
 * 00000001C0056D01: cmp     [rdi+r8*2], bp
 * 00000001C0056D06: jnz     short loc_1C0056CFE
 * 00000001C0056D08: inc     r8
 * 00000001C0056D0B: jmp     short loc_1C0056D13
 * 00000001C0056D0D: mov     r8d, 5
 * 00000001C0056D13: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056D1A: lea     r9, [rsp+68h+arg_30]
 * 00000001C0056D22: mov     rcx, [rcx+18h]
 * 00000001C0056D26: add     r8, r8
 * 00000001C0056D29: mov     [rsp+68h+var_28], rbp
 * 00000001C0056D2E: test    rdi, rdi
 * 00000001C0056D31: mov     [rsp+68h+var_30], 4
 * 00000001C0056D3A: mov     rdx, rdi
 * 00000001C0056D3D: mov     [rsp+68h+var_38], r9
 * 00000001C0056D42: cmovz   rdx, r12
 * 00000001C0056D46: mov     [rsp+68h+var_40], r8
 * 00000001C0056D4B: lea     r8, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0056D52: mov     [rsp+68h+var_48], rdx
 * 00000001C0056D57: mov     edx, 2Bh ; '+'
 * 00000001C0056D5C: movzx   r9d, r13w
 * 00000001C0056D60: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0056D66: test    rdi, rdi
 * 00000001C0056D69: jz      short loc_1C0056D79
 * 00000001C0056D6B: inc     rbx
 * 00000001C0056D6E: cmp     [rdi+rbx*2], bp
 * 00000001C0056D72: jnz     short loc_1C0056D6B
 * 00000001C0056D74: inc     rbx
 * 00000001C0056D77: jmp     short loc_1C0056D7E
 * 00000001C0056D79: mov     ebx, 5
 * 00000001C0056D7E: mov     [rsp+68h+var_20], rbp
 * 00000001C0056D83: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0056D8B: mov     [rsp+68h+var_28], 4
 * 00000001C0056D94: lea     rax, [rbx+rbx]
 * 00000001C0056D98: mov     [rsp+68h+var_30], rcx
 * 00000001C0056D9D: lea     r9, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0056DA4: mov     [rsp+68h+var_38], rax
 * 00000001C0056DA9: test    rdi, rdi
 * 00000001C0056DAC: mov     edx, 2
 * 00000001C0056DB1: mov     rcx, rsi
 * 00000001C0056DB4: cmovz   rdi, r12
 * 00000001C0056DB8: mov     [rsp+68h+var_40], rdi
 * 00000001C0056DBD: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0056DC3: lea     r8d, [rdx+14h]
 * 00000001C0056DC7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0056DCD: lea     r11, [rsp+68h+var_18]
 * 00000001C0056DD2: mov     rbx, [r11+20h]
 * 00000001C0056DD6: mov     rbp, [r11+28h]
 * 00000001C0056DDA: mov     rsi, [r11+30h]
 * 00000001C0056DDE: mov     rsp, r11
 * 00000001C0056DE1: pop     r13
 * 00000001C0056DE3: pop     r12
 * 00000001C0056DE5: pop     rdi
 * 00000001C0056DE6: retn
 */
