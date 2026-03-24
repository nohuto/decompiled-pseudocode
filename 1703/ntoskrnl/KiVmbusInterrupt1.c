/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401869B0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x14026CF80 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E4EA0 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401869B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401869B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401869B0: sub     rsp, 8
 * 00000001401869B4: push    rbp
 * 00000001401869B5: push    rsi
 * 00000001401869B6: sub     rsp, 150h
 * 00000001401869BD: lea     rbp, [rsp+80h]
 * 00000001401869C5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401869C9: mov     [rbp+0E8h+var_138], rax
 * 00000001401869CD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401869D1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401869D5: mov     [rbp+0E8h+var_120], r8
 * 00000001401869D9: mov     [rbp+0E8h+var_118], r9
 * 00000001401869DD: mov     [rbp+0E8h+var_110], r10
 * 00000001401869E1: mov     [rbp+0E8h+var_108], r11
 * 00000001401869E5: test    [rbp+0E8h+arg_0], 1
 * 00000001401869EC: jnz     short loc_140186A1B
 * 00000001401869EE: lfence
 * 00000001401869F1: test    byte ptr gs:278h, 1
 * 00000001401869FA: jnz     short loc_140186A04
 * 00000001401869FC: lfence
 * 00000001401869FF: jmp     loc_140186BEE
 * 0000000140186A04: movzx   eax, byte ptr gs:27Ah
 * 0000000140186A0D: mov     ecx, 48h ; 'H'
 * 0000000140186A12: xor     edx, edx
 * 0000000140186A14: wrmsr
 * 0000000140186A16: jmp     loc_140186BEE
 * 0000000140186A1B: test    cs:KiKvaShadow, 1
 * 0000000140186A22: jnz     short loc_140186A27
 * 0000000140186A24: swapgs
 * 0000000140186A27: lfence
 * 0000000140186A2A: mov     r10, gs:188h
 * 0000000140186A33: mov     rcx, gs:188h
 * 0000000140186A3C: mov     rcx, [rcx+220h]
 * 0000000140186A43: mov     rcx, [rcx+818h]
 * 0000000140186A4A: mov     gs:270h, rcx
 * 0000000140186A53: movzx   eax, byte ptr gs:27Bh
 * 0000000140186A5C: cmp     gs:27Ah, al
 * 0000000140186A64: jz      short loc_140186A77
 * 0000000140186A66: mov     gs:27Ah, al
 * 0000000140186A6E: mov     ecx, 48h ; 'H'
 * 0000000140186A73: xor     edx, edx
 * 0000000140186A75: wrmsr
 * 0000000140186A77: movzx   edx, byte ptr gs:278h
 * 0000000140186A80: test    edx, 8
 * 0000000140186A86: jz      short loc_140186A9B
 * 0000000140186A88: mov     eax, 1
 * 0000000140186A8D: xor     edx, edx
 * 0000000140186A8F: mov     ecx, 49h ; 'I'
 * 0000000140186A94: wrmsr
 * 0000000140186A96: jmp     loc_140186BD9
 * 0000000140186A9B: test    edx, 2
 * 0000000140186AA1: jz      loc_140186BD6
 * 0000000140186AA7: test    byte ptr gs:279h, 4
 * 0000000140186AB0: jnz     loc_140186BD6
 * 0000000140186AB6: call    loc_140186BC9
 * 0000000140186ABB: add     rsp, 8
 * 0000000140186ABF: call    loc_140186BD2
 * 0000000140186AC4: add     rsp, 8
 * 0000000140186AC8: call    loc_140186ABB
 * 0000000140186ACD: add     rsp, 8
 * 0000000140186AD1: call    loc_140186AC4
 * 0000000140186AD6: add     rsp, 8
 * 0000000140186ADA: call    loc_140186ACD
 * 0000000140186ADF: add     rsp, 8
 * 0000000140186AE3: call    loc_140186AD6
 * 0000000140186AE8: add     rsp, 8
 * 0000000140186AEC: call    loc_140186ADF
 * 0000000140186AF1: add     rsp, 8
 * 0000000140186AF5: call    loc_140186AE8
 * 0000000140186AFA: add     rsp, 8
 * 0000000140186AFE: call    loc_140186AF1
 * 0000000140186B03: add     rsp, 8
 * 0000000140186B07: call    loc_140186AFA
 * 0000000140186B0C: add     rsp, 8
 * 0000000140186B10: call    loc_140186B03
 * 0000000140186B15: add     rsp, 8
 * 0000000140186B19: call    loc_140186B0C
 * 0000000140186B1E: add     rsp, 8
 * 0000000140186B22: call    loc_140186B15
 * 0000000140186B27: add     rsp, 8
 * 0000000140186B2B: call    loc_140186B1E
 * 0000000140186B30: add     rsp, 8
 * 0000000140186B34: call    loc_140186B27
 * 0000000140186B39: add     rsp, 8
 * 0000000140186B3D: call    loc_140186B30
 * 0000000140186B42: add     rsp, 8
 * 0000000140186B46: call    loc_140186B39
 * 0000000140186B4B: add     rsp, 8
 * 0000000140186B4F: call    loc_140186B42
 * 0000000140186B54: add     rsp, 8
 * 0000000140186B58: call    loc_140186B4B
 * 0000000140186B5D: add     rsp, 8
 * 0000000140186B61: call    loc_140186B54
 * 0000000140186B66: add     rsp, 8
 * 0000000140186B6A: call    loc_140186B5D
 * 0000000140186B6F: add     rsp, 8
 * 0000000140186B73: call    loc_140186B66
 * 0000000140186B78: add     rsp, 8
 * 0000000140186B7C: call    loc_140186B6F
 * 0000000140186B81: add     rsp, 8
 * 0000000140186B85: call    loc_140186B78
 * 0000000140186B8A: add     rsp, 8
 * 0000000140186B8E: call    loc_140186B81
 * 0000000140186B93: add     rsp, 8
 * 0000000140186B97: call    loc_140186B8A
 * 0000000140186B9C: add     rsp, 8
 * 0000000140186BA0: call    loc_140186B93
 * 0000000140186BA5: add     rsp, 8
 * 0000000140186BA9: call    loc_140186B9C
 * 0000000140186BAE: add     rsp, 8
 * 0000000140186BB2: call    loc_140186BA5
 * 0000000140186BB7: add     rsp, 8
 * 0000000140186BBB: call    loc_140186BAE
 * 0000000140186BC0: add     rsp, 8
 * 0000000140186BC4: call    loc_140186BB7
 * 0000000140186BC9: add     rsp, 8
 * 0000000140186BCD: call    loc_140186BC0
 * 0000000140186BD2: add     rsp, 8
 * 0000000140186BD6: lfence
 * 0000000140186BD9: test    byte ptr [r10+3], 3
 * 0000000140186BDE: mov     [rbp+0E8h+var_68], 0
 * 0000000140186BE7: jz      short loc_140186BEE
 * 0000000140186BE9: call    KiSaveDebugRegisterState
 * 0000000140186BEE: cld
 * 0000000140186BEF: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186BF3: ldmxcsr dword ptr gs:180h
 * 0000000140186BFC: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186C00: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186C04: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186C08: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140186C0C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186C10: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186C14: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140186C1D: jz      short loc_140186C24
 * 0000000140186C1F: call    KeWakeProcessor
 * 0000000140186C24: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140186C2B: cmp     rax, [rbp+0E8h]
 * 0000000140186C32: jnb     short loc_140186C4D
 * 0000000140186C34: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140186C3B: cmp     rax, [rbp+0E8h]
 * 0000000140186C42: jb      short loc_140186C4D
 * 0000000140186C44: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140186C48: call    KiCheckForSListAddress
 * 0000000140186C4D: xor     esi, esi
 * 0000000140186C4F: inc     dword ptr gs:5D00h
 * 0000000140186C57: mov     ecx, 3
 * 0000000140186C5C: mov     rax, cr8
 * 0000000140186C60: mov     cr8, rcx
 * 0000000140186C64: mov     [rbp+0E8h+var_13F], al
 * 0000000140186C67: mov     [rbp+0E8h+var_148], 0
 * 0000000140186C6E: mov     rcx, gs:20h
 * 0000000140186C77: inc     byte ptr [rcx+20h]
 * 0000000140186C7A: cmp     byte ptr [rcx+20h], 1
 * 0000000140186C7E: jnz     loc_140186D14
 * 0000000140186C84: rdtsc
 * 0000000140186C86: shl     rdx, 20h
 * 0000000140186C8A: or      rax, rdx
 * 0000000140186C8D: mov     edx, [rcx+6420h]
 * 0000000140186C93: mov     r11d, edx
 * 0000000140186C96: and     edx, 7FFh
 * 0000000140186C9C: shr     edx, 5
 * 0000000140186C9F: lea     r10, [rcx+rdx*4+6424h]
 * 0000000140186CA7: mov     edx, [r10]
 * 0000000140186CAA: ror     edx, 5
 * 0000000140186CAD: xor     edx, eax
 * 0000000140186CAF: mov     [r10], edx
 * 0000000140186CB2: add     r11d, 1
 * 0000000140186CB6: mov     [rcx+6420h], r11d
 * 0000000140186CBD: and     r11d, 3FFh
 * 0000000140186CC4: jnz     short loc_140186CCD
 * 0000000140186CC6: mov     [rbp+0E8h+var_148], 1
 * 0000000140186CCD: mov     r8, [rcx+8]
 * 0000000140186CD1: sub     rax, [rcx+5BC0h]
 * 0000000140186CD8: add     [r8+48h], rax
 * 0000000140186CDC: mov     edx, [r8+50h]
 * 0000000140186CE0: add     [rcx+5BC0h], rax
 * 0000000140186CE7: add     rdx, rax
 * 0000000140186CEA: mov     ecx, edx
 * 0000000140186CEC: shr     rdx, 20h
 * 0000000140186CF0: jz      short loc_140186CF5
 * 0000000140186CF2: or      ecx, 0FFFFFFFFh
 * 0000000140186CF5: mov     [r8+50h], ecx
 * 0000000140186CF9: test    byte ptr [r8+2], 3Eh
 * 0000000140186CFE: jz      short loc_140186D14
 * 0000000140186D00: mov     rdx, r8
 * 0000000140186D03: mov     r8, rax
 * 0000000140186D06: mov     rcx, gs:20h
 * 0000000140186D0F: call    KiEndThreadAccountingPeriod
 * 0000000140186D14: sti
 * 0000000140186D15: cmp     [rbp+0E8h+var_148], 0
 * 0000000140186D19: jz      short loc_140186D29
 * 0000000140186D1B: mov     rcx, gs:20h
 * 0000000140186D24: call    KiEntropyQueueDpc
 * 0000000140186D29: mov     ecx, 2
 * 0000000140186D2E: call    HvlRouteInterrupt
 * 0000000140186D33: cli
 * 0000000140186D34: mov     rcx, gs:20h
 * 0000000140186D3D: cmp     byte ptr [rcx+20h], 1
 * 0000000140186D41: ja      short loc_140186DB7
 * 0000000140186D43: rdtsc
 * 0000000140186D45: shl     rdx, 20h
 * 0000000140186D49: or      rax, rdx
 * 0000000140186D4C: sub     rax, [rcx+5BC0h]
 * 0000000140186D53: add     [rcx+5C78h], rax
 * 0000000140186D5A: add     [rcx+5BC0h], rax
 * 0000000140186D61: mov     r8, rax
 * 0000000140186D64: mov     rax, [rcx+8]
 * 0000000140186D68: test    byte ptr [rax+2], 32h
 * 0000000140186D6C: jz      short loc_140186D81
 * 0000000140186D6E: xor     edx, edx
 * 0000000140186D70: call    KiBeginThreadAccountingPeriod
 * 0000000140186D75: mov     rcx, gs:20h
 * 0000000140186D7E: inc     byte ptr [rcx+20h]
 * 0000000140186D81: mov     dl, [rcx+6]
 * 0000000140186D84: and     byte ptr [rcx+6], 0
 * 0000000140186D88: cmp     byte ptr [rcx+7], 0
 * 0000000140186D8C: jnz     short loc_140186DB7
 * 0000000140186D8E: test    dl, dl
 * 0000000140186D90: jz      short loc_140186DB7
 * 0000000140186D92: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140186D96: jnb     short loc_140186DA3
 * 0000000140186D98: and     byte ptr [rcx+20h], 0
 * 0000000140186D9C: call    KiDpcInterruptBypass
 * 0000000140186DA1: jmp     short loc_140186DBA
 * 0000000140186DA3: mov     ecx, 2
 * 0000000140186DA8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140186DAE: mov     rcx, gs:20h
 * 0000000140186DB7: dec     byte ptr [rcx+20h]
 * 0000000140186DBA: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140186DBE: mov     cr8, rcx
 * 0000000140186DC2: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140186DC9: cli
 * 0000000140186DCA: test    [rbp+0E8h+arg_0], 1
 * 0000000140186DD1: jz      loc_140186EE7
 * 0000000140186DD7: mov     rcx, gs:188h
 * 0000000140186DE0: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140186DE7: jz      short loc_140186E02
 * 0000000140186DE9: mov     ecx, 1
 * 0000000140186DEE: mov     cr8, rcx
 * 0000000140186DF2: sti
 * 0000000140186DF3: call    KiInitiateUserApc
 * 0000000140186DF8: cli
 * 0000000140186DF9: mov     ecx, 0
 * 0000000140186DFE: mov     cr8, rcx
 * 0000000140186E02: mov     rcx, gs:188h
 * 0000000140186E0B: test    dword ptr [rcx], 8000000h
 * 0000000140186E11: jz      short loc_140186E18
 * 0000000140186E13: call    KiRestoreSetContextState
 * 0000000140186E18: mov     rcx, gs:188h
 * 0000000140186E21: test    dword ptr [rcx], 40010000h
 * 0000000140186E27: jz      short loc_140186E3D
 * 0000000140186E29: test    byte ptr [rcx+2], 1
 * 0000000140186E2D: jz      short loc_140186E3D
 * 0000000140186E2F: call    KiCopyCounters
 * 0000000140186E34: mov     rcx, gs:188h
 * 0000000140186E3D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186E41: cmp     [rbp+0E8h+var_68], 0
 * 0000000140186E49: jz      short loc_140186E50
 * 0000000140186E4B: call    KiRestoreDebugRegisterState
 * 0000000140186E50: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186E54: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186E58: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186E5C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186E60: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186E64: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186E68: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186E6C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186E70: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186E74: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186E78: movzx   eax, byte ptr gs:27Dh
 * 0000000140186E81: cmp     gs:27Ah, al
 * 0000000140186E89: jz      short loc_140186E9C
 * 0000000140186E8B: mov     gs:27Ah, al
 * 0000000140186E93: mov     ecx, 48h ; 'H'
 * 0000000140186E98: xor     edx, edx
 * 0000000140186E9A: wrmsr
 * 0000000140186E9C: btr     word ptr gs:278h, 2
 * 0000000140186EA7: jnb     short loc_140186EB7
 * 0000000140186EA9: mov     eax, 1
 * 0000000140186EAE: xor     edx, edx
 * 0000000140186EB0: mov     ecx, 49h ; 'I'
 * 0000000140186EB5: wrmsr
 * 0000000140186EB7: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186EBB: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140186EBF: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186EC3: mov     rsp, rbp
 * 0000000140186EC6: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186ECD: add     rsp, 0E8h
 * 0000000140186ED4: test    cs:KiKvaShadow, 1
 * 0000000140186EDB: jz      short loc_140186EE2
 * 0000000140186EDD: jmp     KiKernelExit
 * 0000000140186EE2: swapgs
 * 0000000140186EE5: iretq
 * 0000000140186EE7: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186EEB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186EEF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186EF3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186EF7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186EFB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186EFF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186F03: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186F07: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186F0B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186F0F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186F13: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186F17: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140186F1B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186F1F: mov     rsp, rbp
 * 0000000140186F22: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186F29: add     rsp, 0E8h
 * 0000000140186F30: iretq
 */
