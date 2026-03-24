/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C0007BAC
 * Callers:
 *     PnpiGrowResourceList @ 0x1C008CD98 (PnpiGrowResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C0007BAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007BAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007BAC: mov     [rsp+arg_0], rbx
 * 00000001C0007BB1: mov     [rsp+arg_8], rbp
 * 00000001C0007BB6: mov     [rsp+arg_10], rsi
 * 00000001C0007BBB: push    rdi
 * 00000001C0007BBC: push    r14
 * 00000001C0007BBE: push    r15
 * 00000001C0007BC0: sub     rsp, 50h
 * 00000001C0007BC4: mov     r14d, r8d
 * 00000001C0007BC7: mov     sil, dl
 * 00000001C0007BCA: mov     edi, r8d
 * 00000001C0007BCD: movzx   ebp, r9w
 * 00000001C0007BD1: shr     rdi, 10h
 * 00000001C0007BD5: mov     r15, rcx
 * 00000001C0007BD8: lea     ebx, [r14-1]
 * 00000001C0007BDC: mov     r10d, ebx
 * 00000001C0007BDF: and     ebx, 1Fh
 * 00000001C0007BE2: shr     r10, 5
 * 00000001C0007BE6: lea     rax, [rdi+rdi*4]
 * 00000001C0007BEA: and     r10d, 7FFh
 * 00000001C0007BF1: mov     edx, ebx
 * 00000001C0007BF3: mov     ebx, 4
 * 00000001C0007BF8: lea     r11, [r10+rax*4]
 * 00000001C0007BFC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0007C03: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0007C08: bt      eax, edx
 * 00000001C0007C0B: jb      loc_1C002EA44
 * 00000001C0007C11: and     [rsp+68h+var_20], 0
 * 00000001C0007C17: lea     rax, [rsp+68h+arg_30]
 * 00000001C0007C1F: mov     [rsp+68h+var_28], rbx
 * 00000001C0007C24: lea     r9, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C0007C2B: mov     [rsp+68h+var_30], rax
 * 00000001C0007C30: mov     r8d, r14d
 * 00000001C0007C33: lea     rax, [rsp+68h+arg_28]
 * 00000001C0007C3B: mov     [rsp+68h+var_38], rbx
 * 00000001C0007C40: mov     [rsp+68h+var_40], rax
 * 00000001C0007C45: mov     rcx, r15
 * 00000001C0007C48: movzx   edx, sil
 * 00000001C0007C4C: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0007C51: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007C57: lea     r11, [rsp+68h+var_18]
 * 00000001C0007C5C: mov     rbx, [r11+20h]
 * 00000001C0007C60: mov     rbp, [r11+28h]
 * 00000001C0007C64: mov     rsi, [r11+30h]
 * 00000001C0007C68: mov     rsp, r11
 * 00000001C0007C6B: pop     r15
 * 00000001C0007C6D: pop     r14
 * 00000001C0007C6F: pop     rdi
 * 00000001C0007C70: retn
 * 00000001C002EA44: lea     rcx, [rdi+rdi*4]
 * 00000001C002EA48: add     rcx, rcx
 * 00000001C002EA4B: cmp     [r10+rcx*8+29h], sil
 * 00000001C002EA50: jb      loc_1C0007C11
 * 00000001C002EA56: and     [rsp+68h+var_28], 0
 * 00000001C002EA5C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002EA64: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EA6B: lea     r8, WPP_1a14e5a9ae2c3bd07ba19743b4ac3a5b_Traceguids
 * 00000001C002EA72: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002EA77: mov     [rsp+68h+var_30], rbx
 * 00000001C002EA7C: mov     [rsp+68h+var_38], rdx
 * 00000001C002EA81: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002EA89: mov     [rsp+68h+var_40], rbx
 * 00000001C002EA8E: mov     [rsp+68h+var_48], rdx
 * 00000001C002EA93: mov     edx, 2Bh ; '+'
 * 00000001C002EA98: movzx   r9d, bp
 * 00000001C002EA9C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EAA2: nop
 * 00000001C002EAA3: jmp     loc_1C0007C11
 */
