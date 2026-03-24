/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005534
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C0001300 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004F20 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005534
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005534
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005534: mov     r11, rsp
 * 00000001C0005537: mov     [r11+8], rbx
 * 00000001C000553B: push    rdi
 * 00000001C000553C: sub     rsp, 40h
 * 00000001C0005540: mov     rdi, rcx
 * 00000001C0005543: movzx   ebx, r9w
 * 00000001C0005547: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000554E: mov     eax, [rcx+2Ch]
 * 00000001C0005551: test    al, 10h
 * 00000001C0005553: jz      short loc_1C0005591
 * 00000001C0005555: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005559: jb      short loc_1C0005591
 * 00000001C000555B: and     qword ptr [r11-18h], 0
 * 00000001C0005560: lea     rdx, [r11+30h]
 * 00000001C0005564: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000556B: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005572: mov     rcx, [rcx+18h]
 * 00000001C0005576: mov     qword ptr [r11-20h], 8
 * 00000001C000557E: mov     [r11-28h], rdx
 * 00000001C0005582: mov     edx, 2Bh ; '+'
 * 00000001C0005587: movzx   r9d, bx
 * 00000001C000558B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005591: and     [rsp+48h+var_10], 0
 * 00000001C0005597: lea     rax, [rsp+48h+arg_28]
 * 00000001C000559C: mov     edx, 2
 * 00000001C00055A1: mov     [rsp+48h+var_18], 8
 * 00000001C00055AA: mov     [rsp+48h+var_20], rax
 * 00000001C00055AF: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00055B6: mov     rcx, rdi
 * 00000001C00055B9: mov     [rsp+48h+var_28], bx
 * 00000001C00055BE: lea     r8d, [rdx+3]
 * 00000001C00055C2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00055C8: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00055CD: add     rsp, 40h
 * 00000001C00055D1: pop     rdi
 * 00000001C00055D2: retn
 */
