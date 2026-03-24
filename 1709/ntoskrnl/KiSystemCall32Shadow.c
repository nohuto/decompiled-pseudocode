/*
 * XREFs of KiSystemCall32Shadow @ 0x140298D00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x140298D00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140298D00
 * Reason: Hex-Rays returned no pseudocode for 0x140298D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140298D00: swapgs
 * 0000000140298D03: mov     gs:7010h, rsp
 * 0000000140298D0C: mov     rsp, gs:7000h
 * 0000000140298D15: mov     cr3, rsp
 * 0000000140298D18: mov     rsp, gs:7008h
 * 0000000140298D21: push    2Bh ; '+'
 * 0000000140298D23: push    qword ptr gs:7010h
 * 0000000140298D2B: push    r11
 * 0000000140298D2D: push    23h ; '#'
 * 0000000140298D2F: push    rcx
 * 0000000140298D30: sub     rsp, 8
 * 0000000140298D34: push    rbp
 * 0000000140298D35: sub     rsp, 158h
 * 0000000140298D3C: lea     rbp, [rsp+190h+var_110]
 * 0000000140298D44: mov     byte ptr [rbp-55h], 1
 * 0000000140298D48: mov     [rbp-50h], rax
 * 0000000140298D4C: mov     [rbp-48h], rcx
 * 0000000140298D50: mov     [rbp-40h], rdx
 * 0000000140298D54: mov     [rbp-38h], r8
 * 0000000140298D58: mov     [rbp-30h], r9
 * 0000000140298D5C: mov     [rbp-28h], r10
 * 0000000140298D60: mov     [rbp-20h], r11
 * 0000000140298D64: test    byte ptr [rbp+0F0h], 1
 * 0000000140298D6B: jnz     short loc_140298D9A
 * 0000000140298D6D: lfence
 * 0000000140298D70: test    byte ptr gs:278h, 1
 * 0000000140298D79: jnz     short loc_140298D83
 * 0000000140298D7B: lfence
 * 0000000140298D7E: jmp     loc_140298FB6
 * 0000000140298D83: movzx   eax, byte ptr gs:27Ah
 * 0000000140298D8C: mov     ecx, 48h ; 'H'
 * 0000000140298D91: xor     edx, edx
 * 0000000140298D93: wrmsr
 * 0000000140298D95: jmp     loc_140298FB6
 * 0000000140298D9A: test    cs:KiKvaShadow, 1
 * 0000000140298DA1: jnz     short loc_140298DA6
 * 0000000140298DA3: swapgs
 * 0000000140298DA6: lfence
 * 0000000140298DA9: mov     r10, gs:188h
 * 0000000140298DB2: mov     rcx, gs:188h
 * 0000000140298DBB: mov     rcx, [rcx+220h]
 * 0000000140298DC2: mov     rcx, [rcx+838h]
 * 0000000140298DC9: mov     gs:270h, rcx
 * 0000000140298DD2: movzx   eax, byte ptr gs:27Bh
 * 0000000140298DDB: cmp     gs:27Ah, al
 * 0000000140298DE3: jz      short loc_140298DF6
 * 0000000140298DE5: mov     gs:27Ah, al
 * 0000000140298DED: mov     ecx, 48h ; 'H'
 * 0000000140298DF2: xor     edx, edx
 * 0000000140298DF4: wrmsr
 * 0000000140298DF6: movzx   edx, byte ptr gs:278h
 * 0000000140298DFF: test    edx, 8
 * 0000000140298E05: jz      short loc_140298E1A
 * 0000000140298E07: mov     eax, 1
 * 0000000140298E0C: xor     edx, edx
 * 0000000140298E0E: mov     ecx, 49h ; 'I'
 * 0000000140298E13: wrmsr
 * 0000000140298E15: jmp     loc_140298F58
 * 0000000140298E1A: test    edx, 2
 * 0000000140298E20: jz      loc_140298F55
 * 0000000140298E26: test    byte ptr gs:279h, 4
 * 0000000140298E2F: jnz     loc_140298F55
 * 0000000140298E35: call    loc_140298F48
 * 0000000140298E3A: add     rsp, 8
 * 0000000140298E3E: call    loc_140298F51
 * 0000000140298E43: add     rsp, 8
 * 0000000140298E47: call    loc_140298E3A
 * 0000000140298E4C: add     rsp, 8
 * 0000000140298E50: call    loc_140298E43
 * 0000000140298E55: add     rsp, 8
 * 0000000140298E59: call    loc_140298E4C
 * 0000000140298E5E: add     rsp, 8
 * 0000000140298E62: call    loc_140298E55
 * 0000000140298E67: add     rsp, 8
 * 0000000140298E6B: call    loc_140298E5E
 * 0000000140298E70: add     rsp, 8
 * 0000000140298E74: call    loc_140298E67
 * 0000000140298E79: add     rsp, 8
 * 0000000140298E7D: call    loc_140298E70
 * 0000000140298E82: add     rsp, 8
 * 0000000140298E86: call    loc_140298E79
 * 0000000140298E8B: add     rsp, 8
 * 0000000140298E8F: call    loc_140298E82
 * 0000000140298E94: add     rsp, 8
 * 0000000140298E98: call    loc_140298E8B
 * 0000000140298E9D: add     rsp, 8
 * 0000000140298EA1: call    loc_140298E94
 * 0000000140298EA6: add     rsp, 8
 * 0000000140298EAA: call    loc_140298E9D
 * 0000000140298EAF: add     rsp, 8
 * 0000000140298EB3: call    loc_140298EA6
 * 0000000140298EB8: add     rsp, 8
 * 0000000140298EBC: call    loc_140298EAF
 * 0000000140298EC1: add     rsp, 8
 * 0000000140298EC5: call    loc_140298EB8
 * 0000000140298ECA: add     rsp, 8
 * 0000000140298ECE: call    loc_140298EC1
 * 0000000140298ED3: add     rsp, 8
 * 0000000140298ED7: call    loc_140298ECA
 * 0000000140298EDC: add     rsp, 8
 * 0000000140298EE0: call    loc_140298ED3
 * 0000000140298EE5: add     rsp, 8
 * 0000000140298EE9: call    loc_140298EDC
 * 0000000140298EEE: add     rsp, 8
 * 0000000140298EF2: call    loc_140298EE5
 * 0000000140298EF7: add     rsp, 8
 * 0000000140298EFB: call    loc_140298EEE
 * 0000000140298F00: add     rsp, 8
 * 0000000140298F04: call    loc_140298EF7
 * 0000000140298F09: add     rsp, 8
 * 0000000140298F0D: call    loc_140298F00
 * 0000000140298F12: add     rsp, 8
 * 0000000140298F16: call    loc_140298F09
 * 0000000140298F1B: add     rsp, 8
 * 0000000140298F1F: call    loc_140298F12
 * 0000000140298F24: add     rsp, 8
 * 0000000140298F28: call    loc_140298F1B
 * 0000000140298F2D: add     rsp, 8
 * 0000000140298F31: call    loc_140298F24
 * 0000000140298F36: add     rsp, 8
 * 0000000140298F3A: call    loc_140298F2D
 * 0000000140298F3F: add     rsp, 8
 * 0000000140298F43: call    loc_140298F36
 * 0000000140298F48: add     rsp, 8
 * 0000000140298F4C: call    loc_140298F3F
 * 0000000140298F51: add     rsp, 8
 * 0000000140298F55: lfence
 * 0000000140298F58: test    byte ptr [r10+3], 80h
 * 0000000140298F5D: jz      short loc_140298FA1
 * 0000000140298F5F: mov     ecx, 0C0000102h
 * 0000000140298F64: rdmsr
 * 0000000140298F66: shl     rdx, 20h
 * 0000000140298F6A: or      rax, rdx
 * 0000000140298F6D: cmp     rax, cs:MmUserProbeAddress
 * 0000000140298F74: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140298F7C: cmp     [r10+0F0h], rax
 * 0000000140298F83: jz      short loc_140298FA1
 * 0000000140298F85: mov     rdx, [r10+1F0h]
 * 0000000140298F8C: bts     dword ptr [r10+74h], 8
 * 0000000140298F92: dec     word ptr [r10+1E6h]
 * 0000000140298F9A: mov     [rdx+80h], rax
 * 0000000140298FA1: test    byte ptr [r10+3], 3
 * 0000000140298FA6: mov     word ptr [rbp+80h], 0
 * 0000000140298FAF: jz      short loc_140298FB6
 * 0000000140298FB1: call    KiSaveDebugRegisterState
 * 0000000140298FB6: cld
 * 0000000140298FB7: stmxcsr dword ptr [rbp-54h]
 * 0000000140298FBB: ldmxcsr dword ptr gs:180h
 * 0000000140298FC4: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140298FC8: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140298FCC: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140298FD0: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140298FD4: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140298FD8: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140298FDC: sub     qword ptr [rbp+0E8h], 2
 * 0000000140298FE4: and     dword ptr [rbp+0ECh], 0
 * 0000000140298FEB: sti
 * 0000000140298FEC: mov     ecx, 0C000001Dh
 * 0000000140298FF1: xor     edx, edx
 * 0000000140298FF3: mov     r8, [rbp+0E8h]
 * 0000000140298FFA: call    KiExceptionDispatch
 * 0000000140298FFF: nop
 * 0000000140299000: retn
 */
