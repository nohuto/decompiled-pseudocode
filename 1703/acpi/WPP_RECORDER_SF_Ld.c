/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C0056BE0
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C0056BE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056BE0: mov     r11, rsp
 * 00000001C0056BE3: mov     [r11+8], rbx
 * 00000001C0056BE7: mov     [r11+10h], rsi
 * 00000001C0056BEB: push    rdi
 * 00000001C0056BEC: sub     rsp, 50h
 * 00000001C0056BF0: mov     rbx, rcx
 * 00000001C0056BF3: mov     esi, 21h ; '!'
 * 00000001C0056BF8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056BFF: lea     edi, [rsi-1Dh]
 * 00000001C0056C02: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0056C09: jz      short loc_1C0056C4D
 * 00000001C0056C0B: cmp     byte ptr [rcx+29h], 2
 * 00000001C0056C0F: jb      short loc_1C0056C4D
 * 00000001C0056C11: and     qword ptr [r11-18h], 0
 * 00000001C0056C16: lea     rdx, [r11+38h]
 * 00000001C0056C1A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056C21: lea     r8, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0056C28: mov     rcx, [rcx+18h]
 * 00000001C0056C2C: mov     [r11-20h], rdi
 * 00000001C0056C30: mov     [r11-28h], rdx
 * 00000001C0056C34: lea     rdx, [r11+30h]
 * 00000001C0056C38: mov     [r11-30h], rdi
 * 00000001C0056C3C: mov     [r11-38h], rdx
 * 00000001C0056C40: lea     edx, [rsi+0Ah]
 * 00000001C0056C43: movzx   r9d, si
 * 00000001C0056C47: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0056C4D: and     [rsp+58h+var_10], 0
 * 00000001C0056C53: lea     rax, [rsp+58h+arg_30]
 * 00000001C0056C5B: mov     [rsp+58h+var_18], rdi
 * 00000001C0056C60: lea     r9, WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids
 * 00000001C0056C67: mov     [rsp+58h+var_20], rax
 * 00000001C0056C6C: mov     edx, 2
 * 00000001C0056C71: lea     rax, [rsp+58h+arg_28]
 * 00000001C0056C79: mov     [rsp+58h+var_28], rdi
 * 00000001C0056C7E: mov     [rsp+58h+var_30], rax
 * 00000001C0056C83: mov     rcx, rbx
 * 00000001C0056C86: mov     [rsp+58h+var_38], si
 * 00000001C0056C8B: lea     r8d, [rdx+9]
 * 00000001C0056C8F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0056C95: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0056C9A: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0056C9F: add     rsp, 50h
 * 00000001C0056CA3: pop     rdi
 * 00000001C0056CA4: retn
 */
