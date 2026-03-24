/*
 * XREFs of WPP_RECORDER_SF_ddx @ 0x1C00379DC
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0037284 (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddx @ 0x1C00379DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00379DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00379DC: mov     r11, rsp
 * 00000001C00379DF: mov     [r11+8], rbx
 * 00000001C00379E3: mov     [r11+10h], rbp
 * 00000001C00379E7: push    rdi
 * 00000001C00379E8: sub     rsp, 60h
 * 00000001C00379EC: mov     rbx, rcx
 * 00000001C00379EF: mov     ebp, 0Ah
 * 00000001C00379F4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00379FB: lea     edi, [rbp-6]
 * 00000001C00379FE: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C0037A05: jz      short loc_1C0037A59
 * 00000001C0037A07: cmp     byte ptr [rcx+29h], 2
 * 00000001C0037A0B: jb      short loc_1C0037A59
 * 00000001C0037A0D: and     qword ptr [r11-18h], 0
 * 00000001C0037A12: lea     rdx, [r11+40h]
 * 00000001C0037A16: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037A1D: lea     r8, WPP_188439d352933c43d81bb97719738185_Traceguids
 * 00000001C0037A24: mov     rcx, [rcx+18h]
 * 00000001C0037A28: mov     qword ptr [r11-20h], 8
 * 00000001C0037A30: mov     [r11-28h], rdx
 * 00000001C0037A34: lea     rdx, [r11+38h]
 * 00000001C0037A38: mov     [r11-30h], rdi
 * 00000001C0037A3C: mov     [r11-38h], rdx
 * 00000001C0037A40: lea     rdx, [r11+30h]
 * 00000001C0037A44: mov     [r11-40h], rdi
 * 00000001C0037A48: mov     [r11-48h], rdx
 * 00000001C0037A4C: lea     edx, [rbp+21h]
 * 00000001C0037A4F: movzx   r9d, bp
 * 00000001C0037A53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037A59: and     [rsp+68h+var_10], 0
 * 00000001C0037A5F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0037A67: mov     [rsp+68h+var_18], 8
 * 00000001C0037A70: lea     r9, WPP_188439d352933c43d81bb97719738185_Traceguids
 * 00000001C0037A77: mov     [rsp+68h+var_20], rax
 * 00000001C0037A7C: mov     edx, 2
 * 00000001C0037A81: mov     [rsp+68h+var_28], rdi
 * 00000001C0037A86: lea     rax, [rsp+68h+arg_30]
 * 00000001C0037A8E: mov     [rsp+68h+var_30], rax
 * 00000001C0037A93: mov     rcx, rbx
 * 00000001C0037A96: lea     rax, [rsp+68h+arg_28]
 * 00000001C0037A9E: mov     [rsp+68h+var_38], rdi
 * 00000001C0037AA3: mov     [rsp+68h+var_40], rax
 * 00000001C0037AA8: lea     r8d, [rdx+0Bh]
 * 00000001C0037AAC: mov     [rsp+68h+var_48], bp
 * 00000001C0037AB1: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037AB7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0037ABC: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0037AC1: add     rsp, 60h
 * 00000001C0037AC5: pop     rdi
 * 00000001C0037AC6: retn
 */
