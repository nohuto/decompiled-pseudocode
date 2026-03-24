/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0004678
 * Callers:
 *     MouConfiguration @ 0x1C000E95C (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00017D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0004678
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004678
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004678: mov     r11, rsp
 * 00000001C000467B: mov     [r11+8], rbx
 * 00000001C000467F: mov     [r11+10h], rsi
 * 00000001C0004683: push    rdi
 * 00000001C0004684: sub     rsp, 50h
 * 00000001C0004688: mov     rbx, rcx
 * 00000001C000468B: mov     edi, 4
 * 00000001C0004690: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004697: lea     esi, [rdi+3Dh]
 * 00000001C000469A: mov     eax, [rcx+2Ch]
 * 00000001C000469D: test    al, 1
 * 00000001C000469F: jz      short loc_1C00046E3
 * 00000001C00046A1: cmp     [rcx+29h], dil
 * 00000001C00046A5: jb      short loc_1C00046E3
 * 00000001C00046A7: and     qword ptr [r11-18h], 0
 * 00000001C00046AC: lea     rdx, [r11+38h]
 * 00000001C00046B0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00046B7: lea     r8, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00046BE: mov     rcx, [rcx+18h]
 * 00000001C00046C2: mov     [r11-20h], rdi
 * 00000001C00046C6: mov     [r11-28h], rdx
 * 00000001C00046CA: lea     rdx, [r11+30h]
 * 00000001C00046CE: mov     [r11-30h], rdi
 * 00000001C00046D2: mov     [r11-38h], rdx
 * 00000001C00046D6: lea     edx, [rdi+27h]
 * 00000001C00046D9: movzx   r9d, si
 * 00000001C00046DD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00046E3: and     [rsp+58h+var_10], 0
 * 00000001C00046E9: lea     rax, [rsp+58h+arg_30]
 * 00000001C00046F1: mov     [rsp+58h+var_18], rdi
 * 00000001C00046F6: lea     r9, WPP_9c17a35c4601387fb5a429f49b57a538_Traceguids
 * 00000001C00046FD: mov     [rsp+58h+var_20], rax
 * 00000001C0004702: mov     r8d, 1
 * 00000001C0004708: lea     rax, [rsp+58h+arg_28]
 * 00000001C0004710: mov     [rsp+58h+var_28], rdi
 * 00000001C0004715: mov     [rsp+58h+var_30], rax
 * 00000001C000471A: mov     edx, edi
 * 00000001C000471C: mov     rcx, rbx
 * 00000001C000471F: mov     [rsp+58h+var_38], si
 * 00000001C0004724: call    cs:__imp_WppAutoLogTrace
 * 00000001C000472A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000472F: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0004734: add     rsp, 50h
 * 00000001C0004738: pop     rdi
 * 00000001C0004739: retn
 */
