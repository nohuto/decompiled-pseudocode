/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0058880
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091B50 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C0058880
 * Reason: Hex-Rays returned no pseudocode for 0x1C0058880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0058880: mov     r11, rsp
 * 00000001C0058883: mov     [r11+8], rbx
 * 00000001C0058887: mov     [r11+10h], rbp
 * 00000001C005888B: push    rdi
 * 00000001C005888C: sub     rsp, 60h
 * 00000001C0058890: mov     rbx, rcx
 * 00000001C0058893: mov     edi, 4
 * 00000001C0058898: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005889F: lea     ebp, [rdi+0Fh]
 * 00000001C00588A2: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C00588A9: jz      short loc_1C00588FD
 * 00000001C00588AB: cmp     [rcx+29h], dil
 * 00000001C00588AF: jb      short loc_1C00588FD
 * 00000001C00588B1: and     qword ptr [r11-18h], 0
 * 00000001C00588B6: lea     rdx, [r11+40h]
 * 00000001C00588BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00588C1: lea     r8, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C00588C8: mov     rcx, [rcx+18h]
 * 00000001C00588CC: mov     qword ptr [r11-20h], 8
 * 00000001C00588D4: mov     [r11-28h], rdx
 * 00000001C00588D8: lea     rdx, [r11+38h]
 * 00000001C00588DC: mov     [r11-30h], rdi
 * 00000001C00588E0: mov     [r11-38h], rdx
 * 00000001C00588E4: lea     rdx, [r11+30h]
 * 00000001C00588E8: mov     [r11-40h], rdi
 * 00000001C00588EC: mov     [r11-48h], rdx
 * 00000001C00588F0: lea     edx, [rdi+27h]
 * 00000001C00588F3: movzx   r9d, bp
 * 00000001C00588F7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00588FD: and     [rsp+68h+var_10], 0
 * 00000001C0058903: lea     rax, [rsp+68h+arg_38]
 * 00000001C005890B: mov     [rsp+68h+var_18], 8
 * 00000001C0058914: lea     r9, WPP_2a27aa2651e339a73dc9c9f16621dec0_Traceguids
 * 00000001C005891B: mov     [rsp+68h+var_20], rax
 * 00000001C0058920: mov     r8d, 14h
 * 00000001C0058926: mov     [rsp+68h+var_28], rdi
 * 00000001C005892B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0058933: mov     [rsp+68h+var_30], rax
 * 00000001C0058938: mov     edx, edi
 * 00000001C005893A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0058942: mov     [rsp+68h+var_38], rdi
 * 00000001C0058947: mov     [rsp+68h+var_40], rax
 * 00000001C005894C: mov     rcx, rbx
 * 00000001C005894F: mov     [rsp+68h+var_48], bp
 * 00000001C0058954: call    cs:__imp_WppAutoLogTrace
 * 00000001C005895A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C005895F: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0058964: add     rsp, 60h
 * 00000001C0058968: pop     rdi
 * 00000001C0058969: retn
 */
