/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C002010C
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001D28C (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsL @ 0x1C002010C
 * Reason: Hex-Rays returned no pseudocode for 0x1C002010C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002010C: mov     [rsp+arg_0], rbx
 * 00000001C0020111: mov     [rsp+arg_8], rbp
 * 00000001C0020116: mov     [rsp+arg_10], rsi
 * 00000001C002011B: push    rdi
 * 00000001C002011C: push    r14
 * 00000001C002011E: push    r15
 * 00000001C0020120: sub     rsp, 60h
 * 00000001C0020124: mov     rdi, [rsp+78h+arg_30]
 * 00000001C002012C: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0020130: mov     r14d, r8d
 * 00000001C0020133: movzx   ebp, r9w
 * 00000001C0020137: mov     esi, r8d
 * 00000001C002013A: mov     r15, rcx
 * 00000001C002013D: shr     rsi, 10h
 * 00000001C0020141: lea     r8, aNull_0; "NULL"
 * 00000001C0020148: lea     r11d, [r14-1]
 * 00000001C002014C: mov     edx, r11d
 * 00000001C002014F: and     r11d, 1Fh
 * 00000001C0020153: shr     rdx, 5
 * 00000001C0020157: lea     rax, [rsi+rsi*4]
 * 00000001C002015B: and     edx, 7FFh
 * 00000001C0020161: lea     r10, [rdx+rax*4]
 * 00000001C0020165: mov     edx, r11d
 * 00000001C0020168: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C002016F: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0020174: bt      eax, edx
 * 00000001C0020177: jnb     loc_1C002021B
 * 00000001C002017D: lea     r10, [rsi+rsi*4]
 * 00000001C0020181: add     r10, r10
 * 00000001C0020184: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C002018A: jb      loc_1C002021B
 * 00000001C0020190: test    rdi, rdi
 * 00000001C0020193: jz      short loc_1C00201A6
 * 00000001C0020195: mov     rdx, rbx
 * 00000001C0020198: inc     rdx
 * 00000001C002019B: cmp     byte ptr [rdi+rdx], 0
 * 00000001C002019F: jnz     short loc_1C0020198
 * 00000001C00201A1: inc     rdx
 * 00000001C00201A4: jmp     short loc_1C00201AB
 * 00000001C00201A6: mov     edx, 5
 * 00000001C00201AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00201B2: test    rdi, rdi
 * 00000001C00201B5: mov     rcx, rdi
 * 00000001C00201B8: movzx   r9d, bp
 * 00000001C00201BC: cmovz   rcx, r8
 * 00000001C00201C0: and     [rsp+78h+var_28], 0
 * 00000001C00201C6: mov     [rsp+78h+var_30], 4
 * 00000001C00201CF: lea     r8, [rsp+78h+arg_38]
 * 00000001C00201D7: mov     [rsp+78h+var_38], r8
 * 00000001C00201DC: mov     r8, [rsp+78h+arg_20]
 * 00000001C00201E4: mov     [rsp+78h+var_40], rdx
 * 00000001C00201E9: mov     edx, 2Bh ; '+'
 * 00000001C00201EE: mov     [rsp+78h+var_48], rcx
 * 00000001C00201F3: lea     rcx, [rsp+78h+arg_28]
 * 00000001C00201FB: mov     [rsp+78h+var_50], 8
 * 00000001C0020204: mov     [rsp+78h+var_58], rcx
 * 00000001C0020209: mov     rcx, [r11+r10*8+18h]
 * 00000001C002020E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0020214: lea     r8, aNull_0; "NULL"
 * 00000001C002021B: test    rdi, rdi
 * 00000001C002021E: jz      short loc_1C002022E
 * 00000001C0020220: inc     rbx
 * 00000001C0020223: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0020227: jnz     short loc_1C0020220
 * 00000001C0020229: inc     rbx
 * 00000001C002022C: jmp     short loc_1C0020233
 * 00000001C002022E: mov     ebx, 5
 * 00000001C0020233: mov     r9, [rsp+78h+arg_20]
 * 00000001C002023B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0020243: test    rdi, rdi
 * 00000001C0020246: mov     edx, 4
 * 00000001C002024B: mov     rcx, r15
 * 00000001C002024E: cmovz   rdi, r8
 * 00000001C0020252: and     [rsp+78h+var_20], 0
 * 00000001C0020258: mov     [rsp+78h+var_28], 4
 * 00000001C0020261: mov     r8d, r14d
 * 00000001C0020264: mov     [rsp+78h+var_30], rax
 * 00000001C0020269: lea     rax, [rsp+78h+arg_28]
 * 00000001C0020271: mov     [rsp+78h+var_38], rbx
 * 00000001C0020276: mov     [rsp+78h+var_40], rdi
 * 00000001C002027B: mov     [rsp+78h+var_48], 8
 * 00000001C0020284: mov     [rsp+78h+var_50], rax
 * 00000001C0020289: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C002028E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0020294: lea     r11, [rsp+78h+var_18]
 * 00000001C0020299: mov     rbx, [r11+20h]
 * 00000001C002029D: mov     rbp, [r11+28h]
 * 00000001C00202A1: mov     rsi, [r11+30h]
 * 00000001C00202A5: mov     rsp, r11
 * 00000001C00202A8: pop     r15
 * 00000001C00202AA: pop     r14
 * 00000001C00202AC: pop     rdi
 * 00000001C00202AD: retn
 */
