/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00057F0
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0004F70 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00057F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00057F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00057F0: mov     r11, rsp
 * 00000001C00057F3: mov     [r11+8], rbx
 * 00000001C00057F7: push    rbp
 * 00000001C00057F8: sub     rsp, 50h
 * 00000001C00057FC: mov     rbx, rcx
 * 00000001C00057FF: mov     ebp, 5Dh ; ']'
 * 00000001C0005804: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000580B: mov     eax, [rcx+2Ch]
 * 00000001C000580E: test    al, 10h
 * 00000001C0005810: jz      short loc_1C000585C
 * 00000001C0005812: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005816: jb      short loc_1C000585C
 * 00000001C0005818: and     qword ptr [r11-18h], 0
 * 00000001C000581D: lea     rdx, [r11+38h]
 * 00000001C0005821: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005828: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000582F: mov     rcx, [rcx+18h]
 * 00000001C0005833: mov     qword ptr [r11-20h], 4
 * 00000001C000583B: mov     [r11-28h], rdx
 * 00000001C000583F: lea     rdx, [r11+30h]
 * 00000001C0005843: mov     qword ptr [r11-30h], 8
 * 00000001C000584B: mov     [r11-38h], rdx
 * 00000001C000584F: lea     edx, [rbp-32h]
 * 00000001C0005852: movzx   r9d, bp
 * 00000001C0005856: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000585C: and     [rsp+58h+var_10], 0
 * 00000001C0005862: lea     rax, [rsp+58h+arg_30]
 * 00000001C000586A: mov     [rsp+58h+var_18], 4
 * 00000001C0005873: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000587A: mov     [rsp+58h+var_20], rax
 * 00000001C000587F: mov     edx, 2
 * 00000001C0005884: lea     rax, [rsp+58h+arg_28]
 * 00000001C000588C: mov     [rsp+58h+var_28], 8
 * 00000001C0005895: mov     [rsp+58h+var_30], rax
 * 00000001C000589A: mov     rcx, rbx
 * 00000001C000589D: mov     [rsp+58h+var_38], bp
 * 00000001C00058A2: lea     r8d, [rdx+3]
 * 00000001C00058A6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00058AC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00058B1: add     rsp, 50h
 * 00000001C00058B5: pop     rbp
 * 00000001C00058B6: retn
 */
