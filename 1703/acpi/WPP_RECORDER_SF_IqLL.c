/*
 * XREFs of WPP_RECORDER_SF_IqLL @ 0x1C0008574
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C008DC9C (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqLL @ 0x1C0008574
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008574
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008574: mov     [rsp+arg_0], rbx
 * 00000001C0008579: mov     [rsp+arg_8], rbp
 * 00000001C000857E: mov     [rsp+arg_10], rsi
 * 00000001C0008583: push    rdi
 * 00000001C0008584: sub     rsp, 70h
 * 00000001C0008588: mov     edi, 4
 * 00000001C000858D: mov     rbx, rcx
 * 00000001C0008590: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0008597: lea     ebp, [rdi+7]
 * 00000001C000859A: mov     eax, [rcx+2Ch]
 * 00000001C000859D: lea     esi, [rdi+4]
 * 00000001C00085A0: test    al, 20h
 * 00000001C00085A2: jnz     loc_1C002EF86
 * 00000001C00085A8: and     [rsp+78h+var_10], 0
 * 00000001C00085AE: lea     rax, [rsp+78h+arg_40]
 * 00000001C00085B6: mov     [rsp+78h+var_18], rdi
 * 00000001C00085BB: lea     r9, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C00085C2: mov     [rsp+78h+var_20], rax
 * 00000001C00085C7: mov     r8d, 6
 * 00000001C00085CD: mov     [rsp+78h+var_28], rdi
 * 00000001C00085D2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00085DA: mov     [rsp+78h+var_30], rax
 * 00000001C00085DF: mov     edx, edi
 * 00000001C00085E1: mov     [rsp+78h+var_38], rsi
 * 00000001C00085E6: lea     rax, [rsp+78h+arg_30]
 * 00000001C00085EE: mov     [rsp+78h+var_40], rax
 * 00000001C00085F3: mov     rcx, rbx
 * 00000001C00085F6: lea     rax, [rsp+78h+arg_28]
 * 00000001C00085FE: mov     [rsp+78h+var_48], rsi
 * 00000001C0008603: mov     [rsp+78h+var_50], rax
 * 00000001C0008608: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000860D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008613: lea     r11, [rsp+78h+var_8]
 * 00000001C0008618: mov     rbx, [r11+10h]
 * 00000001C000861C: mov     rbp, [r11+18h]
 * 00000001C0008620: mov     rsi, [r11+20h]
 * 00000001C0008624: mov     rsp, r11
 * 00000001C0008627: pop     rdi
 * 00000001C0008628: retn
 * 00000001C002EF86: cmp     [rcx+29h], dil
 * 00000001C002EF8A: jb      loc_1C00085A8
 * 00000001C002EF90: and     [rsp+78h+var_18], 0
 * 00000001C002EF96: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002EF9E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002EFA5: lea     r8, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C002EFAC: mov     rcx, [rcx+18h]
 * 00000001C002EFB0: mov     [rsp+78h+var_20], rdi
 * 00000001C002EFB5: mov     [rsp+78h+var_28], rdx
 * 00000001C002EFBA: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002EFC2: mov     [rsp+78h+var_30], rdi
 * 00000001C002EFC7: mov     [rsp+78h+var_38], rdx
 * 00000001C002EFCC: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002EFD4: mov     [rsp+78h+var_40], rsi
 * 00000001C002EFD9: mov     [rsp+78h+var_48], rdx
 * 00000001C002EFDE: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002EFE6: mov     [rsp+78h+var_50], rsi
 * 00000001C002EFEB: mov     [rsp+78h+var_58], rdx
 * 00000001C002EFF0: mov     edx, 2Bh ; '+'
 * 00000001C002EFF5: movzx   r9d, bp
 * 00000001C002EFF9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002EFFF: nop
 * 00000001C002F000: jmp     loc_1C00085A8
 */
