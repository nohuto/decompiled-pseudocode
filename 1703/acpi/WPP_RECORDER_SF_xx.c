/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C0006038
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0088F00 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xx @ 0x1C0006038
 * Reason: Hex-Rays returned no pseudocode for 0x1C0006038
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0006038: mov     [rsp+arg_0], rbx
 * 00000001C000603D: mov     [rsp+arg_8], rsi
 * 00000001C0006042: push    rdi
 * 00000001C0006043: sub     rsp, 50h
 * 00000001C0006047: mov     rbx, rcx
 * 00000001C000604A: mov     esi, 0Ch
 * 00000001C000604F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0006056: lea     edi, [rsi-4]
 * 00000001C0006059: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C0006060: jnz     loc_1C002D402
 * 00000001C0006066: and     [rsp+58h+var_10], 0
 * 00000001C000606C: lea     rax, [rsp+58h+arg_30]
 * 00000001C0006074: mov     [rsp+58h+var_18], rdi
 * 00000001C0006079: lea     r9, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C0006080: mov     [rsp+58h+var_20], rax
 * 00000001C0006085: mov     edx, 4
 * 00000001C000608A: lea     rax, [rsp+58h+arg_28]
 * 00000001C0006092: mov     [rsp+58h+var_28], rdi
 * 00000001C0006097: mov     [rsp+58h+var_30], rax
 * 00000001C000609C: mov     rcx, rbx
 * 00000001C000609F: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00060A4: lea     r8d, [rdx+10h]
 * 00000001C00060A8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00060AE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00060B3: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00060B8: add     rsp, 50h
 * 00000001C00060BC: pop     rdi
 * 00000001C00060BD: retn
 * 00000001C002D402: cmp     byte ptr [rcx+29h], 4
 * 00000001C002D406: jb      loc_1C0006066
 * 00000001C002D40C: and     [rsp+58h+var_18], 0
 * 00000001C002D412: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002D41A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D421: lea     r8, WPP_7e722731483c3b8ec3839991a228af4a_Traceguids
 * 00000001C002D428: mov     rcx, [rcx+18h]
 * 00000001C002D42C: mov     [rsp+58h+var_20], rdi
 * 00000001C002D431: mov     [rsp+58h+var_28], rdx
 * 00000001C002D436: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002D43E: mov     [rsp+58h+var_30], rdi
 * 00000001C002D443: mov     [rsp+58h+var_38], rdx
 * 00000001C002D448: mov     edx, 2Bh ; '+'
 * 00000001C002D44D: movzx   r9d, si
 * 00000001C002D451: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D457: nop
 * 00000001C002D458: jmp     loc_1C0006066
 */
