/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C00055DC
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00029C0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C00055DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00055DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00055DC: mov     r11, rsp
 * 00000001C00055DF: mov     [r11+8], rbx
 * 00000001C00055E3: push    rbp
 * 00000001C00055E4: sub     rsp, 50h
 * 00000001C00055E8: mov     rbx, rcx
 * 00000001C00055EB: mov     ebp, 33h ; '3'
 * 00000001C00055F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00055F7: mov     eax, [rcx+2Ch]
 * 00000001C00055FA: test    al, 4
 * 00000001C00055FC: jz      short loc_1C0005648
 * 00000001C00055FE: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005602: jb      short loc_1C0005648
 * 00000001C0005604: and     qword ptr [r11-18h], 0
 * 00000001C0005609: lea     rdx, [r11+38h]
 * 00000001C000560D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005614: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000561B: mov     rcx, [rcx+18h]
 * 00000001C000561F: mov     qword ptr [r11-20h], 4
 * 00000001C0005627: mov     [r11-28h], rdx
 * 00000001C000562B: lea     rdx, [r11+30h]
 * 00000001C000562F: mov     qword ptr [r11-30h], 8
 * 00000001C0005637: mov     [r11-38h], rdx
 * 00000001C000563B: lea     edx, [rbp-8]
 * 00000001C000563E: movzx   r9d, bp
 * 00000001C0005642: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005648: and     [rsp+58h+var_10], 0
 * 00000001C000564E: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005656: mov     [rsp+58h+var_18], 4
 * 00000001C000565F: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005666: mov     [rsp+58h+var_20], rax
 * 00000001C000566B: mov     edx, 5
 * 00000001C0005670: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005678: mov     [rsp+58h+var_28], 8
 * 00000001C0005681: mov     [rsp+58h+var_30], rax
 * 00000001C0005686: mov     rcx, rbx
 * 00000001C0005689: mov     [rsp+58h+var_38], bp
 * 00000001C000568E: lea     r8d, [rdx-2]
 * 00000001C0005692: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005698: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000569D: add     rsp, 50h
 * 00000001C00056A1: pop     rbp
 * 00000001C00056A2: retn
 */
