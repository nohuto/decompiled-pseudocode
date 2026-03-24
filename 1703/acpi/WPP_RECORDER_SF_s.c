/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0001FFC
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A13B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AA430 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0001FFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0001FFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0001FFC: mov     [rsp+arg_0], rbx
 * 00000001C0002001: mov     [rsp+arg_8], rbp
 * 00000001C0002006: mov     [rsp+arg_10], rsi
 * 00000001C000200B: push    rdi
 * 00000001C000200C: push    r12
 * 00000001C000200E: push    r13
 * 00000001C0002010: push    r14
 * 00000001C0002012: push    r15
 * 00000001C0002014: sub     rsp, 40h
 * 00000001C0002018: mov     rbp, cs:WPP_GLOBAL_Control
 * 00000001C000201F: mov     r14b, dl
 * 00000001C0002022: mov     r13d, r8d
 * 00000001C0002025: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0002029: mov     esi, r8d
 * 00000001C000202C: movzx   r15d, r9w
 * 00000001C0002030: shr     rsi, 10h
 * 00000001C0002034: lea     r8, aNull_0; "NULL"
 * 00000001C000203B: mov     r12, rcx
 * 00000001C000203E: lea     ebx, [r13-1]
 * 00000001C0002042: mov     r10d, ebx
 * 00000001C0002045: and     ebx, 1Fh
 * 00000001C0002048: shr     r10, 5
 * 00000001C000204C: lea     rax, [rsi+rsi*4]
 * 00000001C0002050: and     r10d, 7FFh
 * 00000001C0002057: mov     edx, ebx
 * 00000001C0002059: mov     rbx, [rsp+68h+arg_28]
 * 00000001C0002061: lea     r11, [r10+rax*4]
 * 00000001C0002065: mov     eax, [rbp+r11*4+2Ch]
 * 00000001C000206A: bt      eax, edx
 * 00000001C000206D: jb      loc_1C003BD56
 * 00000001C0002073: test    rbx, rbx
 * 00000001C0002076: jz      loc_1C003BDCC
 * 00000001C000207C: inc     rdi
 * 00000001C000207F: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0002083: jnz     short loc_1C000207C
 * 00000001C0002085: inc     rdi
 * 00000001C0002088: mov     r9, [rsp+68h+arg_20]
 * 00000001C0002090: test    rbx, rbx
 * 00000001C0002093: movzx   edx, r14b
 * 00000001C0002097: mov     rcx, r12
 * 00000001C000209A: cmovz   rbx, r8
 * 00000001C000209E: and     [rsp+68h+var_30], 0
 * 00000001C00020A4: mov     [rsp+68h+var_38], rdi
 * 00000001C00020A9: mov     r8d, r13d
 * 00000001C00020AC: mov     [rsp+68h+var_40], rbx
 * 00000001C00020B1: mov     word ptr [rsp+68h+var_48], r15w
 * 00000001C00020B7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00020BD: lea     r11, [rsp+68h+var_28]
 * 00000001C00020C2: mov     rbx, [r11+30h]
 * 00000001C00020C6: mov     rbp, [r11+38h]
 * 00000001C00020CA: mov     rsi, [r11+40h]
 * 00000001C00020CE: mov     rsp, r11
 * 00000001C00020D1: pop     r15
 * 00000001C00020D3: pop     r14
 * 00000001C00020D5: pop     r13
 * 00000001C00020D7: pop     r12
 * 00000001C00020D9: pop     rdi
 * 00000001C00020DA: retn
 * 00000001C003BD56: lea     r10, [rsi+rsi*4]
 * 00000001C003BD5A: add     r10, r10
 * 00000001C003BD5D: cmp     [rbp+r10*8+29h], r14b
 * 00000001C003BD62: jb      loc_1C0002073
 * 00000001C003BD68: test    rbx, rbx
 * 00000001C003BD6B: jz      short loc_1C003BD7E
 * 00000001C003BD6D: mov     rdx, rdi
 * 00000001C003BD70: inc     rdx
 * 00000001C003BD73: cmp     byte ptr [rbx+rdx], 0
 * 00000001C003BD77: jnz     short loc_1C003BD70
 * 00000001C003BD79: inc     rdx
 * 00000001C003BD7C: jmp     short loc_1C003BD83
 * 00000001C003BD7E: mov     edx, 5
 * 00000001C003BD83: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003BD8A: test    rbx, rbx
 * 00000001C003BD8D: mov     rcx, rbx
 * 00000001C003BD90: movzx   r9d, r15w
 * 00000001C003BD94: cmovz   rcx, r8
 * 00000001C003BD98: and     [rsp+68h+var_38], 0
 * 00000001C003BD9E: mov     r8, [rsp+68h+arg_20]
 * 00000001C003BDA6: mov     [rsp+68h+var_40], rdx
 * 00000001C003BDAB: mov     edx, 2Bh ; '+'
 * 00000001C003BDB0: mov     [rsp+68h+var_48], rcx
 * 00000001C003BDB5: mov     rcx, [rbp+r10*8+18h]
 * 00000001C003BDBA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003BDC0: lea     r8, aNull_0; "NULL"
 * 00000001C003BDC7: jmp     loc_1C0002073
 * 00000001C003BDCC: mov     edi, 5
 * 00000001C003BDD1: jmp     loc_1C0002088
 */
