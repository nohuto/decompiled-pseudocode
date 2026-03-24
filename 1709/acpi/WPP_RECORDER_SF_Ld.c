/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C00577D0
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C00577D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00577D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00577D0: mov     r11, rsp
 * 00000001C00577D3: mov     [r11+8], rbx
 * 00000001C00577D7: mov     [r11+10h], rsi
 * 00000001C00577DB: push    rdi
 * 00000001C00577DC: sub     rsp, 50h
 * 00000001C00577E0: mov     rbx, rcx
 * 00000001C00577E3: mov     esi, 21h ; '!'
 * 00000001C00577E8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00577EF: lea     edi, [rsi-1Dh]
 * 00000001C00577F2: test    dword ptr [rcx+2Ch], 400h
 * 00000001C00577F9: jz      short loc_1C005783D
 * 00000001C00577FB: cmp     byte ptr [rcx+29h], 2
 * 00000001C00577FF: jb      short loc_1C005783D
 * 00000001C0057801: and     qword ptr [r11-18h], 0
 * 00000001C0057806: lea     rdx, [r11+38h]
 * 00000001C005780A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057811: lea     r8, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0057818: mov     rcx, [rcx+18h]
 * 00000001C005781C: mov     [r11-20h], rdi
 * 00000001C0057820: mov     [r11-28h], rdx
 * 00000001C0057824: lea     rdx, [r11+30h]
 * 00000001C0057828: mov     [r11-30h], rdi
 * 00000001C005782C: mov     [r11-38h], rdx
 * 00000001C0057830: lea     edx, [rsi+0Ah]
 * 00000001C0057833: movzx   r9d, si
 * 00000001C0057837: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005783D: and     [rsp+58h+var_10], 0
 * 00000001C0057843: lea     rax, [rsp+58h+arg_30]
 * 00000001C005784B: mov     [rsp+58h+var_18], rdi
 * 00000001C0057850: lea     r9, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0057857: mov     [rsp+58h+var_20], rax
 * 00000001C005785C: mov     edx, 2
 * 00000001C0057861: lea     rax, [rsp+58h+arg_28]
 * 00000001C0057869: mov     [rsp+58h+var_28], rdi
 * 00000001C005786E: mov     [rsp+58h+var_30], rax
 * 00000001C0057873: mov     rcx, rbx
 * 00000001C0057876: mov     [rsp+58h+var_38], si
 * 00000001C005787B: lea     r8d, [rdx+9]
 * 00000001C005787F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0057885: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005788A: mov     rsi, [rsp+58h+arg_8]
 * 00000001C005788F: add     rsp, 50h
 * 00000001C0057893: pop     rdi
 * 00000001C0057894: retn
 */
