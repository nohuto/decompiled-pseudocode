/*
 * XREFs of WPP_RECORDER_SF_qLL @ 0x1C00056AC
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00029C0 (KeyboardClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLL @ 0x1C00056AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00056AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00056AC: mov     r11, rsp
 * 00000001C00056AF: mov     [r11+8], rbx
 * 00000001C00056B3: mov     [r11+10h], rsi
 * 00000001C00056B7: push    rdi
 * 00000001C00056B8: sub     rsp, 60h
 * 00000001C00056BC: mov     rdi, rcx
 * 00000001C00056BF: mov     esi, 4
 * 00000001C00056C4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00056CB: movzx   ebx, r9w
 * 00000001C00056CF: mov     eax, [rcx+2Ch]
 * 00000001C00056D2: test    sil, al
 * 00000001C00056D5: jz      short loc_1C0005729
 * 00000001C00056D7: cmp     byte ptr [rcx+29h], 5
 * 00000001C00056DB: jb      short loc_1C0005729
 * 00000001C00056DD: and     qword ptr [r11-18h], 0
 * 00000001C00056E2: lea     rdx, [r11+40h]
 * 00000001C00056E6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00056ED: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00056F4: mov     rcx, [rcx+18h]
 * 00000001C00056F8: mov     [r11-20h], rsi
 * 00000001C00056FC: mov     [r11-28h], rdx
 * 00000001C0005700: lea     rdx, [r11+38h]
 * 00000001C0005704: mov     [r11-30h], rsi
 * 00000001C0005708: mov     [r11-38h], rdx
 * 00000001C000570C: lea     rdx, [r11+30h]
 * 00000001C0005710: mov     qword ptr [r11-40h], 8
 * 00000001C0005718: mov     [r11-48h], rdx
 * 00000001C000571C: lea     edx, [rsi+27h]
 * 00000001C000571F: movzx   r9d, bx
 * 00000001C0005723: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005729: and     [rsp+68h+var_10], 0
 * 00000001C000572F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0005737: mov     [rsp+68h+var_18], rsi
 * 00000001C000573C: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0005743: mov     [rsp+68h+var_20], rax
 * 00000001C0005748: mov     edx, 5
 * 00000001C000574D: mov     [rsp+68h+var_28], rsi
 * 00000001C0005752: lea     rax, [rsp+68h+arg_30]
 * 00000001C000575A: mov     [rsp+68h+var_30], rax
 * 00000001C000575F: mov     rcx, rdi
 * 00000001C0005762: lea     rax, [rsp+68h+arg_28]
 * 00000001C000576A: mov     [rsp+68h+var_38], 8
 * 00000001C0005773: mov     [rsp+68h+var_40], rax
 * 00000001C0005778: lea     r8d, [rdx-2]
 * 00000001C000577C: mov     [rsp+68h+var_48], bx
 * 00000001C0005781: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005787: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000578C: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0005791: add     rsp, 60h
 * 00000001C0005795: pop     rdi
 * 00000001C0005796: retn
 */
