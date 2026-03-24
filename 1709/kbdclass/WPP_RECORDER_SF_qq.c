/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00017D0
 * Callers:
 *     KeyboardClassPowerComplete @ 0x1C0001010 (KeyboardClassPowerComplete.c)
 *     KeyboardClassSetLedsComplete @ 0x1C00013E0 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassRead @ 0x1C0001520 (KeyboardClassRead.c)
 *     KeyboardClassCreate @ 0x1C00018B0 (KeyboardClassCreate.c)
 *     KeyboardClassPower @ 0x1C0001BA0 (KeyboardClassPower.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004180 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassReadCopyData @ 0x1C00046A0 (KeyboardClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00017D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00017D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00017D0: mov     [rsp+arg_0], rbx
 * 00000001C00017D5: mov     [rsp+arg_8], rbp
 * 00000001C00017DA: mov     [rsp+arg_10], rsi
 * 00000001C00017DF: mov     [rsp+arg_18], rdi
 * 00000001C00017E4: push    r14
 * 00000001C00017E6: sub     rsp, 50h
 * 00000001C00017EA: mov     ebx, r8d
 * 00000001C00017ED: mov     r14, rcx
 * 00000001C00017F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00017F7: movzx   ebp, r9w
 * 00000001C00017FB: mov     edi, r8d
 * 00000001C00017FE: movzx   esi, dl
 * 00000001C0001801: shr     rdi, 10h
 * 00000001C0001805: lea     r11d, [rbx-1]
 * 00000001C0001809: mov     r8d, r11d
 * 00000001C000180C: and     r11d, 1Fh
 * 00000001C0001810: shr     r8, 5
 * 00000001C0001814: and     r8d, 7FFh
 * 00000001C000181B: lea     rax, [rdi+rdi*4]
 * 00000001C000181F: lea     r10, [r8+rax*4]
 * 00000001C0001823: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0001828: bt      eax, r11d
 * 00000001C000182C: jb      loc_1C00033C0
 * 00000001C0001832: mov     [rsp+58h+var_10], 0
 * 00000001C000183B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0001843: mov     [rsp+58h+var_18], 8
 * 00000001C000184C: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0001853: mov     [rsp+58h+var_20], rax
 * 00000001C0001858: mov     r8d, ebx
 * 00000001C000185B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0001863: mov     [rsp+58h+var_28], 8
 * 00000001C000186C: mov     [rsp+58h+var_30], rax
 * 00000001C0001871: mov     rcx, r14
 * 00000001C0001874: movzx   edx, sil
 * 00000001C0001878: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000187D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001883: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001888: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000188D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001892: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0001897: add     rsp, 50h
 * 00000001C000189B: pop     r14
 * 00000001C000189D: retn
 * 00000001C00033C0: lea     rax, [rdi+rdi*4]
 * 00000001C00033C4: shl     rax, 4
 * 00000001C00033C8: add     rcx, rax
 * 00000001C00033CB: cmp     [rcx+29h], sil
 * 00000001C00033CF: jb      loc_1C0001832
 * 00000001C00033D5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00033DC: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00033E4: mov     rcx, [rcx+18h]
 * 00000001C00033E8: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00033EF: mov     [rsp+58h+var_18], 0
 * 00000001C00033F8: mov     [rsp+58h+var_20], 8
 * 00000001C0003401: mov     [rsp+58h+var_28], rdx
 * 00000001C0003406: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000340E: mov     [rsp+58h+var_30], 8
 * 00000001C0003417: mov     [rsp+58h+var_38], rdx
 * 00000001C000341C: mov     edx, 2Bh ; '+'
 * 00000001C0003421: movzx   r9d, bp
 * 00000001C0003425: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000342B: nop
 * 00000001C000342C: jmp     loc_1C0001832
 */
