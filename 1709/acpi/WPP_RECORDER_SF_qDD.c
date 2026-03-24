/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C005530C
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0054174 (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x1C005530C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005530C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005530C: mov     r11, rsp
 * 00000001C005530F: mov     [r11+8], rbx
 * 00000001C0055313: mov     [r11+10h], rbp
 * 00000001C0055317: push    rdi
 * 00000001C0055318: sub     rsp, 60h
 * 00000001C005531C: mov     rbx, rcx
 * 00000001C005531F: mov     ebp, 1Dh
 * 00000001C0055324: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005532B: lea     edi, [rbp-19h]
 * 00000001C005532E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0055335: jz      short loc_1C0055389
 * 00000001C0055337: cmp     byte ptr [rcx+29h], 2
 * 00000001C005533B: jb      short loc_1C0055389
 * 00000001C005533D: and     qword ptr [r11-18h], 0
 * 00000001C0055342: lea     rdx, [r11+40h]
 * 00000001C0055346: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005534D: lea     r8, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C0055354: mov     rcx, [rcx+18h]
 * 00000001C0055358: mov     [r11-20h], rdi
 * 00000001C005535C: mov     [r11-28h], rdx
 * 00000001C0055360: lea     rdx, [r11+38h]
 * 00000001C0055364: mov     [r11-30h], rdi
 * 00000001C0055368: mov     [r11-38h], rdx
 * 00000001C005536C: lea     rdx, [r11+30h]
 * 00000001C0055370: mov     qword ptr [r11-40h], 8
 * 00000001C0055378: mov     [r11-48h], rdx
 * 00000001C005537C: lea     edx, [rbp+0Eh]
 * 00000001C005537F: movzx   r9d, bp
 * 00000001C0055383: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0055389: and     [rsp+68h+var_10], 0
 * 00000001C005538F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0055397: mov     [rsp+68h+var_18], rdi
 * 00000001C005539C: lea     r9, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C00553A3: mov     [rsp+68h+var_20], rax
 * 00000001C00553A8: mov     edx, 2
 * 00000001C00553AD: mov     [rsp+68h+var_28], rdi
 * 00000001C00553B2: lea     rax, [rsp+68h+arg_30]
 * 00000001C00553BA: mov     [rsp+68h+var_30], rax
 * 00000001C00553BF: mov     rcx, rbx
 * 00000001C00553C2: lea     rax, [rsp+68h+arg_28]
 * 00000001C00553CA: mov     [rsp+68h+var_38], 8
 * 00000001C00553D3: mov     [rsp+68h+var_40], rax
 * 00000001C00553D8: lea     r8d, [rdx+13h]
 * 00000001C00553DC: mov     [rsp+68h+var_48], bp
 * 00000001C00553E1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00553E7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00553EC: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00553F1: add     rsp, 60h
 * 00000001C00553F5: pop     rdi
 * 00000001C00553F6: retn
 */
