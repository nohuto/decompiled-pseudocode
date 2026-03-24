/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C000E1F4
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0088208 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C000E1F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E1F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E1F4: mov     [rsp+arg_0], rbx
 * 00000001C000E1F9: mov     [rsp+arg_8], rbp
 * 00000001C000E1FE: push    rdi
 * 00000001C000E1FF: sub     rsp, 60h
 * 00000001C000E203: mov     rbx, rcx
 * 00000001C000E206: mov     edi, 4
 * 00000001C000E20B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000E212: lea     ebp, [rdi+0Fh]
 * 00000001C000E215: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C000E21C: jnz     loc_1C0038B80
 * 00000001C000E222: and     [rsp+68h+var_10], 0
 * 00000001C000E228: lea     rax, [rsp+68h+arg_38]
 * 00000001C000E230: mov     [rsp+68h+var_18], 8
 * 00000001C000E239: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C000E240: mov     [rsp+68h+var_20], rax
 * 00000001C000E245: mov     r8d, 14h
 * 00000001C000E24B: mov     [rsp+68h+var_28], rdi
 * 00000001C000E250: lea     rax, [rsp+68h+arg_30]
 * 00000001C000E258: mov     [rsp+68h+var_30], rax
 * 00000001C000E25D: mov     edx, edi
 * 00000001C000E25F: lea     rax, [rsp+68h+arg_28]
 * 00000001C000E267: mov     [rsp+68h+var_38], rdi
 * 00000001C000E26C: mov     [rsp+68h+var_40], rax
 * 00000001C000E271: mov     rcx, rbx
 * 00000001C000E274: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C000E279: call    cs:__imp_WppAutoLogTrace
 * 00000001C000E27F: mov     rbx, [rsp+68h+arg_0]
 * 00000001C000E284: mov     rbp, [rsp+68h+arg_8]
 * 00000001C000E289: add     rsp, 60h
 * 00000001C000E28D: pop     rdi
 * 00000001C000E28E: retn
 * 00000001C0038B80: cmp     [rcx+29h], dil
 * 00000001C0038B84: jb      loc_1C000E222
 * 00000001C0038B8A: and     [rsp+68h+var_18], 0
 * 00000001C0038B90: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0038B98: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038B9F: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0038BA6: mov     rcx, [rcx+18h]
 * 00000001C0038BAA: mov     [rsp+68h+var_20], 8
 * 00000001C0038BB3: mov     [rsp+68h+var_28], rdx
 * 00000001C0038BB8: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0038BC0: mov     [rsp+68h+var_30], rdi
 * 00000001C0038BC5: mov     [rsp+68h+var_38], rdx
 * 00000001C0038BCA: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0038BD2: mov     [rsp+68h+var_40], rdi
 * 00000001C0038BD7: mov     [rsp+68h+var_48], rdx
 * 00000001C0038BDC: mov     edx, 2Bh ; '+'
 * 00000001C0038BE1: movzx   r9d, bp
 * 00000001C0038BE5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038BEB: nop
 * 00000001C0038BEC: jmp     loc_1C000E222
 */
