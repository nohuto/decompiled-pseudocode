/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C0055238
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0053FA4 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x1C0055238
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055238
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055238: mov     r11, rsp
 * 00000001C005523B: mov     [r11+8], rbx
 * 00000001C005523F: push    rbp
 * 00000001C0055240: sub     rsp, 60h
 * 00000001C0055244: mov     rbx, rcx
 * 00000001C0055247: mov     [rsp+68h+var_18], 0C000009Ah
 * 00000001C005524F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0055256: mov     ebp, 16h
 * 00000001C005525B: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0055262: jz      short loc_1C00552AE
 * 00000001C0055264: cmp     byte ptr [rcx+29h], 2
 * 00000001C0055268: jb      short loc_1C00552AE
 * 00000001C005526A: and     qword ptr [r11-28h], 0
 * 00000001C005526F: lea     rdx, [r11-18h]
 * 00000001C0055273: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005527A: lea     r8, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C0055281: mov     rcx, [rcx+18h]
 * 00000001C0055285: mov     qword ptr [r11-30h], 4
 * 00000001C005528D: mov     [r11-38h], rdx
 * 00000001C0055291: lea     rdx, [r11+30h]
 * 00000001C0055295: mov     qword ptr [r11-40h], 8
 * 00000001C005529D: mov     [r11-48h], rdx
 * 00000001C00552A1: lea     edx, [rbp+15h]
 * 00000001C00552A4: movzx   r9d, bp
 * 00000001C00552A8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00552AE: and     [rsp+68h+var_20], 0
 * 00000001C00552B4: lea     rax, [rsp+68h+var_18]
 * 00000001C00552B9: mov     [rsp+68h+var_28], 4
 * 00000001C00552C2: lea     r9, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C00552C9: mov     [rsp+68h+var_30], rax
 * 00000001C00552CE: mov     edx, 2
 * 00000001C00552D3: lea     rax, [rsp+68h+arg_28]
 * 00000001C00552DB: mov     [rsp+68h+var_38], 8
 * 00000001C00552E4: mov     [rsp+68h+var_40], rax
 * 00000001C00552E9: mov     rcx, rbx
 * 00000001C00552EC: mov     [rsp+68h+var_48], bp
 * 00000001C00552F1: lea     r8d, [rdx+13h]
 * 00000001C00552F5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00552FB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0055300: add     rsp, 60h
 * 00000001C0055304: pop     rbp
 * 00000001C0055305: retn
 */
