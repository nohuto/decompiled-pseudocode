/*
 * XREFs of WPP_RECORDER_SF_LLss @ 0x1C0042EA0
 * Callers:
 *     ACPIAssert @ 0x1C001E788 (ACPIAssert.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLss @ 0x1C0042EA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042EA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042EA0: mov     r11, rsp
 * 00000001C0042EA3: mov     [r11+8], rbx
 * 00000001C0042EA7: mov     [r11+10h], rbp
 * 00000001C0042EAB: mov     [r11+18h], rsi
 * 00000001C0042EAF: mov     [r11+20h], rdi
 * 00000001C0042EB3: push    r14
 * 00000001C0042EB5: sub     rsp, 70h
 * 00000001C0042EB9: mov     edi, 5
 * 00000001C0042EBE: lea     rbp, aNull_0; "NULL"
 * 00000001C0042EC5: mov     rbx, rcx
 * 00000001C0042EC8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0042ECF: lea     r14d, [rdi+7]
 * 00000001C0042ED3: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0042EDA: lea     esi, [rdi-1]
 * 00000001C0042EDD: jz      short loc_1C0042F31
 * 00000001C0042EDF: cmp     byte ptr [rcx+29h], 2
 * 00000001C0042EE3: jb      short loc_1C0042F31
 * 00000001C0042EE5: and     qword ptr [r11-18h], 0
 * 00000001C0042EEA: lea     rdx, [r11+38h]
 * 00000001C0042EEE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0042EF5: lea     r8, WPP_c80272519e3733f97df856420040881d_Traceguids
 * 00000001C0042EFC: mov     rcx, [rcx+18h]
 * 00000001C0042F00: mov     [r11-20h], rdi
 * 00000001C0042F04: mov     [r11-28h], rbp
 * 00000001C0042F08: mov     [r11-30h], rdi
 * 00000001C0042F0C: mov     [r11-38h], rbp
 * 00000001C0042F10: mov     [r11-40h], rsi
 * 00000001C0042F14: mov     [r11-48h], rdx
 * 00000001C0042F18: lea     rdx, [r11+30h]
 * 00000001C0042F1C: mov     [r11-50h], rsi
 * 00000001C0042F20: mov     [r11-58h], rdx
 * 00000001C0042F24: lea     edx, [rdi+26h]
 * 00000001C0042F27: movzx   r9d, r14w
 * 00000001C0042F2B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042F31: and     [rsp+78h+var_10], 0
 * 00000001C0042F37: lea     rax, [rsp+78h+arg_30]
 * 00000001C0042F3F: mov     [rsp+78h+var_18], rdi
 * 00000001C0042F44: lea     r9, WPP_c80272519e3733f97df856420040881d_Traceguids
 * 00000001C0042F4B: mov     [rsp+78h+var_20], rbp
 * 00000001C0042F50: mov     edx, 2
 * 00000001C0042F55: mov     [rsp+78h+var_28], rdi
 * 00000001C0042F5A: mov     rcx, rbx
 * 00000001C0042F5D: mov     [rsp+78h+var_30], rbp
 * 00000001C0042F62: mov     [rsp+78h+var_38], rsi
 * 00000001C0042F67: mov     [rsp+78h+var_40], rax
 * 00000001C0042F6C: lea     r8d, [rdx+14h]
 * 00000001C0042F70: lea     rax, [rsp+78h+arg_28]
 * 00000001C0042F78: mov     [rsp+78h+var_48], rsi
 * 00000001C0042F7D: mov     [rsp+78h+var_50], rax
 * 00000001C0042F82: mov     [rsp+78h+var_58], r14w
 * 00000001C0042F88: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042F8E: lea     r11, [rsp+78h+var_8]
 * 00000001C0042F93: mov     rbx, [r11+10h]
 * 00000001C0042F97: mov     rbp, [r11+18h]
 * 00000001C0042F9B: mov     rsi, [r11+20h]
 * 00000001C0042F9F: mov     rdi, [r11+28h]
 * 00000001C0042FA3: mov     rsp, r11
 * 00000001C0042FA6: pop     r14
 * 00000001C0042FA8: retn
 */
