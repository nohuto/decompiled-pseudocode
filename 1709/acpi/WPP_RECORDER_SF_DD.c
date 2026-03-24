/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C005516C
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00A37AC (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C005516C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005516C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005516C: mov     r11, rsp
 * 00000001C005516F: mov     [r11+8], rbx
 * 00000001C0055173: mov     [r11+10h], rsi
 * 00000001C0055177: push    rdi
 * 00000001C0055178: sub     rsp, 50h
 * 00000001C005517C: mov     rbx, rcx
 * 00000001C005517F: mov     esi, 28h ; '('
 * 00000001C0055184: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005518B: lea     edi, [rsi-24h]
 * 00000001C005518E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0055195: jz      short loc_1C00551D9
 * 00000001C0055197: cmp     byte ptr [rcx+29h], 2
 * 00000001C005519B: jb      short loc_1C00551D9
 * 00000001C005519D: and     qword ptr [r11-18h], 0
 * 00000001C00551A2: lea     rdx, [r11+38h]
 * 00000001C00551A6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00551AD: lea     r8, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C00551B4: mov     rcx, [rcx+18h]
 * 00000001C00551B8: mov     [r11-20h], rdi
 * 00000001C00551BC: mov     [r11-28h], rdx
 * 00000001C00551C0: lea     rdx, [r11+30h]
 * 00000001C00551C4: mov     [r11-30h], rdi
 * 00000001C00551C8: mov     [r11-38h], rdx
 * 00000001C00551CC: lea     edx, [rsi+3]
 * 00000001C00551CF: movzx   r9d, si
 * 00000001C00551D3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00551D9: and     [rsp+58h+var_10], 0
 * 00000001C00551DF: lea     rax, [rsp+58h+arg_30]
 * 00000001C00551E7: mov     [rsp+58h+var_18], rdi
 * 00000001C00551EC: lea     r9, WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids
 * 00000001C00551F3: mov     [rsp+58h+var_20], rax
 * 00000001C00551F8: mov     edx, 2
 * 00000001C00551FD: lea     rax, [rsp+58h+arg_28]
 * 00000001C0055205: mov     [rsp+58h+var_28], rdi
 * 00000001C005520A: mov     [rsp+58h+var_30], rax
 * 00000001C005520F: mov     rcx, rbx
 * 00000001C0055212: mov     [rsp+58h+var_38], si
 * 00000001C0055217: lea     r8d, [rdx+13h]
 * 00000001C005521B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0055221: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0055226: mov     rsi, [rsp+58h+arg_8]
 * 00000001C005522B: add     rsp, 50h
 * 00000001C005522F: pop     rdi
 * 00000001C0055230: retn
 */
