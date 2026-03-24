/*
 * XREFs of WPP_RECORDER_SF_ddx @ 0x1C0056524
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C00263CC (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddx @ 0x1C0056524
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056524
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056524: mov     r11, rsp
 * 00000001C0056527: mov     [r11+8], rbx
 * 00000001C005652B: mov     [r11+10h], rbp
 * 00000001C005652F: push    rdi
 * 00000001C0056530: sub     rsp, 60h
 * 00000001C0056534: mov     rbx, rcx
 * 00000001C0056537: mov     ebp, 0Ah
 * 00000001C005653C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056543: lea     edi, [rbp-6]
 * 00000001C0056546: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C005654D: jz      short loc_1C00565A1
 * 00000001C005654F: cmp     byte ptr [rcx+29h], 2
 * 00000001C0056553: jb      short loc_1C00565A1
 * 00000001C0056555: and     qword ptr [r11-18h], 0
 * 00000001C005655A: lea     rdx, [r11+40h]
 * 00000001C005655E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0056565: lea     r8, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C005656C: mov     rcx, [rcx+18h]
 * 00000001C0056570: mov     qword ptr [r11-20h], 8
 * 00000001C0056578: mov     [r11-28h], rdx
 * 00000001C005657C: lea     rdx, [r11+38h]
 * 00000001C0056580: mov     [r11-30h], rdi
 * 00000001C0056584: mov     [r11-38h], rdx
 * 00000001C0056588: lea     rdx, [r11+30h]
 * 00000001C005658C: mov     [r11-40h], rdi
 * 00000001C0056590: mov     [r11-48h], rdx
 * 00000001C0056594: lea     edx, [rbp+21h]
 * 00000001C0056597: movzx   r9d, bp
 * 00000001C005659B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00565A1: and     [rsp+68h+var_10], 0
 * 00000001C00565A7: lea     rax, [rsp+68h+arg_38]
 * 00000001C00565AF: mov     [rsp+68h+var_18], 8
 * 00000001C00565B8: lea     r9, WPP_6164d1bd80593c5f46f1627d12d38cb1_Traceguids
 * 00000001C00565BF: mov     [rsp+68h+var_20], rax
 * 00000001C00565C4: mov     edx, 2
 * 00000001C00565C9: mov     [rsp+68h+var_28], rdi
 * 00000001C00565CE: lea     rax, [rsp+68h+arg_30]
 * 00000001C00565D6: mov     [rsp+68h+var_30], rax
 * 00000001C00565DB: mov     rcx, rbx
 * 00000001C00565DE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00565E6: mov     [rsp+68h+var_38], rdi
 * 00000001C00565EB: mov     [rsp+68h+var_40], rax
 * 00000001C00565F0: lea     r8d, [rdx+0Bh]
 * 00000001C00565F4: mov     [rsp+68h+var_48], bp
 * 00000001C00565F9: call    cs:__imp_WppAutoLogTrace
 * 00000001C00565FF: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0056604: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0056609: add     rsp, 60h
 * 00000001C005660D: pop     rdi
 * 00000001C005660E: retn
 */
