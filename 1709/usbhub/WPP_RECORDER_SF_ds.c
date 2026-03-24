/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C005096C
 * Callers:
 *     UsbhExceptionTrace @ 0x1C0050120 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C005096C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005096C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005096C: mov     rax, rsp
 * 00000001C005096F: mov     [rax+8], rbx
 * 00000001C0050973: mov     [rax+10h], rsi
 * 00000001C0050977: mov     [rax+18h], rdi
 * 00000001C005097B: mov     [rax+20h], r12
 * 00000001C005097F: push    r13
 * 00000001C0050981: sub     rsp, 50h
 * 00000001C0050985: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C005098C: lea     r12, aNull_0; "NULL"
 * 00000001C0050993: mov     rdi, [rsp+58h+arg_30]
 * 00000001C005099B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C005099F: mov     rsi, rcx
 * 00000001C00509A2: mov     edx, [rax+2Ch]
 * 00000001C00509A5: lea     r13d, [rbx+0Dh]
 * 00000001C00509A9: test    dl, 1
 * 00000001C00509AC: jz      short loc_1C0050A21
 * 00000001C00509AE: test    rdi, rdi
 * 00000001C00509B1: jz      short loc_1C00509C4
 * 00000001C00509B3: mov     rdx, rbx
 * 00000001C00509B6: inc     rdx
 * 00000001C00509B9: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00509BD: jnz     short loc_1C00509B6
 * 00000001C00509BF: inc     rdx
 * 00000001C00509C2: jmp     short loc_1C00509C9
 * 00000001C00509C4: mov     edx, 5
 * 00000001C00509C9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00509D0: lea     r8, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C00509D7: test    rdi, rdi
 * 00000001C00509DA: movzx   r9d, r13w
 * 00000001C00509DE: mov     rcx, rdi
 * 00000001C00509E1: cmovz   rcx, r12
 * 00000001C00509E5: and     [rsp+58h+var_18], 0
 * 00000001C00509EB: mov     [rsp+58h+var_20], rdx
 * 00000001C00509F0: mov     edx, 2Bh ; '+'
 * 00000001C00509F5: mov     [rsp+58h+var_28], rcx
 * 00000001C00509FA: lea     rcx, [rsp+58h+arg_28]
 * 00000001C0050A02: mov     [rsp+58h+var_30], 4
 * 00000001C0050A0B: mov     [rsp+58h+var_38], rcx
 * 00000001C0050A10: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0050A17: mov     rcx, [rcx+18h]
 * 00000001C0050A1B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0050A21: test    rdi, rdi
 * 00000001C0050A24: jz      short loc_1C0050A34
 * 00000001C0050A26: inc     rbx
 * 00000001C0050A29: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0050A2D: jnz     short loc_1C0050A26
 * 00000001C0050A2F: inc     rbx
 * 00000001C0050A32: jmp     short loc_1C0050A39
 * 00000001C0050A34: mov     ebx, 5
 * 00000001C0050A39: test    rdi, rdi
 * 00000001C0050A3C: lea     rax, [rsp+58h+arg_28]
 * 00000001C0050A44: lea     r9, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C0050A4B: mov     rcx, rsi
 * 00000001C0050A4E: cmovz   rdi, r12
 * 00000001C0050A52: and     [rsp+58h+var_10], 0
 * 00000001C0050A58: mov     [rsp+58h+var_18], rbx
 * 00000001C0050A5D: xor     edx, edx
 * 00000001C0050A5F: mov     [rsp+58h+var_20], rdi
 * 00000001C0050A64: mov     [rsp+58h+var_28], 4
 * 00000001C0050A6D: mov     [rsp+58h+var_30], rax
 * 00000001C0050A72: lea     r8d, [rdx+1]
 * 00000001C0050A76: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0050A7C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0050A82: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0050A87: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0050A8C: mov     rdi, [rsp+58h+arg_10]
 * 00000001C0050A91: mov     r12, [rsp+58h+arg_18]
 * 00000001C0050A96: add     rsp, 50h
 * 00000001C0050A9A: pop     r13
 * 00000001C0050A9C: retn
 */
