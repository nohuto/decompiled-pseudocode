/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0001AA8
 * Callers:
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C0081B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0001AA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001AA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001AA8: mov     [rsp+arg_0], rbx
 * 00000001C0001AAD: mov     [rsp+arg_8], rbp
 * 00000001C0001AB2: mov     [rsp+arg_10], rsi
 * 00000001C0001AB7: push    rdi
 * 00000001C0001AB8: push    r12
 * 00000001C0001ABA: push    r13
 * 00000001C0001ABC: push    r14
 * 00000001C0001ABE: push    r15
 * 00000001C0001AC0: sub     rsp, 40h
 * 00000001C0001AC4: mov     rbp, cs:WPP_GLOBAL_Control
 * 00000001C0001ACB: mov     r14b, dl
 * 00000001C0001ACE: mov     r13d, r8d
 * 00000001C0001AD1: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0001AD5: mov     esi, r8d
 * 00000001C0001AD8: movzx   r15d, r9w
 * 00000001C0001ADC: shr     rsi, 10h
 * 00000001C0001AE0: lea     r8, aNull_0; "NULL"
 * 00000001C0001AE7: mov     r12, rcx
 * 00000001C0001AEA: lea     ebx, [r13-1]
 * 00000001C0001AEE: mov     r10d, ebx
 * 00000001C0001AF1: and     ebx, 1Fh
 * 00000001C0001AF4: shr     r10, 5
 * 00000001C0001AF8: lea     rax, [rsi+rsi*4]
 * 00000001C0001AFC: and     r10d, 7FFh
 * 00000001C0001B03: mov     edx, ebx
 * 00000001C0001B05: mov     rbx, [rsp+68h+arg_28]
 * 00000001C0001B0D: lea     r11, [r10+rax*4]
 * 00000001C0001B11: mov     eax, [rbp+r11*4+2Ch]
 * 00000001C0001B16: bt      eax, edx
 * 00000001C0001B19: jb      loc_1C0004F96
 * 00000001C0001B1F: test    rbx, rbx
 * 00000001C0001B22: jz      loc_1C000500C
 * 00000001C0001B28: inc     rdi
 * 00000001C0001B2B: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0001B2F: jnz     short loc_1C0001B28
 * 00000001C0001B31: inc     rdi
 * 00000001C0001B34: mov     r9, [rsp+68h+arg_20]
 * 00000001C0001B3C: test    rbx, rbx
 * 00000001C0001B3F: movzx   edx, r14b
 * 00000001C0001B43: mov     rcx, r12
 * 00000001C0001B46: cmovz   rbx, r8
 * 00000001C0001B4A: and     [rsp+68h+var_30], 0
 * 00000001C0001B50: mov     [rsp+68h+var_38], rdi
 * 00000001C0001B55: mov     r8d, r13d
 * 00000001C0001B58: mov     [rsp+68h+var_40], rbx
 * 00000001C0001B5D: mov     word ptr [rsp+68h+var_48], r15w
 * 00000001C0001B63: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001B69: lea     r11, [rsp+68h+var_28]
 * 00000001C0001B6E: mov     rbx, [r11+30h]
 * 00000001C0001B72: mov     rbp, [r11+38h]
 * 00000001C0001B76: mov     rsi, [r11+40h]
 * 00000001C0001B7A: mov     rsp, r11
 * 00000001C0001B7D: pop     r15
 * 00000001C0001B7F: pop     r14
 * 00000001C0001B81: pop     r13
 * 00000001C0001B83: pop     r12
 * 00000001C0001B85: pop     rdi
 * 00000001C0001B86: retn
 * 00000001C0004F96: lea     r10, [rsi+rsi*4]
 * 00000001C0004F9A: add     r10, r10
 * 00000001C0004F9D: cmp     [rbp+r10*8+29h], r14b
 * 00000001C0004FA2: jb      loc_1C0001B1F
 * 00000001C0004FA8: test    rbx, rbx
 * 00000001C0004FAB: jz      short loc_1C0004FBE
 * 00000001C0004FAD: mov     rdx, rdi
 * 00000001C0004FB0: inc     rdx
 * 00000001C0004FB3: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0004FB7: jnz     short loc_1C0004FB0
 * 00000001C0004FB9: inc     rdx
 * 00000001C0004FBC: jmp     short loc_1C0004FC3
 * 00000001C0004FBE: mov     edx, 5
 * 00000001C0004FC3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004FCA: test    rbx, rbx
 * 00000001C0004FCD: mov     rcx, rbx
 * 00000001C0004FD0: movzx   r9d, r15w
 * 00000001C0004FD4: cmovz   rcx, r8
 * 00000001C0004FD8: and     [rsp+68h+var_38], 0
 * 00000001C0004FDE: mov     r8, [rsp+68h+arg_20]
 * 00000001C0004FE6: mov     [rsp+68h+var_40], rdx
 * 00000001C0004FEB: mov     edx, 2Bh ; '+'
 * 00000001C0004FF0: mov     [rsp+68h+var_48], rcx
 * 00000001C0004FF5: mov     rcx, [rbp+r10*8+18h]
 * 00000001C0004FFA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005000: lea     r8, aNull_0; "NULL"
 * 00000001C0005007: jmp     loc_1C0001B1F
 * 00000001C000500C: mov     edi, 5
 * 00000001C0005011: jmp     loc_1C0001B34
 */
