/*
 * XREFs of WPP_RECORDER_SF_DDPP @ 0x1C0054518
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005328C (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDPP @ 0x1C0054518
 * Reason: Hex-Rays returned no pseudocode for 0x1C0054518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0054518: mov     r11, rsp
 * 00000001C005451B: mov     [r11+8], rbx
 * 00000001C005451F: mov     [r11+10h], rbp
 * 00000001C0054523: mov     [r11+18h], rsi
 * 00000001C0054527: push    rdi
 * 00000001C0054528: sub     rsp, 70h
 * 00000001C005452C: mov     ebp, 18h
 * 00000001C0054531: mov     rbx, rcx
 * 00000001C0054534: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005453B: lea     edi, [rbp-10h]
 * 00000001C005453E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054545: lea     esi, [rbp-14h]
 * 00000001C0054548: jz      short loc_1C00545A4
 * 00000001C005454A: cmp     byte ptr [rcx+29h], 2
 * 00000001C005454E: jb      short loc_1C00545A4
 * 00000001C0054550: and     qword ptr [r11-18h], 0
 * 00000001C0054555: lea     rdx, [r11+48h]
 * 00000001C0054559: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054560: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054567: mov     rcx, [rcx+18h]
 * 00000001C005456B: mov     [r11-20h], rdi
 * 00000001C005456F: mov     [r11-28h], rdx
 * 00000001C0054573: lea     rdx, [r11+40h]
 * 00000001C0054577: mov     [r11-30h], rdi
 * 00000001C005457B: mov     [r11-38h], rdx
 * 00000001C005457F: lea     rdx, [r11+38h]
 * 00000001C0054583: mov     [r11-40h], rsi
 * 00000001C0054587: mov     [r11-48h], rdx
 * 00000001C005458B: lea     rdx, [r11+30h]
 * 00000001C005458F: mov     [r11-50h], rsi
 * 00000001C0054593: mov     [r11-58h], rdx
 * 00000001C0054597: lea     edx, [rbp+13h]
 * 00000001C005459A: movzx   r9d, bp
 * 00000001C005459E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00545A4: and     [rsp+78h+var_10], 0
 * 00000001C00545AA: lea     rax, [rsp+78h+arg_40]
 * 00000001C00545B2: mov     [rsp+78h+var_18], rdi
 * 00000001C00545B7: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C00545BE: mov     [rsp+78h+var_20], rax
 * 00000001C00545C3: mov     edx, 2
 * 00000001C00545C8: mov     [rsp+78h+var_28], rdi
 * 00000001C00545CD: lea     rax, [rsp+78h+arg_38]
 * 00000001C00545D5: mov     [rsp+78h+var_30], rax
 * 00000001C00545DA: mov     rcx, rbx
 * 00000001C00545DD: mov     [rsp+78h+var_38], rsi
 * 00000001C00545E2: lea     rax, [rsp+78h+arg_30]
 * 00000001C00545EA: mov     [rsp+78h+var_40], rax
 * 00000001C00545EF: lea     r8d, [rdx+13h]
 * 00000001C00545F3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00545FB: mov     [rsp+78h+var_48], rsi
 * 00000001C0054600: mov     [rsp+78h+var_50], rax
 * 00000001C0054605: mov     [rsp+78h+var_58], bp
 * 00000001C005460A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0054610: lea     r11, [rsp+78h+var_8]
 * 00000001C0054615: mov     rbx, [r11+10h]
 * 00000001C0054619: mov     rbp, [r11+18h]
 * 00000001C005461D: mov     rsi, [r11+20h]
 * 00000001C0054621: mov     rsp, r11
 * 00000001C0054624: pop     rdi
 * 00000001C0054625: retn
 */
