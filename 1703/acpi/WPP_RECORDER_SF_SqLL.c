/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C0006C58
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C008BAB8 (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SqLL @ 0x1C0006C58
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006C58
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006C58: mov     [rsp+arg_0], rbx
 * 00000001C0006C5D: mov     [rsp+arg_8], rbp
 * 00000001C0006C62: mov     [rsp+arg_10], rsi
 * 00000001C0006C67: push    rdi
 * 00000001C0006C68: push    r13
 * 00000001C0006C6A: push    r14
 * 00000001C0006C6C: sub     rsp, 70h
 * 00000001C0006C70: mov     rdi, [rsp+88h+arg_28]
 * 00000001C0006C78: lea     r13, aNull; "NULL"
 * 00000001C0006C7F: xor     ebp, ebp
 * 00000001C0006C81: mov     rsi, rcx
 * 00000001C0006C84: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006C8B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0006C8F: lea     r14d, [rbp+4]
 * 00000001C0006C93: mov     eax, [rcx+2Ch]
 * 00000001C0006C96: lea     r10d, [rbp+0Ch]
 * 00000001C0006C9A: test    al, 20h
 * 00000001C0006C9C: jnz     loc_1C002DAC2
 * 00000001C0006CA2: test    rdi, rdi
 * 00000001C0006CA5: jz      loc_1C002DB6B
 * 00000001C0006CAB: inc     rbx
 * 00000001C0006CAE: cmp     [rdi+rbx*2], bp
 * 00000001C0006CB2: jnz     short loc_1C0006CAB
 * 00000001C0006CB4: inc     rbx
 * 00000001C0006CB7: mov     [rsp+88h+var_20], rbp
 * 00000001C0006CBC: lea     rcx, [rsp+88h+arg_40]
 * 00000001C0006CC4: mov     [rsp+88h+var_28], r14
 * 00000001C0006CC9: lea     rax, [rbx+rbx]
 * 00000001C0006CCD: mov     [rsp+88h+var_30], rcx
 * 00000001C0006CD2: lea     r9, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C0006CD9: mov     [rsp+88h+var_38], r14
 * 00000001C0006CDE: lea     rcx, [rsp+88h+arg_38]
 * 00000001C0006CE6: mov     [rsp+88h+var_40], rcx
 * 00000001C0006CEB: test    rdi, rdi
 * 00000001C0006CEE: mov     [rsp+88h+var_48], 8
 * 00000001C0006CF7: lea     rcx, [rsp+88h+arg_30]
 * 00000001C0006CFF: mov     [rsp+88h+var_50], rcx
 * 00000001C0006D04: cmovz   rdi, r13
 * 00000001C0006D08: mov     [rsp+88h+var_58], rax
 * 00000001C0006D0D: mov     r8d, 6
 * 00000001C0006D13: mov     [rsp+88h+var_60], rdi
 * 00000001C0006D18: mov     edx, r14d
 * 00000001C0006D1B: mov     rcx, rsi
 * 00000001C0006D1E: mov     word ptr [rsp+88h+var_68], r10w
 * 00000001C0006D24: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006D2A: lea     r11, [rsp+88h+var_18]
 * 00000001C0006D2F: mov     rbx, [r11+20h]
 * 00000001C0006D33: mov     rbp, [r11+28h]
 * 00000001C0006D37: mov     rsi, [r11+30h]
 * 00000001C0006D3B: mov     rsp, r11
 * 00000001C0006D3E: pop     r14
 * 00000001C0006D40: pop     r13
 * 00000001C0006D42: pop     rdi
 * 00000001C0006D43: retn
 * 00000001C002DAC2: cmp     [rcx+29h], r14b
 * 00000001C002DAC6: jb      loc_1C0006CA2
 * 00000001C002DACC: test    rdi, rdi
 * 00000001C002DACF: jz      short loc_1C002DAE3
 * 00000001C002DAD1: mov     r8, rbx
 * 00000001C002DAD4: inc     r8
 * 00000001C002DAD7: cmp     [rdi+r8*2], bp
 * 00000001C002DADC: jnz     short loc_1C002DAD4
 * 00000001C002DADE: inc     r8
 * 00000001C002DAE1: jmp     short loc_1C002DAE9
 * 00000001C002DAE3: mov     r8d, 5
 * 00000001C002DAE9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DAF0: lea     r9, [rsp+88h+arg_40]
 * 00000001C002DAF8: mov     rcx, [rcx+18h]
 * 00000001C002DAFC: add     r8, r8
 * 00000001C002DAFF: mov     [rsp+88h+var_28], rbp
 * 00000001C002DB04: test    rdi, rdi
 * 00000001C002DB07: mov     [rsp+88h+var_30], r14
 * 00000001C002DB0C: mov     rdx, rdi
 * 00000001C002DB0F: mov     [rsp+88h+var_38], r9
 * 00000001C002DB14: cmovz   rdx, r13
 * 00000001C002DB18: mov     [rsp+88h+var_40], r14
 * 00000001C002DB1D: lea     r9, [rsp+88h+arg_38]
 * 00000001C002DB25: mov     [rsp+88h+var_48], r9
 * 00000001C002DB2A: lea     r9, [rsp+88h+arg_30]
 * 00000001C002DB32: mov     [rsp+88h+var_50], 8
 * 00000001C002DB3B: mov     [rsp+88h+var_58], r9
 * 00000001C002DB40: mov     [rsp+88h+var_60], r8
 * 00000001C002DB45: lea     r8, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C002DB4C: mov     [rsp+88h+var_68], rdx
 * 00000001C002DB51: mov     edx, 2Bh ; '+'
 * 00000001C002DB56: movzx   r9d, r10w
 * 00000001C002DB5A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DB60: mov     r10d, 0Ch
 * 00000001C002DB66: jmp     loc_1C0006CA2
 * 00000001C002DB6B: mov     ebx, 5
 * 00000001C002DB70: jmp     loc_1C0006CB7
 */
