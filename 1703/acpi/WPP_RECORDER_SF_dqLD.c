/*
 * XREFs of WPP_RECORDER_SF_dqLD @ 0x1C00068D8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLD @ 0x1C00068D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00068D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00068D8: mov     [rsp+arg_0], rbx
 * 00000001C00068DD: mov     [rsp+arg_8], rbp
 * 00000001C00068E2: push    rdi
 * 00000001C00068E3: sub     rsp, 70h
 * 00000001C00068E7: mov     rbx, rcx
 * 00000001C00068EA: mov     edi, 4
 * 00000001C00068EF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00068F6: lea     ebp, [rdi+3Bh]
 * 00000001C00068F9: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0006900: jnz     loc_1C002D802
 * 00000001C0006906: and     [rsp+78h+var_10], 0
 * 00000001C000690C: lea     rax, [rsp+78h+arg_40]
 * 00000001C0006914: mov     [rsp+78h+var_18], rdi
 * 00000001C0006919: lea     r9, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C0006920: mov     [rsp+78h+var_20], rax
 * 00000001C0006925: mov     r8d, 0Eh
 * 00000001C000692B: mov     [rsp+78h+var_28], rdi
 * 00000001C0006930: lea     rax, [rsp+78h+arg_38]
 * 00000001C0006938: mov     [rsp+78h+var_30], rax
 * 00000001C000693D: mov     edx, edi
 * 00000001C000693F: mov     [rsp+78h+var_38], 8
 * 00000001C0006948: lea     rax, [rsp+78h+arg_30]
 * 00000001C0006950: mov     [rsp+78h+var_40], rax
 * 00000001C0006955: mov     rcx, rbx
 * 00000001C0006958: lea     rax, [rsp+78h+arg_28]
 * 00000001C0006960: mov     [rsp+78h+var_48], rdi
 * 00000001C0006965: mov     [rsp+78h+var_50], rax
 * 00000001C000696A: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000696F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006975: lea     r11, [rsp+78h+var_8]
 * 00000001C000697A: mov     rbx, [r11+10h]
 * 00000001C000697E: mov     rbp, [r11+18h]
 * 00000001C0006982: mov     rsp, r11
 * 00000001C0006985: pop     rdi
 * 00000001C0006986: retn
 * 00000001C002D802: cmp     [rcx+29h], dil
 * 00000001C002D806: jb      loc_1C0006906
 * 00000001C002D80C: and     [rsp+78h+var_18], 0
 * 00000001C002D812: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002D81A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D821: lea     r8, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C002D828: mov     rcx, [rcx+18h]
 * 00000001C002D82C: mov     [rsp+78h+var_20], rdi
 * 00000001C002D831: mov     [rsp+78h+var_28], rdx
 * 00000001C002D836: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D83E: mov     [rsp+78h+var_30], rdi
 * 00000001C002D843: mov     [rsp+78h+var_38], rdx
 * 00000001C002D848: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D850: mov     [rsp+78h+var_40], 8
 * 00000001C002D859: mov     [rsp+78h+var_48], rdx
 * 00000001C002D85E: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D866: mov     [rsp+78h+var_50], rdi
 * 00000001C002D86B: mov     [rsp+78h+var_58], rdx
 * 00000001C002D870: mov     edx, 2Bh ; '+'
 * 00000001C002D875: movzx   r9d, bp
 * 00000001C002D879: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D87F: nop
 * 00000001C002D880: jmp     loc_1C0006906
 */
