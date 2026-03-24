/*
 * XREFs of WPP_RECORDER_SF_DDDD @ 0x1C00543AC
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005349C (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDD @ 0x1C00543AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00543AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00543AC: mov     rax, rsp
 * 00000001C00543AF: mov     [rax+8], rbx
 * 00000001C00543B3: mov     [rax+10h], rbp
 * 00000001C00543B7: mov     [rax+18h], rsi
 * 00000001C00543BB: mov     [rax+20h], rdi
 * 00000001C00543BF: push    r14
 * 00000001C00543C1: sub     rsp, 70h
 * 00000001C00543C5: mov     esi, r8d
 * 00000001C00543C8: movzx   edi, r9w
 * 00000001C00543CC: mov     ebx, r8d
 * 00000001C00543CF: mov     rbp, rcx
 * 00000001C00543D2: shr     rbx, 10h
 * 00000001C00543D6: mov     r14d, 4
 * 00000001C00543DC: lea     r11d, [rsi-1]
 * 00000001C00543E0: mov     edx, r11d
 * 00000001C00543E3: and     r11d, 1Fh
 * 00000001C00543E7: shr     rdx, 5
 * 00000001C00543EB: lea     rax, [rbx+rbx*4]
 * 00000001C00543EF: and     edx, 7FFh
 * 00000001C00543F5: lea     r10, [rdx+rax*4]
 * 00000001C00543F9: mov     edx, r11d
 * 00000001C00543FC: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0054403: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0054408: bt      eax, edx
 * 00000001C005440B: jnb     short loc_1C005448B
 * 00000001C005440D: lea     rcx, [rbx+rbx*4]
 * 00000001C0054411: add     rcx, rcx
 * 00000001C0054414: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C005441A: jb      short loc_1C005448B
 * 00000001C005441C: and     [rsp+78h+var_18], 0
 * 00000001C0054422: lea     rdx, [rsp+78h+arg_40]
 * 00000001C005442A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054431: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054438: mov     rcx, [r11+rcx*8+18h]
 * 00000001C005443D: mov     [rsp+78h+var_20], r14
 * 00000001C0054442: mov     [rsp+78h+var_28], rdx
 * 00000001C0054447: lea     rdx, [rsp+78h+arg_38]
 * 00000001C005444F: mov     [rsp+78h+var_30], r14
 * 00000001C0054454: mov     [rsp+78h+var_38], rdx
 * 00000001C0054459: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0054461: mov     [rsp+78h+var_40], r14
 * 00000001C0054466: mov     [rsp+78h+var_48], rdx
 * 00000001C005446B: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0054473: mov     [rsp+78h+var_50], r14
 * 00000001C0054478: mov     [rsp+78h+var_58], rdx
 * 00000001C005447D: lea     edx, [r14+27h]
 * 00000001C0054481: movzx   r9d, r9w
 * 00000001C0054485: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005448B: and     [rsp+78h+var_10], 0
 * 00000001C0054491: lea     rax, [rsp+78h+arg_40]
 * 00000001C0054499: mov     [rsp+78h+var_18], r14
 * 00000001C005449E: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C00544A5: mov     [rsp+78h+var_20], rax
 * 00000001C00544AA: mov     r8d, esi
 * 00000001C00544AD: mov     [rsp+78h+var_28], r14
 * 00000001C00544B2: lea     rax, [rsp+78h+arg_38]
 * 00000001C00544BA: mov     [rsp+78h+var_30], rax
 * 00000001C00544BF: mov     edx, 2
 * 00000001C00544C4: mov     [rsp+78h+var_38], r14
 * 00000001C00544C9: lea     rax, [rsp+78h+arg_30]
 * 00000001C00544D1: mov     [rsp+78h+var_40], rax
 * 00000001C00544D6: mov     rcx, rbp
 * 00000001C00544D9: lea     rax, [rsp+78h+arg_28]
 * 00000001C00544E1: mov     [rsp+78h+var_48], r14
 * 00000001C00544E6: mov     [rsp+78h+var_50], rax
 * 00000001C00544EB: mov     word ptr [rsp+78h+var_58], di
 * 00000001C00544F0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00544F6: lea     r11, [rsp+78h+var_8]
 * 00000001C00544FB: mov     rbx, [r11+10h]
 * 00000001C00544FF: mov     rbp, [r11+18h]
 * 00000001C0054503: mov     rsi, [r11+20h]
 * 00000001C0054507: mov     rdi, [r11+28h]
 * 00000001C005450B: mov     rsp, r11
 * 00000001C005450E: pop     r14
 * 00000001C0054510: retn
 */
