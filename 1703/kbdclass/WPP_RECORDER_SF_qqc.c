/*
 * XREFs of WPP_RECORDER_SF_qqc @ 0x1C00022F0
 * Callers:
 *     KeyboardPnP @ 0x1C0001F20 (KeyboardPnP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqc @ 0x1C00022F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00022F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00022F0: mov     [rsp+arg_0], rbx
 * 00000001C00022F5: push    rsi
 * 00000001C00022F6: sub     rsp, 60h
 * 00000001C00022FA: mov     rbx, rcx
 * 00000001C00022FD: mov     esi, 55h ; 'U'
 * 00000001C0002302: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002309: mov     eax, [rcx+2Ch]
 * 00000001C000230C: test    al, 20h
 * 00000001C000230E: jnz     loc_1C00040EA
 * 00000001C0002314: mov     [rsp+68h+var_10], 0
 * 00000001C000231D: lea     rax, [rsp+68h+arg_38]
 * 00000001C0002325: mov     [rsp+68h+var_18], 1
 * 00000001C000232E: lea     r9, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C0002335: mov     [rsp+68h+var_20], rax
 * 00000001C000233A: mov     edx, 4
 * 00000001C000233F: mov     [rsp+68h+var_28], 8
 * 00000001C0002348: lea     rax, [rsp+68h+arg_30]
 * 00000001C0002350: mov     [rsp+68h+var_30], rax
 * 00000001C0002355: mov     rcx, rbx
 * 00000001C0002358: lea     rax, [rsp+68h+arg_28]
 * 00000001C0002360: mov     [rsp+68h+var_38], 8
 * 00000001C0002369: mov     [rsp+68h+var_40], rax
 * 00000001C000236E: lea     r8d, [rdx+2]
 * 00000001C0002372: mov     word ptr [rsp+68h+var_48], si
 * 00000001C0002377: call    cs:__imp_WppAutoLogTrace
 * 00000001C000237D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0002382: add     rsp, 60h
 * 00000001C0002386: pop     rsi
 * 00000001C0002387: retn
 * 00000001C00040EA: cmp     byte ptr [rcx+29h], 4
 * 00000001C00040EE: jb      loc_1C0002314
 * 00000001C00040F4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00040FB: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0004103: mov     rcx, [rcx+18h]
 * 00000001C0004107: lea     r8, WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids
 * 00000001C000410E: mov     [rsp+68h+var_18], 0
 * 00000001C0004117: mov     [rsp+68h+var_20], 1
 * 00000001C0004120: mov     [rsp+68h+var_28], rdx
 * 00000001C0004125: lea     rdx, [rsp+68h+arg_30]
 * 00000001C000412D: mov     [rsp+68h+var_30], 8
 * 00000001C0004136: mov     [rsp+68h+var_38], rdx
 * 00000001C000413B: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0004143: mov     [rsp+68h+var_40], 8
 * 00000001C000414C: mov     [rsp+68h+var_48], rdx
 * 00000001C0004151: mov     edx, 2Bh ; '+'
 * 00000001C0004156: movzx   r9d, si
 * 00000001C000415A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004160: nop
 * 00000001C0004161: jmp     loc_1C0002314
 */
