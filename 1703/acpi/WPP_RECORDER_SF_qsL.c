/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C000F504
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C00078D8 (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x1C000F400 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsL @ 0x1C000F504
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F504
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F504: mov     [rsp+arg_0], rbx
 * 00000001C000F509: mov     [rsp+arg_8], rbp
 * 00000001C000F50E: mov     [rsp+arg_10], rsi
 * 00000001C000F513: push    rdi
 * 00000001C000F514: push    r14
 * 00000001C000F516: push    r15
 * 00000001C000F518: sub     rsp, 60h
 * 00000001C000F51C: mov     rdi, [rsp+78h+arg_30]
 * 00000001C000F524: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000F528: mov     r14d, r8d
 * 00000001C000F52B: movzx   ebp, r9w
 * 00000001C000F52F: mov     esi, r8d
 * 00000001C000F532: mov     r15, rcx
 * 00000001C000F535: shr     rsi, 10h
 * 00000001C000F539: lea     r8, aNull_0; "NULL"
 * 00000001C000F540: lea     r11d, [r14-1]
 * 00000001C000F544: mov     edx, r11d
 * 00000001C000F547: and     r11d, 1Fh
 * 00000001C000F54B: shr     rdx, 5
 * 00000001C000F54F: lea     rax, [rsi+rsi*4]
 * 00000001C000F553: and     edx, 7FFh
 * 00000001C000F559: lea     r10, [rdx+rax*4]
 * 00000001C000F55D: mov     edx, r11d
 * 00000001C000F560: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C000F567: mov     eax, [r11+r10*4+2Ch]
 * 00000001C000F56C: bt      eax, edx
 * 00000001C000F56F: jb      loc_1C003228C
 * 00000001C000F575: test    rdi, rdi
 * 00000001C000F578: jz      loc_1C003232F
 * 00000001C000F57E: inc     rbx
 * 00000001C000F581: cmp     byte ptr [rdi+rbx], 0
 * 00000001C000F585: jnz     short loc_1C000F57E
 * 00000001C000F587: inc     rbx
 * 00000001C000F58A: mov     r9, [rsp+78h+arg_20]
 * 00000001C000F592: lea     rax, [rsp+78h+arg_38]
 * 00000001C000F59A: test    rdi, rdi
 * 00000001C000F59D: mov     edx, 4
 * 00000001C000F5A2: mov     rcx, r15
 * 00000001C000F5A5: cmovz   rdi, r8
 * 00000001C000F5A9: and     [rsp+78h+var_20], 0
 * 00000001C000F5AF: mov     [rsp+78h+var_28], 4
 * 00000001C000F5B8: mov     r8d, r14d
 * 00000001C000F5BB: mov     [rsp+78h+var_30], rax
 * 00000001C000F5C0: lea     rax, [rsp+78h+arg_28]
 * 00000001C000F5C8: mov     [rsp+78h+var_38], rbx
 * 00000001C000F5CD: mov     [rsp+78h+var_40], rdi
 * 00000001C000F5D2: mov     [rsp+78h+var_48], 8
 * 00000001C000F5DB: mov     [rsp+78h+var_50], rax
 * 00000001C000F5E0: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000F5E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C000F5EB: lea     r11, [rsp+78h+var_18]
 * 00000001C000F5F0: mov     rbx, [r11+20h]
 * 00000001C000F5F4: mov     rbp, [r11+28h]
 * 00000001C000F5F8: mov     rsi, [r11+30h]
 * 00000001C000F5FC: mov     rsp, r11
 * 00000001C000F5FF: pop     r15
 * 00000001C000F601: pop     r14
 * 00000001C000F603: pop     rdi
 * 00000001C000F604: retn
 * 00000001C003228C: lea     r10, [rsi+rsi*4]
 * 00000001C0032290: add     r10, r10
 * 00000001C0032293: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0032299: jb      loc_1C000F575
 * 00000001C003229F: test    rdi, rdi
 * 00000001C00322A2: jz      short loc_1C00322B5
 * 00000001C00322A4: mov     rdx, rbx
 * 00000001C00322A7: inc     rdx
 * 00000001C00322AA: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00322AE: jnz     short loc_1C00322A7
 * 00000001C00322B0: inc     rdx
 * 00000001C00322B3: jmp     short loc_1C00322BA
 * 00000001C00322B5: mov     edx, 5
 * 00000001C00322BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00322C1: test    rdi, rdi
 * 00000001C00322C4: mov     rcx, rdi
 * 00000001C00322C7: movzx   r9d, bp
 * 00000001C00322CB: cmovz   rcx, r8
 * 00000001C00322CF: and     [rsp+78h+var_28], 0
 * 00000001C00322D5: mov     [rsp+78h+var_30], 4
 * 00000001C00322DE: lea     r8, [rsp+78h+arg_38]
 * 00000001C00322E6: mov     [rsp+78h+var_38], r8
 * 00000001C00322EB: mov     r8, [rsp+78h+arg_20]
 * 00000001C00322F3: mov     [rsp+78h+var_40], rdx
 * 00000001C00322F8: mov     edx, 2Bh ; '+'
 * 00000001C00322FD: mov     [rsp+78h+var_48], rcx
 * 00000001C0032302: lea     rcx, [rsp+78h+arg_28]
 * 00000001C003230A: mov     [rsp+78h+var_50], 8
 * 00000001C0032313: mov     [rsp+78h+var_58], rcx
 * 00000001C0032318: mov     rcx, [r11+r10*8+18h]
 * 00000001C003231D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0032323: lea     r8, aNull_0; "NULL"
 * 00000001C003232A: jmp     loc_1C000F575
 * 00000001C003232F: mov     ebx, 5
 * 00000001C0032334: jmp     loc_1C000F58A
 */
