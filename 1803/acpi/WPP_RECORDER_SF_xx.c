/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C0058A40
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0090750 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xx @ 0x1C0058A40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0058A40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0058A40: mov     r11, rsp
 * 00000001C0058A43: mov     [r11+8], rbx
 * 00000001C0058A47: mov     [r11+10h], rsi
 * 00000001C0058A4B: push    rdi
 * 00000001C0058A4C: sub     rsp, 50h
 * 00000001C0058A50: mov     rbx, rcx
 * 00000001C0058A53: mov     esi, 0Ch
 * 00000001C0058A58: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0058A5F: lea     edi, [rsi-4]
 * 00000001C0058A62: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0058A69: jz      short loc_1C0058AAD
 * 00000001C0058A6B: cmp     byte ptr [rcx+29h], 4
 * 00000001C0058A6F: jb      short loc_1C0058AAD
 * 00000001C0058A71: and     qword ptr [r11-18h], 0
 * 00000001C0058A76: lea     rdx, [r11+38h]
 * 00000001C0058A7A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0058A81: lea     r8, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C0058A88: mov     rcx, [rcx+18h]
 * 00000001C0058A8C: mov     [r11-20h], rdi
 * 00000001C0058A90: mov     [r11-28h], rdx
 * 00000001C0058A94: lea     rdx, [r11+30h]
 * 00000001C0058A98: mov     [r11-30h], rdi
 * 00000001C0058A9C: mov     [r11-38h], rdx
 * 00000001C0058AA0: lea     edx, [rsi+1Fh]
 * 00000001C0058AA3: movzx   r9d, si
 * 00000001C0058AA7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0058AAD: and     [rsp+58h+var_10], 0
 * 00000001C0058AB3: lea     rax, [rsp+58h+arg_30]
 * 00000001C0058ABB: mov     [rsp+58h+var_18], rdi
 * 00000001C0058AC0: lea     r9, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C0058AC7: mov     [rsp+58h+var_20], rax
 * 00000001C0058ACC: mov     edx, 4
 * 00000001C0058AD1: lea     rax, [rsp+58h+arg_28]
 * 00000001C0058AD9: mov     [rsp+58h+var_28], rdi
 * 00000001C0058ADE: mov     [rsp+58h+var_30], rax
 * 00000001C0058AE3: mov     rcx, rbx
 * 00000001C0058AE6: mov     [rsp+58h+var_38], si
 * 00000001C0058AEB: lea     r8d, [rdx+10h]
 * 00000001C0058AEF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0058AF5: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0058AFA: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0058AFF: add     rsp, 50h
 * 00000001C0058B03: pop     rdi
 * 00000001C0058B04: retn
 */
