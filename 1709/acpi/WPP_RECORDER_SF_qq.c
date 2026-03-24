/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0021340
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004020 (ACPIDispatchIrp.c)
 *     ACPIReleaseGlobalLock @ 0x1C0020748 (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0021258 (ACPIStartNextGlobalLockRequest.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055F00 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0021340
 * Reason: Hex-Rays returned no pseudocode for 0x1C0021340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0021340: mov     [rsp+arg_0], rbx
 * 00000001C0021345: mov     [rsp+arg_8], rbp
 * 00000001C002134A: mov     [rsp+arg_10], rsi
 * 00000001C002134F: push    rdi
 * 00000001C0021350: push    r14
 * 00000001C0021352: push    r15
 * 00000001C0021354: sub     rsp, 50h
 * 00000001C0021358: mov     r14d, r8d
 * 00000001C002135B: mov     sil, dl
 * 00000001C002135E: mov     edi, r8d
 * 00000001C0021361: movzx   ebp, r9w
 * 00000001C0021365: shr     rdi, 10h
 * 00000001C0021369: mov     r15, rcx
 * 00000001C002136C: lea     ebx, [r14-1]
 * 00000001C0021370: mov     r10d, ebx
 * 00000001C0021373: and     ebx, 1Fh
 * 00000001C0021376: shr     r10, 5
 * 00000001C002137A: lea     rax, [rdi+rdi*4]
 * 00000001C002137E: and     r10d, 7FFh
 * 00000001C0021385: mov     edx, ebx
 * 00000001C0021387: mov     ebx, 8
 * 00000001C002138C: lea     r11, [r10+rax*4]
 * 00000001C0021390: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0021397: mov     eax, [r10+r11*4+2Ch]
 * 00000001C002139C: bt      eax, edx
 * 00000001C002139F: jb      loc_1C003912A
 * 00000001C00213A5: and     [rsp+68h+var_20], 0
 * 00000001C00213AB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00213B3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00213BB: mov     r8d, r14d
 * 00000001C00213BE: mov     [rsp+68h+var_28], rbx
 * 00000001C00213C3: mov     rcx, r15
 * 00000001C00213C6: mov     [rsp+68h+var_30], rax
 * 00000001C00213CB: lea     rax, [rsp+68h+arg_28]
 * 00000001C00213D3: mov     [rsp+68h+var_38], rbx
 * 00000001C00213D8: mov     [rsp+68h+var_40], rax
 * 00000001C00213DD: movzx   edx, sil
 * 00000001C00213E1: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00213E6: call    cs:__imp_WppAutoLogTrace
 * 00000001C00213EC: lea     r11, [rsp+68h+var_18]
 * 00000001C00213F1: mov     rbx, [r11+20h]
 * 00000001C00213F5: mov     rbp, [r11+28h]
 * 00000001C00213F9: mov     rsi, [r11+30h]
 * 00000001C00213FD: mov     rsp, r11
 * 00000001C0021400: pop     r15
 * 00000001C0021402: pop     r14
 * 00000001C0021404: pop     rdi
 * 00000001C0021405: retn
 * 00000001C003912A: lea     rcx, [rdi+rdi*4]
 * 00000001C003912E: add     rcx, rcx
 * 00000001C0039131: cmp     [r10+rcx*8+29h], sil
 * 00000001C0039136: jb      loc_1C00213A5
 * 00000001C003913C: and     [rsp+68h+var_28], 0
 * 00000001C0039142: lea     rdx, [rsp+68h+arg_30]
 * 00000001C003914A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0039151: mov     r8, [rsp+68h+arg_20]
 * 00000001C0039159: mov     rcx, [r10+rcx*8+18h]
 * 00000001C003915E: mov     [rsp+68h+var_30], rbx
 * 00000001C0039163: mov     [rsp+68h+var_38], rdx
 * 00000001C0039168: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0039170: mov     [rsp+68h+var_40], rbx
 * 00000001C0039175: mov     [rsp+68h+var_48], rdx
 * 00000001C003917A: mov     edx, 2Bh ; '+'
 * 00000001C003917F: movzx   r9d, bp
 * 00000001C0039183: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0039189: nop
 * 00000001C003918A: jmp     loc_1C00213A5
 */
