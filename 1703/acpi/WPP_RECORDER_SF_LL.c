/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0007D24
 * Callers:
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008B3C0 (PnpCmResourcesToBiosResources.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0007D24
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007D24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007D24: mov     [rsp+arg_0], rbx
 * 00000001C0007D29: mov     [rsp+arg_8], rbp
 * 00000001C0007D2E: mov     [rsp+arg_10], rsi
 * 00000001C0007D33: push    rdi
 * 00000001C0007D34: push    r14
 * 00000001C0007D36: push    r15
 * 00000001C0007D38: sub     rsp, 50h
 * 00000001C0007D3C: mov     r14d, r8d
 * 00000001C0007D3F: mov     sil, dl
 * 00000001C0007D42: mov     edi, r8d
 * 00000001C0007D45: movzx   ebp, r9w
 * 00000001C0007D49: shr     rdi, 10h
 * 00000001C0007D4D: mov     r15, rcx
 * 00000001C0007D50: lea     ebx, [r14-1]
 * 00000001C0007D54: mov     r10d, ebx
 * 00000001C0007D57: and     ebx, 1Fh
 * 00000001C0007D5A: shr     r10, 5
 * 00000001C0007D5E: lea     rax, [rdi+rdi*4]
 * 00000001C0007D62: and     r10d, 7FFh
 * 00000001C0007D69: mov     edx, ebx
 * 00000001C0007D6B: mov     ebx, 4
 * 00000001C0007D70: lea     r11, [r10+rax*4]
 * 00000001C0007D74: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0007D7B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0007D80: bt      eax, edx
 * 00000001C0007D83: jb      loc_1C002EB14
 * 00000001C0007D89: and     [rsp+68h+var_20], 0
 * 00000001C0007D8F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0007D97: mov     r9, [rsp+68h+arg_20]
 * 00000001C0007D9F: mov     r8d, r14d
 * 00000001C0007DA2: mov     [rsp+68h+var_28], rbx
 * 00000001C0007DA7: mov     rcx, r15
 * 00000001C0007DAA: mov     [rsp+68h+var_30], rax
 * 00000001C0007DAF: lea     rax, [rsp+68h+arg_28]
 * 00000001C0007DB7: mov     [rsp+68h+var_38], rbx
 * 00000001C0007DBC: mov     [rsp+68h+var_40], rax
 * 00000001C0007DC1: movzx   edx, sil
 * 00000001C0007DC5: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0007DCA: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007DD0: lea     r11, [rsp+68h+var_18]
 * 00000001C0007DD5: mov     rbx, [r11+20h]
 * 00000001C0007DD9: mov     rbp, [r11+28h]
 * 00000001C0007DDD: mov     rsi, [r11+30h]
 * 00000001C0007DE1: mov     rsp, r11
 * 00000001C0007DE4: pop     r15
 * 00000001C0007DE6: pop     r14
 * 00000001C0007DE8: pop     rdi
 * 00000001C0007DE9: retn
 * 00000001C002EB14: lea     rcx, [rdi+rdi*4]
 * 00000001C002EB18: add     rcx, rcx
 * 00000001C002EB1B: cmp     [r10+rcx*8+29h], sil
 * 00000001C002EB20: jb      loc_1C0007D89
 * 00000001C002EB26: and     [rsp+68h+var_28], 0
 * 00000001C002EB2C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EB34: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EB3B: mov     r8, [rsp+68h+arg_20]
 * 00000001C002EB43: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002EB48: mov     [rsp+68h+var_30], rbx
 * 00000001C002EB4D: mov     [rsp+68h+var_38], rdx
 * 00000001C002EB52: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EB5A: mov     [rsp+68h+var_40], rbx
 * 00000001C002EB5F: mov     [rsp+68h+var_48], rdx
 * 00000001C002EB64: mov     edx, 2Bh ; '+'
 * 00000001C002EB69: movzx   r9d, bp
 * 00000001C002EB6D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EB73: nop
 * 00000001C002EB74: jmp     loc_1C0007D89
 */
