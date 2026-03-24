/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C004ADFC
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C00497F0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x1C004ADFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C004ADFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004ADFC: mov     [rsp+arg_0], rbx
 * 00000001C004AE01: mov     [rsp+arg_8], rsi
 * 00000001C004AE06: mov     [rsp+arg_10], rdi
 * 00000001C004AE0B: push    r13
 * 00000001C004AE0D: sub     rsp, 60h
 * 00000001C004AE11: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004AE18: lea     r13, aNull_0; "NULL"
 * 00000001C004AE1F: mov     rdi, [rsp+68h+arg_38]
 * 00000001C004AE27: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004AE2B: mov     rsi, rcx
 * 00000001C004AE2E: test    dword ptr [r10+2Ch], 200h
 * 00000001C004AE36: lea     r8d, [rbx+3Ch]
 * 00000001C004AE3A: jz      loc_1C004AED3
 * 00000001C004AE40: cmp     byte ptr [r10+29h], 4
 * 00000001C004AE45: jb      loc_1C004AED3
 * 00000001C004AE4B: test    rdi, rdi
 * 00000001C004AE4E: jz      short loc_1C004AE61
 * 00000001C004AE50: mov     rcx, rbx
 * 00000001C004AE53: inc     rcx
 * 00000001C004AE56: cmp     byte ptr [rdi+rcx], 0
 * 00000001C004AE5A: jnz     short loc_1C004AE53
 * 00000001C004AE5C: inc     rcx
 * 00000001C004AE5F: jmp     short loc_1C004AE66
 * 00000001C004AE61: mov     ecx, 5
 * 00000001C004AE66: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004AE6D: test    rdi, rdi
 * 00000001C004AE70: movzx   r9d, r8w
 * 00000001C004AE74: mov     rdx, rdi
 * 00000001C004AE77: cmovz   rdx, r13
 * 00000001C004AE7B: lea     r8, WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids
 * 00000001C004AE82: and     [rsp+68h+var_18], 0
 * 00000001C004AE88: mov     [rsp+68h+var_20], rcx
 * 00000001C004AE8D: lea     rcx, [rsp+68h+arg_30]
 * 00000001C004AE95: mov     [rsp+68h+var_28], rdx
 * 00000001C004AE9A: mov     edx, 2Bh ; '+'
 * 00000001C004AE9F: mov     [rsp+68h+var_30], 8
 * 00000001C004AEA8: mov     [rsp+68h+var_38], rcx
 * 00000001C004AEAD: lea     rcx, [rsp+68h+arg_28]
 * 00000001C004AEB5: mov     [rsp+68h+var_40], 4
 * 00000001C004AEBE: mov     [rsp+68h+var_48], rcx
 * 00000001C004AEC3: mov     rcx, [r10+18h]
 * 00000001C004AEC7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004AECD: mov     r8d, 3Bh ; ';'
 * 00000001C004AED3: test    rdi, rdi
 * 00000001C004AED6: jz      short loc_1C004AEE6
 * 00000001C004AED8: inc     rbx
 * 00000001C004AEDB: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004AEDF: jnz     short loc_1C004AED8
 * 00000001C004AEE1: inc     rbx
 * 00000001C004AEE4: jmp     short loc_1C004AEEB
 * 00000001C004AEE6: mov     ebx, 5
 * 00000001C004AEEB: test    rdi, rdi
 * 00000001C004AEEE: lea     rax, [rsp+68h+arg_30]
 * 00000001C004AEF6: mov     edx, 4
 * 00000001C004AEFB: lea     r9, WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids
 * 00000001C004AF02: cmovz   rdi, r13
 * 00000001C004AF06: mov     rcx, rsi
 * 00000001C004AF09: and     [rsp+68h+var_10], 0
 * 00000001C004AF0F: mov     [rsp+68h+var_18], rbx
 * 00000001C004AF14: mov     [rsp+68h+var_20], rdi
 * 00000001C004AF19: mov     [rsp+68h+var_28], 8
 * 00000001C004AF22: mov     [rsp+68h+var_30], rax
 * 00000001C004AF27: lea     rax, [rsp+68h+arg_28]
 * 00000001C004AF2F: mov     [rsp+68h+var_38], 4
 * 00000001C004AF38: mov     [rsp+68h+var_40], rax
 * 00000001C004AF3D: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001C004AF43: lea     r8d, [rdx+6]
 * 00000001C004AF47: call    cs:__imp_WppAutoLogTrace
 * 00000001C004AF4D: lea     r11, [rsp+68h+var_8]
 * 00000001C004AF52: mov     rbx, [r11+10h]
 * 00000001C004AF56: mov     rsi, [r11+18h]
 * 00000001C004AF5A: mov     rdi, [r11+20h]
 * 00000001C004AF5E: mov     rsp, r11
 * 00000001C004AF61: pop     r13
 * 00000001C004AF63: retn
 */
