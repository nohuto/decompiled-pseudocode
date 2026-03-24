/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005474
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C0001300 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0004E60 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005474
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005474
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005474: mov     r11, rsp
 * 00000001C0005477: mov     [r11+8], rbx
 * 00000001C000547B: push    rdi
 * 00000001C000547C: sub     rsp, 40h
 * 00000001C0005480: mov     rdi, rcx
 * 00000001C0005483: movzx   ebx, r9w
 * 00000001C0005487: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000548E: mov     eax, [rcx+2Ch]
 * 00000001C0005491: test    al, 10h
 * 00000001C0005493: jz      short loc_1C00054D1
 * 00000001C0005495: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005499: jb      short loc_1C00054D1
 * 00000001C000549B: and     qword ptr [r11-18h], 0
 * 00000001C00054A0: lea     rdx, [r11+30h]
 * 00000001C00054A4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00054AB: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00054B2: mov     rcx, [rcx+18h]
 * 00000001C00054B6: mov     qword ptr [r11-20h], 8
 * 00000001C00054BE: mov     [r11-28h], rdx
 * 00000001C00054C2: mov     edx, 2Bh ; '+'
 * 00000001C00054C7: movzx   r9d, bx
 * 00000001C00054CB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00054D1: and     [rsp+48h+var_10], 0
 * 00000001C00054D7: lea     rax, [rsp+48h+arg_28]
 * 00000001C00054DC: mov     edx, 2
 * 00000001C00054E1: mov     [rsp+48h+var_18], 8
 * 00000001C00054EA: mov     [rsp+48h+var_20], rax
 * 00000001C00054EF: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C00054F6: mov     rcx, rdi
 * 00000001C00054F9: mov     [rsp+48h+var_28], bx
 * 00000001C00054FE: lea     r8d, [rdx+3]
 * 00000001C0005502: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005508: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000550D: add     rsp, 40h
 * 00000001C0005511: pop     rdi
 * 00000001C0005512: retn
 */
