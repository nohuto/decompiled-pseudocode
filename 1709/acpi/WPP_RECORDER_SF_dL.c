/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C0011D5C
 * Callers:
 *     PnpiGrowResourceList @ 0x1C008EB64 (PnpiGrowResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008F030 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C0011D5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011D5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011D5C: mov     [rsp+arg_0], rbx
 * 00000001C0011D61: mov     [rsp+arg_8], rbp
 * 00000001C0011D66: mov     [rsp+arg_10], rsi
 * 00000001C0011D6B: push    rdi
 * 00000001C0011D6C: push    r14
 * 00000001C0011D6E: push    r15
 * 00000001C0011D70: sub     rsp, 50h
 * 00000001C0011D74: mov     r14d, r8d
 * 00000001C0011D77: mov     sil, dl
 * 00000001C0011D7A: mov     edi, r8d
 * 00000001C0011D7D: movzx   ebp, r9w
 * 00000001C0011D81: shr     rdi, 10h
 * 00000001C0011D85: mov     r15, rcx
 * 00000001C0011D88: lea     ebx, [r14-1]
 * 00000001C0011D8C: mov     r10d, ebx
 * 00000001C0011D8F: and     ebx, 1Fh
 * 00000001C0011D92: shr     r10, 5
 * 00000001C0011D96: lea     rax, [rdi+rdi*4]
 * 00000001C0011D9A: and     r10d, 7FFh
 * 00000001C0011DA1: mov     edx, ebx
 * 00000001C0011DA3: mov     ebx, 4
 * 00000001C0011DA8: lea     r11, [r10+rax*4]
 * 00000001C0011DAC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0011DB3: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0011DB8: bt      eax, edx
 * 00000001C0011DBB: jb      loc_1C002CFCA
 * 00000001C0011DC1: and     [rsp+68h+var_20], 0
 * 00000001C0011DC7: lea     rax, [rsp+68h+arg_30]
 * 00000001C0011DCF: mov     [rsp+68h+var_28], rbx
 * 00000001C0011DD4: lea     r9, WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids
 * 00000001C0011DDB: mov     [rsp+68h+var_30], rax
 * 00000001C0011DE0: mov     r8d, r14d
 * 00000001C0011DE3: lea     rax, [rsp+68h+arg_28]
 * 00000001C0011DEB: mov     [rsp+68h+var_38], rbx
 * 00000001C0011DF0: mov     [rsp+68h+var_40], rax
 * 00000001C0011DF5: mov     rcx, r15
 * 00000001C0011DF8: movzx   edx, sil
 * 00000001C0011DFC: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0011E01: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011E07: lea     r11, [rsp+68h+var_18]
 * 00000001C0011E0C: mov     rbx, [r11+20h]
 * 00000001C0011E10: mov     rbp, [r11+28h]
 * 00000001C0011E14: mov     rsi, [r11+30h]
 * 00000001C0011E18: mov     rsp, r11
 * 00000001C0011E1B: pop     r15
 * 00000001C0011E1D: pop     r14
 * 00000001C0011E1F: pop     rdi
 * 00000001C0011E20: retn
 * 00000001C002CFCA: lea     rcx, [rdi+rdi*4]
 * 00000001C002CFCE: add     rcx, rcx
 * 00000001C002CFD1: cmp     [r10+rcx*8+29h], sil
 * 00000001C002CFD6: jb      loc_1C0011DC1
 * 00000001C002CFDC: and     [rsp+68h+var_28], 0
 * 00000001C002CFE2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002CFEA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002CFF1: lea     r8, WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids
 * 00000001C002CFF8: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002CFFD: mov     [rsp+68h+var_30], rbx
 * 00000001C002D002: mov     [rsp+68h+var_38], rdx
 * 00000001C002D007: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D00F: mov     [rsp+68h+var_40], rbx
 * 00000001C002D014: mov     [rsp+68h+var_48], rdx
 * 00000001C002D019: mov     edx, 2Bh ; '+'
 * 00000001C002D01E: movzx   r9d, bp
 * 00000001C002D022: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D028: nop
 * 00000001C002D029: jmp     loc_1C0011DC1
 */
