/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C003447C
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x1C003447C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003447C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003447C: mov     r11, rsp
 * 00000001C003447F: mov     [r11+8], rbx
 * 00000001C0034483: mov     [r11+10h], rbp
 * 00000001C0034487: push    rdi
 * 00000001C0034488: sub     rsp, 60h
 * 00000001C003448C: mov     rbx, rcx
 * 00000001C003448F: mov     ebp, 1Dh
 * 00000001C0034494: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003449B: lea     edi, [rbp-19h]
 * 00000001C003449E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00344A5: jz      short loc_1C00344F9
 * 00000001C00344A7: cmp     byte ptr [rcx+29h], 2
 * 00000001C00344AB: jb      short loc_1C00344F9
 * 00000001C00344AD: and     qword ptr [r11-18h], 0
 * 00000001C00344B2: lea     rdx, [r11+40h]
 * 00000001C00344B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00344BD: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C00344C4: mov     rcx, [rcx+18h]
 * 00000001C00344C8: mov     [r11-20h], rdi
 * 00000001C00344CC: mov     [r11-28h], rdx
 * 00000001C00344D0: lea     rdx, [r11+38h]
 * 00000001C00344D4: mov     [r11-30h], rdi
 * 00000001C00344D8: mov     [r11-38h], rdx
 * 00000001C00344DC: lea     rdx, [r11+30h]
 * 00000001C00344E0: mov     qword ptr [r11-40h], 8
 * 00000001C00344E8: mov     [r11-48h], rdx
 * 00000001C00344EC: lea     edx, [rbp+0Eh]
 * 00000001C00344EF: movzx   r9d, bp
 * 00000001C00344F3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00344F9: and     [rsp+68h+var_10], 0
 * 00000001C00344FF: lea     rax, [rsp+68h+arg_38]
 * 00000001C0034507: mov     [rsp+68h+var_18], rdi
 * 00000001C003450C: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C0034513: mov     [rsp+68h+var_20], rax
 * 00000001C0034518: mov     edx, 2
 * 00000001C003451D: mov     [rsp+68h+var_28], rdi
 * 00000001C0034522: lea     rax, [rsp+68h+arg_30]
 * 00000001C003452A: mov     [rsp+68h+var_30], rax
 * 00000001C003452F: mov     rcx, rbx
 * 00000001C0034532: lea     rax, [rsp+68h+arg_28]
 * 00000001C003453A: mov     [rsp+68h+var_38], 8
 * 00000001C0034543: mov     [rsp+68h+var_40], rax
 * 00000001C0034548: lea     r8d, [rdx+13h]
 * 00000001C003454C: mov     [rsp+68h+var_48], bp
 * 00000001C0034551: call    cs:__imp_WppAutoLogTrace
 * 00000001C0034557: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003455C: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0034561: add     rsp, 60h
 * 00000001C0034565: pop     rdi
 * 00000001C0034566: retn
 */
