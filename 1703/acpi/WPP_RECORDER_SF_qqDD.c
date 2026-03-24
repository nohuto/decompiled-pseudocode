/*
 * XREFs of WPP_RECORDER_SF_qqDD @ 0x1C0057E50
 * Callers:
 *     ACPITableNotifyFreeObject @ 0x1C0057A80 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDD @ 0x1C0057E50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0057E50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0057E50: mov     r11, rsp
 * 00000001C0057E53: mov     [r11+8], rbx
 * 00000001C0057E57: mov     [r11+10h], rbp
 * 00000001C0057E5B: mov     [r11+18h], rsi
 * 00000001C0057E5F: push    rdi
 * 00000001C0057E60: sub     rsp, 70h
 * 00000001C0057E64: mov     edi, 4
 * 00000001C0057E69: mov     rbx, rcx
 * 00000001C0057E6C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0057E73: lea     ebp, [rdi+8]
 * 00000001C0057E76: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C0057E7D: lea     esi, [rdi+4]
 * 00000001C0057E80: jz      short loc_1C0057EDC
 * 00000001C0057E82: cmp     [rcx+29h], dil
 * 00000001C0057E86: jb      short loc_1C0057EDC
 * 00000001C0057E88: and     qword ptr [r11-18h], 0
 * 00000001C0057E8D: lea     rdx, [r11+48h]
 * 00000001C0057E91: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057E98: lea     r8, WPP_3d3c7ba3e53a35cc0ace36f0a99ad0ee_Traceguids
 * 00000001C0057E9F: mov     rcx, [rcx+18h]
 * 00000001C0057EA3: mov     [r11-20h], rdi
 * 00000001C0057EA7: mov     [r11-28h], rdx
 * 00000001C0057EAB: lea     rdx, [r11+40h]
 * 00000001C0057EAF: mov     [r11-30h], rdi
 * 00000001C0057EB3: mov     [r11-38h], rdx
 * 00000001C0057EB7: lea     rdx, [r11+38h]
 * 00000001C0057EBB: mov     [r11-40h], rsi
 * 00000001C0057EBF: mov     [r11-48h], rdx
 * 00000001C0057EC3: lea     rdx, [r11+30h]
 * 00000001C0057EC7: mov     [r11-50h], rsi
 * 00000001C0057ECB: mov     [r11-58h], rdx
 * 00000001C0057ECF: lea     edx, [rdi+27h]
 * 00000001C0057ED2: movzx   r9d, bp
 * 00000001C0057ED6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0057EDC: and     [rsp+78h+var_10], 0
 * 00000001C0057EE2: lea     rax, [rsp+78h+arg_40]
 * 00000001C0057EEA: mov     [rsp+78h+var_18], rdi
 * 00000001C0057EEF: lea     r9, WPP_3d3c7ba3e53a35cc0ace36f0a99ad0ee_Traceguids
 * 00000001C0057EF6: mov     [rsp+78h+var_20], rax
 * 00000001C0057EFB: mov     r8d, 16h
 * 00000001C0057F01: mov     [rsp+78h+var_28], rdi
 * 00000001C0057F06: lea     rax, [rsp+78h+arg_38]
 * 00000001C0057F0E: mov     [rsp+78h+var_30], rax
 * 00000001C0057F13: mov     edx, edi
 * 00000001C0057F15: mov     [rsp+78h+var_38], rsi
 * 00000001C0057F1A: lea     rax, [rsp+78h+arg_30]
 * 00000001C0057F22: mov     [rsp+78h+var_40], rax
 * 00000001C0057F27: mov     rcx, rbx
 * 00000001C0057F2A: lea     rax, [rsp+78h+arg_28]
 * 00000001C0057F32: mov     [rsp+78h+var_48], rsi
 * 00000001C0057F37: mov     [rsp+78h+var_50], rax
 * 00000001C0057F3C: mov     [rsp+78h+var_58], bp
 * 00000001C0057F41: call    cs:__imp_WppAutoLogTrace
 * 00000001C0057F47: lea     r11, [rsp+78h+var_8]
 * 00000001C0057F4C: mov     rbx, [r11+10h]
 * 00000001C0057F50: mov     rbp, [r11+18h]
 * 00000001C0057F54: mov     rsi, [r11+20h]
 * 00000001C0057F58: mov     rsp, r11
 * 00000001C0057F5B: pop     rdi
 * 00000001C0057F5C: retn
 */
