/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C005462C
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00A0B5C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C005462C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005462C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005462C: mov     r11, rsp
 * 00000001C005462F: mov     [r11+8], rbx
 * 00000001C0054633: mov     [r11+10h], rsi
 * 00000001C0054637: push    rdi
 * 00000001C0054638: sub     rsp, 50h
 * 00000001C005463C: mov     rbx, rcx
 * 00000001C005463F: mov     esi, 28h ; '('
 * 00000001C0054644: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005464B: lea     edi, [rsi-24h]
 * 00000001C005464E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054655: jz      short loc_1C0054699
 * 00000001C0054657: cmp     byte ptr [rcx+29h], 2
 * 00000001C005465B: jb      short loc_1C0054699
 * 00000001C005465D: and     qword ptr [r11-18h], 0
 * 00000001C0054662: lea     rdx, [r11+38h]
 * 00000001C0054666: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005466D: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054674: mov     rcx, [rcx+18h]
 * 00000001C0054678: mov     [r11-20h], rdi
 * 00000001C005467C: mov     [r11-28h], rdx
 * 00000001C0054680: lea     rdx, [r11+30h]
 * 00000001C0054684: mov     [r11-30h], rdi
 * 00000001C0054688: mov     [r11-38h], rdx
 * 00000001C005468C: lea     edx, [rsi+3]
 * 00000001C005468F: movzx   r9d, si
 * 00000001C0054693: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054699: and     [rsp+58h+var_10], 0
 * 00000001C005469F: lea     rax, [rsp+58h+arg_30]
 * 00000001C00546A7: mov     [rsp+58h+var_18], rdi
 * 00000001C00546AC: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C00546B3: mov     [rsp+58h+var_20], rax
 * 00000001C00546B8: mov     edx, 2
 * 00000001C00546BD: lea     rax, [rsp+58h+arg_28]
 * 00000001C00546C5: mov     [rsp+58h+var_28], rdi
 * 00000001C00546CA: mov     [rsp+58h+var_30], rax
 * 00000001C00546CF: mov     rcx, rbx
 * 00000001C00546D2: mov     [rsp+58h+var_38], si
 * 00000001C00546D7: lea     r8d, [rdx+13h]
 * 00000001C00546DB: call    cs:__imp_WppAutoLogTrace
 * 00000001C00546E1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00546E6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00546EB: add     rsp, 50h
 * 00000001C00546EF: pop     rdi
 * 00000001C00546F0: retn
 */
