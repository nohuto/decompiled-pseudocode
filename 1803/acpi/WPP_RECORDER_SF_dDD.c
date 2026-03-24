/*
 * XREFs of WPP_RECORDER_SF_DDD @ 0x1C0033F14
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C00330B0 (AcpiConvertPackageArgumentToPackageObj.c)
 *     NotifyHandler @ 0x1C0035A50 (NotifyHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDD @ 0x1C0033F14
 * Reason: Hex-Rays returned no pseudocode for 0x1C0033F14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0033F14: mov     [rsp+arg_0], rbx
 * 00000001C0033F19: mov     [rsp+arg_8], rbp
 * 00000001C0033F1E: mov     [rsp+arg_10], rsi
 * 00000001C0033F23: push    rdi
 * 00000001C0033F24: push    r14
 * 00000001C0033F26: push    r15
 * 00000001C0033F28: sub     rsp, 60h
 * 00000001C0033F2C: mov     r14d, r8d
 * 00000001C0033F2F: mov     sil, dl
 * 00000001C0033F32: mov     edi, r8d
 * 00000001C0033F35: movzx   ebp, r9w
 * 00000001C0033F39: shr     rdi, 10h
 * 00000001C0033F3D: mov     r15, rcx
 * 00000001C0033F40: lea     ebx, [r14-1]
 * 00000001C0033F44: mov     r10d, ebx
 * 00000001C0033F47: and     ebx, 1Fh
 * 00000001C0033F4A: shr     r10, 5
 * 00000001C0033F4E: lea     rax, [rdi+rdi*4]
 * 00000001C0033F52: and     r10d, 7FFh
 * 00000001C0033F59: mov     edx, ebx
 * 00000001C0033F5B: mov     ebx, 4
 * 00000001C0033F60: lea     r11, [r10+rax*4]
 * 00000001C0033F64: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0033F6B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0033F70: bt      eax, edx
 * 00000001C0033F73: jnb     short loc_1C0033FE0
 * 00000001C0033F75: lea     rcx, [rdi+rdi*4]
 * 00000001C0033F79: add     rcx, rcx
 * 00000001C0033F7C: cmp     [r10+rcx*8+29h], sil
 * 00000001C0033F81: jb      short loc_1C0033FE0
 * 00000001C0033F83: and     [rsp+78h+var_28], 0
 * 00000001C0033F89: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0033F91: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0033F98: mov     r8, [rsp+78h+arg_20]
 * 00000001C0033FA0: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0033FA5: mov     [rsp+78h+var_30], rbx
 * 00000001C0033FAA: mov     [rsp+78h+var_38], rdx
 * 00000001C0033FAF: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0033FB7: mov     [rsp+78h+var_40], rbx
 * 00000001C0033FBC: mov     [rsp+78h+var_48], rdx
 * 00000001C0033FC1: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0033FC9: mov     [rsp+78h+var_50], rbx
 * 00000001C0033FCE: mov     [rsp+78h+var_58], rdx
 * 00000001C0033FD3: lea     edx, [rbx+27h]
 * 00000001C0033FD6: movzx   r9d, r9w
 * 00000001C0033FDA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033FE0: and     [rsp+78h+var_20], 0
 * 00000001C0033FE6: lea     rax, [rsp+78h+arg_38]
 * 00000001C0033FEE: mov     r9, [rsp+78h+arg_20]
 * 00000001C0033FF6: mov     r8d, r14d
 * 00000001C0033FF9: mov     [rsp+78h+var_28], rbx
 * 00000001C0033FFE: mov     rcx, r15
 * 00000001C0034001: mov     [rsp+78h+var_30], rax
 * 00000001C0034006: lea     rax, [rsp+78h+arg_30]
 * 00000001C003400E: mov     [rsp+78h+var_38], rbx
 * 00000001C0034013: mov     [rsp+78h+var_40], rax
 * 00000001C0034018: lea     rax, [rsp+78h+arg_28]
 * 00000001C0034020: mov     [rsp+78h+var_48], rbx
 * 00000001C0034025: mov     [rsp+78h+var_50], rax
 * 00000001C003402A: movzx   edx, sil
 * 00000001C003402E: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0034033: call    cs:__imp_WppAutoLogTrace
 * 00000001C0034039: lea     r11, [rsp+78h+var_18]
 * 00000001C003403E: mov     rbx, [r11+20h]
 * 00000001C0034042: mov     rbp, [r11+28h]
 * 00000001C0034046: mov     rsi, [r11+30h]
 * 00000001C003404A: mov     rsp, r11
 * 00000001C003404D: pop     r15
 * 00000001C003404F: pop     r14
 * 00000001C0034051: pop     rdi
 * 00000001C0034052: retn
 */
