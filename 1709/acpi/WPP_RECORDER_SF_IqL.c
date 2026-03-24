/*
 * XREFs of WPP_RECORDER_SF_IqL @ 0x1C00226CC
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C0092280 (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqL @ 0x1C00226CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00226CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00226CC: mov     [rsp+arg_0], rbx
 * 00000001C00226D1: mov     [rsp+arg_8], rbp
 * 00000001C00226D6: push    rsi
 * 00000001C00226D7: sub     rsp, 60h
 * 00000001C00226DB: mov     rbx, rcx
 * 00000001C00226DE: mov     ebp, 0Ah
 * 00000001C00226E3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00226EA: lea     esi, [rbp-2]
 * 00000001C00226ED: mov     eax, [rcx+2Ch]
 * 00000001C00226F0: test    al, 20h
 * 00000001C00226F2: jnz     loc_1C003B0FA
 * 00000001C00226F8: and     [rsp+68h+var_10], 0
 * 00000001C00226FE: lea     rax, [rsp+68h+arg_38]
 * 00000001C0022706: mov     [rsp+68h+var_18], 4
 * 00000001C002270F: lea     r9, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C0022716: mov     [rsp+68h+var_20], rax
 * 00000001C002271B: mov     edx, 4
 * 00000001C0022720: mov     [rsp+68h+var_28], rsi
 * 00000001C0022725: lea     rax, [rsp+68h+arg_30]
 * 00000001C002272D: mov     [rsp+68h+var_30], rax
 * 00000001C0022732: mov     rcx, rbx
 * 00000001C0022735: lea     rax, [rsp+68h+arg_28]
 * 00000001C002273D: mov     [rsp+68h+var_38], rsi
 * 00000001C0022742: mov     [rsp+68h+var_40], rax
 * 00000001C0022747: lea     r8d, [rdx+2]
 * 00000001C002274B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0022750: call    cs:__imp_WppAutoLogTrace
 * 00000001C0022756: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002275B: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0022760: add     rsp, 60h
 * 00000001C0022764: pop     rsi
 * 00000001C0022765: retn
 * 00000001C003B0FA: cmp     byte ptr [rcx+29h], 4
 * 00000001C003B0FE: jb      loc_1C00226F8
 * 00000001C003B104: and     [rsp+68h+var_18], 0
 * 00000001C003B10A: lea     rdx, [rsp+68h+arg_38]
 * 00000001C003B112: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B119: lea     r8, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C003B120: mov     rcx, [rcx+18h]
 * 00000001C003B124: mov     [rsp+68h+var_20], 4
 * 00000001C003B12D: mov     [rsp+68h+var_28], rdx
 * 00000001C003B132: lea     rdx, [rsp+68h+arg_30]
 * 00000001C003B13A: mov     [rsp+68h+var_30], rsi
 * 00000001C003B13F: mov     [rsp+68h+var_38], rdx
 * 00000001C003B144: lea     rdx, [rsp+68h+arg_28]
 * 00000001C003B14C: mov     [rsp+68h+var_40], rsi
 * 00000001C003B151: mov     [rsp+68h+var_48], rdx
 * 00000001C003B156: mov     edx, 2Bh ; '+'
 * 00000001C003B15B: movzx   r9d, bp
 * 00000001C003B15F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B165: nop
 * 00000001C003B166: jmp     loc_1C00226F8
 */
