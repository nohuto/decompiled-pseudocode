/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C001D220
 * Callers:
 *     LogError @ 0x1C001D178 (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1C001D220
 * Reason: Hex-Rays returned no pseudocode for 0x1C001D220
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001D220: mov     rax, rsp
 * 00000001C001D223: mov     [rax+8], rbx
 * 00000001C001D227: mov     [rax+10h], rsi
 * 00000001C001D22B: mov     [rax+18h], rdi
 * 00000001C001D22F: mov     [rax+20h], r12
 * 00000001C001D233: push    r13
 * 00000001C001D235: sub     rsp, 50h
 * 00000001C001D239: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001D240: lea     r12, aNull_0; "NULL"
 * 00000001C001D247: mov     rdi, [rsp+58h+arg_30]
 * 00000001C001D24F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001D253: mov     rsi, rcx
 * 00000001C001D256: test    dword ptr [r10+2Ch], 100000h
 * 00000001C001D25E: lea     r13d, [rbx+0Bh]
 * 00000001C001D262: jnz     loc_1C0038BBE
 * 00000001C001D268: test    rdi, rdi
 * 00000001C001D26B: jz      loc_1C0038C3B
 * 00000001C001D271: inc     rbx
 * 00000001C001D274: cmp     byte ptr [rdi+rbx], 0
 * 00000001C001D278: jnz     short loc_1C001D271
 * 00000001C001D27A: inc     rbx
 * 00000001C001D27D: test    rdi, rdi
 * 00000001C001D280: lea     rax, [rsp+58h+arg_28]
 * 00000001C001D288: mov     edx, 2
 * 00000001C001D28D: lea     r9, WPP_d3ed3b0dc6a63daeb2b8b7e6f0fb5f7f_Traceguids
 * 00000001C001D294: cmovz   rdi, r12
 * 00000001C001D298: mov     rcx, rsi
 * 00000001C001D29B: and     [rsp+58h+var_10], 0
 * 00000001C001D2A1: mov     [rsp+58h+var_18], rbx
 * 00000001C001D2A6: mov     [rsp+58h+var_20], rdi
 * 00000001C001D2AB: lea     r8d, [rdx+13h]
 * 00000001C001D2AF: mov     [rsp+58h+var_28], 4
 * 00000001C001D2B8: mov     [rsp+58h+var_30], rax
 * 00000001C001D2BD: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C001D2C3: call    cs:__imp_WppAutoLogTrace
 * 00000001C001D2C9: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001D2CE: mov     rsi, [rsp+58h+arg_8]
 * 00000001C001D2D3: mov     rdi, [rsp+58h+arg_10]
 * 00000001C001D2D8: mov     r12, [rsp+58h+arg_18]
 * 00000001C001D2DD: add     rsp, 50h
 * 00000001C001D2E1: pop     r13
 * 00000001C001D2E3: retn
 * 00000001C0038BBE: cmp     byte ptr [r10+29h], 2
 * 00000001C0038BC3: jb      loc_1C001D268
 * 00000001C0038BC9: test    rdi, rdi
 * 00000001C0038BCC: jz      short loc_1C0038BDF
 * 00000001C0038BCE: mov     rcx, rbx
 * 00000001C0038BD1: inc     rcx
 * 00000001C0038BD4: cmp     byte ptr [rdi+rcx], 0
 * 00000001C0038BD8: jnz     short loc_1C0038BD1
 * 00000001C0038BDA: inc     rcx
 * 00000001C0038BDD: jmp     short loc_1C0038BE4
 * 00000001C0038BDF: mov     ecx, 5
 * 00000001C0038BE4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038BEB: lea     r8, WPP_d3ed3b0dc6a63daeb2b8b7e6f0fb5f7f_Traceguids
 * 00000001C0038BF2: test    rdi, rdi
 * 00000001C0038BF5: movzx   r9d, r13w
 * 00000001C0038BF9: mov     rdx, rdi
 * 00000001C0038BFC: cmovz   rdx, r12
 * 00000001C0038C00: and     [rsp+58h+var_18], 0
 * 00000001C0038C06: mov     [rsp+58h+var_20], rcx
 * 00000001C0038C0B: lea     rcx, [rsp+58h+arg_28]
 * 00000001C0038C13: mov     [rsp+58h+var_28], rdx
 * 00000001C0038C18: mov     edx, 2Bh ; '+'
 * 00000001C0038C1D: mov     [rsp+58h+var_30], 4
 * 00000001C0038C26: mov     [rsp+58h+var_38], rcx
 * 00000001C0038C2B: mov     rcx, [r10+18h]
 * 00000001C0038C2F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038C35: nop
 * 00000001C0038C36: jmp     loc_1C001D268
 * 00000001C0038C3B: mov     ebx, 5
 * 00000001C0038C40: jmp     loc_1C001D27D
 */
