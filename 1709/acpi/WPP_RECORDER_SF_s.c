/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C000325C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A4004 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C000325C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000325C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000325C: mov     [rsp+arg_0], rbx
 * 00000001C0003261: mov     [rsp+arg_8], rbp
 * 00000001C0003266: mov     [rsp+arg_10], rsi
 * 00000001C000326B: push    rdi
 * 00000001C000326C: push    r12
 * 00000001C000326E: push    r13
 * 00000001C0003270: push    r14
 * 00000001C0003272: push    r15
 * 00000001C0003274: sub     rsp, 40h
 * 00000001C0003278: mov     rbp, cs:WPP_GLOBAL_Control
 * 00000001C000327F: mov     r14b, dl
 * 00000001C0003282: mov     r13d, r8d
 * 00000001C0003285: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0003289: mov     esi, r8d
 * 00000001C000328C: movzx   r15d, r9w
 * 00000001C0003290: shr     rsi, 10h
 * 00000001C0003294: lea     r8, aNull_0; "NULL"
 * 00000001C000329B: mov     r12, rcx
 * 00000001C000329E: lea     ebx, [r13-1]
 * 00000001C00032A2: mov     r10d, ebx
 * 00000001C00032A5: and     ebx, 1Fh
 * 00000001C00032A8: shr     r10, 5
 * 00000001C00032AC: lea     rax, [rsi+rsi*4]
 * 00000001C00032B0: and     r10d, 7FFh
 * 00000001C00032B7: mov     edx, ebx
 * 00000001C00032B9: mov     rbx, [rsp+68h+arg_28]
 * 00000001C00032C1: lea     r11, [r10+rax*4]
 * 00000001C00032C5: mov     eax, [rbp+r11*4+2Ch]
 * 00000001C00032CA: bt      eax, edx
 * 00000001C00032CD: jb      loc_1C003205C
 * 00000001C00032D3: test    rbx, rbx
 * 00000001C00032D6: jz      loc_1C00320D2
 * 00000001C00032DC: inc     rdi
 * 00000001C00032DF: cmp     byte ptr [rbx+rdi], 0
 * 00000001C00032E3: jnz     short loc_1C00032DC
 * 00000001C00032E5: inc     rdi
 * 00000001C00032E8: mov     r9, [rsp+68h+arg_20]
 * 00000001C00032F0: test    rbx, rbx
 * 00000001C00032F3: movzx   edx, r14b
 * 00000001C00032F7: mov     rcx, r12
 * 00000001C00032FA: cmovz   rbx, r8
 * 00000001C00032FE: and     [rsp+68h+var_30], 0
 * 00000001C0003304: mov     [rsp+68h+var_38], rdi
 * 00000001C0003309: mov     r8d, r13d
 * 00000001C000330C: mov     [rsp+68h+var_40], rbx
 * 00000001C0003311: mov     word ptr [rsp+68h+var_48], r15w
 * 00000001C0003317: call    cs:__imp_WppAutoLogTrace
 * 00000001C000331D: lea     r11, [rsp+68h+var_28]
 * 00000001C0003322: mov     rbx, [r11+30h]
 * 00000001C0003326: mov     rbp, [r11+38h]
 * 00000001C000332A: mov     rsi, [r11+40h]
 * 00000001C000332E: mov     rsp, r11
 * 00000001C0003331: pop     r15
 * 00000001C0003333: pop     r14
 * 00000001C0003335: pop     r13
 * 00000001C0003337: pop     r12
 * 00000001C0003339: pop     rdi
 * 00000001C000333A: retn
 * 00000001C003205C: lea     r10, [rsi+rsi*4]
 * 00000001C0032060: add     r10, r10
 * 00000001C0032063: cmp     [rbp+r10*8+29h], r14b
 * 00000001C0032068: jb      loc_1C00032D3
 * 00000001C003206E: test    rbx, rbx
 * 00000001C0032071: jz      short loc_1C0032084
 * 00000001C0032073: mov     rdx, rdi
 * 00000001C0032076: inc     rdx
 * 00000001C0032079: cmp     byte ptr [rbx+rdx], 0
 * 00000001C003207D: jnz     short loc_1C0032076
 * 00000001C003207F: inc     rdx
 * 00000001C0032082: jmp     short loc_1C0032089
 * 00000001C0032084: mov     edx, 5
 * 00000001C0032089: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0032090: test    rbx, rbx
 * 00000001C0032093: mov     rcx, rbx
 * 00000001C0032096: movzx   r9d, r15w
 * 00000001C003209A: cmovz   rcx, r8
 * 00000001C003209E: and     [rsp+68h+var_38], 0
 * 00000001C00320A4: mov     r8, [rsp+68h+arg_20]
 * 00000001C00320AC: mov     [rsp+68h+var_40], rdx
 * 00000001C00320B1: mov     edx, 2Bh ; '+'
 * 00000001C00320B6: mov     [rsp+68h+var_48], rcx
 * 00000001C00320BB: mov     rcx, [rbp+r10*8+18h]
 * 00000001C00320C0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00320C6: lea     r8, aNull_0; "NULL"
 * 00000001C00320CD: jmp     loc_1C00032D3
 * 00000001C00320D2: mov     edi, 5
 * 00000001C00320D7: jmp     loc_1C00032E8
 */
