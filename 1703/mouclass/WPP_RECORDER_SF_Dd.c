/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0002520
 * Callers:
 *     MouConfiguration @ 0x1C000F030 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0002520
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002520
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002520: mov     [rsp+arg_0], rbx
 * 00000001C0002525: push    rsi
 * 00000001C0002526: sub     rsp, 50h
 * 00000001C000252A: mov     rbx, rcx
 * 00000001C000252D: mov     esi, 41h ; 'A'
 * 00000001C0002532: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002539: mov     eax, [rcx+2Ch]
 * 00000001C000253C: test    al, 1
 * 00000001C000253E: jnz     loc_1C000409C
 * 00000001C0002544: mov     [rsp+58h+var_10], 0
 * 00000001C000254D: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002555: mov     [rsp+58h+var_18], 4
 * 00000001C000255E: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0002565: mov     [rsp+58h+var_20], rax
 * 00000001C000256A: mov     edx, 4
 * 00000001C000256F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002577: mov     [rsp+58h+var_28], 4
 * 00000001C0002580: mov     [rsp+58h+var_30], rax
 * 00000001C0002585: mov     rcx, rbx
 * 00000001C0002588: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000258D: lea     r8d, [rdx-3]
 * 00000001C0002591: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002597: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000259C: add     rsp, 50h
 * 00000001C00025A0: pop     rsi
 * 00000001C00025A1: retn
 * 00000001C000409C: cmp     byte ptr [rcx+29h], 4
 * 00000001C00040A0: jb      loc_1C0002544
 * 00000001C00040A6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00040AD: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00040B5: mov     rcx, [rcx+18h]
 * 00000001C00040B9: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00040C0: mov     [rsp+58h+var_18], 0
 * 00000001C00040C9: mov     [rsp+58h+var_20], 4
 * 00000001C00040D2: mov     [rsp+58h+var_28], rdx
 * 00000001C00040D7: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00040DF: mov     [rsp+58h+var_30], 4
 * 00000001C00040E8: mov     [rsp+58h+var_38], rdx
 * 00000001C00040ED: mov     edx, 2Bh ; '+'
 * 00000001C00040F2: movzx   r9d, si
 * 00000001C00040F6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00040FC: nop
 * 00000001C00040FD: jmp     loc_1C0002544
 */
