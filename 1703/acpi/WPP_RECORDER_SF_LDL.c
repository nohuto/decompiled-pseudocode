/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x1C0051F78
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x1C0051F78
 * Reason: Hex-Rays returned no pseudocode for 0x1C0051F78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0051F78: mov     r11, rsp
 * 00000001C0051F7B: mov     [r11+8], rbx
 * 00000001C0051F7F: mov     [r11+10h], rsi
 * 00000001C0051F83: push    rdi
 * 00000001C0051F84: sub     rsp, 60h
 * 00000001C0051F88: mov     rbx, rcx
 * 00000001C0051F8B: mov     edi, 4
 * 00000001C0051F90: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0051F97: lea     esi, [rdi+1Bh]
 * 00000001C0051F9A: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C0051FA1: jz      short loc_1C0051FF1
 * 00000001C0051FA3: cmp     [rcx+29h], dil
 * 00000001C0051FA7: jb      short loc_1C0051FF1
 * 00000001C0051FA9: and     qword ptr [r11-18h], 0
 * 00000001C0051FAE: lea     rdx, [r11+40h]
 * 00000001C0051FB2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0051FB9: lea     r8, WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids
 * 00000001C0051FC0: mov     rcx, [rcx+18h]
 * 00000001C0051FC4: mov     [r11-20h], rdi
 * 00000001C0051FC8: mov     [r11-28h], rdx
 * 00000001C0051FCC: lea     rdx, [r11+38h]
 * 00000001C0051FD0: mov     [r11-30h], rdi
 * 00000001C0051FD4: mov     [r11-38h], rdx
 * 00000001C0051FD8: lea     rdx, [r11+30h]
 * 00000001C0051FDC: mov     [r11-40h], rdi
 * 00000001C0051FE0: mov     [r11-48h], rdx
 * 00000001C0051FE4: lea     edx, [rdi+27h]
 * 00000001C0051FE7: movzx   r9d, si
 * 00000001C0051FEB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0051FF1: and     [rsp+68h+var_10], 0
 * 00000001C0051FF7: lea     rax, [rsp+68h+arg_38]
 * 00000001C0051FFF: mov     [rsp+68h+var_18], rdi
 * 00000001C0052004: lea     r9, WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids
 * 00000001C005200B: mov     [rsp+68h+var_20], rax
 * 00000001C0052010: mov     r8d, 11h
 * 00000001C0052016: mov     [rsp+68h+var_28], rdi
 * 00000001C005201B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0052023: mov     [rsp+68h+var_30], rax
 * 00000001C0052028: mov     edx, edi
 * 00000001C005202A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0052032: mov     [rsp+68h+var_38], rdi
 * 00000001C0052037: mov     [rsp+68h+var_40], rax
 * 00000001C005203C: mov     rcx, rbx
 * 00000001C005203F: mov     [rsp+68h+var_48], si
 * 00000001C0052044: call    cs:__imp_WppAutoLogTrace
 * 00000001C005204A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C005204F: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0052054: add     rsp, 60h
 * 00000001C0052058: pop     rdi
 * 00000001C0052059: retn
 */
