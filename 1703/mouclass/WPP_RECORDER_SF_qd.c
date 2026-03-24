/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005534
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0004C10 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005534
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005534
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005534: mov     r11, rsp
 * 00000001C0005537: mov     [r11+8], rbx
 * 00000001C000553B: push    rbp
 * 00000001C000553C: sub     rsp, 50h
 * 00000001C0005540: mov     rbx, rcx
 * 00000001C0005543: mov     ebp, 58h ; 'X'
 * 00000001C0005548: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000554F: mov     eax, [rcx+2Ch]
 * 00000001C0005552: test    al, 10h
 * 00000001C0005554: jz      short loc_1C00055A0
 * 00000001C0005556: cmp     byte ptr [rcx+29h], 2
 * 00000001C000555A: jb      short loc_1C00055A0
 * 00000001C000555C: and     qword ptr [r11-18h], 0
 * 00000001C0005561: lea     rdx, [r11+38h]
 * 00000001C0005565: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000556C: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0005573: mov     rcx, [rcx+18h]
 * 00000001C0005577: mov     qword ptr [r11-20h], 4
 * 00000001C000557F: mov     [r11-28h], rdx
 * 00000001C0005583: lea     rdx, [r11+30h]
 * 00000001C0005587: mov     qword ptr [r11-30h], 8
 * 00000001C000558F: mov     [r11-38h], rdx
 * 00000001C0005593: lea     edx, [rbp-2Dh]
 * 00000001C0005596: movzx   r9d, bp
 * 00000001C000559A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00055A0: and     [rsp+58h+var_10], 0
 * 00000001C00055A6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00055AE: mov     [rsp+58h+var_18], 4
 * 00000001C00055B7: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00055BE: mov     [rsp+58h+var_20], rax
 * 00000001C00055C3: mov     edx, 2
 * 00000001C00055C8: lea     rax, [rsp+58h+arg_28]
 * 00000001C00055D0: mov     [rsp+58h+var_28], 8
 * 00000001C00055D9: mov     [rsp+58h+var_30], rax
 * 00000001C00055DE: mov     rcx, rbx
 * 00000001C00055E1: mov     [rsp+58h+var_38], bp
 * 00000001C00055E6: lea     r8d, [rdx+3]
 * 00000001C00055EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00055F0: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00055F5: add     rsp, 50h
 * 00000001C00055F9: pop     rbp
 * 00000001C00055FA: retn
 */
