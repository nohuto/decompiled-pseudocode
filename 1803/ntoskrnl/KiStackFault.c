/*
 * XREFs of KiStackFault @ 0x1401B7D00
 * Callers:
 *     KiStackFaultShadow @ 0x1402CF700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401B7D00 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401B7D00
 * Reason: Hex-Rays returned no pseudocode for 0x1401B7D00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B7D00: push    rbp
 * 00000001401B7D01: sub     rsp, 158h
 * 00000001401B7D08: lea     rbp, [rsp+80h]
 * 00000001401B7D10: mov     [rbp+0D8h+var_12D], 1
 * 00000001401B7D14: mov     [rbp+0D8h+var_128], rax
 * 00000001401B7D18: mov     [rbp+0D8h+var_120], rcx
 * 00000001401B7D1C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401B7D20: mov     [rbp+0D8h+var_110], r8
 * 00000001401B7D24: mov     [rbp+0D8h+var_108], r9
 * 00000001401B7D28: mov     [rbp+0D8h+var_100], r10
 * 00000001401B7D2C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401B7D30: test    [rbp+0D8h+arg_8], 1
 * 00000001401B7D37: jnz     short loc_1401B7D66
 * 00000001401B7D39: lfence
 * 00000001401B7D3C: test    byte ptr gs:278h, 1
 * 00000001401B7D45: jnz     short loc_1401B7D4F
 * 00000001401B7D47: lfence
 * 00000001401B7D4A: jmp     loc_1401B7F82
 * 00000001401B7D4F: movzx   eax, byte ptr gs:27Ah
 * 00000001401B7D58: mov     ecx, 48h ; 'H'
 * 00000001401B7D5D: xor     edx, edx
 * 00000001401B7D5F: wrmsr
 * 00000001401B7D61: jmp     loc_1401B7F82
 * 00000001401B7D66: test    cs:KiKvaShadow, 1
 * 00000001401B7D6D: jnz     short loc_1401B7D72
 * 00000001401B7D6F: swapgs
 * 00000001401B7D72: lfence
 * 00000001401B7D75: mov     r10, gs:188h
 * 00000001401B7D7E: mov     rcx, gs:188h
 * 00000001401B7D87: mov     rcx, [rcx+220h]
 * 00000001401B7D8E: mov     rcx, [rcx+838h]
 * 00000001401B7D95: mov     gs:270h, rcx
 * 00000001401B7D9E: movzx   eax, byte ptr gs:27Bh
 * 00000001401B7DA7: cmp     gs:27Ah, al
 * 00000001401B7DAF: jz      short loc_1401B7DC2
 * 00000001401B7DB1: mov     gs:27Ah, al
 * 00000001401B7DB9: mov     ecx, 48h ; 'H'
 * 00000001401B7DBE: xor     edx, edx
 * 00000001401B7DC0: wrmsr
 * 00000001401B7DC2: movzx   edx, byte ptr gs:278h
 * 00000001401B7DCB: test    edx, 8
 * 00000001401B7DD1: jz      short loc_1401B7DE6
 * 00000001401B7DD3: mov     eax, 1
 * 00000001401B7DD8: xor     edx, edx
 * 00000001401B7DDA: mov     ecx, 49h ; 'I'
 * 00000001401B7DDF: wrmsr
 * 00000001401B7DE1: jmp     loc_1401B7F24
 * 00000001401B7DE6: test    edx, 2
 * 00000001401B7DEC: jz      loc_1401B7F21
 * 00000001401B7DF2: test    byte ptr gs:279h, 4
 * 00000001401B7DFB: jnz     loc_1401B7F21
 * 00000001401B7E01: call    loc_1401B7F14
 * 00000001401B7E06: add     rsp, 8
 * 00000001401B7E0A: call    loc_1401B7F1D
 * 00000001401B7E0F: add     rsp, 8
 * 00000001401B7E13: call    loc_1401B7E06
 * 00000001401B7E18: add     rsp, 8
 * 00000001401B7E1C: call    loc_1401B7E0F
 * 00000001401B7E21: add     rsp, 8
 * 00000001401B7E25: call    loc_1401B7E18
 * 00000001401B7E2A: add     rsp, 8
 * 00000001401B7E2E: call    loc_1401B7E21
 * 00000001401B7E33: add     rsp, 8
 * 00000001401B7E37: call    loc_1401B7E2A
 * 00000001401B7E3C: add     rsp, 8
 * 00000001401B7E40: call    loc_1401B7E33
 * 00000001401B7E45: add     rsp, 8
 * 00000001401B7E49: call    loc_1401B7E3C
 * 00000001401B7E4E: add     rsp, 8
 * 00000001401B7E52: call    loc_1401B7E45
 * 00000001401B7E57: add     rsp, 8
 * 00000001401B7E5B: call    loc_1401B7E4E
 * 00000001401B7E60: add     rsp, 8
 * 00000001401B7E64: call    loc_1401B7E57
 * 00000001401B7E69: add     rsp, 8
 * 00000001401B7E6D: call    loc_1401B7E60
 * 00000001401B7E72: add     rsp, 8
 * 00000001401B7E76: call    loc_1401B7E69
 * 00000001401B7E7B: add     rsp, 8
 * 00000001401B7E7F: call    loc_1401B7E72
 * 00000001401B7E84: add     rsp, 8
 * 00000001401B7E88: call    loc_1401B7E7B
 * 00000001401B7E8D: add     rsp, 8
 * 00000001401B7E91: call    loc_1401B7E84
 * 00000001401B7E96: add     rsp, 8
 * 00000001401B7E9A: call    loc_1401B7E8D
 * 00000001401B7E9F: add     rsp, 8
 * 00000001401B7EA3: call    loc_1401B7E96
 * 00000001401B7EA8: add     rsp, 8
 * 00000001401B7EAC: call    loc_1401B7E9F
 * 00000001401B7EB1: add     rsp, 8
 * 00000001401B7EB5: call    loc_1401B7EA8
 * 00000001401B7EBA: add     rsp, 8
 * 00000001401B7EBE: call    loc_1401B7EB1
 * 00000001401B7EC3: add     rsp, 8
 * 00000001401B7EC7: call    loc_1401B7EBA
 * 00000001401B7ECC: add     rsp, 8
 * 00000001401B7ED0: call    loc_1401B7EC3
 * 00000001401B7ED5: add     rsp, 8
 * 00000001401B7ED9: call    loc_1401B7ECC
 * 00000001401B7EDE: add     rsp, 8
 * 00000001401B7EE2: call    loc_1401B7ED5
 * 00000001401B7EE7: add     rsp, 8
 * 00000001401B7EEB: call    loc_1401B7EDE
 * 00000001401B7EF0: add     rsp, 8
 * 00000001401B7EF4: call    loc_1401B7EE7
 * 00000001401B7EF9: add     rsp, 8
 * 00000001401B7EFD: call    loc_1401B7EF0
 * 00000001401B7F02: add     rsp, 8
 * 00000001401B7F06: call    loc_1401B7EF9
 * 00000001401B7F0B: add     rsp, 8
 * 00000001401B7F0F: call    loc_1401B7F02
 * 00000001401B7F14: add     rsp, 8
 * 00000001401B7F18: call    loc_1401B7F0B
 * 00000001401B7F1D: add     rsp, 8
 * 00000001401B7F21: lfence
 * 00000001401B7F24: test    byte ptr [r10+3], 80h
 * 00000001401B7F29: jz      short loc_1401B7F6D
 * 00000001401B7F2B: mov     ecx, 0C0000102h
 * 00000001401B7F30: rdmsr
 * 00000001401B7F32: shl     rdx, 20h
 * 00000001401B7F36: or      rax, rdx
 * 00000001401B7F39: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B7F40: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B7F48: cmp     [r10+0F0h], rax
 * 00000001401B7F4F: jz      short loc_1401B7F6D
 * 00000001401B7F51: mov     rdx, [r10+1F0h]
 * 00000001401B7F58: bts     dword ptr [r10+74h], 8
 * 00000001401B7F5E: dec     word ptr [r10+1E6h]
 * 00000001401B7F66: mov     [rdx+80h], rax
 * 00000001401B7F6D: test    byte ptr [r10+3], 3
 * 00000001401B7F72: mov     [rbp+0D8h+var_58], 0
 * 00000001401B7F7B: jz      short loc_1401B7F82
 * 00000001401B7F7D: call    KiSaveDebugRegisterState
 * 00000001401B7F82: cld
 * 00000001401B7F83: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401B7F87: ldmxcsr dword ptr gs:180h
 * 00000001401B7F90: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401B7F94: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401B7F98: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401B7F9C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401B7FA0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401B7FA4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401B7FA8: mov     eax, [rbp+0E0h]
 * 00000001401B7FAE: test    [rbp+0D8h+arg_10], 200h
 * 00000001401B7FB8: jz      short loc_1401B7FBB
 * 00000001401B7FBA: sti
 * 00000001401B7FBB: mov     ecx, 0C0000005h
 * 00000001401B7FC0: mov     edx, 2
 * 00000001401B7FC5: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401B7FCC: mov     r9d, [rbp+0E0h]
 * 00000001401B7FD3: or      r9d, 3
 * 00000001401B7FD7: and     r9d, 0FFFFh
 * 00000001401B7FDE: test    [rbp+0D8h+arg_8], 1
 * 00000001401B7FE5: jnz     short loc_1401B7FEB
 * 00000001401B7FE7: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001401B7FEB: xor     r10, r10
 * 00000001401B7FEE: call    KiExceptionDispatch
 * 00000001401B7FF3: nop
 * 00000001401B7FF4: retn
 */
