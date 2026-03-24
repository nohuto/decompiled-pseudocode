/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002390
 * Callers:
 *     KbdConfiguration @ 0x1C000F4E0 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0002390
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002390
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002390: mov     [rsp+arg_0], rbx
 * 00000001C0002395: push    rdi
 * 00000001C0002396: sub     rsp, 40h
 * 00000001C000239A: mov     rdi, rcx
 * 00000001C000239D: movzx   ebx, r9w
 * 00000001C00023A1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00023A8: mov     eax, [rcx+2Ch]
 * 00000001C00023AB: test    al, 1
 * 00000001C00023AD: jnz     loc_1C0003CA8
 * 00000001C00023B3: mov     [rsp+48h+var_10], 0
 * 00000001C00023BC: lea     rax, [rsp+48h+arg_28]
 * 00000001C00023C1: mov     edx, 4
 * 00000001C00023C6: mov     [rsp+48h+var_18], 4
 * 00000001C00023CF: mov     [rsp+48h+var_20], rax
 * 00000001C00023D4: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00023DB: mov     rcx, rdi
 * 00000001C00023DE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C00023E3: lea     r8d, [rdx-3]
 * 00000001C00023E7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00023ED: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00023F2: add     rsp, 40h
 * 00000001C00023F6: pop     rdi
 * 00000001C00023F7: retn
 * 00000001C0003CA8: cmp     byte ptr [rcx+29h], 4
 * 00000001C0003CAC: jb      loc_1C00023B3
 * 00000001C0003CB2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003CB9: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0003CBE: mov     rcx, [rcx+18h]
 * 00000001C0003CC2: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0003CC9: mov     [rsp+48h+var_18], 0
 * 00000001C0003CD2: mov     [rsp+48h+var_20], 4
 * 00000001C0003CDB: mov     [rsp+48h+var_28], rdx
 * 00000001C0003CE0: mov     edx, 2Bh ; '+'
 * 00000001C0003CE5: movzx   r9d, bx
 * 00000001C0003CE9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003CEF: nop
 * 00000001C0003CF0: jmp     loc_1C00023B3
 */
