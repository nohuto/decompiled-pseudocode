/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C00326F8
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ss @ 0x1C00326F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00326F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00326F8: mov     rax, rsp
 * 00000001C00326FB: mov     [rax+8], rbx
 * 00000001C00326FF: mov     [rax+10h], rbp
 * 00000001C0032703: mov     [rax+18h], rsi
 * 00000001C0032707: mov     [rax+20h], rdi
 * 00000001C003270B: push    r12
 * 00000001C003270D: push    r13
 * 00000001C003270F: push    r15
 * 00000001C0032711: sub     rsp, 50h
 * 00000001C0032715: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003271C: lea     r12, aNull_0; "NULL"
 * 00000001C0032723: mov     rdi, [rsp+68h+arg_30]
 * 00000001C003272B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C003272F: mov     rsi, [rsp+68h+arg_28]
 * 00000001C0032737: mov     rbp, rcx
 * 00000001C003273A: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C0032741: lea     r15d, [rbx+6]
 * 00000001C0032745: lea     r13d, [rbx+0Ch]
 * 00000001C0032749: jz      loc_1C00327E2
 * 00000001C003274F: cmp     byte ptr [rdx+29h], 2
 * 00000001C0032753: jb      loc_1C00327E2
 * 00000001C0032759: test    rdi, rdi
 * 00000001C003275C: jz      short loc_1C003276F
 * 00000001C003275E: mov     rdx, rbx
 * 00000001C0032761: inc     rdx
 * 00000001C0032764: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0032768: jnz     short loc_1C0032761
 * 00000001C003276A: inc     rdx
 * 00000001C003276D: jmp     short loc_1C0032772
 * 00000001C003276F: mov     rdx, r15
 * 00000001C0032772: test    rdi, rdi
 * 00000001C0032775: mov     r9, rdi
 * 00000001C0032778: cmovz   r9, r12
 * 00000001C003277C: test    rsi, rsi
 * 00000001C003277F: jz      short loc_1C0032793
 * 00000001C0032781: mov     r8, rbx
 * 00000001C0032784: inc     r8
 * 00000001C0032787: cmp     byte ptr [rsi+r8], 0
 * 00000001C003278C: jnz     short loc_1C0032784
 * 00000001C003278E: inc     r8
 * 00000001C0032791: jmp     short loc_1C0032796
 * 00000001C0032793: mov     r8, r15
 * 00000001C0032796: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003279D: test    rsi, rsi
 * 00000001C00327A0: mov     rcx, rsi
 * 00000001C00327A3: cmovz   rcx, r12
 * 00000001C00327A7: and     [rsp+68h+var_28], 0
 * 00000001C00327AD: mov     [rsp+68h+var_30], rdx
 * 00000001C00327B2: mov     edx, 2Bh ; '+'
 * 00000001C00327B7: mov     [rsp+68h+var_38], r9
 * 00000001C00327BC: mov     [rsp+68h+var_40], r8
 * 00000001C00327C1: lea     r8, WPP_81d8e93eb8cd366f72cf11447b36d96d_Traceguids
 * 00000001C00327C8: mov     [rsp+68h+var_48], rcx
 * 00000001C00327CD: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00327D4: movzx   r9d, r13w
 * 00000001C00327D8: mov     rcx, [rcx+18h]
 * 00000001C00327DC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00327E2: test    rdi, rdi
 * 00000001C00327E5: jz      short loc_1C00327F8
 * 00000001C00327E7: mov     rax, rbx
 * 00000001C00327EA: inc     rax
 * 00000001C00327ED: cmp     byte ptr [rdi+rax], 0
 * 00000001C00327F1: jnz     short loc_1C00327EA
 * 00000001C00327F3: inc     rax
 * 00000001C00327F6: jmp     short loc_1C00327FB
 * 00000001C00327F8: mov     rax, r15
 * 00000001C00327FB: test    rdi, rdi
 * 00000001C00327FE: cmovz   rdi, r12
 * 00000001C0032802: test    rsi, rsi
 * 00000001C0032805: jz      short loc_1C0032815
 * 00000001C0032807: inc     rbx
 * 00000001C003280A: cmp     byte ptr [rsi+rbx], 0
 * 00000001C003280E: jnz     short loc_1C0032807
 * 00000001C0032810: inc     rbx
 * 00000001C0032813: jmp     short loc_1C0032818
 * 00000001C0032815: mov     rbx, r15
 * 00000001C0032818: test    rsi, rsi
 * 00000001C003281B: lea     r9, WPP_81d8e93eb8cd366f72cf11447b36d96d_Traceguids
 * 00000001C0032822: mov     edx, 2
 * 00000001C0032827: mov     rcx, rbp
 * 00000001C003282A: cmovz   rsi, r12
 * 00000001C003282E: and     [rsp+68h+var_20], 0
 * 00000001C0032834: mov     [rsp+68h+var_28], rax
 * 00000001C0032839: mov     [rsp+68h+var_30], rdi
 * 00000001C003283E: mov     [rsp+68h+var_38], rbx
 * 00000001C0032843: lea     r8d, [rdx+13h]
 * 00000001C0032847: mov     [rsp+68h+var_40], rsi
 * 00000001C003284C: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C0032852: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032858: lea     r11, [rsp+68h+var_18]
 * 00000001C003285D: mov     rbx, [r11+20h]
 * 00000001C0032861: mov     rbp, [r11+28h]
 * 00000001C0032865: mov     rsi, [r11+30h]
 * 00000001C0032869: mov     rdi, [r11+38h]
 * 00000001C003286D: mov     rsp, r11
 * 00000001C0032870: pop     r15
 * 00000001C0032872: pop     r13
 * 00000001C0032874: pop     r12
 * 00000001C0032876: retn
 */
