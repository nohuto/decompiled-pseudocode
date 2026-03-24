/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00051B8
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001BF0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0004AF0 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002BA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00051B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00051B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00051B8: mov     r11, rsp
 * 00000001C00051BB: mov     [r11+8], rbx
 * 00000001C00051BF: push    rdi
 * 00000001C00051C0: sub     rsp, 40h
 * 00000001C00051C4: mov     rdi, rcx
 * 00000001C00051C7: movzx   ebx, r9w
 * 00000001C00051CB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00051D2: mov     eax, [rcx+2Ch]
 * 00000001C00051D5: test    al, 10h
 * 00000001C00051D7: jz      short loc_1C0005215
 * 00000001C00051D9: cmp     byte ptr [rcx+29h], 2
 * 00000001C00051DD: jb      short loc_1C0005215
 * 00000001C00051DF: and     qword ptr [r11-18h], 0
 * 00000001C00051E4: lea     rdx, [r11+30h]
 * 00000001C00051E8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00051EF: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00051F6: mov     rcx, [rcx+18h]
 * 00000001C00051FA: mov     qword ptr [r11-20h], 8
 * 00000001C0005202: mov     [r11-28h], rdx
 * 00000001C0005206: mov     edx, 2Bh ; '+'
 * 00000001C000520B: movzx   r9d, bx
 * 00000001C000520F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005215: and     [rsp+48h+var_10], 0
 * 00000001C000521B: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005220: mov     edx, 2
 * 00000001C0005225: mov     [rsp+48h+var_18], 8
 * 00000001C000522E: mov     [rsp+48h+var_20], rax
 * 00000001C0005233: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C000523A: mov     rcx, rdi
 * 00000001C000523D: mov     [rsp+48h+var_28], bx
 * 00000001C0005242: lea     r8d, [rdx+3]
 * 00000001C0005246: call    cs:__imp_WppAutoLogTrace
 * 00000001C000524C: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005251: add     rsp, 40h
 * 00000001C0005255: pop     rdi
 * 00000001C0005256: retn
 */
