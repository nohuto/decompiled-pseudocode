/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C0058970
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C0090240 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dq @ 0x1C0058970
 * Reason: Hex-Rays returned no pseudocode for 0x1C0058970
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0058970: mov     r11, rsp
 * 00000001C0058973: mov     [r11+8], rbx
 * 00000001C0058977: push    rdi
 * 00000001C0058978: sub     rsp, 50h
 * 00000001C005897C: mov     rdi, rcx
 * 00000001C005897F: movzx   ebx, r9w
 * 00000001C0058983: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005898A: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0058991: jz      short loc_1C00589DF
 * 00000001C0058993: cmp     byte ptr [rcx+29h], 4
 * 00000001C0058997: jb      short loc_1C00589DF
 * 00000001C0058999: and     qword ptr [r11-18h], 0
 * 00000001C005899E: lea     rdx, [r11+38h]
 * 00000001C00589A2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00589A9: lea     r8, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C00589B0: mov     rcx, [rcx+18h]
 * 00000001C00589B4: mov     qword ptr [r11-20h], 8
 * 00000001C00589BC: mov     [r11-28h], rdx
 * 00000001C00589C0: lea     rdx, [r11+30h]
 * 00000001C00589C4: mov     qword ptr [r11-30h], 4
 * 00000001C00589CC: mov     [r11-38h], rdx
 * 00000001C00589D0: mov     edx, 2Bh ; '+'
 * 00000001C00589D5: movzx   r9d, bx
 * 00000001C00589D9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00589DF: and     [rsp+58h+var_10], 0
 * 00000001C00589E5: lea     rax, [rsp+58h+arg_30]
 * 00000001C00589ED: mov     [rsp+58h+var_18], 8
 * 00000001C00589F6: lea     r9, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C00589FD: mov     [rsp+58h+var_20], rax
 * 00000001C0058A02: mov     edx, 4
 * 00000001C0058A07: lea     rax, [rsp+58h+arg_28]
 * 00000001C0058A0F: mov     [rsp+58h+var_28], 4
 * 00000001C0058A18: mov     [rsp+58h+var_30], rax
 * 00000001C0058A1D: mov     rcx, rdi
 * 00000001C0058A20: mov     [rsp+58h+var_38], bx
 * 00000001C0058A25: lea     r8d, [rdx+10h]
 * 00000001C0058A29: call    cs:__imp_WppAutoLogTrace
 * 00000001C0058A2F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0058A34: add     rsp, 50h
 * 00000001C0058A38: pop     rdi
 * 00000001C0058A39: retn
 */
