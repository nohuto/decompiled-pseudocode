/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C001F9FC
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C001CD70 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x1C001F9FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C001F9FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001F9FC: mov     [rsp+arg_0], rbx
 * 00000001C001FA01: mov     [rsp+arg_8], rsi
 * 00000001C001FA06: mov     [rsp+arg_10], rdi
 * 00000001C001FA0B: push    r13
 * 00000001C001FA0D: sub     rsp, 60h
 * 00000001C001FA11: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C001FA18: lea     r13, aNull_0; "NULL"
 * 00000001C001FA1F: mov     rdi, [rsp+68h+arg_38]
 * 00000001C001FA27: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C001FA2B: mov     rsi, rcx
 * 00000001C001FA2E: test    dword ptr [rdx+2Ch], 200h
 * 00000001C001FA35: lea     r8d, [rbx+3Dh]
 * 00000001C001FA39: jz      loc_1C001FAD8
 * 00000001C001FA3F: cmp     byte ptr [rdx+29h], 4
 * 00000001C001FA43: jb      loc_1C001FAD8
 * 00000001C001FA49: test    rdi, rdi
 * 00000001C001FA4C: jz      short loc_1C001FA5F
 * 00000001C001FA4E: mov     rdx, rbx
 * 00000001C001FA51: inc     rdx
 * 00000001C001FA54: cmp     byte ptr [rdi+rdx], 0
 * 00000001C001FA58: jnz     short loc_1C001FA51
 * 00000001C001FA5A: inc     rdx
 * 00000001C001FA5D: jmp     short loc_1C001FA64
 * 00000001C001FA5F: mov     edx, 5
 * 00000001C001FA64: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001FA6B: test    rdi, rdi
 * 00000001C001FA6E: movzx   r9d, r8w
 * 00000001C001FA72: mov     rcx, rdi
 * 00000001C001FA75: cmovz   rcx, r13
 * 00000001C001FA79: lea     r8, WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids
 * 00000001C001FA80: and     [rsp+68h+var_18], 0
 * 00000001C001FA86: mov     [rsp+68h+var_20], rdx
 * 00000001C001FA8B: mov     edx, 2Bh ; '+'
 * 00000001C001FA90: mov     [rsp+68h+var_28], rcx
 * 00000001C001FA95: lea     rcx, [rsp+68h+arg_30]
 * 00000001C001FA9D: mov     [rsp+68h+var_30], 8
 * 00000001C001FAA6: mov     [rsp+68h+var_38], rcx
 * 00000001C001FAAB: lea     rcx, [rsp+68h+arg_28]
 * 00000001C001FAB3: mov     [rsp+68h+var_40], 4
 * 00000001C001FABC: mov     [rsp+68h+var_48], rcx
 * 00000001C001FAC1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001FAC8: mov     rcx, [rcx+18h]
 * 00000001C001FACC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C001FAD2: mov     r8d, 3Ch ; '<'
 * 00000001C001FAD8: test    rdi, rdi
 * 00000001C001FADB: jz      short loc_1C001FAEB
 * 00000001C001FADD: inc     rbx
 * 00000001C001FAE0: cmp     byte ptr [rdi+rbx], 0
 * 00000001C001FAE4: jnz     short loc_1C001FADD
 * 00000001C001FAE6: inc     rbx
 * 00000001C001FAE9: jmp     short loc_1C001FAF0
 * 00000001C001FAEB: mov     ebx, 5
 * 00000001C001FAF0: test    rdi, rdi
 * 00000001C001FAF3: lea     rax, [rsp+68h+arg_30]
 * 00000001C001FAFB: mov     edx, 4
 * 00000001C001FB00: lea     r9, WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids
 * 00000001C001FB07: cmovz   rdi, r13
 * 00000001C001FB0B: mov     rcx, rsi
 * 00000001C001FB0E: and     [rsp+68h+var_10], 0
 * 00000001C001FB14: mov     [rsp+68h+var_18], rbx
 * 00000001C001FB19: mov     [rsp+68h+var_20], rdi
 * 00000001C001FB1E: mov     [rsp+68h+var_28], 8
 * 00000001C001FB27: mov     [rsp+68h+var_30], rax
 * 00000001C001FB2C: lea     rax, [rsp+68h+arg_28]
 * 00000001C001FB34: mov     [rsp+68h+var_38], 4
 * 00000001C001FB3D: mov     [rsp+68h+var_40], rax
 * 00000001C001FB42: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001C001FB48: lea     r8d, [rdx+6]
 * 00000001C001FB4C: call    cs:__imp_WppAutoLogTrace
 * 00000001C001FB52: lea     r11, [rsp+68h+var_8]
 * 00000001C001FB57: mov     rbx, [r11+10h]
 * 00000001C001FB5B: mov     rsi, [r11+18h]
 * 00000001C001FB5F: mov     rdi, [r11+20h]
 * 00000001C001FB63: mov     rsp, r11
 * 00000001C001FB66: pop     r13
 * 00000001C001FB68: retn
 */
