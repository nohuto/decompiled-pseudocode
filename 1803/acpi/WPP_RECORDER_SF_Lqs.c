/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C00128DC
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C000EE40 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x1C00128DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00128DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00128DC: mov     rax, rsp
 * 00000001C00128DF: mov     [rax+8], rbx
 * 00000001C00128E3: mov     [rax+10h], rbp
 * 00000001C00128E7: mov     [rax+18h], rsi
 * 00000001C00128EB: mov     [rax+20h], rdi
 * 00000001C00128EF: push    r14
 * 00000001C00128F1: sub     rsp, 60h
 * 00000001C00128F5: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00128FC: lea     r8, aNull_0; "NULL"
 * 00000001C0012903: mov     rdi, [rsp+68h+arg_38]
 * 00000001C001290B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001290F: movzx   ebp, r9w
 * 00000001C0012913: mov     sil, dl
 * 00000001C0012916: mov     r14, rcx
 * 00000001C0012919: mov     eax, [r10+2Ch]
 * 00000001C001291D: test    al, 1
 * 00000001C001291F: jz      loc_1C00129B8
 * 00000001C0012925: cmp     [r10+29h], dl
 * 00000001C0012929: jb      loc_1C00129B8
 * 00000001C001292F: test    rdi, rdi
 * 00000001C0012932: jz      short loc_1C0012945
 * 00000001C0012934: mov     rcx, rbx
 * 00000001C0012937: inc     rcx
 * 00000001C001293A: cmp     byte ptr [rdi+rcx], 0
 * 00000001C001293E: jnz     short loc_1C0012937
 * 00000001C0012940: inc     rcx
 * 00000001C0012943: jmp     short loc_1C001294A
 * 00000001C0012945: mov     ecx, 5
 * 00000001C001294A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0012951: test    rdi, rdi
 * 00000001C0012954: mov     rdx, rdi
 * 00000001C0012957: movzx   r9d, bp
 * 00000001C001295B: cmovz   rdx, r8
 * 00000001C001295F: and     [rsp+68h+var_18], 0
 * 00000001C0012965: mov     [rsp+68h+var_20], rcx
 * 00000001C001296A: lea     r8, WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids
 * 00000001C0012971: mov     [rsp+68h+var_28], rdx
 * 00000001C0012976: lea     rcx, [rsp+68h+arg_30]
 * 00000001C001297E: mov     [rsp+68h+var_30], 8
 * 00000001C0012987: mov     edx, 2Bh ; '+'
 * 00000001C001298C: mov     [rsp+68h+var_38], rcx
 * 00000001C0012991: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0012999: mov     [rsp+68h+var_40], 4
 * 00000001C00129A2: mov     [rsp+68h+var_48], rcx
 * 00000001C00129A7: mov     rcx, [r10+18h]
 * 00000001C00129AB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00129B1: lea     r8, aNull_0; "NULL"
 * 00000001C00129B8: test    rdi, rdi
 * 00000001C00129BB: jz      short loc_1C00129CB
 * 00000001C00129BD: inc     rbx
 * 00000001C00129C0: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00129C4: jnz     short loc_1C00129BD
 * 00000001C00129C6: inc     rbx
 * 00000001C00129C9: jmp     short loc_1C00129D0
 * 00000001C00129CB: mov     ebx, 5
 * 00000001C00129D0: test    rdi, rdi
 * 00000001C00129D3: movzx   edx, sil
 * 00000001C00129D7: lea     rax, [rsp+68h+arg_30]
 * 00000001C00129DF: mov     rcx, r14
 * 00000001C00129E2: cmovz   rdi, r8
 * 00000001C00129E6: lea     r9, WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids
 * 00000001C00129ED: and     [rsp+68h+var_10], 0
 * 00000001C00129F3: mov     r8d, 1
 * 00000001C00129F9: mov     [rsp+68h+var_18], rbx
 * 00000001C00129FE: mov     [rsp+68h+var_20], rdi
 * 00000001C0012A03: mov     [rsp+68h+var_28], 8
 * 00000001C0012A0C: mov     [rsp+68h+var_30], rax
 * 00000001C0012A11: lea     rax, [rsp+68h+arg_28]
 * 00000001C0012A19: mov     [rsp+68h+var_38], 4
 * 00000001C0012A22: mov     [rsp+68h+var_40], rax
 * 00000001C0012A27: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0012A2C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012A32: lea     r11, [rsp+68h+var_8]
 * 00000001C0012A37: mov     rbx, [r11+10h]
 * 00000001C0012A3B: mov     rbp, [r11+18h]
 * 00000001C0012A3F: mov     rsi, [r11+20h]
 * 00000001C0012A43: mov     rdi, [r11+28h]
 * 00000001C0012A47: mov     rsp, r11
 * 00000001C0012A4A: pop     r14
 * 00000001C0012A4C: retn
 */
