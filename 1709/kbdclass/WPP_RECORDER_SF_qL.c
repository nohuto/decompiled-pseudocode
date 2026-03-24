/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C000551C
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0004A20 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C000551C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000551C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000551C: mov     r11, rsp
 * 00000001C000551F: mov     [r11+8], rbx
 * 00000001C0005523: push    rbp
 * 00000001C0005524: sub     rsp, 50h
 * 00000001C0005528: mov     rbx, rcx
 * 00000001C000552B: mov     ebp, 33h ; '3'
 * 00000001C0005530: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005537: mov     eax, [rcx+2Ch]
 * 00000001C000553A: test    al, 4
 * 00000001C000553C: jz      short loc_1C0005588
 * 00000001C000553E: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005542: jb      short loc_1C0005588
 * 00000001C0005544: and     qword ptr [r11-18h], 0
 * 00000001C0005549: lea     rdx, [r11+38h]
 * 00000001C000554D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005554: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000555B: mov     rcx, [rcx+18h]
 * 00000001C000555F: mov     qword ptr [r11-20h], 4
 * 00000001C0005567: mov     [r11-28h], rdx
 * 00000001C000556B: lea     rdx, [r11+30h]
 * 00000001C000556F: mov     qword ptr [r11-30h], 8
 * 00000001C0005577: mov     [r11-38h], rdx
 * 00000001C000557B: lea     edx, [rbp-8]
 * 00000001C000557E: movzx   r9d, bp
 * 00000001C0005582: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005588: and     [rsp+58h+var_10], 0
 * 00000001C000558E: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005596: mov     [rsp+58h+var_18], 4
 * 00000001C000559F: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00055A6: mov     [rsp+58h+var_20], rax
 * 00000001C00055AB: mov     edx, 5
 * 00000001C00055B0: lea     rax, [rsp+58h+arg_28]
 * 00000001C00055B8: mov     [rsp+58h+var_28], 8
 * 00000001C00055C1: mov     [rsp+58h+var_30], rax
 * 00000001C00055C6: mov     rcx, rbx
 * 00000001C00055C9: mov     [rsp+58h+var_38], bp
 * 00000001C00055CE: lea     r8d, [rdx-2]
 * 00000001C00055D2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00055D8: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00055DD: add     rsp, 50h
 * 00000001C00055E1: pop     rbp
 * 00000001C00055E2: retn
 */
