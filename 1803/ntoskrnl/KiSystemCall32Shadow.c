/*
 * XREFs of KiSystemCall32Shadow @ 0x1402D0D00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x1402D0D00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x1402D0D00
 * Reason: Hex-Rays returned no pseudocode for 0x1402D0D00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402D0D00: swapgs
 * 00000001402D0D03: mov     gs:7010h, rsp
 * 00000001402D0D0C: mov     rsp, gs:7000h
 * 00000001402D0D15: mov     cr3, rsp
 * 00000001402D0D18: mov     rsp, gs:7008h
 * 00000001402D0D21: push    2Bh ; '+'
 * 00000001402D0D23: push    qword ptr gs:7010h
 * 00000001402D0D2B: push    r11
 * 00000001402D0D2D: push    23h ; '#'
 * 00000001402D0D2F: push    rcx
 * 00000001402D0D30: sub     rsp, 8
 * 00000001402D0D34: push    rbp
 * 00000001402D0D35: sub     rsp, 158h
 * 00000001402D0D3C: lea     rbp, [rsp+190h+var_110]
 * 00000001402D0D44: mov     byte ptr [rbp-55h], 1
 * 00000001402D0D48: mov     [rbp-50h], rax
 * 00000001402D0D4C: mov     [rbp-48h], rcx
 * 00000001402D0D50: mov     [rbp-40h], rdx
 * 00000001402D0D54: mov     [rbp-38h], r8
 * 00000001402D0D58: mov     [rbp-30h], r9
 * 00000001402D0D5C: mov     [rbp-28h], r10
 * 00000001402D0D60: mov     [rbp-20h], r11
 * 00000001402D0D64: test    byte ptr [rbp+0F0h], 1
 * 00000001402D0D6B: jnz     short loc_1402D0D9A
 * 00000001402D0D6D: lfence
 * 00000001402D0D70: test    byte ptr gs:278h, 1
 * 00000001402D0D79: jnz     short loc_1402D0D83
 * 00000001402D0D7B: lfence
 * 00000001402D0D7E: jmp     loc_1402D0FB6
 * 00000001402D0D83: movzx   eax, byte ptr gs:27Ah
 * 00000001402D0D8C: mov     ecx, 48h ; 'H'
 * 00000001402D0D91: xor     edx, edx
 * 00000001402D0D93: wrmsr
 * 00000001402D0D95: jmp     loc_1402D0FB6
 * 00000001402D0D9A: test    cs:KiKvaShadow, 1
 * 00000001402D0DA1: jnz     short loc_1402D0DA6
 * 00000001402D0DA3: swapgs
 * 00000001402D0DA6: lfence
 * 00000001402D0DA9: mov     r10, gs:188h
 * 00000001402D0DB2: mov     rcx, gs:188h
 * 00000001402D0DBB: mov     rcx, [rcx+220h]
 * 00000001402D0DC2: mov     rcx, [rcx+838h]
 * 00000001402D0DC9: mov     gs:270h, rcx
 * 00000001402D0DD2: movzx   eax, byte ptr gs:27Bh
 * 00000001402D0DDB: cmp     gs:27Ah, al
 * 00000001402D0DE3: jz      short loc_1402D0DF6
 * 00000001402D0DE5: mov     gs:27Ah, al
 * 00000001402D0DED: mov     ecx, 48h ; 'H'
 * 00000001402D0DF2: xor     edx, edx
 * 00000001402D0DF4: wrmsr
 * 00000001402D0DF6: movzx   edx, byte ptr gs:278h
 * 00000001402D0DFF: test    edx, 8
 * 00000001402D0E05: jz      short loc_1402D0E1A
 * 00000001402D0E07: mov     eax, 1
 * 00000001402D0E0C: xor     edx, edx
 * 00000001402D0E0E: mov     ecx, 49h ; 'I'
 * 00000001402D0E13: wrmsr
 * 00000001402D0E15: jmp     loc_1402D0F58
 * 00000001402D0E1A: test    edx, 2
 * 00000001402D0E20: jz      loc_1402D0F55
 * 00000001402D0E26: test    byte ptr gs:279h, 4
 * 00000001402D0E2F: jnz     loc_1402D0F55
 * 00000001402D0E35: call    loc_1402D0F48
 * 00000001402D0E3A: add     rsp, 8
 * 00000001402D0E3E: call    loc_1402D0F51
 * 00000001402D0E43: add     rsp, 8
 * 00000001402D0E47: call    loc_1402D0E3A
 * 00000001402D0E4C: add     rsp, 8
 * 00000001402D0E50: call    loc_1402D0E43
 * 00000001402D0E55: add     rsp, 8
 * 00000001402D0E59: call    loc_1402D0E4C
 * 00000001402D0E5E: add     rsp, 8
 * 00000001402D0E62: call    loc_1402D0E55
 * 00000001402D0E67: add     rsp, 8
 * 00000001402D0E6B: call    loc_1402D0E5E
 * 00000001402D0E70: add     rsp, 8
 * 00000001402D0E74: call    loc_1402D0E67
 * 00000001402D0E79: add     rsp, 8
 * 00000001402D0E7D: call    loc_1402D0E70
 * 00000001402D0E82: add     rsp, 8
 * 00000001402D0E86: call    loc_1402D0E79
 * 00000001402D0E8B: add     rsp, 8
 * 00000001402D0E8F: call    loc_1402D0E82
 * 00000001402D0E94: add     rsp, 8
 * 00000001402D0E98: call    loc_1402D0E8B
 * 00000001402D0E9D: add     rsp, 8
 * 00000001402D0EA1: call    loc_1402D0E94
 * 00000001402D0EA6: add     rsp, 8
 * 00000001402D0EAA: call    loc_1402D0E9D
 * 00000001402D0EAF: add     rsp, 8
 * 00000001402D0EB3: call    loc_1402D0EA6
 * 00000001402D0EB8: add     rsp, 8
 * 00000001402D0EBC: call    loc_1402D0EAF
 * 00000001402D0EC1: add     rsp, 8
 * 00000001402D0EC5: call    loc_1402D0EB8
 * 00000001402D0ECA: add     rsp, 8
 * 00000001402D0ECE: call    loc_1402D0EC1
 * 00000001402D0ED3: add     rsp, 8
 * 00000001402D0ED7: call    loc_1402D0ECA
 * 00000001402D0EDC: add     rsp, 8
 * 00000001402D0EE0: call    loc_1402D0ED3
 * 00000001402D0EE5: add     rsp, 8
 * 00000001402D0EE9: call    loc_1402D0EDC
 * 00000001402D0EEE: add     rsp, 8
 * 00000001402D0EF2: call    loc_1402D0EE5
 * 00000001402D0EF7: add     rsp, 8
 * 00000001402D0EFB: call    loc_1402D0EEE
 * 00000001402D0F00: add     rsp, 8
 * 00000001402D0F04: call    loc_1402D0EF7
 * 00000001402D0F09: add     rsp, 8
 * 00000001402D0F0D: call    loc_1402D0F00
 * 00000001402D0F12: add     rsp, 8
 * 00000001402D0F16: call    loc_1402D0F09
 * 00000001402D0F1B: add     rsp, 8
 * 00000001402D0F1F: call    loc_1402D0F12
 * 00000001402D0F24: add     rsp, 8
 * 00000001402D0F28: call    loc_1402D0F1B
 * 00000001402D0F2D: add     rsp, 8
 * 00000001402D0F31: call    loc_1402D0F24
 * 00000001402D0F36: add     rsp, 8
 * 00000001402D0F3A: call    loc_1402D0F2D
 * 00000001402D0F3F: add     rsp, 8
 * 00000001402D0F43: call    loc_1402D0F36
 * 00000001402D0F48: add     rsp, 8
 * 00000001402D0F4C: call    loc_1402D0F3F
 * 00000001402D0F51: add     rsp, 8
 * 00000001402D0F55: lfence
 * 00000001402D0F58: test    byte ptr [r10+3], 80h
 * 00000001402D0F5D: jz      short loc_1402D0FA1
 * 00000001402D0F5F: mov     ecx, 0C0000102h
 * 00000001402D0F64: rdmsr
 * 00000001402D0F66: shl     rdx, 20h
 * 00000001402D0F6A: or      rax, rdx
 * 00000001402D0F6D: cmp     rax, cs:MmUserProbeAddress
 * 00000001402D0F74: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001402D0F7C: cmp     [r10+0F0h], rax
 * 00000001402D0F83: jz      short loc_1402D0FA1
 * 00000001402D0F85: mov     rdx, [r10+1F0h]
 * 00000001402D0F8C: bts     dword ptr [r10+74h], 8
 * 00000001402D0F92: dec     word ptr [r10+1E6h]
 * 00000001402D0F9A: mov     [rdx+80h], rax
 * 00000001402D0FA1: test    byte ptr [r10+3], 3
 * 00000001402D0FA6: mov     word ptr [rbp+80h], 0
 * 00000001402D0FAF: jz      short loc_1402D0FB6
 * 00000001402D0FB1: call    KiSaveDebugRegisterState
 * 00000001402D0FB6: cld
 * 00000001402D0FB7: stmxcsr dword ptr [rbp-54h]
 * 00000001402D0FBB: ldmxcsr dword ptr gs:180h
 * 00000001402D0FC4: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001402D0FC8: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001402D0FCC: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001402D0FD0: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001402D0FD4: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001402D0FD8: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001402D0FDC: sub     qword ptr [rbp+0E8h], 2
 * 00000001402D0FE4: and     dword ptr [rbp+0ECh], 0
 * 00000001402D0FEB: sti
 * 00000001402D0FEC: mov     ecx, 0C000001Dh
 * 00000001402D0FF1: xor     edx, edx
 * 00000001402D0FF3: mov     r8, [rbp+0E8h]
 * 00000001402D0FFA: call    KiExceptionDispatch
 * 00000001402D0FFF: nop
 * 00000001402D1000: retn
 */
