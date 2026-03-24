/*
 * XREFs of WPP_RECORDER_SF_qqDD @ 0x1C003B900
 * Callers:
 *     ACPITableNotifyFreeObject @ 0x1C003B510 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDD @ 0x1C003B900
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B900
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B900: mov     r11, rsp
 * 00000001C003B903: mov     [r11+8], rbx
 * 00000001C003B907: mov     [r11+10h], rbp
 * 00000001C003B90B: mov     [r11+18h], rsi
 * 00000001C003B90F: push    rdi
 * 00000001C003B910: sub     rsp, 70h
 * 00000001C003B914: mov     edi, 4
 * 00000001C003B919: mov     rbx, rcx
 * 00000001C003B91C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B923: lea     ebp, [rdi+8]
 * 00000001C003B926: test    dword ptr [rcx+2Ch], 200000h
 * 00000001C003B92D: lea     esi, [rdi+4]
 * 00000001C003B930: jz      short loc_1C003B98C
 * 00000001C003B932: cmp     [rcx+29h], dil
 * 00000001C003B936: jb      short loc_1C003B98C
 * 00000001C003B938: and     qword ptr [r11-18h], 0
 * 00000001C003B93D: lea     rdx, [r11+48h]
 * 00000001C003B941: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B948: lea     r8, WPP_3c7d9887b9043d14dda536222ad8cbda_Traceguids
 * 00000001C003B94F: mov     rcx, [rcx+18h]
 * 00000001C003B953: mov     [r11-20h], rdi
 * 00000001C003B957: mov     [r11-28h], rdx
 * 00000001C003B95B: lea     rdx, [r11+40h]
 * 00000001C003B95F: mov     [r11-30h], rdi
 * 00000001C003B963: mov     [r11-38h], rdx
 * 00000001C003B967: lea     rdx, [r11+38h]
 * 00000001C003B96B: mov     [r11-40h], rsi
 * 00000001C003B96F: mov     [r11-48h], rdx
 * 00000001C003B973: lea     rdx, [r11+30h]
 * 00000001C003B977: mov     [r11-50h], rsi
 * 00000001C003B97B: mov     [r11-58h], rdx
 * 00000001C003B97F: lea     edx, [rdi+27h]
 * 00000001C003B982: movzx   r9d, bp
 * 00000001C003B986: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B98C: and     [rsp+78h+var_10], 0
 * 00000001C003B992: lea     rax, [rsp+78h+arg_40]
 * 00000001C003B99A: mov     [rsp+78h+var_18], rdi
 * 00000001C003B99F: lea     r9, WPP_3c7d9887b9043d14dda536222ad8cbda_Traceguids
 * 00000001C003B9A6: mov     [rsp+78h+var_20], rax
 * 00000001C003B9AB: mov     r8d, 16h
 * 00000001C003B9B1: mov     [rsp+78h+var_28], rdi
 * 00000001C003B9B6: lea     rax, [rsp+78h+arg_38]
 * 00000001C003B9BE: mov     [rsp+78h+var_30], rax
 * 00000001C003B9C3: mov     edx, edi
 * 00000001C003B9C5: mov     [rsp+78h+var_38], rsi
 * 00000001C003B9CA: lea     rax, [rsp+78h+arg_30]
 * 00000001C003B9D2: mov     [rsp+78h+var_40], rax
 * 00000001C003B9D7: mov     rcx, rbx
 * 00000001C003B9DA: lea     rax, [rsp+78h+arg_28]
 * 00000001C003B9E2: mov     [rsp+78h+var_48], rsi
 * 00000001C003B9E7: mov     [rsp+78h+var_50], rax
 * 00000001C003B9EC: mov     [rsp+78h+var_58], bp
 * 00000001C003B9F1: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B9F7: lea     r11, [rsp+78h+var_8]
 * 00000001C003B9FC: mov     rbx, [r11+10h]
 * 00000001C003BA00: mov     rbp, [r11+18h]
 * 00000001C003BA04: mov     rsi, [r11+20h]
 * 00000001C003BA08: mov     rsp, r11
 * 00000001C003BA0B: pop     rdi
 * 00000001C003BA0C: retn
 */
