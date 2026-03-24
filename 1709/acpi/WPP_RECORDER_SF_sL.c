/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C005789C
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1C00ADED8 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1C005789C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005789C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005789C: mov     [rsp+arg_0], rbx
 * 00000001C00578A1: mov     [rsp+arg_8], rbp
 * 00000001C00578A6: mov     [rsp+arg_10], rsi
 * 00000001C00578AB: push    rdi
 * 00000001C00578AC: push    r12
 * 00000001C00578AE: push    r13
 * 00000001C00578B0: sub     rsp, 50h
 * 00000001C00578B4: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00578BB: lea     r12, aNull; "NULL"
 * 00000001C00578C2: mov     rdi, [rsp+68h+arg_28]
 * 00000001C00578CA: xor     ebp, ebp
 * 00000001C00578CC: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00578D0: mov     rsi, rcx
 * 00000001C00578D3: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C00578DA: lea     r13d, [rbp+11h]
 * 00000001C00578DE: jz      short loc_1C005795B
 * 00000001C00578E0: cmp     byte ptr [rdx+29h], 2
 * 00000001C00578E4: jb      short loc_1C005795B
 * 00000001C00578E6: test    rdi, rdi
 * 00000001C00578E9: jz      short loc_1C00578FC
 * 00000001C00578EB: mov     rdx, rbx
 * 00000001C00578EE: inc     rdx
 * 00000001C00578F1: cmp     [rdi+rdx*2], bp
 * 00000001C00578F5: jnz     short loc_1C00578EE
 * 00000001C00578F7: inc     rdx
 * 00000001C00578FA: jmp     short loc_1C0057901
 * 00000001C00578FC: mov     edx, 5
 * 00000001C0057901: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057908: lea     r8, [rsp+68h+arg_30]
 * 00000001C0057910: add     rdx, rdx
 * 00000001C0057913: mov     [rsp+68h+var_28], rbp
 * 00000001C0057918: mov     [rsp+68h+var_30], 4
 * 00000001C0057921: test    rdi, rdi
 * 00000001C0057924: mov     [rsp+68h+var_38], r8
 * 00000001C0057929: mov     rcx, rdi
 * 00000001C005792C: cmovz   rcx, r12
 * 00000001C0057930: mov     [rsp+68h+var_40], rdx
 * 00000001C0057935: mov     [rsp+68h+var_48], rcx
 * 00000001C005793A: lea     r8, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0057941: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0057948: mov     edx, 2Bh ; '+'
 * 00000001C005794D: movzx   r9d, r13w
 * 00000001C0057951: mov     rcx, [rcx+18h]
 * 00000001C0057955: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005795B: test    rdi, rdi
 * 00000001C005795E: jz      short loc_1C005796E
 * 00000001C0057960: inc     rbx
 * 00000001C0057963: cmp     [rdi+rbx*2], bp
 * 00000001C0057967: jnz     short loc_1C0057960
 * 00000001C0057969: inc     rbx
 * 00000001C005796C: jmp     short loc_1C0057973
 * 00000001C005796E: mov     ebx, 5
 * 00000001C0057973: mov     [rsp+68h+var_20], rbp
 * 00000001C0057978: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0057980: mov     [rsp+68h+var_28], 4
 * 00000001C0057989: lea     rax, [rbx+rbx]
 * 00000001C005798D: mov     [rsp+68h+var_30], rcx
 * 00000001C0057992: lea     r9, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0057999: mov     [rsp+68h+var_38], rax
 * 00000001C005799E: test    rdi, rdi
 * 00000001C00579A1: mov     edx, 2
 * 00000001C00579A6: mov     rcx, rsi
 * 00000001C00579A9: cmovz   rdi, r12
 * 00000001C00579AD: mov     [rsp+68h+var_40], rdi
 * 00000001C00579B2: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C00579B8: lea     r8d, [rdx+14h]
 * 00000001C00579BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00579C2: lea     r11, [rsp+68h+var_18]
 * 00000001C00579C7: mov     rbx, [r11+20h]
 * 00000001C00579CB: mov     rbp, [r11+28h]
 * 00000001C00579CF: mov     rsi, [r11+30h]
 * 00000001C00579D3: mov     rsp, r11
 * 00000001C00579D6: pop     r13
 * 00000001C00579D8: pop     r12
 * 00000001C00579DA: pop     rdi
 * 00000001C00579DB: retn
 */
