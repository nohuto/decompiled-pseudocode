/*
 * XREFs of WPP_RECORDER_SF_DDPP @ 0x1C00341C8
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0032CFC (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDPP @ 0x1C00341C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00341C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00341C8: mov     r11, rsp
 * 00000001C00341CB: mov     [r11+8], rbx
 * 00000001C00341CF: mov     [r11+10h], rbp
 * 00000001C00341D3: mov     [r11+18h], rsi
 * 00000001C00341D7: push    rdi
 * 00000001C00341D8: sub     rsp, 70h
 * 00000001C00341DC: mov     ebp, 18h
 * 00000001C00341E1: mov     rbx, rcx
 * 00000001C00341E4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00341EB: lea     edi, [rbp-10h]
 * 00000001C00341EE: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00341F5: lea     esi, [rbp-14h]
 * 00000001C00341F8: jz      short loc_1C0034254
 * 00000001C00341FA: cmp     byte ptr [rcx+29h], 2
 * 00000001C00341FE: jb      short loc_1C0034254
 * 00000001C0034200: and     qword ptr [r11-18h], 0
 * 00000001C0034205: lea     rdx, [r11+48h]
 * 00000001C0034209: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0034210: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C0034217: mov     rcx, [rcx+18h]
 * 00000001C003421B: mov     [r11-20h], rdi
 * 00000001C003421F: mov     [r11-28h], rdx
 * 00000001C0034223: lea     rdx, [r11+40h]
 * 00000001C0034227: mov     [r11-30h], rdi
 * 00000001C003422B: mov     [r11-38h], rdx
 * 00000001C003422F: lea     rdx, [r11+38h]
 * 00000001C0034233: mov     [r11-40h], rsi
 * 00000001C0034237: mov     [r11-48h], rdx
 * 00000001C003423B: lea     rdx, [r11+30h]
 * 00000001C003423F: mov     [r11-50h], rsi
 * 00000001C0034243: mov     [r11-58h], rdx
 * 00000001C0034247: lea     edx, [rbp+13h]
 * 00000001C003424A: movzx   r9d, bp
 * 00000001C003424E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0034254: and     [rsp+78h+var_10], 0
 * 00000001C003425A: lea     rax, [rsp+78h+arg_40]
 * 00000001C0034262: mov     [rsp+78h+var_18], rdi
 * 00000001C0034267: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C003426E: mov     [rsp+78h+var_20], rax
 * 00000001C0034273: mov     edx, 2
 * 00000001C0034278: mov     [rsp+78h+var_28], rdi
 * 00000001C003427D: lea     rax, [rsp+78h+arg_38]
 * 00000001C0034285: mov     [rsp+78h+var_30], rax
 * 00000001C003428A: mov     rcx, rbx
 * 00000001C003428D: mov     [rsp+78h+var_38], rsi
 * 00000001C0034292: lea     rax, [rsp+78h+arg_30]
 * 00000001C003429A: mov     [rsp+78h+var_40], rax
 * 00000001C003429F: lea     r8d, [rdx+13h]
 * 00000001C00342A3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00342AB: mov     [rsp+78h+var_48], rsi
 * 00000001C00342B0: mov     [rsp+78h+var_50], rax
 * 00000001C00342B5: mov     [rsp+78h+var_58], bp
 * 00000001C00342BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00342C0: lea     r11, [rsp+78h+var_8]
 * 00000001C00342C5: mov     rbx, [r11+10h]
 * 00000001C00342C9: mov     rbp, [r11+18h]
 * 00000001C00342CD: mov     rsi, [r11+20h]
 * 00000001C00342D1: mov     rsp, r11
 * 00000001C00342D4: pop     rdi
 * 00000001C00342D5: retn
 */
