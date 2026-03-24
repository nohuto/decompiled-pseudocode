/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00058B0
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0005030 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C00058B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00058B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00058B0: mov     r11, rsp
 * 00000001C00058B3: mov     [r11+8], rbx
 * 00000001C00058B7: push    rbp
 * 00000001C00058B8: sub     rsp, 50h
 * 00000001C00058BC: mov     rbx, rcx
 * 00000001C00058BF: mov     ebp, 5Dh ; ']'
 * 00000001C00058C4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00058CB: mov     eax, [rcx+2Ch]
 * 00000001C00058CE: test    al, 10h
 * 00000001C00058D0: jz      short loc_1C000591C
 * 00000001C00058D2: cmp     byte ptr [rcx+29h], 2
 * 00000001C00058D6: jb      short loc_1C000591C
 * 00000001C00058D8: and     qword ptr [r11-18h], 0
 * 00000001C00058DD: lea     rdx, [r11+38h]
 * 00000001C00058E1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00058E8: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00058EF: mov     rcx, [rcx+18h]
 * 00000001C00058F3: mov     qword ptr [r11-20h], 4
 * 00000001C00058FB: mov     [r11-28h], rdx
 * 00000001C00058FF: lea     rdx, [r11+30h]
 * 00000001C0005903: mov     qword ptr [r11-30h], 8
 * 00000001C000590B: mov     [r11-38h], rdx
 * 00000001C000590F: lea     edx, [rbp-32h]
 * 00000001C0005912: movzx   r9d, bp
 * 00000001C0005916: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000591C: and     [rsp+58h+var_10], 0
 * 00000001C0005922: lea     rax, [rsp+58h+arg_30]
 * 00000001C000592A: mov     [rsp+58h+var_18], 4
 * 00000001C0005933: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000593A: mov     [rsp+58h+var_20], rax
 * 00000001C000593F: mov     edx, 2
 * 00000001C0005944: lea     rax, [rsp+58h+arg_28]
 * 00000001C000594C: mov     [rsp+58h+var_28], 8
 * 00000001C0005955: mov     [rsp+58h+var_30], rax
 * 00000001C000595A: mov     rcx, rbx
 * 00000001C000595D: mov     [rsp+58h+var_38], bp
 * 00000001C0005962: lea     r8d, [rdx+3]
 * 00000001C0005966: call    cs:__imp_WppAutoLogTrace
 * 00000001C000596C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005971: add     rsp, 50h
 * 00000001C0005975: pop     rbp
 * 00000001C0005976: retn
 */
