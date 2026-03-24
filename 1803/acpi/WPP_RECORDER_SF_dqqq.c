/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C004310C
 * Callers:
 *     ACPIWorkerThread @ 0x1C0042F50 (ACPIWorkerThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C004310C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004310C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004310C: mov     r11, rsp
 * 00000001C004310F: mov     [r11+8], rbx
 * 00000001C0043113: mov     [r11+10h], rbp
 * 00000001C0043117: push    rdi
 * 00000001C0043118: sub     rsp, 70h
 * 00000001C004311C: mov     rbx, rcx
 * 00000001C004311F: mov     ebp, 0Ah
 * 00000001C0043124: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004312B: lea     edi, [rbp-2]
 * 00000001C004312E: mov     eax, [rcx+2Ch]
 * 00000001C0043131: test    al, 1
 * 00000001C0043133: jz      short loc_1C0043193
 * 00000001C0043135: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043139: jb      short loc_1C0043193
 * 00000001C004313B: and     qword ptr [r11-18h], 0
 * 00000001C0043140: lea     rdx, [r11+48h]
 * 00000001C0043144: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004314B: lea     r8, WPP_8bdf959d721d3c786308dca9b6ce0add_Traceguids
 * 00000001C0043152: mov     rcx, [rcx+18h]
 * 00000001C0043156: mov     [r11-20h], rdi
 * 00000001C004315A: mov     [r11-28h], rdx
 * 00000001C004315E: lea     rdx, [r11+40h]
 * 00000001C0043162: mov     [r11-30h], rdi
 * 00000001C0043166: mov     [r11-38h], rdx
 * 00000001C004316A: lea     rdx, [r11+38h]
 * 00000001C004316E: mov     [r11-40h], rdi
 * 00000001C0043172: mov     [r11-48h], rdx
 * 00000001C0043176: lea     rdx, [r11+30h]
 * 00000001C004317A: mov     qword ptr [r11-50h], 4
 * 00000001C0043182: mov     [r11-58h], rdx
 * 00000001C0043186: lea     edx, [rbp+21h]
 * 00000001C0043189: movzx   r9d, bp
 * 00000001C004318D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043193: and     [rsp+78h+var_10], 0
 * 00000001C0043199: lea     rax, [rsp+78h+arg_40]
 * 00000001C00431A1: mov     [rsp+78h+var_18], rdi
 * 00000001C00431A6: lea     r9, WPP_8bdf959d721d3c786308dca9b6ce0add_Traceguids
 * 00000001C00431AD: mov     [rsp+78h+var_20], rax
 * 00000001C00431B2: mov     edx, 2
 * 00000001C00431B7: mov     [rsp+78h+var_28], rdi
 * 00000001C00431BC: lea     rax, [rsp+78h+arg_38]
 * 00000001C00431C4: mov     [rsp+78h+var_30], rax
 * 00000001C00431C9: mov     rcx, rbx
 * 00000001C00431CC: mov     [rsp+78h+var_38], rdi
 * 00000001C00431D1: lea     rax, [rsp+78h+arg_30]
 * 00000001C00431D9: mov     [rsp+78h+var_40], rax
 * 00000001C00431DE: lea     r8d, [rdx-1]
 * 00000001C00431E2: lea     rax, [rsp+78h+arg_28]
 * 00000001C00431EA: mov     [rsp+78h+var_48], 4
 * 00000001C00431F3: mov     [rsp+78h+var_50], rax
 * 00000001C00431F8: mov     [rsp+78h+var_58], bp
 * 00000001C00431FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043203: lea     r11, [rsp+78h+var_8]
 * 00000001C0043208: mov     rbx, [r11+10h]
 * 00000001C004320C: mov     rbp, [r11+18h]
 * 00000001C0043210: mov     rsp, r11
 * 00000001C0043213: pop     rdi
 * 00000001C0043214: retn
 */
