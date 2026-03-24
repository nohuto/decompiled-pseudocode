/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005260
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00016C0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0005260
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005260
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005260: mov     r11, rsp
 * 00000001C0005263: mov     [r11+8], rbx
 * 00000001C0005267: push    rbp
 * 00000001C0005268: sub     rsp, 50h
 * 00000001C000526C: mov     rbx, rcx
 * 00000001C000526F: mov     ebp, 33h ; '3'
 * 00000001C0005274: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000527B: mov     eax, [rcx+2Ch]
 * 00000001C000527E: test    al, 4
 * 00000001C0005280: jz      short loc_1C00052CC
 * 00000001C0005282: cmp     byte ptr [rcx+29h], 5
 * 00000001C0005286: jb      short loc_1C00052CC
 * 00000001C0005288: and     qword ptr [r11-18h], 0
 * 00000001C000528D: lea     rdx, [r11+38h]
 * 00000001C0005291: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005298: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C000529F: mov     rcx, [rcx+18h]
 * 00000001C00052A3: mov     qword ptr [r11-20h], 4
 * 00000001C00052AB: mov     [r11-28h], rdx
 * 00000001C00052AF: lea     rdx, [r11+30h]
 * 00000001C00052B3: mov     qword ptr [r11-30h], 8
 * 00000001C00052BB: mov     [r11-38h], rdx
 * 00000001C00052BF: lea     edx, [rbp-8]
 * 00000001C00052C2: movzx   r9d, bp
 * 00000001C00052C6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00052CC: and     [rsp+58h+var_10], 0
 * 00000001C00052D2: lea     rax, [rsp+58h+arg_30]
 * 00000001C00052DA: mov     [rsp+58h+var_18], 4
 * 00000001C00052E3: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00052EA: mov     [rsp+58h+var_20], rax
 * 00000001C00052EF: mov     edx, 5
 * 00000001C00052F4: lea     rax, [rsp+58h+arg_28]
 * 00000001C00052FC: mov     [rsp+58h+var_28], 8
 * 00000001C0005305: mov     [rsp+58h+var_30], rax
 * 00000001C000530A: mov     rcx, rbx
 * 00000001C000530D: mov     [rsp+58h+var_38], bp
 * 00000001C0005312: lea     r8d, [rdx-2]
 * 00000001C0005316: call    cs:__imp_WppAutoLogTrace
 * 00000001C000531C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005321: add     rsp, 50h
 * 00000001C0005325: pop     rbp
 * 00000001C0005326: retn
 */
