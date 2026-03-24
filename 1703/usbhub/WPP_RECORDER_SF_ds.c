/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004FC9C
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004F430 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004FC9C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004FC9C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004FC9C: mov     rax, rsp
 * 00000001C004FC9F: mov     [rax+8], rbx
 * 00000001C004FCA3: mov     [rax+10h], rsi
 * 00000001C004FCA7: mov     [rax+18h], rdi
 * 00000001C004FCAB: mov     [rax+20h], r12
 * 00000001C004FCAF: push    r13
 * 00000001C004FCB1: sub     rsp, 50h
 * 00000001C004FCB5: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004FCBC: lea     r12, aNull_0; "NULL"
 * 00000001C004FCC3: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004FCCB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004FCCF: mov     rsi, rcx
 * 00000001C004FCD2: mov     eax, [r10+2Ch]
 * 00000001C004FCD6: lea     r13d, [rbx+0Dh]
 * 00000001C004FCDA: test    al, 1
 * 00000001C004FCDC: jz      short loc_1C004FD4A
 * 00000001C004FCDE: test    rdi, rdi
 * 00000001C004FCE1: jz      short loc_1C004FCF4
 * 00000001C004FCE3: mov     rcx, rbx
 * 00000001C004FCE6: inc     rcx
 * 00000001C004FCE9: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004FCED: jnz     short loc_1C004FCE6
 * 00000001C004FCEF: inc     rcx
 * 00000001C004FCF2: jmp     short loc_1C004FCF9
 * 00000001C004FCF4: mov     ecx, 5
 * 00000001C004FCF9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004FD00: lea     r8, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C004FD07: test    rdi, rdi
 * 00000001C004FD0A: movzx   r9d, r13w
 * 00000001C004FD0E: mov     rdx, rdi
 * 00000001C004FD11: cmovz   rdx, r12
 * 00000001C004FD15: and     [rsp+58h+var_18], 0
 * 00000001C004FD1B: mov     [rsp+58h+var_20], rcx
 * 00000001C004FD20: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004FD28: mov     [rsp+58h+var_28], rdx
 * 00000001C004FD2D: mov     edx, 2Bh ; '+'
 * 00000001C004FD32: mov     [rsp+58h+var_30], 4
 * 00000001C004FD3B: mov     [rsp+58h+var_38], rcx
 * 00000001C004FD40: mov     rcx, [r10+18h]
 * 00000001C004FD44: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004FD4A: test    rdi, rdi
 * 00000001C004FD4D: jz      short loc_1C004FD5D
 * 00000001C004FD4F: inc     rbx
 * 00000001C004FD52: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004FD56: jnz     short loc_1C004FD4F
 * 00000001C004FD58: inc     rbx
 * 00000001C004FD5B: jmp     short loc_1C004FD62
 * 00000001C004FD5D: mov     ebx, 5
 * 00000001C004FD62: test    rdi, rdi
 * 00000001C004FD65: lea     rax, [rsp+58h+arg_28]
 * 00000001C004FD6D: lea     r9, WPP_caf772459f30358e042199e29acd7158_Traceguids
 * 00000001C004FD74: mov     rcx, rsi
 * 00000001C004FD77: cmovz   rdi, r12
 * 00000001C004FD7B: and     [rsp+58h+var_10], 0
 * 00000001C004FD81: mov     [rsp+58h+var_18], rbx
 * 00000001C004FD86: xor     edx, edx
 * 00000001C004FD88: mov     [rsp+58h+var_20], rdi
 * 00000001C004FD8D: mov     [rsp+58h+var_28], 4
 * 00000001C004FD96: mov     [rsp+58h+var_30], rax
 * 00000001C004FD9B: lea     r8d, [rdx+1]
 * 00000001C004FD9F: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004FDA5: call    cs:__imp_WppAutoLogTrace
 * 00000001C004FDAB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004FDB0: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004FDB5: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004FDBA: mov     r12, [rsp+58h+arg_18]
 * 00000001C004FDBF: add     rsp, 50h
 * 00000001C004FDC3: pop     r13
 * 00000001C004FDC5: retn
 */
