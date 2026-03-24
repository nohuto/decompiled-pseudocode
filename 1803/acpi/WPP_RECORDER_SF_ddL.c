/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C0038978
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1C0085A98 (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0085B80 (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x1C0038978
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038978
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038978: mov     r11, rsp
 * 00000001C003897B: mov     [r11+8], rbx
 * 00000001C003897F: mov     [r11+10h], rbp
 * 00000001C0038983: mov     [r11+18h], rsi
 * 00000001C0038987: push    rdi
 * 00000001C0038988: sub     rsp, 60h
 * 00000001C003898C: mov     rsi, rcx
 * 00000001C003898F: movzx   edi, r9w
 * 00000001C0038993: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003899A: mov     bl, dl
 * 00000001C003899C: mov     ebp, 4
 * 00000001C00389A1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00389A8: jz      short loc_1C00389F7
 * 00000001C00389AA: cmp     [rcx+29h], dl
 * 00000001C00389AD: jb      short loc_1C00389F7
 * 00000001C00389AF: and     qword ptr [r11-18h], 0
 * 00000001C00389B4: lea     rdx, [r11+40h]
 * 00000001C00389B8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00389BF: lea     r8, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C00389C6: mov     rcx, [rcx+18h]
 * 00000001C00389CA: mov     [r11-20h], rbp
 * 00000001C00389CE: mov     [r11-28h], rdx
 * 00000001C00389D2: lea     rdx, [r11+38h]
 * 00000001C00389D6: mov     [r11-30h], rbp
 * 00000001C00389DA: mov     [r11-38h], rdx
 * 00000001C00389DE: lea     rdx, [r11+30h]
 * 00000001C00389E2: mov     [r11-40h], rbp
 * 00000001C00389E6: mov     [r11-48h], rdx
 * 00000001C00389EA: lea     edx, [rbp+27h]
 * 00000001C00389ED: movzx   r9d, r9w
 * 00000001C00389F1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00389F7: and     [rsp+68h+var_10], 0
 * 00000001C00389FD: lea     rax, [rsp+68h+arg_38]
 * 00000001C0038A05: mov     [rsp+68h+var_18], rbp
 * 00000001C0038A0A: lea     r9, WPP_7668ccdfe0163e6e8b2bee4559c42df9_Traceguids
 * 00000001C0038A11: mov     [rsp+68h+var_20], rax
 * 00000001C0038A16: mov     r8d, 0Eh
 * 00000001C0038A1C: mov     [rsp+68h+var_28], rbp
 * 00000001C0038A21: lea     rax, [rsp+68h+arg_30]
 * 00000001C0038A29: mov     [rsp+68h+var_30], rax
 * 00000001C0038A2E: mov     rcx, rsi
 * 00000001C0038A31: lea     rax, [rsp+68h+arg_28]
 * 00000001C0038A39: mov     [rsp+68h+var_38], rbp
 * 00000001C0038A3E: mov     [rsp+68h+var_40], rax
 * 00000001C0038A43: movzx   edx, bl
 * 00000001C0038A46: mov     [rsp+68h+var_48], di
 * 00000001C0038A4B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038A51: lea     r11, [rsp+68h+var_8]
 * 00000001C0038A56: mov     rbx, [r11+10h]
 * 00000001C0038A5A: mov     rbp, [r11+18h]
 * 00000001C0038A5E: mov     rsi, [r11+20h]
 * 00000001C0038A62: mov     rsp, r11
 * 00000001C0038A65: pop     rdi
 * 00000001C0038A66: retn
 */
