/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C0011E28
 * Callers:
 *     PnpiGrowResourceList @ 0x1C008EB64 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C008ED30 (PnpiGrowResourceDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x1C0011E28
 * Reason: Hex-Rays returned no pseudocode for 0x1C0011E28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0011E28: mov     [rsp+arg_0], rbx
 * 00000001C0011E2D: mov     [rsp+arg_8], rbp
 * 00000001C0011E32: mov     [rsp+arg_10], rsi
 * 00000001C0011E37: push    rdi
 * 00000001C0011E38: sub     rsp, 60h
 * 00000001C0011E3C: mov     rsi, rcx
 * 00000001C0011E3F: movzx   edi, r9w
 * 00000001C0011E43: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0011E4A: mov     bl, dl
 * 00000001C0011E4C: mov     ebp, 4
 * 00000001C0011E51: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0011E58: jnz     loc_1C002D02E
 * 00000001C0011E5E: and     [rsp+68h+var_10], 0
 * 00000001C0011E64: lea     rax, [rsp+68h+arg_38]
 * 00000001C0011E6C: mov     [rsp+68h+var_18], rbp
 * 00000001C0011E71: lea     r9, WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids
 * 00000001C0011E78: mov     [rsp+68h+var_20], rax
 * 00000001C0011E7D: mov     r8d, 0Eh
 * 00000001C0011E83: mov     [rsp+68h+var_28], rbp
 * 00000001C0011E88: lea     rax, [rsp+68h+arg_30]
 * 00000001C0011E90: mov     [rsp+68h+var_30], rax
 * 00000001C0011E95: mov     rcx, rsi
 * 00000001C0011E98: lea     rax, [rsp+68h+arg_28]
 * 00000001C0011EA0: mov     [rsp+68h+var_38], rbp
 * 00000001C0011EA5: mov     [rsp+68h+var_40], rax
 * 00000001C0011EAA: movzx   edx, bl
 * 00000001C0011EAD: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0011EB2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0011EB8: lea     r11, [rsp+68h+var_8]
 * 00000001C0011EBD: mov     rbx, [r11+10h]
 * 00000001C0011EC1: mov     rbp, [r11+18h]
 * 00000001C0011EC5: mov     rsi, [r11+20h]
 * 00000001C0011EC9: mov     rsp, r11
 * 00000001C0011ECC: pop     rdi
 * 00000001C0011ECD: retn
 * 00000001C002D02E: cmp     [rcx+29h], bl
 * 00000001C002D031: jb      loc_1C0011E5E
 * 00000001C002D037: and     [rsp+68h+var_18], 0
 * 00000001C002D03D: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002D045: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D04C: lea     r8, WPP_f3fa01cb516a3266d7c6f95873d0236b_Traceguids
 * 00000001C002D053: mov     rcx, [rcx+18h]
 * 00000001C002D057: mov     [rsp+68h+var_20], rbp
 * 00000001C002D05C: mov     [rsp+68h+var_28], rdx
 * 00000001C002D061: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D069: mov     [rsp+68h+var_30], rbp
 * 00000001C002D06E: mov     [rsp+68h+var_38], rdx
 * 00000001C002D073: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D07B: mov     [rsp+68h+var_40], rbp
 * 00000001C002D080: mov     [rsp+68h+var_48], rdx
 * 00000001C002D085: mov     edx, 2Bh ; '+'
 * 00000001C002D08A: movzx   r9d, di
 * 00000001C002D08E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D094: nop
 * 00000001C002D095: jmp     loc_1C0011E5E
 */
