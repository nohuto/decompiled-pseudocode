/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C0012C5C
 * Callers:
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C000B730 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C002ED08 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C002ED8C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0033430 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C0012C5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012C5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012C5C: mov     [rsp+arg_0], rbx
 * 00000001C0012C61: mov     [rsp+arg_8], rbp
 * 00000001C0012C66: mov     [rsp+arg_10], rsi
 * 00000001C0012C6B: push    rdi
 * 00000001C0012C6C: push    r12
 * 00000001C0012C6E: push    r13
 * 00000001C0012C70: push    r14
 * 00000001C0012C72: push    r15
 * 00000001C0012C74: sub     rsp, 50h
 * 00000001C0012C78: mov     rbp, cs:WPP_GLOBAL_Control
 * 00000001C0012C7F: mov     r14b, dl
 * 00000001C0012C82: mov     r13d, r8d
 * 00000001C0012C85: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0012C89: mov     esi, r8d
 * 00000001C0012C8C: movzx   r15d, r9w
 * 00000001C0012C90: shr     rsi, 10h
 * 00000001C0012C94: lea     r8, aNull_0; "NULL"
 * 00000001C0012C9B: mov     r12, rcx
 * 00000001C0012C9E: lea     ebx, [r13-1]
 * 00000001C0012CA2: mov     r10d, ebx
 * 00000001C0012CA5: and     ebx, 1Fh
 * 00000001C0012CA8: shr     r10, 5
 * 00000001C0012CAC: lea     rax, [rsi+rsi*4]
 * 00000001C0012CB0: and     r10d, 7FFh
 * 00000001C0012CB7: mov     edx, ebx
 * 00000001C0012CB9: mov     rbx, [rsp+78h+arg_30]
 * 00000001C0012CC1: lea     r11, [r10+rax*4]
 * 00000001C0012CC5: mov     eax, [rbp+r11*4+2Ch]
 * 00000001C0012CCA: bt      eax, edx
 * 00000001C0012CCD: jnb     loc_1C0012D56
 * 00000001C0012CD3: lea     r10, [rsi+rsi*4]
 * 00000001C0012CD7: add     r10, r10
 * 00000001C0012CDA: cmp     [rbp+r10*8+29h], r14b
 * 00000001C0012CDF: jb      short loc_1C0012D56
 * 00000001C0012CE1: test    rbx, rbx
 * 00000001C0012CE4: jz      short loc_1C0012CF7
 * 00000001C0012CE6: mov     rdx, rdi
 * 00000001C0012CE9: inc     rdx
 * 00000001C0012CEC: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0012CF0: jnz     short loc_1C0012CE9
 * 00000001C0012CF2: inc     rdx
 * 00000001C0012CF5: jmp     short loc_1C0012CFC
 * 00000001C0012CF7: mov     edx, 5
 * 00000001C0012CFC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0012D03: test    rbx, rbx
 * 00000001C0012D06: mov     rcx, rbx
 * 00000001C0012D09: movzx   r9d, r15w
 * 00000001C0012D0D: cmovz   rcx, r8
 * 00000001C0012D11: and     [rsp+78h+var_38], 0
 * 00000001C0012D17: mov     r8, [rsp+78h+arg_20]
 * 00000001C0012D1F: mov     [rsp+78h+var_40], rdx
 * 00000001C0012D24: mov     edx, 2Bh ; '+'
 * 00000001C0012D29: mov     [rsp+78h+var_48], rcx
 * 00000001C0012D2E: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0012D36: mov     [rsp+78h+var_50], 8
 * 00000001C0012D3F: mov     [rsp+78h+var_58], rcx
 * 00000001C0012D44: mov     rcx, [rbp+r10*8+18h]
 * 00000001C0012D49: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0012D4F: lea     r8, aNull_0; "NULL"
 * 00000001C0012D56: test    rbx, rbx
 * 00000001C0012D59: jz      short loc_1C0012D69
 * 00000001C0012D5B: inc     rdi
 * 00000001C0012D5E: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0012D62: jnz     short loc_1C0012D5B
 * 00000001C0012D64: inc     rdi
 * 00000001C0012D67: jmp     short loc_1C0012D6E
 * 00000001C0012D69: mov     edi, 5
 * 00000001C0012D6E: mov     r9, [rsp+78h+arg_20]
 * 00000001C0012D76: lea     rax, [rsp+78h+arg_28]
 * 00000001C0012D7E: test    rbx, rbx
 * 00000001C0012D81: movzx   edx, r14b
 * 00000001C0012D85: mov     rcx, r12
 * 00000001C0012D88: cmovz   rbx, r8
 * 00000001C0012D8C: and     [rsp+78h+var_30], 0
 * 00000001C0012D92: mov     [rsp+78h+var_38], rdi
 * 00000001C0012D97: mov     r8d, r13d
 * 00000001C0012D9A: mov     [rsp+78h+var_40], rbx
 * 00000001C0012D9F: mov     [rsp+78h+var_48], 8
 * 00000001C0012DA8: mov     [rsp+78h+var_50], rax
 * 00000001C0012DAD: mov     word ptr [rsp+78h+var_58], r15w
 * 00000001C0012DB3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012DB9: lea     r11, [rsp+78h+var_28]
 * 00000001C0012DBE: mov     rbx, [r11+30h]
 * 00000001C0012DC2: mov     rbp, [r11+38h]
 * 00000001C0012DC6: mov     rsi, [r11+40h]
 * 00000001C0012DCA: mov     rsp, r11
 * 00000001C0012DCD: pop     r15
 * 00000001C0012DCF: pop     r14
 * 00000001C0012DD1: pop     r13
 * 00000001C0012DD3: pop     r12
 * 00000001C0012DD5: pop     rdi
 * 00000001C0012DD6: retn
 */
