/*
 * XREFs of WPP_RECORDER_SF_xxxd @ 0x1C0054BE0
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00A0B5C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xxxd @ 0x1C0054BE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0054BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0054BE0: mov     r11, rsp
 * 00000001C0054BE3: mov     [r11+8], rbx
 * 00000001C0054BE7: mov     [r11+10h], rsi
 * 00000001C0054BEB: push    rdi
 * 00000001C0054BEC: sub     rsp, 70h
 * 00000001C0054BF0: mov     rdi, rcx
 * 00000001C0054BF3: movzx   ebx, r9w
 * 00000001C0054BF7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0054BFE: mov     esi, 8
 * 00000001C0054C03: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054C0A: jz      short loc_1C0054C6A
 * 00000001C0054C0C: cmp     byte ptr [rcx+29h], 2
 * 00000001C0054C10: jb      short loc_1C0054C6A
 * 00000001C0054C12: and     qword ptr [r11-18h], 0
 * 00000001C0054C17: lea     rdx, [r11+48h]
 * 00000001C0054C1B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054C22: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054C29: mov     rcx, [rcx+18h]
 * 00000001C0054C2D: mov     qword ptr [r11-20h], 4
 * 00000001C0054C35: mov     [r11-28h], rdx
 * 00000001C0054C39: lea     rdx, [r11+40h]
 * 00000001C0054C3D: mov     [r11-30h], rsi
 * 00000001C0054C41: mov     [r11-38h], rdx
 * 00000001C0054C45: lea     rdx, [r11+38h]
 * 00000001C0054C49: mov     [r11-40h], rsi
 * 00000001C0054C4D: mov     [r11-48h], rdx
 * 00000001C0054C51: lea     rdx, [r11+30h]
 * 00000001C0054C55: mov     [r11-50h], rsi
 * 00000001C0054C59: mov     [r11-58h], rdx
 * 00000001C0054C5D: lea     edx, [rsi+23h]
 * 00000001C0054C60: movzx   r9d, bx
 * 00000001C0054C64: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054C6A: and     [rsp+78h+var_10], 0
 * 00000001C0054C70: lea     rax, [rsp+78h+arg_40]
 * 00000001C0054C78: mov     [rsp+78h+var_18], 4
 * 00000001C0054C81: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054C88: mov     [rsp+78h+var_20], rax
 * 00000001C0054C8D: mov     edx, 2
 * 00000001C0054C92: mov     [rsp+78h+var_28], rsi
 * 00000001C0054C97: lea     rax, [rsp+78h+arg_38]
 * 00000001C0054C9F: mov     [rsp+78h+var_30], rax
 * 00000001C0054CA4: mov     rcx, rdi
 * 00000001C0054CA7: mov     [rsp+78h+var_38], rsi
 * 00000001C0054CAC: lea     rax, [rsp+78h+arg_30]
 * 00000001C0054CB4: mov     [rsp+78h+var_40], rax
 * 00000001C0054CB9: lea     r8d, [rdx+13h]
 * 00000001C0054CBD: lea     rax, [rsp+78h+arg_28]
 * 00000001C0054CC5: mov     [rsp+78h+var_48], rsi
 * 00000001C0054CCA: mov     [rsp+78h+var_50], rax
 * 00000001C0054CCF: mov     [rsp+78h+var_58], bx
 * 00000001C0054CD4: call    cs:__imp_WppAutoLogTrace
 * 00000001C0054CDA: lea     r11, [rsp+78h+var_8]
 * 00000001C0054CDF: mov     rbx, [r11+10h]
 * 00000001C0054CE3: mov     rsi, [r11+18h]
 * 00000001C0054CE7: mov     rsp, r11
 * 00000001C0054CEA: pop     rdi
 * 00000001C0054CEB: retn
 */
