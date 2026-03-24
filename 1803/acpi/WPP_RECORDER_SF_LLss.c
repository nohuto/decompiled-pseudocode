/*
 * XREFs of WPP_RECORDER_SF_LLss @ 0x1C00092D4
 * Callers:
 *     ACPIAssert @ 0x1C00091B4 (ACPIAssert.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLss @ 0x1C00092D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00092D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00092D4: mov     r11, rsp
 * 00000001C00092D7: mov     [r11+8], rbx
 * 00000001C00092DB: mov     [r11+10h], rbp
 * 00000001C00092DF: mov     [r11+18h], rsi
 * 00000001C00092E3: mov     [r11+20h], rdi
 * 00000001C00092E7: push    r14
 * 00000001C00092E9: sub     rsp, 70h
 * 00000001C00092ED: mov     edi, 5
 * 00000001C00092F2: lea     rbp, aNull_0; "NULL"
 * 00000001C00092F9: mov     rbx, rcx
 * 00000001C00092FC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0009303: lea     r14d, [rdi+7]
 * 00000001C0009307: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C000930E: lea     esi, [rdi-1]
 * 00000001C0009311: jz      short loc_1C0009365
 * 00000001C0009313: cmp     byte ptr [rcx+29h], 2
 * 00000001C0009317: jb      short loc_1C0009365
 * 00000001C0009319: and     qword ptr [r11-18h], 0
 * 00000001C000931E: lea     rdx, [r11+38h]
 * 00000001C0009322: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009329: lea     r8, WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids
 * 00000001C0009330: mov     rcx, [rcx+18h]
 * 00000001C0009334: mov     [r11-20h], rdi
 * 00000001C0009338: mov     [r11-28h], rbp
 * 00000001C000933C: mov     [r11-30h], rdi
 * 00000001C0009340: mov     [r11-38h], rbp
 * 00000001C0009344: mov     [r11-40h], rsi
 * 00000001C0009348: mov     [r11-48h], rdx
 * 00000001C000934C: lea     rdx, [r11+30h]
 * 00000001C0009350: mov     [r11-50h], rsi
 * 00000001C0009354: mov     [r11-58h], rdx
 * 00000001C0009358: lea     edx, [rdi+26h]
 * 00000001C000935B: movzx   r9d, r14w
 * 00000001C000935F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009365: and     [rsp+78h+var_10], 0
 * 00000001C000936B: lea     rax, [rsp+78h+arg_30]
 * 00000001C0009373: mov     [rsp+78h+var_18], rdi
 * 00000001C0009378: lea     r9, WPP_b492effeef0e3b5e3b2de8447e46145d_Traceguids
 * 00000001C000937F: mov     [rsp+78h+var_20], rbp
 * 00000001C0009384: mov     edx, 2
 * 00000001C0009389: mov     [rsp+78h+var_28], rdi
 * 00000001C000938E: mov     rcx, rbx
 * 00000001C0009391: mov     [rsp+78h+var_30], rbp
 * 00000001C0009396: mov     [rsp+78h+var_38], rsi
 * 00000001C000939B: mov     [rsp+78h+var_40], rax
 * 00000001C00093A0: lea     r8d, [rdx+14h]
 * 00000001C00093A4: lea     rax, [rsp+78h+arg_28]
 * 00000001C00093AC: mov     [rsp+78h+var_48], rsi
 * 00000001C00093B1: mov     [rsp+78h+var_50], rax
 * 00000001C00093B6: mov     [rsp+78h+var_58], r14w
 * 00000001C00093BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00093C2: lea     r11, [rsp+78h+var_8]
 * 00000001C00093C7: mov     rbx, [r11+10h]
 * 00000001C00093CB: mov     rbp, [r11+18h]
 * 00000001C00093CF: mov     rsi, [r11+20h]
 * 00000001C00093D3: mov     rdi, [r11+28h]
 * 00000001C00093D7: mov     rsp, r11
 * 00000001C00093DA: pop     r14
 * 00000001C00093DC: retn
 */
