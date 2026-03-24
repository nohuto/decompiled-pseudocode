/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C0038160
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C0038160
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038160
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038160: mov     r11, rsp
 * 00000001C0038163: mov     [r11+8], rbx
 * 00000001C0038167: mov     [r11+10h], rsi
 * 00000001C003816B: push    rdi
 * 00000001C003816C: sub     rsp, 50h
 * 00000001C0038170: mov     rbx, rcx
 * 00000001C0038173: mov     esi, 21h ; '!'
 * 00000001C0038178: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003817F: lea     edi, [rsi-1Dh]
 * 00000001C0038182: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0038189: jz      short loc_1C00381CD
 * 00000001C003818B: cmp     byte ptr [rcx+29h], 2
 * 00000001C003818F: jb      short loc_1C00381CD
 * 00000001C0038191: and     qword ptr [r11-18h], 0
 * 00000001C0038196: lea     rdx, [r11+38h]
 * 00000001C003819A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00381A1: lea     r8, WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids
 * 00000001C00381A8: mov     rcx, [rcx+18h]
 * 00000001C00381AC: mov     [r11-20h], rdi
 * 00000001C00381B0: mov     [r11-28h], rdx
 * 00000001C00381B4: lea     rdx, [r11+30h]
 * 00000001C00381B8: mov     [r11-30h], rdi
 * 00000001C00381BC: mov     [r11-38h], rdx
 * 00000001C00381C0: lea     edx, [rsi+0Ah]
 * 00000001C00381C3: movzx   r9d, si
 * 00000001C00381C7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00381CD: and     [rsp+58h+var_10], 0
 * 00000001C00381D3: lea     rax, [rsp+58h+arg_30]
 * 00000001C00381DB: mov     [rsp+58h+var_18], rdi
 * 00000001C00381E0: lea     r9, WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids
 * 00000001C00381E7: mov     [rsp+58h+var_20], rax
 * 00000001C00381EC: mov     edx, 2
 * 00000001C00381F1: lea     rax, [rsp+58h+arg_28]
 * 00000001C00381F9: mov     [rsp+58h+var_28], rdi
 * 00000001C00381FE: mov     [rsp+58h+var_30], rax
 * 00000001C0038203: mov     rcx, rbx
 * 00000001C0038206: mov     [rsp+58h+var_38], si
 * 00000001C003820B: lea     r8d, [rdx+9]
 * 00000001C003820F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038215: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003821A: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003821F: add     rsp, 50h
 * 00000001C0038223: pop     rdi
 * 00000001C0038224: retn
 */
