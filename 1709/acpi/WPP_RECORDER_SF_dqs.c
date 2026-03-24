/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C004A1DC
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C0048BD0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x1C004A1DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A1DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A1DC: mov     [rsp+arg_0], rbx
 * 00000001C004A1E1: mov     [rsp+arg_8], rsi
 * 00000001C004A1E6: mov     [rsp+arg_10], rdi
 * 00000001C004A1EB: push    r13
 * 00000001C004A1ED: sub     rsp, 60h
 * 00000001C004A1F1: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C004A1F8: lea     r13, aNull_0; "NULL"
 * 00000001C004A1FF: mov     rdi, [rsp+68h+arg_38]
 * 00000001C004A207: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004A20B: mov     rsi, rcx
 * 00000001C004A20E: test    dword ptr [rdx+2Ch], 200h
 * 00000001C004A215: lea     r8d, [rbx+3Dh]
 * 00000001C004A219: jz      loc_1C004A2B8
 * 00000001C004A21F: cmp     byte ptr [rdx+29h], 4
 * 00000001C004A223: jb      loc_1C004A2B8
 * 00000001C004A229: test    rdi, rdi
 * 00000001C004A22C: jz      short loc_1C004A23F
 * 00000001C004A22E: mov     rdx, rbx
 * 00000001C004A231: inc     rdx
 * 00000001C004A234: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004A238: jnz     short loc_1C004A231
 * 00000001C004A23A: inc     rdx
 * 00000001C004A23D: jmp     short loc_1C004A244
 * 00000001C004A23F: mov     edx, 5
 * 00000001C004A244: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A24B: test    rdi, rdi
 * 00000001C004A24E: movzx   r9d, r8w
 * 00000001C004A252: mov     rcx, rdi
 * 00000001C004A255: cmovz   rcx, r13
 * 00000001C004A259: lea     r8, WPP_865309cb09b9397d2632e54924735df7_Traceguids
 * 00000001C004A260: and     [rsp+68h+var_18], 0
 * 00000001C004A266: mov     [rsp+68h+var_20], rdx
 * 00000001C004A26B: mov     edx, 2Bh ; '+'
 * 00000001C004A270: mov     [rsp+68h+var_28], rcx
 * 00000001C004A275: lea     rcx, [rsp+68h+arg_30]
 * 00000001C004A27D: mov     [rsp+68h+var_30], 8
 * 00000001C004A286: mov     [rsp+68h+var_38], rcx
 * 00000001C004A28B: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004A293: mov     [rsp+68h+var_40], 4
 * 00000001C004A29C: mov     [rsp+68h+var_48], rcx
 * 00000001C004A2A1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A2A8: mov     rcx, [rcx+18h]
 * 00000001C004A2AC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A2B2: mov     r8d, 3Ch ; '<'
 * 00000001C004A2B8: test    rdi, rdi
 * 00000001C004A2BB: jz      short loc_1C004A2CB
 * 00000001C004A2BD: inc     rbx
 * 00000001C004A2C0: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004A2C4: jnz     short loc_1C004A2BD
 * 00000001C004A2C6: inc     rbx
 * 00000001C004A2C9: jmp     short loc_1C004A2D0
 * 00000001C004A2CB: mov     ebx, 5
 * 00000001C004A2D0: test    rdi, rdi
 * 00000001C004A2D3: lea     rax, [rsp+68h+arg_30]
 * 00000001C004A2DB: mov     edx, 4
 * 00000001C004A2E0: lea     r9, WPP_865309cb09b9397d2632e54924735df7_Traceguids
 * 00000001C004A2E7: cmovz   rdi, r13
 * 00000001C004A2EB: mov     rcx, rsi
 * 00000001C004A2EE: and     [rsp+68h+var_10], 0
 * 00000001C004A2F4: mov     [rsp+68h+var_18], rbx
 * 00000001C004A2F9: mov     [rsp+68h+var_20], rdi
 * 00000001C004A2FE: mov     [rsp+68h+var_28], 8
 * 00000001C004A307: mov     [rsp+68h+var_30], rax
 * 00000001C004A30C: lea     rax, [rsp+68h+arg_28]
 * 00000001C004A314: mov     [rsp+68h+var_38], 4
 * 00000001C004A31D: mov     [rsp+68h+var_40], rax
 * 00000001C004A322: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001C004A328: lea     r8d, [rdx+6]
 * 00000001C004A32C: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A332: lea     r11, [rsp+68h+var_8]
 * 00000001C004A337: mov     rbx, [r11+10h]
 * 00000001C004A33B: mov     rsi, [r11+18h]
 * 00000001C004A33F: mov     rdi, [r11+20h]
 * 00000001C004A343: mov     rsp, r11
 * 00000001C004A346: pop     r13
 * 00000001C004A348: retn
 */
