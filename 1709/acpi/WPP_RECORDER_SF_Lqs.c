/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C0044C40
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0043AB0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x1C0044C40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0044C40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0044C40: mov     rax, rsp
 * 00000001C0044C43: mov     [rax+8], rbx
 * 00000001C0044C47: mov     [rax+10h], rbp
 * 00000001C0044C4B: mov     [rax+18h], rsi
 * 00000001C0044C4F: mov     [rax+20h], rdi
 * 00000001C0044C53: push    r14
 * 00000001C0044C55: sub     rsp, 60h
 * 00000001C0044C59: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0044C60: lea     r8, aNull_0; "NULL"
 * 00000001C0044C67: mov     rdi, [rsp+68h+arg_38]
 * 00000001C0044C6F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0044C73: movzx   ebp, r9w
 * 00000001C0044C77: mov     sil, dl
 * 00000001C0044C7A: mov     r14, rcx
 * 00000001C0044C7D: mov     eax, [r10+2Ch]
 * 00000001C0044C81: test    al, 1
 * 00000001C0044C83: jz      loc_1C0044D1C
 * 00000001C0044C89: cmp     [r10+29h], dl
 * 00000001C0044C8D: jb      loc_1C0044D1C
 * 00000001C0044C93: test    rdi, rdi
 * 00000001C0044C96: jz      short loc_1C0044CA9
 * 00000001C0044C98: mov     rcx, rbx
 * 00000001C0044C9B: inc     rcx
 * 00000001C0044C9E: cmp     byte ptr [rdi+rcx], 0
 * 00000001C0044CA2: jnz     short loc_1C0044C9B
 * 00000001C0044CA4: inc     rcx
 * 00000001C0044CA7: jmp     short loc_1C0044CAE
 * 00000001C0044CA9: mov     ecx, 5
 * 00000001C0044CAE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0044CB5: test    rdi, rdi
 * 00000001C0044CB8: mov     rdx, rdi
 * 00000001C0044CBB: movzx   r9d, bp
 * 00000001C0044CBF: cmovz   rdx, r8
 * 00000001C0044CC3: and     [rsp+68h+var_18], 0
 * 00000001C0044CC9: mov     [rsp+68h+var_20], rcx
 * 00000001C0044CCE: lea     r8, WPP_cc96da84b6703e4a1deab6145401189a_Traceguids
 * 00000001C0044CD5: mov     [rsp+68h+var_28], rdx
 * 00000001C0044CDA: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0044CE2: mov     [rsp+68h+var_30], 8
 * 00000001C0044CEB: mov     edx, 2Bh ; '+'
 * 00000001C0044CF0: mov     [rsp+68h+var_38], rcx
 * 00000001C0044CF5: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0044CFD: mov     [rsp+68h+var_40], 4
 * 00000001C0044D06: mov     [rsp+68h+var_48], rcx
 * 00000001C0044D0B: mov     rcx, [r10+18h]
 * 00000001C0044D0F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0044D15: lea     r8, aNull_0; "NULL"
 * 00000001C0044D1C: test    rdi, rdi
 * 00000001C0044D1F: jz      short loc_1C0044D2F
 * 00000001C0044D21: inc     rbx
 * 00000001C0044D24: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0044D28: jnz     short loc_1C0044D21
 * 00000001C0044D2A: inc     rbx
 * 00000001C0044D2D: jmp     short loc_1C0044D34
 * 00000001C0044D2F: mov     ebx, 5
 * 00000001C0044D34: test    rdi, rdi
 * 00000001C0044D37: movzx   edx, sil
 * 00000001C0044D3B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0044D43: mov     rcx, r14
 * 00000001C0044D46: cmovz   rdi, r8
 * 00000001C0044D4A: lea     r9, WPP_cc96da84b6703e4a1deab6145401189a_Traceguids
 * 00000001C0044D51: and     [rsp+68h+var_10], 0
 * 00000001C0044D57: mov     r8d, 1
 * 00000001C0044D5D: mov     [rsp+68h+var_18], rbx
 * 00000001C0044D62: mov     [rsp+68h+var_20], rdi
 * 00000001C0044D67: mov     [rsp+68h+var_28], 8
 * 00000001C0044D70: mov     [rsp+68h+var_30], rax
 * 00000001C0044D75: lea     rax, [rsp+68h+arg_28]
 * 00000001C0044D7D: mov     [rsp+68h+var_38], 4
 * 00000001C0044D86: mov     [rsp+68h+var_40], rax
 * 00000001C0044D8B: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0044D90: call    cs:__imp_WppAutoLogTrace
 * 00000001C0044D96: lea     r11, [rsp+68h+var_8]
 * 00000001C0044D9B: mov     rbx, [r11+10h]
 * 00000001C0044D9F: mov     rbp, [r11+18h]
 * 00000001C0044DA3: mov     rsi, [r11+20h]
 * 00000001C0044DA7: mov     rdi, [r11+28h]
 * 00000001C0044DAB: mov     rsp, r11
 * 00000001C0044DAE: pop     r14
 * 00000001C0044DB0: retn
 */
