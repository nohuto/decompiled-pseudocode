/*
 * XREFs of KyStartUserThread @ 0x140188C40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140188C40 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140188ED0 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140188C40
 * Reason: Hex-Rays returned no pseudocode for 0x140188C40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140188C40: sub     rsp, 8
 * 0000000140188C44: push    rbp
 * 0000000140188C45: sub     rsp, 158h
 * 0000000140188C4C: lea     rbp, [rsp+80h]
 * 0000000140188C54: mov     [rbp+0E8h+var_13D], 1
 * 0000000140188C58: mov     [rbp+0E8h+var_138], rax
 * 0000000140188C5C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140188C60: mov     [rbp+0E8h+var_128], rdx
 * 0000000140188C64: mov     [rbp+0E8h+var_120], r8
 * 0000000140188C68: mov     [rbp+0E8h+var_118], r9
 * 0000000140188C6C: mov     [rbp+0E8h+var_110], r10
 * 0000000140188C70: mov     [rbp+0E8h+var_108], r11
 * 0000000140188C74: test    [rbp+0E8h+arg_0], 1
 * 0000000140188C7B: jnz     short loc_140188CAA
 * 0000000140188C7D: lfence
 * 0000000140188C80: test    byte ptr gs:278h, 1
 * 0000000140188C89: jnz     short loc_140188C93
 * 0000000140188C8B: lfence
 * 0000000140188C8E: jmp     loc_140188E7D
 * 0000000140188C93: movzx   eax, byte ptr gs:27Ah
 * 0000000140188C9C: mov     ecx, 48h ; 'H'
 * 0000000140188CA1: xor     edx, edx
 * 0000000140188CA3: wrmsr
 * 0000000140188CA5: jmp     loc_140188E7D
 * 0000000140188CAA: test    cs:KiKvaShadow, 1
 * 0000000140188CB1: jnz     short loc_140188CB6
 * 0000000140188CB3: swapgs
 * 0000000140188CB6: lfence
 * 0000000140188CB9: mov     r10, gs:188h
 * 0000000140188CC2: mov     rcx, gs:188h
 * 0000000140188CCB: mov     rcx, [rcx+220h]
 * 0000000140188CD2: mov     rcx, [rcx+818h]
 * 0000000140188CD9: mov     gs:270h, rcx
 * 0000000140188CE2: movzx   eax, byte ptr gs:27Bh
 * 0000000140188CEB: cmp     gs:27Ah, al
 * 0000000140188CF3: jz      short loc_140188D06
 * 0000000140188CF5: mov     gs:27Ah, al
 * 0000000140188CFD: mov     ecx, 48h ; 'H'
 * 0000000140188D02: xor     edx, edx
 * 0000000140188D04: wrmsr
 * 0000000140188D06: movzx   edx, byte ptr gs:278h
 * 0000000140188D0F: test    edx, 8
 * 0000000140188D15: jz      short loc_140188D2A
 * 0000000140188D17: mov     eax, 1
 * 0000000140188D1C: xor     edx, edx
 * 0000000140188D1E: mov     ecx, 49h ; 'I'
 * 0000000140188D23: wrmsr
 * 0000000140188D25: jmp     loc_140188E68
 * 0000000140188D2A: test    edx, 2
 * 0000000140188D30: jz      loc_140188E65
 * 0000000140188D36: test    byte ptr gs:279h, 4
 * 0000000140188D3F: jnz     loc_140188E65
 * 0000000140188D45: call    loc_140188E58
 * 0000000140188D4A: add     rsp, 8
 * 0000000140188D4E: call    loc_140188E61
 * 0000000140188D53: add     rsp, 8
 * 0000000140188D57: call    loc_140188D4A
 * 0000000140188D5C: add     rsp, 8
 * 0000000140188D60: call    loc_140188D53
 * 0000000140188D65: add     rsp, 8
 * 0000000140188D69: call    loc_140188D5C
 * 0000000140188D6E: add     rsp, 8
 * 0000000140188D72: call    loc_140188D65
 * 0000000140188D77: add     rsp, 8
 * 0000000140188D7B: call    loc_140188D6E
 * 0000000140188D80: add     rsp, 8
 * 0000000140188D84: call    loc_140188D77
 * 0000000140188D89: add     rsp, 8
 * 0000000140188D8D: call    loc_140188D80
 * 0000000140188D92: add     rsp, 8
 * 0000000140188D96: call    loc_140188D89
 * 0000000140188D9B: add     rsp, 8
 * 0000000140188D9F: call    loc_140188D92
 * 0000000140188DA4: add     rsp, 8
 * 0000000140188DA8: call    loc_140188D9B
 * 0000000140188DAD: add     rsp, 8
 * 0000000140188DB1: call    loc_140188DA4
 * 0000000140188DB6: add     rsp, 8
 * 0000000140188DBA: call    loc_140188DAD
 * 0000000140188DBF: add     rsp, 8
 * 0000000140188DC3: call    loc_140188DB6
 * 0000000140188DC8: add     rsp, 8
 * 0000000140188DCC: call    loc_140188DBF
 * 0000000140188DD1: add     rsp, 8
 * 0000000140188DD5: call    loc_140188DC8
 * 0000000140188DDA: add     rsp, 8
 * 0000000140188DDE: call    loc_140188DD1
 * 0000000140188DE3: add     rsp, 8
 * 0000000140188DE7: call    loc_140188DDA
 * 0000000140188DEC: add     rsp, 8
 * 0000000140188DF0: call    loc_140188DE3
 * 0000000140188DF5: add     rsp, 8
 * 0000000140188DF9: call    loc_140188DEC
 * 0000000140188DFE: add     rsp, 8
 * 0000000140188E02: call    loc_140188DF5
 * 0000000140188E07: add     rsp, 8
 * 0000000140188E0B: call    loc_140188DFE
 * 0000000140188E10: add     rsp, 8
 * 0000000140188E14: call    loc_140188E07
 * 0000000140188E19: add     rsp, 8
 * 0000000140188E1D: call    loc_140188E10
 * 0000000140188E22: add     rsp, 8
 * 0000000140188E26: call    loc_140188E19
 * 0000000140188E2B: add     rsp, 8
 * 0000000140188E2F: call    loc_140188E22
 * 0000000140188E34: add     rsp, 8
 * 0000000140188E38: call    loc_140188E2B
 * 0000000140188E3D: add     rsp, 8
 * 0000000140188E41: call    loc_140188E34
 * 0000000140188E46: add     rsp, 8
 * 0000000140188E4A: call    loc_140188E3D
 * 0000000140188E4F: add     rsp, 8
 * 0000000140188E53: call    loc_140188E46
 * 0000000140188E58: add     rsp, 8
 * 0000000140188E5C: call    loc_140188E4F
 * 0000000140188E61: add     rsp, 8
 * 0000000140188E65: lfence
 * 0000000140188E68: test    byte ptr [r10+3], 3
 * 0000000140188E6D: mov     [rbp+0E8h+var_68], 0
 * 0000000140188E76: jz      short loc_140188E7D
 * 0000000140188E78: call    KiSaveDebugRegisterState
 * 0000000140188E7D: cld
 * 0000000140188E7E: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140188E82: ldmxcsr dword ptr gs:180h
 * 0000000140188E8B: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140188E8F: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140188E93: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140188E97: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140188E9B: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140188E9F: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140188EA3: test    [rbp+0E8h+arg_8], 200h
 * 0000000140188EAD: jz      short loc_140188EB0
 * 0000000140188EAF: sti
 * 0000000140188EB0: call    KxStartUserThread
 * 0000000140188EB5: nop     word ptr [rax+rax+00000000h]
 * 0000000140188EC0: nop
 * 0000000140188EC1: retn
 */
