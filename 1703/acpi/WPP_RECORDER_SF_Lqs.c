/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C004527C
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C00440F0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x1C004527C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004527C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004527C: mov     rax, rsp
 * 00000001C004527F: mov     [rax+8], rbx
 * 00000001C0045283: mov     [rax+10h], rbp
 * 00000001C0045287: mov     [rax+18h], rsi
 * 00000001C004528B: mov     [rax+20h], rdi
 * 00000001C004528F: push    r14
 * 00000001C0045291: sub     rsp, 60h
 * 00000001C0045295: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004529C: lea     r8, aNull_0; "NULL"
 * 00000001C00452A3: mov     rdi, [rsp+68h+arg_38]
 * 00000001C00452AB: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00452AF: movzx   ebp, r9w
 * 00000001C00452B3: mov     sil, dl
 * 00000001C00452B6: mov     r14, rcx
 * 00000001C00452B9: mov     eax, [r10+2Ch]
 * 00000001C00452BD: test    al, 1
 * 00000001C00452BF: jz      loc_1C0045358
 * 00000001C00452C5: cmp     [r10+29h], dl
 * 00000001C00452C9: jb      loc_1C0045358
 * 00000001C00452CF: test    rdi, rdi
 * 00000001C00452D2: jz      short loc_1C00452E5
 * 00000001C00452D4: mov     rcx, rbx
 * 00000001C00452D7: inc     rcx
 * 00000001C00452DA: cmp     byte ptr [rdi+rcx], 0
 * 00000001C00452DE: jnz     short loc_1C00452D7
 * 00000001C00452E0: inc     rcx
 * 00000001C00452E3: jmp     short loc_1C00452EA
 * 00000001C00452E5: mov     ecx, 5
 * 00000001C00452EA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00452F1: test    rdi, rdi
 * 00000001C00452F4: mov     rdx, rdi
 * 00000001C00452F7: movzx   r9d, bp
 * 00000001C00452FB: cmovz   rdx, r8
 * 00000001C00452FF: and     [rsp+68h+var_18], 0
 * 00000001C0045305: mov     [rsp+68h+var_20], rcx
 * 00000001C004530A: lea     r8, WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids
 * 00000001C0045311: mov     [rsp+68h+var_28], rdx
 * 00000001C0045316: lea     rcx, [rsp+68h+arg_30]
 * 00000001C004531E: mov     [rsp+68h+var_30], 8
 * 00000001C0045327: mov     edx, 2Bh ; '+'
 * 00000001C004532C: mov     [rsp+68h+var_38], rcx
 * 00000001C0045331: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0045339: mov     [rsp+68h+var_40], 4
 * 00000001C0045342: mov     [rsp+68h+var_48], rcx
 * 00000001C0045347: mov     rcx, [r10+18h]
 * 00000001C004534B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045351: lea     r8, aNull_0; "NULL"
 * 00000001C0045358: test    rdi, rdi
 * 00000001C004535B: jz      short loc_1C004536B
 * 00000001C004535D: inc     rbx
 * 00000001C0045360: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0045364: jnz     short loc_1C004535D
 * 00000001C0045366: inc     rbx
 * 00000001C0045369: jmp     short loc_1C0045370
 * 00000001C004536B: mov     ebx, 5
 * 00000001C0045370: test    rdi, rdi
 * 00000001C0045373: movzx   edx, sil
 * 00000001C0045377: lea     rax, [rsp+68h+arg_30]
 * 00000001C004537F: mov     rcx, r14
 * 00000001C0045382: cmovz   rdi, r8
 * 00000001C0045386: lea     r9, WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids
 * 00000001C004538D: and     [rsp+68h+var_10], 0
 * 00000001C0045393: mov     r8d, 1
 * 00000001C0045399: mov     [rsp+68h+var_18], rbx
 * 00000001C004539E: mov     [rsp+68h+var_20], rdi
 * 00000001C00453A3: mov     [rsp+68h+var_28], 8
 * 00000001C00453AC: mov     [rsp+68h+var_30], rax
 * 00000001C00453B1: lea     rax, [rsp+68h+arg_28]
 * 00000001C00453B9: mov     [rsp+68h+var_38], 4
 * 00000001C00453C2: mov     [rsp+68h+var_40], rax
 * 00000001C00453C7: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00453CC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00453D2: lea     r11, [rsp+68h+var_8]
 * 00000001C00453D7: mov     rbx, [r11+10h]
 * 00000001C00453DB: mov     rbp, [r11+18h]
 * 00000001C00453DF: mov     rsi, [r11+20h]
 * 00000001C00453E3: mov     rdi, [r11+28h]
 * 00000001C00453E7: mov     rsp, r11
 * 00000001C00453EA: pop     r14
 * 00000001C00453EC: retn
 */
