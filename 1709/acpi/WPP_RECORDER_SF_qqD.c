/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C0055400
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005482C (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0054BB8 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A3600 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x1C0055400
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055400: mov     rax, rsp
 * 00000001C0055403: mov     [rax+8], rbx
 * 00000001C0055407: mov     [rax+10h], rbp
 * 00000001C005540B: mov     [rax+18h], rsi
 * 00000001C005540F: mov     [rax+20h], rdi
 * 00000001C0055413: push    r14
 * 00000001C0055415: sub     rsp, 60h
 * 00000001C0055419: mov     esi, r8d
 * 00000001C005541C: movzx   edi, r9w
 * 00000001C0055420: mov     ebx, r8d
 * 00000001C0055423: mov     rbp, rcx
 * 00000001C0055426: shr     rbx, 10h
 * 00000001C005542A: mov     r14d, 8
 * 00000001C0055430: lea     r11d, [rsi-1]
 * 00000001C0055434: mov     edx, r11d
 * 00000001C0055437: and     r11d, 1Fh
 * 00000001C005543B: shr     rdx, 5
 * 00000001C005543F: lea     rax, [rbx+rbx*4]
 * 00000001C0055443: and     edx, 7FFh
 * 00000001C0055449: lea     r10, [rdx+rax*4]
 * 00000001C005544D: mov     edx, r11d
 * 00000001C0055450: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0055457: mov     eax, [r11+r10*4+2Ch]
 * 00000001C005545C: bt      eax, edx
 * 00000001C005545F: jnb     short loc_1C00554D1
 * 00000001C0055461: lea     rcx, [rbx+rbx*4]
 * 00000001C0055465: add     rcx, rcx
 * 00000001C0055468: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C005546E: jb      short loc_1C00554D1
 * 00000001C0055470: and     [rsp+68h+var_18], 0
 * 00000001C0055476: lea     rdx, [rsp+68h+arg_38]
 * 00000001C005547E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0055485: lea     r8, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C005548C: mov     rcx, [r11+rcx*8+18h]
 * 00000001C0055491: mov     [rsp+68h+var_20], 4
 * 00000001C005549A: mov     [rsp+68h+var_28], rdx
 * 00000001C005549F: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00554A7: mov     [rsp+68h+var_30], r14
 * 00000001C00554AC: mov     [rsp+68h+var_38], rdx
 * 00000001C00554B1: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00554B9: mov     [rsp+68h+var_40], r14
 * 00000001C00554BE: mov     [rsp+68h+var_48], rdx
 * 00000001C00554C3: lea     edx, [r14+23h]
 * 00000001C00554C7: movzx   r9d, r9w
 * 00000001C00554CB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00554D1: and     [rsp+68h+var_10], 0
 * 00000001C00554D7: lea     rax, [rsp+68h+arg_38]
 * 00000001C00554DF: mov     [rsp+68h+var_18], 4
 * 00000001C00554E8: lea     r9, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C00554EF: mov     [rsp+68h+var_20], rax
 * 00000001C00554F4: mov     r8d, esi
 * 00000001C00554F7: mov     [rsp+68h+var_28], r14
 * 00000001C00554FC: lea     rax, [rsp+68h+arg_30]
 * 00000001C0055504: mov     [rsp+68h+var_30], rax
 * 00000001C0055509: mov     edx, 2
 * 00000001C005550E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0055516: mov     [rsp+68h+var_38], r14
 * 00000001C005551B: mov     [rsp+68h+var_40], rax
 * 00000001C0055520: mov     rcx, rbp
 * 00000001C0055523: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0055528: call    cs:__imp_WppAutoLogTrace
 * 00000001C005552E: lea     r11, [rsp+68h+var_8]
 * 00000001C0055533: mov     rbx, [r11+10h]
 * 00000001C0055537: mov     rbp, [r11+18h]
 * 00000001C005553B: mov     rsi, [r11+20h]
 * 00000001C005553F: mov     rdi, [r11+28h]
 * 00000001C0055543: mov     rsp, r11
 * 00000001C0055546: pop     r14
 * 00000001C0055548: retn
 */
