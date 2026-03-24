/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00025B0
 * Callers:
 *     MouseClassCreate @ 0x1C0001280 (MouseClassCreate.c)
 *     MouseClassPower @ 0x1C0001F60 (MouseClassPower.c)
 *     MouseClassHandleRead @ 0x1C0002450 (MouseClassHandleRead.c)
 *     MouseClassReadCopyData @ 0x1C0004774 (MouseClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00025B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00025B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00025B0: mov     [rsp+arg_0], rbx
 * 00000001C00025B5: mov     [rsp+arg_8], rbp
 * 00000001C00025BA: mov     [rsp+arg_10], rsi
 * 00000001C00025BF: mov     [rsp+arg_18], rdi
 * 00000001C00025C4: push    r14
 * 00000001C00025C6: sub     rsp, 50h
 * 00000001C00025CA: mov     ebx, r8d
 * 00000001C00025CD: mov     r14, rcx
 * 00000001C00025D0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00025D7: movzx   ebp, r9w
 * 00000001C00025DB: mov     edi, r8d
 * 00000001C00025DE: movzx   esi, dl
 * 00000001C00025E1: shr     rdi, 10h
 * 00000001C00025E5: lea     r11d, [rbx-1]
 * 00000001C00025E9: mov     r8d, r11d
 * 00000001C00025EC: and     r11d, 1Fh
 * 00000001C00025F0: shr     r8, 5
 * 00000001C00025F4: and     r8d, 7FFh
 * 00000001C00025FB: lea     rax, [rdi+rdi*4]
 * 00000001C00025FF: lea     r10, [r8+rax*4]
 * 00000001C0002603: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0002608: bt      eax, r11d
 * 00000001C000260C: jb      loc_1C0004102
 * 00000001C0002612: mov     [rsp+58h+var_10], 0
 * 00000001C000261B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002623: mov     [rsp+58h+var_18], 8
 * 00000001C000262C: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0002633: mov     [rsp+58h+var_20], rax
 * 00000001C0002638: mov     r8d, ebx
 * 00000001C000263B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002643: mov     [rsp+58h+var_28], 8
 * 00000001C000264C: mov     [rsp+58h+var_30], rax
 * 00000001C0002651: mov     rcx, r14
 * 00000001C0002654: movzx   edx, sil
 * 00000001C0002658: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000265D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002663: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002668: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000266D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002672: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002677: add     rsp, 50h
 * 00000001C000267B: pop     r14
 * 00000001C000267D: retn
 * 00000001C0004102: lea     rax, [rdi+rdi*4]
 * 00000001C0004106: shl     rax, 4
 * 00000001C000410A: add     rcx, rax
 * 00000001C000410D: cmp     [rcx+29h], sil
 * 00000001C0004111: jb      loc_1C0002612
 * 00000001C0004117: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000411E: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0004126: mov     rcx, [rcx+18h]
 * 00000001C000412A: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C0004131: mov     [rsp+58h+var_18], 0
 * 00000001C000413A: mov     [rsp+58h+var_20], 8
 * 00000001C0004143: mov     [rsp+58h+var_28], rdx
 * 00000001C0004148: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0004150: mov     [rsp+58h+var_30], 8
 * 00000001C0004159: mov     [rsp+58h+var_38], rdx
 * 00000001C000415E: mov     edx, 2Bh ; '+'
 * 00000001C0004163: movzx   r9d, bp
 * 00000001C0004167: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000416D: nop
 * 00000001C000416E: jmp     loc_1C0002612
 */
