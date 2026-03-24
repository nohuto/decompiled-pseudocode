/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401869F0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140298080 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401869F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401869F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401869F0: sub     rsp, 8
 * 00000001401869F4: push    rbp
 * 00000001401869F5: push    rsi
 * 00000001401869F6: sub     rsp, 150h
 * 00000001401869FD: lea     rbp, [rsp+80h]
 * 0000000140186A05: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186A09: mov     [rbp+0E8h+var_138], rax
 * 0000000140186A0D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186A11: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186A15: mov     [rbp+0E8h+var_120], r8
 * 0000000140186A19: mov     [rbp+0E8h+var_118], r9
 * 0000000140186A1D: mov     [rbp+0E8h+var_110], r10
 * 0000000140186A21: mov     [rbp+0E8h+var_108], r11
 * 0000000140186A25: test    [rbp+0E8h+arg_0], 1
 * 0000000140186A2C: jnz     short loc_140186A5B
 * 0000000140186A2E: lfence
 * 0000000140186A31: test    byte ptr gs:278h, 1
 * 0000000140186A3A: jnz     short loc_140186A44
 * 0000000140186A3C: lfence
 * 0000000140186A3F: jmp     loc_140186C2E
 * 0000000140186A44: movzx   eax, byte ptr gs:27Ah
 * 0000000140186A4D: mov     ecx, 48h ; 'H'
 * 0000000140186A52: xor     edx, edx
 * 0000000140186A54: wrmsr
 * 0000000140186A56: jmp     loc_140186C2E
 * 0000000140186A5B: test    cs:KiKvaShadow, 1
 * 0000000140186A62: jnz     short loc_140186A67
 * 0000000140186A64: swapgs
 * 0000000140186A67: lfence
 * 0000000140186A6A: mov     r10, gs:188h
 * 0000000140186A73: mov     rcx, gs:188h
 * 0000000140186A7C: mov     rcx, [rcx+220h]
 * 0000000140186A83: mov     rcx, [rcx+838h]
 * 0000000140186A8A: mov     gs:270h, rcx
 * 0000000140186A93: movzx   eax, byte ptr gs:27Bh
 * 0000000140186A9C: cmp     gs:27Ah, al
 * 0000000140186AA4: jz      short loc_140186AB7
 * 0000000140186AA6: mov     gs:27Ah, al
 * 0000000140186AAE: mov     ecx, 48h ; 'H'
 * 0000000140186AB3: xor     edx, edx
 * 0000000140186AB5: wrmsr
 * 0000000140186AB7: movzx   edx, byte ptr gs:278h
 * 0000000140186AC0: test    edx, 8
 * 0000000140186AC6: jz      short loc_140186ADB
 * 0000000140186AC8: mov     eax, 1
 * 0000000140186ACD: xor     edx, edx
 * 0000000140186ACF: mov     ecx, 49h ; 'I'
 * 0000000140186AD4: wrmsr
 * 0000000140186AD6: jmp     loc_140186C19
 * 0000000140186ADB: test    edx, 2
 * 0000000140186AE1: jz      loc_140186C16
 * 0000000140186AE7: test    byte ptr gs:279h, 4
 * 0000000140186AF0: jnz     loc_140186C16
 * 0000000140186AF6: call    loc_140186C09
 * 0000000140186AFB: add     rsp, 8
 * 0000000140186AFF: call    loc_140186C12
 * 0000000140186B04: add     rsp, 8
 * 0000000140186B08: call    loc_140186AFB
 * 0000000140186B0D: add     rsp, 8
 * 0000000140186B11: call    loc_140186B04
 * 0000000140186B16: add     rsp, 8
 * 0000000140186B1A: call    loc_140186B0D
 * 0000000140186B1F: add     rsp, 8
 * 0000000140186B23: call    loc_140186B16
 * 0000000140186B28: add     rsp, 8
 * 0000000140186B2C: call    loc_140186B1F
 * 0000000140186B31: add     rsp, 8
 * 0000000140186B35: call    loc_140186B28
 * 0000000140186B3A: add     rsp, 8
 * 0000000140186B3E: call    loc_140186B31
 * 0000000140186B43: add     rsp, 8
 * 0000000140186B47: call    loc_140186B3A
 * 0000000140186B4C: add     rsp, 8
 * 0000000140186B50: call    loc_140186B43
 * 0000000140186B55: add     rsp, 8
 * 0000000140186B59: call    loc_140186B4C
 * 0000000140186B5E: add     rsp, 8
 * 0000000140186B62: call    loc_140186B55
 * 0000000140186B67: add     rsp, 8
 * 0000000140186B6B: call    loc_140186B5E
 * 0000000140186B70: add     rsp, 8
 * 0000000140186B74: call    loc_140186B67
 * 0000000140186B79: add     rsp, 8
 * 0000000140186B7D: call    loc_140186B70
 * 0000000140186B82: add     rsp, 8
 * 0000000140186B86: call    loc_140186B79
 * 0000000140186B8B: add     rsp, 8
 * 0000000140186B8F: call    loc_140186B82
 * 0000000140186B94: add     rsp, 8
 * 0000000140186B98: call    loc_140186B8B
 * 0000000140186B9D: add     rsp, 8
 * 0000000140186BA1: call    loc_140186B94
 * 0000000140186BA6: add     rsp, 8
 * 0000000140186BAA: call    loc_140186B9D
 * 0000000140186BAF: add     rsp, 8
 * 0000000140186BB3: call    loc_140186BA6
 * 0000000140186BB8: add     rsp, 8
 * 0000000140186BBC: call    loc_140186BAF
 * 0000000140186BC1: add     rsp, 8
 * 0000000140186BC5: call    loc_140186BB8
 * 0000000140186BCA: add     rsp, 8
 * 0000000140186BCE: call    loc_140186BC1
 * 0000000140186BD3: add     rsp, 8
 * 0000000140186BD7: call    loc_140186BCA
 * 0000000140186BDC: add     rsp, 8
 * 0000000140186BE0: call    loc_140186BD3
 * 0000000140186BE5: add     rsp, 8
 * 0000000140186BE9: call    loc_140186BDC
 * 0000000140186BEE: add     rsp, 8
 * 0000000140186BF2: call    loc_140186BE5
 * 0000000140186BF7: add     rsp, 8
 * 0000000140186BFB: call    loc_140186BEE
 * 0000000140186C00: add     rsp, 8
 * 0000000140186C04: call    loc_140186BF7
 * 0000000140186C09: add     rsp, 8
 * 0000000140186C0D: call    loc_140186C00
 * 0000000140186C12: add     rsp, 8
 * 0000000140186C16: lfence
 * 0000000140186C19: test    byte ptr [r10+3], 3
 * 0000000140186C1E: mov     [rbp+0E8h+var_68], 0
 * 0000000140186C27: jz      short loc_140186C2E
 * 0000000140186C29: call    KiSaveDebugRegisterState
 * 0000000140186C2E: cld
 * 0000000140186C2F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186C33: ldmxcsr dword ptr gs:180h
 * 0000000140186C3C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186C40: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186C44: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186C48: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140186C4C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186C50: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186C54: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140186C5D: jz      short loc_140186C64
 * 0000000140186C5F: call    KeWakeProcessor
 * 0000000140186C64: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140186C6B: cmp     rax, [rbp+0E8h]
 * 0000000140186C72: jnb     short loc_140186C8D
 * 0000000140186C74: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140186C7B: cmp     rax, [rbp+0E8h]
 * 0000000140186C82: jb      short loc_140186C8D
 * 0000000140186C84: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140186C88: call    KiCheckForSListAddress
 * 0000000140186C8D: xor     esi, esi
 * 0000000140186C8F: inc     dword ptr gs:5D00h
 * 0000000140186C97: mov     ecx, 3
 * 0000000140186C9C: mov     rax, cr8
 * 0000000140186CA0: mov     cr8, rcx
 * 0000000140186CA4: mov     [rbp+0E8h+var_13F], al
 * 0000000140186CA7: mov     [rbp+0E8h+var_148], 0
 * 0000000140186CAE: mov     rcx, gs:20h
 * 0000000140186CB7: inc     byte ptr [rcx+20h]
 * 0000000140186CBA: cmp     byte ptr [rcx+20h], 1
 * 0000000140186CBE: jnz     loc_140186D54
 * 0000000140186CC4: rdtsc
 * 0000000140186CC6: shl     rdx, 20h
 * 0000000140186CCA: or      rax, rdx
 * 0000000140186CCD: mov     edx, [rcx+62E0h]
 * 0000000140186CD3: mov     r11d, edx
 * 0000000140186CD6: and     edx, 7FFh
 * 0000000140186CDC: shr     edx, 5
 * 0000000140186CDF: lea     r10, [rcx+rdx*4+62E4h]
 * 0000000140186CE7: mov     edx, [r10]
 * 0000000140186CEA: ror     edx, 5
 * 0000000140186CED: xor     edx, eax
 * 0000000140186CEF: mov     [r10], edx
 * 0000000140186CF2: add     r11d, 1
 * 0000000140186CF6: mov     [rcx+62E0h], r11d
 * 0000000140186CFD: and     r11d, 3FFh
 * 0000000140186D04: jnz     short loc_140186D0D
 * 0000000140186D06: mov     [rbp+0E8h+var_148], 1
 * 0000000140186D0D: mov     r8, [rcx+8]
 * 0000000140186D11: sub     rax, [rcx+5BC0h]
 * 0000000140186D18: add     [r8+48h], rax
 * 0000000140186D1C: mov     edx, [r8+50h]
 * 0000000140186D20: add     [rcx+5BC0h], rax
 * 0000000140186D27: add     rdx, rax
 * 0000000140186D2A: mov     ecx, edx
 * 0000000140186D2C: shr     rdx, 20h
 * 0000000140186D30: jz      short loc_140186D35
 * 0000000140186D32: or      ecx, 0FFFFFFFFh
 * 0000000140186D35: mov     [r8+50h], ecx
 * 0000000140186D39: test    byte ptr [r8+2], 3Eh
 * 0000000140186D3E: jz      short loc_140186D54
 * 0000000140186D40: mov     rdx, r8
 * 0000000140186D43: mov     r8, rax
 * 0000000140186D46: mov     rcx, gs:20h
 * 0000000140186D4F: call    KiEndThreadAccountingPeriod
 * 0000000140186D54: sti
 * 0000000140186D55: cmp     [rbp+0E8h+var_148], 0
 * 0000000140186D59: jz      short loc_140186D69
 * 0000000140186D5B: mov     rcx, gs:20h
 * 0000000140186D64: call    KiEntropyQueueDpc
 * 0000000140186D69: mov     ecx, 3
 * 0000000140186D6E: call    HvlRouteInterrupt
 * 0000000140186D73: cli
 * 0000000140186D74: mov     rcx, gs:20h
 * 0000000140186D7D: cmp     byte ptr [rcx+20h], 1
 * 0000000140186D81: ja      short loc_140186DF7
 * 0000000140186D83: rdtsc
 * 0000000140186D85: shl     rdx, 20h
 * 0000000140186D89: or      rax, rdx
 * 0000000140186D8C: sub     rax, [rcx+5BC0h]
 * 0000000140186D93: add     [rcx+5C38h], rax
 * 0000000140186D9A: add     [rcx+5BC0h], rax
 * 0000000140186DA1: mov     r8, rax
 * 0000000140186DA4: mov     rax, [rcx+8]
 * 0000000140186DA8: test    byte ptr [rax+2], 32h
 * 0000000140186DAC: jz      short loc_140186DC1
 * 0000000140186DAE: xor     edx, edx
 * 0000000140186DB0: call    KiBeginThreadAccountingPeriod
 * 0000000140186DB5: mov     rcx, gs:20h
 * 0000000140186DBE: inc     byte ptr [rcx+20h]
 * 0000000140186DC1: mov     dl, [rcx+6]
 * 0000000140186DC4: and     byte ptr [rcx+6], 0
 * 0000000140186DC8: cmp     byte ptr [rcx+7], 0
 * 0000000140186DCC: jnz     short loc_140186DF7
 * 0000000140186DCE: test    dl, dl
 * 0000000140186DD0: jz      short loc_140186DF7
 * 0000000140186DD2: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140186DD6: jnb     short loc_140186DE3
 * 0000000140186DD8: and     byte ptr [rcx+20h], 0
 * 0000000140186DDC: call    KiDpcInterruptBypass
 * 0000000140186DE1: jmp     short loc_140186DFA
 * 0000000140186DE3: mov     ecx, 2
 * 0000000140186DE8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140186DEE: mov     rcx, gs:20h
 * 0000000140186DF7: dec     byte ptr [rcx+20h]
 * 0000000140186DFA: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140186DFE: mov     cr8, rcx
 * 0000000140186E02: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140186E09: cli
 * 0000000140186E0A: test    [rbp+0E8h+arg_0], 1
 * 0000000140186E11: jz      loc_140186F27
 * 0000000140186E17: mov     rcx, gs:188h
 * 0000000140186E20: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140186E27: jz      short loc_140186E42
 * 0000000140186E29: mov     ecx, 1
 * 0000000140186E2E: mov     cr8, rcx
 * 0000000140186E32: sti
 * 0000000140186E33: call    KiInitiateUserApc
 * 0000000140186E38: cli
 * 0000000140186E39: mov     ecx, 0
 * 0000000140186E3E: mov     cr8, rcx
 * 0000000140186E42: mov     rcx, gs:188h
 * 0000000140186E4B: test    dword ptr [rcx], 8000000h
 * 0000000140186E51: jz      short loc_140186E58
 * 0000000140186E53: call    KiRestoreSetContextState
 * 0000000140186E58: mov     rcx, gs:188h
 * 0000000140186E61: test    dword ptr [rcx], 40010000h
 * 0000000140186E67: jz      short loc_140186E7D
 * 0000000140186E69: test    byte ptr [rcx+2], 1
 * 0000000140186E6D: jz      short loc_140186E7D
 * 0000000140186E6F: call    KiCopyCounters
 * 0000000140186E74: mov     rcx, gs:188h
 * 0000000140186E7D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186E81: cmp     [rbp+0E8h+var_68], 0
 * 0000000140186E89: jz      short loc_140186E90
 * 0000000140186E8B: call    KiRestoreDebugRegisterState
 * 0000000140186E90: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186E94: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186E98: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186E9C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186EA0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186EA4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186EA8: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186EAC: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186EB0: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186EB4: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186EB8: movzx   eax, byte ptr gs:27Dh
 * 0000000140186EC1: cmp     gs:27Ah, al
 * 0000000140186EC9: jz      short loc_140186EDC
 * 0000000140186ECB: mov     gs:27Ah, al
 * 0000000140186ED3: mov     ecx, 48h ; 'H'
 * 0000000140186ED8: xor     edx, edx
 * 0000000140186EDA: wrmsr
 * 0000000140186EDC: btr     word ptr gs:278h, 2
 * 0000000140186EE7: jnb     short loc_140186EF7
 * 0000000140186EE9: mov     eax, 1
 * 0000000140186EEE: xor     edx, edx
 * 0000000140186EF0: mov     ecx, 49h ; 'I'
 * 0000000140186EF5: wrmsr
 * 0000000140186EF7: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186EFB: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140186EFF: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186F03: mov     rsp, rbp
 * 0000000140186F06: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186F0D: add     rsp, 0E8h
 * 0000000140186F14: test    cs:KiKvaShadow, 1
 * 0000000140186F1B: jz      short loc_140186F22
 * 0000000140186F1D: jmp     KiKernelExit
 * 0000000140186F22: swapgs
 * 0000000140186F25: iretq
 * 0000000140186F27: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186F2B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186F2F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186F33: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186F37: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186F3B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186F3F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186F43: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186F47: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186F4B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186F4F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186F53: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186F57: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140186F5B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186F5F: mov     rsp, rbp
 * 0000000140186F62: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186F69: add     rsp, 0E8h
 * 0000000140186F70: iretq
 */
