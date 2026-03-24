/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C00547CC
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0053634 (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x1C00547CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00547CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00547CC: mov     r11, rsp
 * 00000001C00547CF: mov     [r11+8], rbx
 * 00000001C00547D3: mov     [r11+10h], rbp
 * 00000001C00547D7: push    rdi
 * 00000001C00547D8: sub     rsp, 60h
 * 00000001C00547DC: mov     rbx, rcx
 * 00000001C00547DF: mov     ebp, 1Dh
 * 00000001C00547E4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00547EB: lea     edi, [rbp-19h]
 * 00000001C00547EE: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00547F5: jz      short loc_1C0054849
 * 00000001C00547F7: cmp     byte ptr [rcx+29h], 2
 * 00000001C00547FB: jb      short loc_1C0054849
 * 00000001C00547FD: and     qword ptr [r11-18h], 0
 * 00000001C0054802: lea     rdx, [r11+40h]
 * 00000001C0054806: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005480D: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054814: mov     rcx, [rcx+18h]
 * 00000001C0054818: mov     [r11-20h], rdi
 * 00000001C005481C: mov     [r11-28h], rdx
 * 00000001C0054820: lea     rdx, [r11+38h]
 * 00000001C0054824: mov     [r11-30h], rdi
 * 00000001C0054828: mov     [r11-38h], rdx
 * 00000001C005482C: lea     rdx, [r11+30h]
 * 00000001C0054830: mov     qword ptr [r11-40h], 8
 * 00000001C0054838: mov     [r11-48h], rdx
 * 00000001C005483C: lea     edx, [rbp+0Eh]
 * 00000001C005483F: movzx   r9d, bp
 * 00000001C0054843: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054849: and     [rsp+68h+var_10], 0
 * 00000001C005484F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0054857: mov     [rsp+68h+var_18], rdi
 * 00000001C005485C: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054863: mov     [rsp+68h+var_20], rax
 * 00000001C0054868: mov     edx, 2
 * 00000001C005486D: mov     [rsp+68h+var_28], rdi
 * 00000001C0054872: lea     rax, [rsp+68h+arg_30]
 * 00000001C005487A: mov     [rsp+68h+var_30], rax
 * 00000001C005487F: mov     rcx, rbx
 * 00000001C0054882: lea     rax, [rsp+68h+arg_28]
 * 00000001C005488A: mov     [rsp+68h+var_38], 8
 * 00000001C0054893: mov     [rsp+68h+var_40], rax
 * 00000001C0054898: lea     r8d, [rdx+13h]
 * 00000001C005489C: mov     [rsp+68h+var_48], bp
 * 00000001C00548A1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00548A7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00548AC: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00548B1: add     rsp, 60h
 * 00000001C00548B5: pop     rdi
 * 00000001C00548B6: retn
 */
