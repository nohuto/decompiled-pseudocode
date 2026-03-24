/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C004D4DC
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009EC10 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qsD @ 0x1C004D4DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C004D4DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004D4DC: mov     [rsp+arg_0], rbx
 * 00000001C004D4E1: mov     [rsp+arg_8], rsi
 * 00000001C004D4E6: mov     [rsp+arg_10], rdi
 * 00000001C004D4EB: push    r13
 * 00000001C004D4ED: sub     rsp, 60h
 * 00000001C004D4F1: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004D4F8: lea     r13, aNull_0; "NULL"
 * 00000001C004D4FF: mov     rdi, [rsp+68h+arg_30]
 * 00000001C004D507: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004D50B: mov     rsi, rcx
 * 00000001C004D50E: test    dword ptr [r10+2Ch], 100000h
 * 00000001C004D516: lea     r9d, [rbx+0Eh]
 * 00000001C004D51A: jz      loc_1C004D5AF
 * 00000001C004D520: cmp     byte ptr [r10+29h], 2
 * 00000001C004D525: jb      loc_1C004D5AF
 * 00000001C004D52B: test    rdi, rdi
 * 00000001C004D52E: jz      short loc_1C004D541
 * 00000001C004D530: mov     rcx, rbx
 * 00000001C004D533: inc     rcx
 * 00000001C004D536: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004D53A: jnz     short loc_1C004D533
 * 00000001C004D53C: inc     rcx
 * 00000001C004D53F: jmp     short loc_1C004D546
 * 00000001C004D541: mov     ecx, 5
 * 00000001C004D546: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004D54D: lea     r8, [rsp+68h+arg_38]
 * 00000001C004D555: test    rdi, rdi
 * 00000001C004D558: mov     rdx, rdi
 * 00000001C004D55B: cmovz   rdx, r13
 * 00000001C004D55F: and     [rsp+68h+var_18], 0
 * 00000001C004D565: mov     [rsp+68h+var_20], 4
 * 00000001C004D56E: mov     [rsp+68h+var_28], r8
 * 00000001C004D573: lea     r8, WPP_31a55c119b0d3413ca6777ebdd359f0a_Traceguids
 * 00000001C004D57A: mov     [rsp+68h+var_30], rcx
 * 00000001C004D57F: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004D587: mov     [rsp+68h+var_38], rdx
 * 00000001C004D58C: mov     edx, 2Bh ; '+'
 * 00000001C004D591: mov     [rsp+68h+var_40], 8
 * 00000001C004D59A: mov     [rsp+68h+var_48], rcx
 * 00000001C004D59F: mov     rcx, [r10+18h]
 * 00000001C004D5A3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004D5A9: mov     r9d, 0Dh
 * 00000001C004D5AF: test    rdi, rdi
 * 00000001C004D5B2: jz      short loc_1C004D5C2
 * 00000001C004D5B4: inc     rbx
 * 00000001C004D5B7: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004D5BB: jnz     short loc_1C004D5B4
 * 00000001C004D5BD: inc     rbx
 * 00000001C004D5C0: jmp     short loc_1C004D5C7
 * 00000001C004D5C2: mov     ebx, 5
 * 00000001C004D5C7: test    rdi, rdi
 * 00000001C004D5CA: lea     rax, [rsp+68h+arg_38]
 * 00000001C004D5D2: mov     edx, 2
 * 00000001C004D5D7: mov     rcx, rsi
 * 00000001C004D5DA: cmovz   rdi, r13
 * 00000001C004D5DE: and     [rsp+68h+var_10], 0
 * 00000001C004D5E4: mov     [rsp+68h+var_18], 4
 * 00000001C004D5ED: mov     [rsp+68h+var_20], rax
 * 00000001C004D5F2: lea     rax, [rsp+68h+arg_28]
 * 00000001C004D5FA: mov     [rsp+68h+var_28], rbx
 * 00000001C004D5FF: lea     r8d, [rdx+13h]
 * 00000001C004D603: mov     [rsp+68h+var_30], rdi
 * 00000001C004D608: mov     [rsp+68h+var_38], 8
 * 00000001C004D611: mov     [rsp+68h+var_40], rax
 * 00000001C004D616: mov     word ptr [rsp+68h+var_48], r9w
 * 00000001C004D61C: lea     r9, WPP_31a55c119b0d3413ca6777ebdd359f0a_Traceguids
 * 00000001C004D623: call    cs:__imp_WppAutoLogTrace
 * 00000001C004D629: lea     r11, [rsp+68h+var_8]
 * 00000001C004D62E: mov     rbx, [r11+10h]
 * 00000001C004D632: mov     rsi, [r11+18h]
 * 00000001C004D636: mov     rdi, [r11+20h]
 * 00000001C004D63A: mov     rsp, r11
 * 00000001C004D63D: pop     r13
 * 00000001C004D63F: retn
 */
