/*
 * XREFs of WPP_RECORDER_SF_IqL @ 0x1C0008700
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C008DC9C (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqL @ 0x1C0008700
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008700: mov     [rsp+arg_0], rbx
 * 00000001C0008705: mov     [rsp+arg_8], rbp
 * 00000001C000870A: push    rsi
 * 00000001C000870B: sub     rsp, 60h
 * 00000001C000870F: mov     rbx, rcx
 * 00000001C0008712: mov     ebp, 0Ah
 * 00000001C0008717: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000871E: lea     esi, [rbp-2]
 * 00000001C0008721: mov     eax, [rcx+2Ch]
 * 00000001C0008724: test    al, 20h
 * 00000001C0008726: jnz     loc_1C002F070
 * 00000001C000872C: and     [rsp+68h+var_10], 0
 * 00000001C0008732: lea     rax, [rsp+68h+arg_38]
 * 00000001C000873A: mov     [rsp+68h+var_18], 4
 * 00000001C0008743: lea     r9, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C000874A: mov     [rsp+68h+var_20], rax
 * 00000001C000874F: mov     edx, 4
 * 00000001C0008754: mov     [rsp+68h+var_28], rsi
 * 00000001C0008759: lea     rax, [rsp+68h+arg_30]
 * 00000001C0008761: mov     [rsp+68h+var_30], rax
 * 00000001C0008766: mov     rcx, rbx
 * 00000001C0008769: lea     rax, [rsp+68h+arg_28]
 * 00000001C0008771: mov     [rsp+68h+var_38], rsi
 * 00000001C0008776: mov     [rsp+68h+var_40], rax
 * 00000001C000877B: lea     r8d, [rdx+2]
 * 00000001C000877F: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0008784: call    cs:__imp_WppAutoLogTrace
 * 00000001C000878A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000878F: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0008794: add     rsp, 60h
 * 00000001C0008798: pop     rsi
 * 00000001C0008799: retn
 * 00000001C002F070: cmp     byte ptr [rcx+29h], 4
 * 00000001C002F074: jb      loc_1C000872C
 * 00000001C002F07A: and     [rsp+68h+var_18], 0
 * 00000001C002F080: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002F088: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F08F: lea     r8, WPP_5b4423268ba73509d671d93121fe7801_Traceguids
 * 00000001C002F096: mov     rcx, [rcx+18h]
 * 00000001C002F09A: mov     [rsp+68h+var_20], 4
 * 00000001C002F0A3: mov     [rsp+68h+var_28], rdx
 * 00000001C002F0A8: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002F0B0: mov     [rsp+68h+var_30], rsi
 * 00000001C002F0B5: mov     [rsp+68h+var_38], rdx
 * 00000001C002F0BA: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002F0C2: mov     [rsp+68h+var_40], rsi
 * 00000001C002F0C7: mov     [rsp+68h+var_48], rdx
 * 00000001C002F0CC: mov     edx, 2Bh ; '+'
 * 00000001C002F0D1: movzx   r9d, bp
 * 00000001C002F0D5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F0DB: nop
 * 00000001C002F0DC: jmp     loc_1C000872C
 */
