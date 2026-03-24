/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C005A9F4
 * Callers:
 *     ACPIWorkerThread @ 0x1C0024FC0 (ACPIWorkerThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C005A9F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C005A9F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005A9F4: mov     r11, rsp
 * 00000001C005A9F7: mov     [r11+8], rbx
 * 00000001C005A9FB: mov     [r11+10h], rbp
 * 00000001C005A9FF: push    rdi
 * 00000001C005AA00: sub     rsp, 70h
 * 00000001C005AA04: mov     rbx, rcx
 * 00000001C005AA07: mov     ebp, 0Ah
 * 00000001C005AA0C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005AA13: lea     edi, [rbp-2]
 * 00000001C005AA16: mov     eax, [rcx+2Ch]
 * 00000001C005AA19: test    al, 1
 * 00000001C005AA1B: jz      short loc_1C005AA7B
 * 00000001C005AA1D: cmp     byte ptr [rcx+29h], 2
 * 00000001C005AA21: jb      short loc_1C005AA7B
 * 00000001C005AA23: and     qword ptr [r11-18h], 0
 * 00000001C005AA28: lea     rdx, [r11+48h]
 * 00000001C005AA2C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005AA33: lea     r8, WPP_127d606e75223d5961bf193541b35584_Traceguids
 * 00000001C005AA3A: mov     rcx, [rcx+18h]
 * 00000001C005AA3E: mov     [r11-20h], rdi
 * 00000001C005AA42: mov     [r11-28h], rdx
 * 00000001C005AA46: lea     rdx, [r11+40h]
 * 00000001C005AA4A: mov     [r11-30h], rdi
 * 00000001C005AA4E: mov     [r11-38h], rdx
 * 00000001C005AA52: lea     rdx, [r11+38h]
 * 00000001C005AA56: mov     [r11-40h], rdi
 * 00000001C005AA5A: mov     [r11-48h], rdx
 * 00000001C005AA5E: lea     rdx, [r11+30h]
 * 00000001C005AA62: mov     qword ptr [r11-50h], 4
 * 00000001C005AA6A: mov     [r11-58h], rdx
 * 00000001C005AA6E: lea     edx, [rbp+21h]
 * 00000001C005AA71: movzx   r9d, bp
 * 00000001C005AA75: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005AA7B: and     [rsp+78h+var_10], 0
 * 00000001C005AA81: lea     rax, [rsp+78h+arg_40]
 * 00000001C005AA89: mov     [rsp+78h+var_18], rdi
 * 00000001C005AA8E: lea     r9, WPP_127d606e75223d5961bf193541b35584_Traceguids
 * 00000001C005AA95: mov     [rsp+78h+var_20], rax
 * 00000001C005AA9A: mov     edx, 2
 * 00000001C005AA9F: mov     [rsp+78h+var_28], rdi
 * 00000001C005AAA4: lea     rax, [rsp+78h+arg_38]
 * 00000001C005AAAC: mov     [rsp+78h+var_30], rax
 * 00000001C005AAB1: mov     rcx, rbx
 * 00000001C005AAB4: mov     [rsp+78h+var_38], rdi
 * 00000001C005AAB9: lea     rax, [rsp+78h+arg_30]
 * 00000001C005AAC1: mov     [rsp+78h+var_40], rax
 * 00000001C005AAC6: lea     r8d, [rdx-1]
 * 00000001C005AACA: lea     rax, [rsp+78h+arg_28]
 * 00000001C005AAD2: mov     [rsp+78h+var_48], 4
 * 00000001C005AADB: mov     [rsp+78h+var_50], rax
 * 00000001C005AAE0: mov     [rsp+78h+var_58], bp
 * 00000001C005AAE5: call    cs:__imp_WppAutoLogTrace
 * 00000001C005AAEB: lea     r11, [rsp+78h+var_8]
 * 00000001C005AAF0: mov     rbx, [r11+10h]
 * 00000001C005AAF4: mov     rbp, [r11+18h]
 * 00000001C005AAF8: mov     rsp, r11
 * 00000001C005AAFB: pop     rdi
 * 00000001C005AAFC: retn
 */
