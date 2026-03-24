/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C0007C78
 * Callers:
 *     PnpiGrowResourceList @ 0x1C008CD98 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C008CF64 (PnpiGrowResourceDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x1C0007C78
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007C78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007C78: mov     [rsp+arg_0], rbx
 * 00000001C0007C7D: mov     [rsp+arg_8], rbp
 * 00000001C0007C82: mov     [rsp+arg_10], rsi
 * 00000001C0007C87: push    rdi
 * 00000001C0007C88: sub     rsp, 60h
 * 00000001C0007C8C: mov     rsi, rcx
 * 00000001C0007C8F: movzx   edi, r9w
 * 00000001C0007C93: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0007C9A: mov     bl, dl
 * 00000001C0007C9C: mov     ebp, 4
 * 00000001C0007CA1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0007CA8: jnz     loc_1C002EAA8
 * 00000001C0007CAE: and     [rsp+68h+var_10], 0
 * 00000001C0007CB4: lea     rax, [rsp+68h+arg_38]
 * 00000001C0007CBC: mov     [rsp+68h+var_18], rbp
 * 00000001C0007CC1: lea     r9, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C0007CC8: mov     [rsp+68h+var_20], rax
 * 00000001C0007CCD: mov     r8d, 0Eh
 * 00000001C0007CD3: mov     [rsp+68h+var_28], rbp
 * 00000001C0007CD8: lea     rax, [rsp+68h+arg_30]
 * 00000001C0007CE0: mov     [rsp+68h+var_30], rax
 * 00000001C0007CE5: mov     rcx, rsi
 * 00000001C0007CE8: lea     rax, [rsp+68h+arg_28]
 * 00000001C0007CF0: mov     [rsp+68h+var_38], rbp
 * 00000001C0007CF5: mov     [rsp+68h+var_40], rax
 * 00000001C0007CFA: movzx   edx, bl
 * 00000001C0007CFD: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0007D02: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007D08: lea     r11, [rsp+68h+var_8]
 * 00000001C0007D0D: mov     rbx, [r11+10h]
 * 00000001C0007D11: mov     rbp, [r11+18h]
 * 00000001C0007D15: mov     rsi, [r11+20h]
 * 00000001C0007D19: mov     rsp, r11
 * 00000001C0007D1C: pop     rdi
 * 00000001C0007D1D: retn
 * 00000001C002EAA8: cmp     [rcx+29h], bl
 * 00000001C002EAAB: jb      loc_1C0007CAE
 * 00000001C002EAB1: and     [rsp+68h+var_18], 0
 * 00000001C002EAB7: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002EABF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EAC6: lea     r8, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C002EACD: mov     rcx, [rcx+18h]
 * 00000001C002EAD1: mov     [rsp+68h+var_20], rbp
 * 00000001C002EAD6: mov     [rsp+68h+var_28], rdx
 * 00000001C002EADB: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EAE3: mov     [rsp+68h+var_30], rbp
 * 00000001C002EAE8: mov     [rsp+68h+var_38], rdx
 * 00000001C002EAED: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EAF5: mov     [rsp+68h+var_40], rbp
 * 00000001C002EAFA: mov     [rsp+68h+var_48], rdx
 * 00000001C002EAFF: mov     edx, 2Bh ; '+'
 * 00000001C002EB04: movzx   r9d, di
 * 00000001C002EB08: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EB0E: nop
 * 00000001C002EB0F: jmp     loc_1C0007CAE
 */
