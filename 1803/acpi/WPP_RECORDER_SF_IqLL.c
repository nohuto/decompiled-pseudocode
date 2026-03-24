/*
 * XREFs of WPP_RECORDER_SF_IqLL @ 0x1C002E234
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C007E4A4 (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqLL @ 0x1C002E234
 * Reason: Hex-Rays returned no pseudocode for 0x1C002E234
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002E234: mov     r11, rsp
 * 00000001C002E237: mov     [r11+8], rbx
 * 00000001C002E23B: mov     [r11+10h], rbp
 * 00000001C002E23F: mov     [r11+18h], rsi
 * 00000001C002E243: push    rdi
 * 00000001C002E244: sub     rsp, 70h
 * 00000001C002E248: mov     edi, 4
 * 00000001C002E24D: mov     rbx, rcx
 * 00000001C002E250: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002E257: lea     ebp, [rdi+7]
 * 00000001C002E25A: mov     eax, [rcx+2Ch]
 * 00000001C002E25D: lea     esi, [rdi+4]
 * 00000001C002E260: test    al, 20h
 * 00000001C002E262: jz      short loc_1C002E2BE
 * 00000001C002E264: cmp     [rcx+29h], dil
 * 00000001C002E268: jb      short loc_1C002E2BE
 * 00000001C002E26A: and     qword ptr [r11-18h], 0
 * 00000001C002E26F: lea     rdx, [r11+48h]
 * 00000001C002E273: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E27A: lea     r8, WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids
 * 00000001C002E281: mov     rcx, [rcx+18h]
 * 00000001C002E285: mov     [r11-20h], rdi
 * 00000001C002E289: mov     [r11-28h], rdx
 * 00000001C002E28D: lea     rdx, [r11+40h]
 * 00000001C002E291: mov     [r11-30h], rdi
 * 00000001C002E295: mov     [r11-38h], rdx
 * 00000001C002E299: lea     rdx, [r11+38h]
 * 00000001C002E29D: mov     [r11-40h], rsi
 * 00000001C002E2A1: mov     [r11-48h], rdx
 * 00000001C002E2A5: lea     rdx, [r11+30h]
 * 00000001C002E2A9: mov     [r11-50h], rsi
 * 00000001C002E2AD: mov     [r11-58h], rdx
 * 00000001C002E2B1: lea     edx, [rdi+27h]
 * 00000001C002E2B4: movzx   r9d, bp
 * 00000001C002E2B8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E2BE: and     [rsp+78h+var_10], 0
 * 00000001C002E2C4: lea     rax, [rsp+78h+arg_40]
 * 00000001C002E2CC: mov     [rsp+78h+var_18], rdi
 * 00000001C002E2D1: lea     r9, WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids
 * 00000001C002E2D8: mov     [rsp+78h+var_20], rax
 * 00000001C002E2DD: mov     r8d, 6
 * 00000001C002E2E3: mov     [rsp+78h+var_28], rdi
 * 00000001C002E2E8: lea     rax, [rsp+78h+arg_38]
 * 00000001C002E2F0: mov     [rsp+78h+var_30], rax
 * 00000001C002E2F5: mov     edx, edi
 * 00000001C002E2F7: mov     [rsp+78h+var_38], rsi
 * 00000001C002E2FC: lea     rax, [rsp+78h+arg_30]
 * 00000001C002E304: mov     [rsp+78h+var_40], rax
 * 00000001C002E309: mov     rcx, rbx
 * 00000001C002E30C: lea     rax, [rsp+78h+arg_28]
 * 00000001C002E314: mov     [rsp+78h+var_48], rsi
 * 00000001C002E319: mov     [rsp+78h+var_50], rax
 * 00000001C002E31E: mov     [rsp+78h+var_58], bp
 * 00000001C002E323: call    cs:__imp_WppAutoLogTrace
 * 00000001C002E329: lea     r11, [rsp+78h+var_8]
 * 00000001C002E32E: mov     rbx, [r11+10h]
 * 00000001C002E332: mov     rbp, [r11+18h]
 * 00000001C002E336: mov     rsi, [r11+20h]
 * 00000001C002E33A: mov     rsp, r11
 * 00000001C002E33D: pop     rdi
 * 00000001C002E33E: retn
 */
