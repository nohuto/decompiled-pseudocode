/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0027524
 * Callers:
 *     ACPIDispatchIrp @ 0x1C00010A0 (ACPIDispatchIrp.c)
 *     ACPIReleaseGlobalLock @ 0x1C0017710 (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C002743C (ACPIStartNextGlobalLockRequest.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDispatchAddDevice @ 0x1C00AD890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0027524
 * Reason: Hex-Rays returned no pseudocode for 0x1C0027524
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0027524: mov     [rsp+arg_0], rbx
 * 00000001C0027529: mov     [rsp+arg_8], rbp
 * 00000001C002752E: mov     [rsp+arg_10], rsi
 * 00000001C0027533: push    rdi
 * 00000001C0027534: push    r14
 * 00000001C0027536: push    r15
 * 00000001C0027538: sub     rsp, 50h
 * 00000001C002753C: mov     r14d, r8d
 * 00000001C002753F: mov     sil, dl
 * 00000001C0027542: mov     edi, r8d
 * 00000001C0027545: movzx   ebp, r9w
 * 00000001C0027549: shr     rdi, 10h
 * 00000001C002754D: mov     r15, rcx
 * 00000001C0027550: lea     ebx, [r14-1]
 * 00000001C0027554: mov     r10d, ebx
 * 00000001C0027557: and     ebx, 1Fh
 * 00000001C002755A: shr     r10, 5
 * 00000001C002755E: lea     rax, [rdi+rdi*4]
 * 00000001C0027562: and     r10d, 7FFh
 * 00000001C0027569: mov     edx, ebx
 * 00000001C002756B: mov     ebx, 8
 * 00000001C0027570: lea     r11, [r10+rax*4]
 * 00000001C0027574: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002757B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0027580: bt      eax, edx
 * 00000001C0027583: jb      loc_1C003E980
 * 00000001C0027589: and     [rsp+68h+var_20], 0
 * 00000001C002758F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0027597: mov     r9, [rsp+68h+arg_20]
 * 00000001C002759F: mov     r8d, r14d
 * 00000001C00275A2: mov     [rsp+68h+var_28], rbx
 * 00000001C00275A7: mov     rcx, r15
 * 00000001C00275AA: mov     [rsp+68h+var_30], rax
 * 00000001C00275AF: lea     rax, [rsp+68h+arg_28]
 * 00000001C00275B7: mov     [rsp+68h+var_38], rbx
 * 00000001C00275BC: mov     [rsp+68h+var_40], rax
 * 00000001C00275C1: movzx   edx, sil
 * 00000001C00275C5: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00275CA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00275D0: lea     r11, [rsp+68h+var_18]
 * 00000001C00275D5: mov     rbx, [r11+20h]
 * 00000001C00275D9: mov     rbp, [r11+28h]
 * 00000001C00275DD: mov     rsi, [r11+30h]
 * 00000001C00275E1: mov     rsp, r11
 * 00000001C00275E4: pop     r15
 * 00000001C00275E6: pop     r14
 * 00000001C00275E8: pop     rdi
 * 00000001C00275E9: retn
 * 00000001C003E980: lea     rcx, [rdi+rdi*4]
 * 00000001C003E984: add     rcx, rcx
 * 00000001C003E987: cmp     [r10+rcx*8+29h], sil
 * 00000001C003E98C: jb      loc_1C0027589
 * 00000001C003E992: and     [rsp+68h+var_28], 0
 * 00000001C003E998: lea     rdx, [rsp+68h+arg_30]
 * 00000001C003E9A0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003E9A7: mov     r8, [rsp+68h+arg_20]
 * 00000001C003E9AF: mov     rcx, [r10+rcx*8+18h]
 * 00000001C003E9B4: mov     [rsp+68h+var_30], rbx
 * 00000001C003E9B9: mov     [rsp+68h+var_38], rdx
 * 00000001C003E9BE: lea     rdx, [rsp+68h+arg_28]
 * 00000001C003E9C6: mov     [rsp+68h+var_40], rbx
 * 00000001C003E9CB: mov     [rsp+68h+var_48], rdx
 * 00000001C003E9D0: mov     edx, 2Bh ; '+'
 * 00000001C003E9D5: movzx   r9d, bp
 * 00000001C003E9D9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003E9DF: nop
 * 00000001C003E9E0: jmp     loc_1C0027589
 */
