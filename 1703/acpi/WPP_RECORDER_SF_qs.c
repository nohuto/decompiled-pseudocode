/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C00453F4
 * Callers:
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C00437E0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C00516C8 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C005174C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C00539B0 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C00453F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00453F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00453F4: mov     [rsp+arg_0], rbx
 * 00000001C00453F9: mov     [rsp+arg_8], rbp
 * 00000001C00453FE: mov     [rsp+arg_10], rsi
 * 00000001C0045403: push    rdi
 * 00000001C0045404: push    r12
 * 00000001C0045406: push    r13
 * 00000001C0045408: push    r14
 * 00000001C004540A: push    r15
 * 00000001C004540C: sub     rsp, 50h
 * 00000001C0045410: mov     rbp, cs:WPP_GLOBAL_Control
 * 00000001C0045417: mov     r14b, dl
 * 00000001C004541A: mov     r13d, r8d
 * 00000001C004541D: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0045421: mov     esi, r8d
 * 00000001C0045424: movzx   r15d, r9w
 * 00000001C0045428: shr     rsi, 10h
 * 00000001C004542C: lea     r8, aNull_0; "NULL"
 * 00000001C0045433: mov     r12, rcx
 * 00000001C0045436: lea     ebx, [r13-1]
 * 00000001C004543A: mov     r10d, ebx
 * 00000001C004543D: and     ebx, 1Fh
 * 00000001C0045440: shr     r10, 5
 * 00000001C0045444: lea     rax, [rsi+rsi*4]
 * 00000001C0045448: and     r10d, 7FFh
 * 00000001C004544F: mov     edx, ebx
 * 00000001C0045451: mov     rbx, [rsp+78h+arg_30]
 * 00000001C0045459: lea     r11, [r10+rax*4]
 * 00000001C004545D: mov     eax, [rbp+r11*4+2Ch]
 * 00000001C0045462: bt      eax, edx
 * 00000001C0045465: jnb     loc_1C00454EE
 * 00000001C004546B: lea     r10, [rsi+rsi*4]
 * 00000001C004546F: add     r10, r10
 * 00000001C0045472: cmp     [rbp+r10*8+29h], r14b
 * 00000001C0045477: jb      short loc_1C00454EE
 * 00000001C0045479: test    rbx, rbx
 * 00000001C004547C: jz      short loc_1C004548F
 * 00000001C004547E: mov     rdx, rdi
 * 00000001C0045481: inc     rdx
 * 00000001C0045484: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0045488: jnz     short loc_1C0045481
 * 00000001C004548A: inc     rdx
 * 00000001C004548D: jmp     short loc_1C0045494
 * 00000001C004548F: mov     edx, 5
 * 00000001C0045494: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004549B: test    rbx, rbx
 * 00000001C004549E: mov     rcx, rbx
 * 00000001C00454A1: movzx   r9d, r15w
 * 00000001C00454A5: cmovz   rcx, r8
 * 00000001C00454A9: and     [rsp+78h+var_38], 0
 * 00000001C00454AF: mov     r8, [rsp+78h+arg_20]
 * 00000001C00454B7: mov     [rsp+78h+var_40], rdx
 * 00000001C00454BC: mov     edx, 2Bh ; '+'
 * 00000001C00454C1: mov     [rsp+78h+var_48], rcx
 * 00000001C00454C6: lea     rcx, [rsp+78h+arg_28]
 * 00000001C00454CE: mov     [rsp+78h+var_50], 8
 * 00000001C00454D7: mov     [rsp+78h+var_58], rcx
 * 00000001C00454DC: mov     rcx, [rbp+r10*8+18h]
 * 00000001C00454E1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00454E7: lea     r8, aNull_0; "NULL"
 * 00000001C00454EE: test    rbx, rbx
 * 00000001C00454F1: jz      short loc_1C0045501
 * 00000001C00454F3: inc     rdi
 * 00000001C00454F6: cmp     byte ptr [rbx+rdi], 0
 * 00000001C00454FA: jnz     short loc_1C00454F3
 * 00000001C00454FC: inc     rdi
 * 00000001C00454FF: jmp     short loc_1C0045506
 * 00000001C0045501: mov     edi, 5
 * 00000001C0045506: mov     r9, [rsp+78h+arg_20]
 * 00000001C004550E: lea     rax, [rsp+78h+arg_28]
 * 00000001C0045516: test    rbx, rbx
 * 00000001C0045519: movzx   edx, r14b
 * 00000001C004551D: mov     rcx, r12
 * 00000001C0045520: cmovz   rbx, r8
 * 00000001C0045524: and     [rsp+78h+var_30], 0
 * 00000001C004552A: mov     [rsp+78h+var_38], rdi
 * 00000001C004552F: mov     r8d, r13d
 * 00000001C0045532: mov     [rsp+78h+var_40], rbx
 * 00000001C0045537: mov     [rsp+78h+var_48], 8
 * 00000001C0045540: mov     [rsp+78h+var_50], rax
 * 00000001C0045545: mov     word ptr [rsp+78h+var_58], r15w
 * 00000001C004554B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045551: lea     r11, [rsp+78h+var_28]
 * 00000001C0045556: mov     rbx, [r11+30h]
 * 00000001C004555A: mov     rbp, [r11+38h]
 * 00000001C004555E: mov     rsi, [r11+40h]
 * 00000001C0045562: mov     rsp, r11
 * 00000001C0045565: pop     r15
 * 00000001C0045567: pop     r14
 * 00000001C0045569: pop     r13
 * 00000001C004556B: pop     r12
 * 00000001C004556D: pop     rdi
 * 00000001C004556E: retn
 */
