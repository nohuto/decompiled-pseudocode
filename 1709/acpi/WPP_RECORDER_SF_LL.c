/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0011ED4
 * Callers:
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E6A4 (PnpCmResourcesToBiosResources.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0011ED4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011ED4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011ED4: mov     [rsp+arg_0], rbx
 * 00000001C0011ED9: mov     [rsp+arg_8], rbp
 * 00000001C0011EDE: mov     [rsp+arg_10], rsi
 * 00000001C0011EE3: push    rdi
 * 00000001C0011EE4: push    r14
 * 00000001C0011EE6: push    r15
 * 00000001C0011EE8: sub     rsp, 50h
 * 00000001C0011EEC: mov     r14d, r8d
 * 00000001C0011EEF: mov     sil, dl
 * 00000001C0011EF2: mov     edi, r8d
 * 00000001C0011EF5: movzx   ebp, r9w
 * 00000001C0011EF9: shr     rdi, 10h
 * 00000001C0011EFD: mov     r15, rcx
 * 00000001C0011F00: lea     ebx, [r14-1]
 * 00000001C0011F04: mov     r10d, ebx
 * 00000001C0011F07: and     ebx, 1Fh
 * 00000001C0011F0A: shr     r10, 5
 * 00000001C0011F0E: lea     rax, [rdi+rdi*4]
 * 00000001C0011F12: and     r10d, 7FFh
 * 00000001C0011F19: mov     edx, ebx
 * 00000001C0011F1B: mov     ebx, 4
 * 00000001C0011F20: lea     r11, [r10+rax*4]
 * 00000001C0011F24: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0011F2B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0011F30: bt      eax, edx
 * 00000001C0011F33: jb      loc_1C002D09A
 * 00000001C0011F39: and     [rsp+68h+var_20], 0
 * 00000001C0011F3F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0011F47: mov     r9, [rsp+68h+arg_20]
 * 00000001C0011F4F: mov     r8d, r14d
 * 00000001C0011F52: mov     [rsp+68h+var_28], rbx
 * 00000001C0011F57: mov     rcx, r15
 * 00000001C0011F5A: mov     [rsp+68h+var_30], rax
 * 00000001C0011F5F: lea     rax, [rsp+68h+arg_28]
 * 00000001C0011F67: mov     [rsp+68h+var_38], rbx
 * 00000001C0011F6C: mov     [rsp+68h+var_40], rax
 * 00000001C0011F71: movzx   edx, sil
 * 00000001C0011F75: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0011F7A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011F80: lea     r11, [rsp+68h+var_18]
 * 00000001C0011F85: mov     rbx, [r11+20h]
 * 00000001C0011F89: mov     rbp, [r11+28h]
 * 00000001C0011F8D: mov     rsi, [r11+30h]
 * 00000001C0011F91: mov     rsp, r11
 * 00000001C0011F94: pop     r15
 * 00000001C0011F96: pop     r14
 * 00000001C0011F98: pop     rdi
 * 00000001C0011F99: retn
 * 00000001C002D09A: lea     rcx, [rdi+rdi*4]
 * 00000001C002D09E: add     rcx, rcx
 * 00000001C002D0A1: cmp     [r10+rcx*8+29h], sil
 * 00000001C002D0A6: jb      loc_1C0011F39
 * 00000001C002D0AC: and     [rsp+68h+var_28], 0
 * 00000001C002D0B2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D0BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D0C1: mov     r8, [rsp+68h+arg_20]
 * 00000001C002D0C9: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002D0CE: mov     [rsp+68h+var_30], rbx
 * 00000001C002D0D3: mov     [rsp+68h+var_38], rdx
 * 00000001C002D0D8: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D0E0: mov     [rsp+68h+var_40], rbx
 * 00000001C002D0E5: mov     [rsp+68h+var_48], rdx
 * 00000001C002D0EA: mov     edx, 2Bh ; '+'
 * 00000001C002D0EF: movzx   r9d, bp
 * 00000001C002D0F3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D0F9: nop
 * 00000001C002D0FA: jmp     loc_1C0011F39
 */
