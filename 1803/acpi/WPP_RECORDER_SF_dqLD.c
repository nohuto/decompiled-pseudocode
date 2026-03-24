/*
 * XREFs of WPP_RECORDER_SF_dqLD @ 0x1C0038A70
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLD @ 0x1C0038A70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038A70: mov     r11, rsp
 * 00000001C0038A73: mov     [r11+8], rbx
 * 00000001C0038A77: mov     [r11+10h], rbp
 * 00000001C0038A7B: push    rdi
 * 00000001C0038A7C: sub     rsp, 70h
 * 00000001C0038A80: mov     rbx, rcx
 * 00000001C0038A83: mov     edi, 4
 * 00000001C0038A88: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0038A8F: lea     ebp, [rdi+3Bh]
 * 00000001C0038A92: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0038A99: jz      short loc_1C0038AF9
 * 00000001C0038A9B: cmp     [rcx+29h], dil
 * 00000001C0038A9F: jb      short loc_1C0038AF9
 * 00000001C0038AA1: and     qword ptr [r11-18h], 0
 * 00000001C0038AA6: lea     rdx, [r11+48h]
 * 00000001C0038AAA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038AB1: lea     r8, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C0038AB8: mov     rcx, [rcx+18h]
 * 00000001C0038ABC: mov     [r11-20h], rdi
 * 00000001C0038AC0: mov     [r11-28h], rdx
 * 00000001C0038AC4: lea     rdx, [r11+40h]
 * 00000001C0038AC8: mov     [r11-30h], rdi
 * 00000001C0038ACC: mov     [r11-38h], rdx
 * 00000001C0038AD0: lea     rdx, [r11+38h]
 * 00000001C0038AD4: mov     qword ptr [r11-40h], 8
 * 00000001C0038ADC: mov     [r11-48h], rdx
 * 00000001C0038AE0: lea     rdx, [r11+30h]
 * 00000001C0038AE4: mov     [r11-50h], rdi
 * 00000001C0038AE8: mov     [r11-58h], rdx
 * 00000001C0038AEC: lea     edx, [rdi+27h]
 * 00000001C0038AEF: movzx   r9d, bp
 * 00000001C0038AF3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038AF9: and     [rsp+78h+var_10], 0
 * 00000001C0038AFF: lea     rax, [rsp+78h+arg_40]
 * 00000001C0038B07: mov     [rsp+78h+var_18], rdi
 * 00000001C0038B0C: lea     r9, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C0038B13: mov     [rsp+78h+var_20], rax
 * 00000001C0038B18: mov     r8d, 0Eh
 * 00000001C0038B1E: mov     [rsp+78h+var_28], rdi
 * 00000001C0038B23: lea     rax, [rsp+78h+arg_38]
 * 00000001C0038B2B: mov     [rsp+78h+var_30], rax
 * 00000001C0038B30: mov     edx, edi
 * 00000001C0038B32: mov     [rsp+78h+var_38], 8
 * 00000001C0038B3B: lea     rax, [rsp+78h+arg_30]
 * 00000001C0038B43: mov     [rsp+78h+var_40], rax
 * 00000001C0038B48: mov     rcx, rbx
 * 00000001C0038B4B: lea     rax, [rsp+78h+arg_28]
 * 00000001C0038B53: mov     [rsp+78h+var_48], rdi
 * 00000001C0038B58: mov     [rsp+78h+var_50], rax
 * 00000001C0038B5D: mov     [rsp+78h+var_58], bp
 * 00000001C0038B62: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038B68: lea     r11, [rsp+78h+var_8]
 * 00000001C0038B6D: mov     rbx, [r11+10h]
 * 00000001C0038B71: mov     rbp, [r11+18h]
 * 00000001C0038B75: mov     rsp, r11
 * 00000001C0038B78: pop     rdi
 * 00000001C0038B79: retn
 */
