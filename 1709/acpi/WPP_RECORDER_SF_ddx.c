/*
 * XREFs of WPP_RECORDER_SF_ddx @ 0x1C0057114
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C0027630 (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddx @ 0x1C0057114
 * Reason: Hex-Rays returned no pseudocode for 0x1C0057114
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0057114: mov     r11, rsp
 * 00000001C0057117: mov     [r11+8], rbx
 * 00000001C005711B: mov     [r11+10h], rbp
 * 00000001C005711F: push    rdi
 * 00000001C0057120: sub     rsp, 60h
 * 00000001C0057124: mov     rbx, rcx
 * 00000001C0057127: mov     ebp, 0Ah
 * 00000001C005712C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0057133: lea     edi, [rbp-6]
 * 00000001C0057136: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C005713D: jz      short loc_1C0057191
 * 00000001C005713F: cmp     byte ptr [rcx+29h], 2
 * 00000001C0057143: jb      short loc_1C0057191
 * 00000001C0057145: and     qword ptr [r11-18h], 0
 * 00000001C005714A: lea     rdx, [r11+40h]
 * 00000001C005714E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0057155: lea     r8, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C005715C: mov     rcx, [rcx+18h]
 * 00000001C0057160: mov     qword ptr [r11-20h], 8
 * 00000001C0057168: mov     [r11-28h], rdx
 * 00000001C005716C: lea     rdx, [r11+38h]
 * 00000001C0057170: mov     [r11-30h], rdi
 * 00000001C0057174: mov     [r11-38h], rdx
 * 00000001C0057178: lea     rdx, [r11+30h]
 * 00000001C005717C: mov     [r11-40h], rdi
 * 00000001C0057180: mov     [r11-48h], rdx
 * 00000001C0057184: lea     edx, [rbp+21h]
 * 00000001C0057187: movzx   r9d, bp
 * 00000001C005718B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0057191: and     [rsp+68h+var_10], 0
 * 00000001C0057197: lea     rax, [rsp+68h+arg_38]
 * 00000001C005719F: mov     [rsp+68h+var_18], 8
 * 00000001C00571A8: lea     r9, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C00571AF: mov     [rsp+68h+var_20], rax
 * 00000001C00571B4: mov     edx, 2
 * 00000001C00571B9: mov     [rsp+68h+var_28], rdi
 * 00000001C00571BE: lea     rax, [rsp+68h+arg_30]
 * 00000001C00571C6: mov     [rsp+68h+var_30], rax
 * 00000001C00571CB: mov     rcx, rbx
 * 00000001C00571CE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00571D6: mov     [rsp+68h+var_38], rdi
 * 00000001C00571DB: mov     [rsp+68h+var_40], rax
 * 00000001C00571E0: lea     r8d, [rdx+0Bh]
 * 00000001C00571E4: mov     [rsp+68h+var_48], bp
 * 00000001C00571E9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00571EF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00571F4: mov     rbp, [rsp+68h+arg_8]
 * 00000001C00571F9: add     rsp, 60h
 * 00000001C00571FD: pop     rdi
 * 00000001C00571FE: retn
 */
