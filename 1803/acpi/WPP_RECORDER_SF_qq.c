/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00213B4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIReleaseGlobalLock @ 0x1C0035340 (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0035494 (ACPIStartNextGlobalLockRequest.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00213B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00213B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00213B4: mov     [rsp+arg_0], rbx
 * 00000001C00213B9: mov     [rsp+arg_8], rbp
 * 00000001C00213BE: mov     [rsp+arg_10], rsi
 * 00000001C00213C3: push    rdi
 * 00000001C00213C4: push    r14
 * 00000001C00213C6: push    r15
 * 00000001C00213C8: sub     rsp, 50h
 * 00000001C00213CC: mov     r14d, r8d
 * 00000001C00213CF: mov     sil, dl
 * 00000001C00213D2: mov     edi, r8d
 * 00000001C00213D5: movzx   ebp, r9w
 * 00000001C00213D9: shr     rdi, 10h
 * 00000001C00213DD: mov     r15, rcx
 * 00000001C00213E0: lea     ebx, [r14-1]
 * 00000001C00213E4: mov     r10d, ebx
 * 00000001C00213E7: and     ebx, 1Fh
 * 00000001C00213EA: shr     r10, 5
 * 00000001C00213EE: lea     rax, [rdi+rdi*4]
 * 00000001C00213F2: and     r10d, 7FFh
 * 00000001C00213F9: mov     edx, ebx
 * 00000001C00213FB: mov     ebx, 8
 * 00000001C0021400: lea     r11, [r10+rax*4]
 * 00000001C0021404: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002140B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0021410: bt      eax, edx
 * 00000001C0021413: jnb     short loc_1C002146E
 * 00000001C0021415: lea     rcx, [rdi+rdi*4]
 * 00000001C0021419: add     rcx, rcx
 * 00000001C002141C: cmp     [r10+rcx*8+29h], sil
 * 00000001C0021421: jb      short loc_1C002146E
 * 00000001C0021423: and     [rsp+68h+var_28], 0
 * 00000001C0021429: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0021431: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0021438: mov     r8, [rsp+68h+arg_20]
 * 00000001C0021440: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0021445: mov     [rsp+68h+var_30], rbx
 * 00000001C002144A: mov     [rsp+68h+var_38], rdx
 * 00000001C002144F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0021457: mov     [rsp+68h+var_40], rbx
 * 00000001C002145C: mov     [rsp+68h+var_48], rdx
 * 00000001C0021461: lea     edx, [rbx+23h]
 * 00000001C0021464: movzx   r9d, r9w
 * 00000001C0021468: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002146E: and     [rsp+68h+var_20], 0
 * 00000001C0021474: lea     rax, [rsp+68h+arg_30]
 * 00000001C002147C: mov     r9, [rsp+68h+arg_20]
 * 00000001C0021484: mov     r8d, r14d
 * 00000001C0021487: mov     [rsp+68h+var_28], rbx
 * 00000001C002148C: mov     rcx, r15
 * 00000001C002148F: mov     [rsp+68h+var_30], rax
 * 00000001C0021494: lea     rax, [rsp+68h+arg_28]
 * 00000001C002149C: mov     [rsp+68h+var_38], rbx
 * 00000001C00214A1: mov     [rsp+68h+var_40], rax
 * 00000001C00214A6: movzx   edx, sil
 * 00000001C00214AA: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00214AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00214B5: lea     r11, [rsp+68h+var_18]
 * 00000001C00214BA: mov     rbx, [r11+20h]
 * 00000001C00214BE: mov     rbp, [r11+28h]
 * 00000001C00214C2: mov     rsi, [r11+30h]
 * 00000001C00214C6: mov     rsp, r11
 * 00000001C00214C9: pop     r15
 * 00000001C00214CB: pop     r14
 * 00000001C00214CD: pop     rdi
 * 00000001C00214CE: retn
 */
