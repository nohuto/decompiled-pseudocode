/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C00546F8
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005349C (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x1C00546F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00546F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00546F8: mov     r11, rsp
 * 00000001C00546FB: mov     [r11+8], rbx
 * 00000001C00546FF: push    rbp
 * 00000001C0054700: sub     rsp, 60h
 * 00000001C0054704: mov     rbx, rcx
 * 00000001C0054707: mov     [rsp+68h+var_18], 0C000009Ah
 * 00000001C005470F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0054716: mov     ebp, 16h
 * 00000001C005471B: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054722: jz      short loc_1C005476E
 * 00000001C0054724: cmp     byte ptr [rcx+29h], 2
 * 00000001C0054728: jb      short loc_1C005476E
 * 00000001C005472A: and     qword ptr [r11-28h], 0
 * 00000001C005472F: lea     rdx, [r11-18h]
 * 00000001C0054733: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005473A: lea     r8, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054741: mov     rcx, [rcx+18h]
 * 00000001C0054745: mov     qword ptr [r11-30h], 4
 * 00000001C005474D: mov     [r11-38h], rdx
 * 00000001C0054751: lea     rdx, [r11+30h]
 * 00000001C0054755: mov     qword ptr [r11-40h], 8
 * 00000001C005475D: mov     [r11-48h], rdx
 * 00000001C0054761: lea     edx, [rbp+15h]
 * 00000001C0054764: movzx   r9d, bp
 * 00000001C0054768: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005476E: and     [rsp+68h+var_20], 0
 * 00000001C0054774: lea     rax, [rsp+68h+var_18]
 * 00000001C0054779: mov     [rsp+68h+var_28], 4
 * 00000001C0054782: lea     r9, WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids
 * 00000001C0054789: mov     [rsp+68h+var_30], rax
 * 00000001C005478E: mov     edx, 2
 * 00000001C0054793: lea     rax, [rsp+68h+arg_28]
 * 00000001C005479B: mov     [rsp+68h+var_38], 8
 * 00000001C00547A4: mov     [rsp+68h+var_40], rax
 * 00000001C00547A9: mov     rcx, rbx
 * 00000001C00547AC: mov     [rsp+68h+var_48], bp
 * 00000001C00547B1: lea     r8d, [rdx+13h]
 * 00000001C00547B5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00547BB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00547C0: add     rsp, 60h
 * 00000001C00547C4: pop     rbp
 * 00000001C00547C5: retn
 */
