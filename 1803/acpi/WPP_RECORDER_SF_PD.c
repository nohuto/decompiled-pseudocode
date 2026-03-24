/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C00343A8
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0032F04 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x1C00343A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00343A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00343A8: mov     r11, rsp
 * 00000001C00343AB: mov     [r11+8], rbx
 * 00000001C00343AF: push    rbp
 * 00000001C00343B0: sub     rsp, 60h
 * 00000001C00343B4: mov     rbx, rcx
 * 00000001C00343B7: mov     [rsp+68h+var_18], 0C000009Ah
 * 00000001C00343BF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00343C6: mov     ebp, 16h
 * 00000001C00343CB: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00343D2: jz      short loc_1C003441E
 * 00000001C00343D4: cmp     byte ptr [rcx+29h], 2
 * 00000001C00343D8: jb      short loc_1C003441E
 * 00000001C00343DA: and     qword ptr [r11-28h], 0
 * 00000001C00343DF: lea     rdx, [r11-18h]
 * 00000001C00343E3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00343EA: lea     r8, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C00343F1: mov     rcx, [rcx+18h]
 * 00000001C00343F5: mov     qword ptr [r11-30h], 4
 * 00000001C00343FD: mov     [r11-38h], rdx
 * 00000001C0034401: lea     rdx, [r11+30h]
 * 00000001C0034405: mov     qword ptr [r11-40h], 8
 * 00000001C003440D: mov     [r11-48h], rdx
 * 00000001C0034411: lea     edx, [rbp+15h]
 * 00000001C0034414: movzx   r9d, bp
 * 00000001C0034418: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003441E: and     [rsp+68h+var_20], 0
 * 00000001C0034424: lea     rax, [rsp+68h+var_18]
 * 00000001C0034429: mov     [rsp+68h+var_28], 4
 * 00000001C0034432: lea     r9, WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids
 * 00000001C0034439: mov     [rsp+68h+var_30], rax
 * 00000001C003443E: mov     edx, 2
 * 00000001C0034443: lea     rax, [rsp+68h+arg_28]
 * 00000001C003444B: mov     [rsp+68h+var_38], 8
 * 00000001C0034454: mov     [rsp+68h+var_40], rax
 * 00000001C0034459: mov     rcx, rbx
 * 00000001C003445C: mov     [rsp+68h+var_48], bp
 * 00000001C0034461: lea     r8d, [rdx+13h]
 * 00000001C0034465: call    cs:__imp_WppAutoLogTrace
 * 00000001C003446B: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0034470: add     rsp, 60h
 * 00000001C0034474: pop     rbp
 * 00000001C0034475: retn
 */
