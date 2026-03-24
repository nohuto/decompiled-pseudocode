/*
 * XREFs of WPP_RECORDER_SF_dDDq @ 0x1C0057E40
 * Callers:
 *     IrqTranslateResources @ 0x1C008D7D0 (IrqTranslateResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDDq @ 0x1C0057E40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0057E40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0057E40: mov     r11, rsp
 * 00000001C0057E43: mov     [r11+8], rbx
 * 00000001C0057E47: mov     [r11+10h], rbp
 * 00000001C0057E4B: push    rdi
 * 00000001C0057E4C: sub     rsp, 70h
 * 00000001C0057E50: mov     rbx, rcx
 * 00000001C0057E53: mov     edi, 4
 * 00000001C0057E58: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0057E5F: lea     ebp, [rdi+6]
 * 00000001C0057E62: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0057E69: jz      short loc_1C0057EC9
 * 00000001C0057E6B: cmp     [rcx+29h], dil
 * 00000001C0057E6F: jb      short loc_1C0057EC9
 * 00000001C0057E71: and     qword ptr [r11-18h], 0
 * 00000001C0057E76: lea     rdx, [r11+48h]
 * 00000001C0057E7A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057E81: lea     r8, WPP_e16e804db2123b580ce0f031ea6ad7e3_Traceguids
 * 00000001C0057E88: mov     rcx, [rcx+18h]
 * 00000001C0057E8C: mov     qword ptr [r11-20h], 8
 * 00000001C0057E94: mov     [r11-28h], rdx
 * 00000001C0057E98: lea     rdx, [r11+40h]
 * 00000001C0057E9C: mov     [r11-30h], rdi
 * 00000001C0057EA0: mov     [r11-38h], rdx
 * 00000001C0057EA4: lea     rdx, [r11+38h]
 * 00000001C0057EA8: mov     [r11-40h], rdi
 * 00000001C0057EAC: mov     [r11-48h], rdx
 * 00000001C0057EB0: lea     rdx, [r11+30h]
 * 00000001C0057EB4: mov     [r11-50h], rdi
 * 00000001C0057EB8: mov     [r11-58h], rdx
 * 00000001C0057EBC: lea     edx, [rdi+27h]
 * 00000001C0057EBF: movzx   r9d, bp
 * 00000001C0057EC3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0057EC9: and     [rsp+78h+var_10], 0
 * 00000001C0057ECF: lea     rax, [rsp+78h+arg_40]
 * 00000001C0057ED7: mov     [rsp+78h+var_18], 8
 * 00000001C0057EE0: lea     r9, WPP_e16e804db2123b580ce0f031ea6ad7e3_Traceguids
 * 00000001C0057EE7: mov     [rsp+78h+var_20], rax
 * 00000001C0057EEC: mov     r8d, 14h
 * 00000001C0057EF2: mov     [rsp+78h+var_28], rdi
 * 00000001C0057EF7: lea     rax, [rsp+78h+arg_38]
 * 00000001C0057EFF: mov     [rsp+78h+var_30], rax
 * 00000001C0057F04: mov     edx, edi
 * 00000001C0057F06: mov     [rsp+78h+var_38], rdi
 * 00000001C0057F0B: lea     rax, [rsp+78h+arg_30]
 * 00000001C0057F13: mov     [rsp+78h+var_40], rax
 * 00000001C0057F18: mov     rcx, rbx
 * 00000001C0057F1B: lea     rax, [rsp+78h+arg_28]
 * 00000001C0057F23: mov     [rsp+78h+var_48], rdi
 * 00000001C0057F28: mov     [rsp+78h+var_50], rax
 * 00000001C0057F2D: mov     [rsp+78h+var_58], bp
 * 00000001C0057F32: call    cs:__imp_WppAutoLogTrace
 * 00000001C0057F38: lea     r11, [rsp+78h+var_8]
 * 00000001C0057F3D: mov     rbx, [r11+10h]
 * 00000001C0057F41: mov     rbp, [r11+18h]
 * 00000001C0057F45: mov     rsp, r11
 * 00000001C0057F48: pop     rdi
 * 00000001C0057F49: retn
 */
