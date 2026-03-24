/*
 * XREFs of WPP_RECORDER_SF_IqL @ 0x1C002E144
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C007E4A4 (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqL @ 0x1C002E144
 * Reason: Hex-Rays returned no pseudocode for 0x1C002E144
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002E144: mov     r11, rsp
 * 00000001C002E147: mov     [r11+8], rbx
 * 00000001C002E14B: mov     [r11+10h], rbp
 * 00000001C002E14F: push    rsi
 * 00000001C002E150: sub     rsp, 60h
 * 00000001C002E154: mov     rbx, rcx
 * 00000001C002E157: mov     ebp, 0Ah
 * 00000001C002E15C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002E163: lea     esi, [rbp-2]
 * 00000001C002E166: mov     eax, [rcx+2Ch]
 * 00000001C002E169: test    al, 20h
 * 00000001C002E16B: jz      short loc_1C002E1BF
 * 00000001C002E16D: cmp     byte ptr [rcx+29h], 4
 * 00000001C002E171: jb      short loc_1C002E1BF
 * 00000001C002E173: and     qword ptr [r11-18h], 0
 * 00000001C002E178: lea     rdx, [r11+40h]
 * 00000001C002E17C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E183: lea     r8, WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids
 * 00000001C002E18A: mov     rcx, [rcx+18h]
 * 00000001C002E18E: mov     qword ptr [r11-20h], 4
 * 00000001C002E196: mov     [r11-28h], rdx
 * 00000001C002E19A: lea     rdx, [r11+38h]
 * 00000001C002E19E: mov     [r11-30h], rsi
 * 00000001C002E1A2: mov     [r11-38h], rdx
 * 00000001C002E1A6: lea     rdx, [r11+30h]
 * 00000001C002E1AA: mov     [r11-40h], rsi
 * 00000001C002E1AE: mov     [r11-48h], rdx
 * 00000001C002E1B2: lea     edx, [rbp+21h]
 * 00000001C002E1B5: movzx   r9d, bp
 * 00000001C002E1B9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E1BF: and     [rsp+68h+var_10], 0
 * 00000001C002E1C5: lea     rax, [rsp+68h+arg_38]
 * 00000001C002E1CD: mov     [rsp+68h+var_18], 4
 * 00000001C002E1D6: lea     r9, WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids
 * 00000001C002E1DD: mov     [rsp+68h+var_20], rax
 * 00000001C002E1E2: mov     edx, 4
 * 00000001C002E1E7: mov     [rsp+68h+var_28], rsi
 * 00000001C002E1EC: lea     rax, [rsp+68h+arg_30]
 * 00000001C002E1F4: mov     [rsp+68h+var_30], rax
 * 00000001C002E1F9: mov     rcx, rbx
 * 00000001C002E1FC: lea     rax, [rsp+68h+arg_28]
 * 00000001C002E204: mov     [rsp+68h+var_38], rsi
 * 00000001C002E209: mov     [rsp+68h+var_40], rax
 * 00000001C002E20E: lea     r8d, [rdx+2]
 * 00000001C002E212: mov     [rsp+68h+var_48], bp
 * 00000001C002E217: call    cs:__imp_WppAutoLogTrace
 * 00000001C002E21D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C002E222: mov     rbp, [rsp+68h+arg_8]
 * 00000001C002E227: add     rsp, 60h
 * 00000001C002E22B: pop     rsi
 * 00000001C002E22C: retn
 */
