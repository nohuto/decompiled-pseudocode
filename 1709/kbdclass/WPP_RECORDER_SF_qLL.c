/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C00055EC
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C0004A20 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C00055EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00055EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00055EC: mov     r11, rsp
 * 00000001C00055EF: mov     [r11+8], rbx
 * 00000001C00055F3: mov     [r11+10h], rsi
 * 00000001C00055F7: push    rdi
 * 00000001C00055F8: sub     rsp, 60h
 * 00000001C00055FC: mov     rdi, rcx
 * 00000001C00055FF: mov     esi, 4
 * 00000001C0005604: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000560B: movzx   ebx, r9w
 * 00000001C000560F: mov     eax, [rcx+2Ch]
 * 00000001C0005612: test    sil, al
 * 00000001C0005615: jz      short loc_1C0005669
 * 00000001C0005617: cmp     byte ptr [rcx+29h], 5
 * 00000001C000561B: jb      short loc_1C0005669
 * 00000001C000561D: and     qword ptr [r11-18h], 0
 * 00000001C0005622: lea     rdx, [r11+40h]
 * 00000001C0005626: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000562D: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005634: mov     rcx, [rcx+18h]
 * 00000001C0005638: mov     [r11-20h], rsi
 * 00000001C000563C: mov     [r11-28h], rdx
 * 00000001C0005640: lea     rdx, [r11+38h]
 * 00000001C0005644: mov     [r11-30h], rsi
 * 00000001C0005648: mov     [r11-38h], rdx
 * 00000001C000564C: lea     rdx, [r11+30h]
 * 00000001C0005650: mov     qword ptr [r11-40h], 8
 * 00000001C0005658: mov     [r11-48h], rdx
 * 00000001C000565C: lea     edx, [rsi+27h]
 * 00000001C000565F: movzx   r9d, bx
 * 00000001C0005663: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005669: and     [rsp+68h+var_10], 0
 * 00000001C000566F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005677: mov     [rsp+68h+var_18], rsi
 * 00000001C000567C: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005683: mov     [rsp+68h+var_20], rax
 * 00000001C0005688: mov     edx, 5
 * 00000001C000568D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005692: lea     rax, [rsp+68h+arg_30]
 * 00000001C000569A: mov     [rsp+68h+var_30], rax
 * 00000001C000569F: mov     rcx, rdi
 * 00000001C00056A2: lea     rax, [rsp+68h+arg_28]
 * 00000001C00056AA: mov     [rsp+68h+var_38], 8
 * 00000001C00056B3: mov     [rsp+68h+var_40], rax
 * 00000001C00056B8: lea     r8d, [rdx-2]
 * 00000001C00056BC: mov     [rsp+68h+var_48], bx
 * 00000001C00056C1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00056C7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00056CC: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00056D1: add     rsp, 60h
 * 00000001C00056D5: pop     rdi
 * 00000001C00056D6: retn
 */
