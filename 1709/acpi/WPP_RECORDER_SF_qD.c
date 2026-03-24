/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C004A584
 * Callers:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C00205B4 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x1C0020748 (ACPIReleaseGlobalLock.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0028A5C (OSNotifyCreateOperationRegion.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0048CE0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0048F70 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0049000 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C004A584
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A584
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A584: mov     [rsp+arg_0], rbx
 * 00000001C004A589: mov     [rsp+arg_8], rbp
 * 00000001C004A58E: mov     [rsp+arg_10], rsi
 * 00000001C004A593: push    rdi
 * 00000001C004A594: push    r14
 * 00000001C004A596: push    r15
 * 00000001C004A598: sub     rsp, 50h
 * 00000001C004A59C: mov     r14d, r8d
 * 00000001C004A59F: mov     sil, dl
 * 00000001C004A5A2: mov     edi, r8d
 * 00000001C004A5A5: movzx   ebp, r9w
 * 00000001C004A5A9: shr     rdi, 10h
 * 00000001C004A5AD: mov     r15, rcx
 * 00000001C004A5B0: lea     ebx, [r14-1]
 * 00000001C004A5B4: mov     r10d, ebx
 * 00000001C004A5B7: and     ebx, 1Fh
 * 00000001C004A5BA: shr     r10, 5
 * 00000001C004A5BE: lea     rax, [rdi+rdi*4]
 * 00000001C004A5C2: and     r10d, 7FFh
 * 00000001C004A5C9: mov     edx, ebx
 * 00000001C004A5CB: mov     ebx, 4
 * 00000001C004A5D0: lea     r11, [r10+rax*4]
 * 00000001C004A5D4: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004A5DB: mov     eax, [r10+r11*4+2Ch]
 * 00000001C004A5E0: bt      eax, edx
 * 00000001C004A5E3: jnb     short loc_1C004A642
 * 00000001C004A5E5: lea     rcx, [rdi+rdi*4]
 * 00000001C004A5E9: add     rcx, rcx
 * 00000001C004A5EC: cmp     [r10+rcx*8+29h], sil
 * 00000001C004A5F1: jb      short loc_1C004A642
 * 00000001C004A5F3: and     [rsp+68h+var_28], 0
 * 00000001C004A5F9: lea     rdx, [rsp+68h+arg_30]
 * 00000001C004A601: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A608: mov     r8, [rsp+68h+arg_20]
 * 00000001C004A610: mov     rcx, [r10+rcx*8+18h]
 * 00000001C004A615: mov     [rsp+68h+var_30], rbx
 * 00000001C004A61A: mov     [rsp+68h+var_38], rdx
 * 00000001C004A61F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C004A627: mov     [rsp+68h+var_40], 8
 * 00000001C004A630: mov     [rsp+68h+var_48], rdx
 * 00000001C004A635: lea     edx, [rbx+27h]
 * 00000001C004A638: movzx   r9d, r9w
 * 00000001C004A63C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A642: and     [rsp+68h+var_20], 0
 * 00000001C004A648: lea     rax, [rsp+68h+arg_30]
 * 00000001C004A650: mov     r9, [rsp+68h+arg_20]
 * 00000001C004A658: mov     r8d, r14d
 * 00000001C004A65B: mov     [rsp+68h+var_28], rbx
 * 00000001C004A660: mov     rcx, r15
 * 00000001C004A663: mov     [rsp+68h+var_30], rax
 * 00000001C004A668: lea     rax, [rsp+68h+arg_28]
 * 00000001C004A670: mov     [rsp+68h+var_38], 8
 * 00000001C004A679: mov     [rsp+68h+var_40], rax
 * 00000001C004A67E: movzx   edx, sil
 * 00000001C004A682: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C004A687: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A68D: lea     r11, [rsp+68h+var_18]
 * 00000001C004A692: mov     rbx, [r11+20h]
 * 00000001C004A696: mov     rbp, [r11+28h]
 * 00000001C004A69A: mov     rsi, [r11+30h]
 * 00000001C004A69E: mov     rsp, r11
 * 00000001C004A6A1: pop     r15
 * 00000001C004A6A3: pop     r14
 * 00000001C004A6A5: pop     rdi
 * 00000001C004A6A6: retn
 */
