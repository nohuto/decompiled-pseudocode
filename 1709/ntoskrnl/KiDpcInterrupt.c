/*
 * XREFs of KiDpcInterrupt @ 0x140187520
 * Callers:
 *     KiDpcInterruptShadow @ 0x140297E80 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140187520 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140187520
 * Reason: Hex-Rays returned no pseudocode for 0x140187520
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187520: sub     rsp, 8
 * 0000000140187524: push    rbp
 * 0000000140187525: push    rsi
 * 0000000140187526: sub     rsp, 150h
 * 000000014018752D: lea     rbp, [rsp+80h]
 * 0000000140187535: mov     [rbp+0E8h+var_13D], 0
 * 0000000140187539: mov     [rbp+0E8h+var_138], rax
 * 000000014018753D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140187541: mov     [rbp+0E8h+var_128], rdx
 * 0000000140187545: mov     [rbp+0E8h+var_120], r8
 * 0000000140187549: mov     [rbp+0E8h+var_118], r9
 * 000000014018754D: mov     [rbp+0E8h+var_110], r10
 * 0000000140187551: mov     [rbp+0E8h+var_108], r11
 * 0000000140187555: test    [rbp+0E8h+arg_0], 1
 * 000000014018755C: jnz     short loc_14018758B
 * 000000014018755E: lfence
 * 0000000140187561: test    byte ptr gs:278h, 1
 * 000000014018756A: jnz     short loc_140187574
 * 000000014018756C: lfence
 * 000000014018756F: jmp     loc_14018775E
 * 0000000140187574: movzx   eax, byte ptr gs:27Ah
 * 000000014018757D: mov     ecx, 48h ; 'H'
 * 0000000140187582: xor     edx, edx
 * 0000000140187584: wrmsr
 * 0000000140187586: jmp     loc_14018775E
 * 000000014018758B: test    cs:KiKvaShadow, 1
 * 0000000140187592: jnz     short loc_140187597
 * 0000000140187594: swapgs
 * 0000000140187597: lfence
 * 000000014018759A: mov     r10, gs:188h
 * 00000001401875A3: mov     rcx, gs:188h
 * 00000001401875AC: mov     rcx, [rcx+220h]
 * 00000001401875B3: mov     rcx, [rcx+838h]
 * 00000001401875BA: mov     gs:270h, rcx
 * 00000001401875C3: movzx   eax, byte ptr gs:27Bh
 * 00000001401875CC: cmp     gs:27Ah, al
 * 00000001401875D4: jz      short loc_1401875E7
 * 00000001401875D6: mov     gs:27Ah, al
 * 00000001401875DE: mov     ecx, 48h ; 'H'
 * 00000001401875E3: xor     edx, edx
 * 00000001401875E5: wrmsr
 * 00000001401875E7: movzx   edx, byte ptr gs:278h
 * 00000001401875F0: test    edx, 8
 * 00000001401875F6: jz      short loc_14018760B
 * 00000001401875F8: mov     eax, 1
 * 00000001401875FD: xor     edx, edx
 * 00000001401875FF: mov     ecx, 49h ; 'I'
 * 0000000140187604: wrmsr
 * 0000000140187606: jmp     loc_140187749
 * 000000014018760B: test    edx, 2
 * 0000000140187611: jz      loc_140187746
 * 0000000140187617: test    byte ptr gs:279h, 4
 * 0000000140187620: jnz     loc_140187746
 * 0000000140187626: call    loc_140187739
 * 000000014018762B: add     rsp, 8
 * 000000014018762F: call    loc_140187742
 * 0000000140187634: add     rsp, 8
 * 0000000140187638: call    loc_14018762B
 * 000000014018763D: add     rsp, 8
 * 0000000140187641: call    loc_140187634
 * 0000000140187646: add     rsp, 8
 * 000000014018764A: call    loc_14018763D
 * 000000014018764F: add     rsp, 8
 * 0000000140187653: call    loc_140187646
 * 0000000140187658: add     rsp, 8
 * 000000014018765C: call    loc_14018764F
 * 0000000140187661: add     rsp, 8
 * 0000000140187665: call    loc_140187658
 * 000000014018766A: add     rsp, 8
 * 000000014018766E: call    loc_140187661
 * 0000000140187673: add     rsp, 8
 * 0000000140187677: call    loc_14018766A
 * 000000014018767C: add     rsp, 8
 * 0000000140187680: call    loc_140187673
 * 0000000140187685: add     rsp, 8
 * 0000000140187689: call    loc_14018767C
 * 000000014018768E: add     rsp, 8
 * 0000000140187692: call    loc_140187685
 * 0000000140187697: add     rsp, 8
 * 000000014018769B: call    loc_14018768E
 * 00000001401876A0: add     rsp, 8
 * 00000001401876A4: call    loc_140187697
 * 00000001401876A9: add     rsp, 8
 * 00000001401876AD: call    loc_1401876A0
 * 00000001401876B2: add     rsp, 8
 * 00000001401876B6: call    loc_1401876A9
 * 00000001401876BB: add     rsp, 8
 * 00000001401876BF: call    loc_1401876B2
 * 00000001401876C4: add     rsp, 8
 * 00000001401876C8: call    loc_1401876BB
 * 00000001401876CD: add     rsp, 8
 * 00000001401876D1: call    loc_1401876C4
 * 00000001401876D6: add     rsp, 8
 * 00000001401876DA: call    loc_1401876CD
 * 00000001401876DF: add     rsp, 8
 * 00000001401876E3: call    loc_1401876D6
 * 00000001401876E8: add     rsp, 8
 * 00000001401876EC: call    loc_1401876DF
 * 00000001401876F1: add     rsp, 8
 * 00000001401876F5: call    loc_1401876E8
 * 00000001401876FA: add     rsp, 8
 * 00000001401876FE: call    loc_1401876F1
 * 0000000140187703: add     rsp, 8
 * 0000000140187707: call    loc_1401876FA
 * 000000014018770C: add     rsp, 8
 * 0000000140187710: call    loc_140187703
 * 0000000140187715: add     rsp, 8
 * 0000000140187719: call    loc_14018770C
 * 000000014018771E: add     rsp, 8
 * 0000000140187722: call    loc_140187715
 * 0000000140187727: add     rsp, 8
 * 000000014018772B: call    loc_14018771E
 * 0000000140187730: add     rsp, 8
 * 0000000140187734: call    loc_140187727
 * 0000000140187739: add     rsp, 8
 * 000000014018773D: call    loc_140187730
 * 0000000140187742: add     rsp, 8
 * 0000000140187746: lfence
 * 0000000140187749: test    byte ptr [r10+3], 3
 * 000000014018774E: mov     [rbp+0E8h+var_68], 0
 * 0000000140187757: jz      short loc_14018775E
 * 0000000140187759: call    KiSaveDebugRegisterState
 * 000000014018775E: cld
 * 000000014018775F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187763: ldmxcsr dword ptr gs:180h
 * 000000014018776C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187770: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187774: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187778: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018777C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140187780: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140187784: xor     esi, esi
 * 0000000140187786: inc     dword ptr gs:5D00h
 * 000000014018778E: mov     ecx, 2
 * 0000000140187793: mov     rax, cr8
 * 0000000140187797: mov     cr8, rcx
 * 000000014018779B: mov     [rbp+0E8h+var_13F], al
 * 000000014018779E: mov     rcx, rsi
 * 00000001401877A1: call    HalPerformEndOfInterrupt_0
 * 00000001401877A6: sti
 * 00000001401877A7: cmp     byte ptr gs:187h, 0
 * 00000001401877B0: jnz     short loc_1401877C9
 * 00000001401877B2: mov     al, [rbp+0E8h+var_13F]
 * 00000001401877B5: mov     rcx, gs:188h
 * 00000001401877BE: mov     [rcx+186h], al
 * 00000001401877C4: call    KiDispatchInterrupt
 * 00000001401877C9: cli
 * 00000001401877CA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401877CE: mov     cr8, rcx
 * 00000001401877D2: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401877D9: cli
 * 00000001401877DA: test    [rbp+0E8h+arg_0], 1
 * 00000001401877E1: jz      loc_1401878F7
 * 00000001401877E7: mov     rcx, gs:188h
 * 00000001401877F0: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401877F7: jz      short loc_140187812
 * 00000001401877F9: mov     ecx, 1
 * 00000001401877FE: mov     cr8, rcx
 * 0000000140187802: sti
 * 0000000140187803: call    KiInitiateUserApc
 * 0000000140187808: cli
 * 0000000140187809: mov     ecx, 0
 * 000000014018780E: mov     cr8, rcx
 * 0000000140187812: mov     rcx, gs:188h
 * 000000014018781B: test    dword ptr [rcx], 8000000h
 * 0000000140187821: jz      short loc_140187828
 * 0000000140187823: call    KiRestoreSetContextState
 * 0000000140187828: mov     rcx, gs:188h
 * 0000000140187831: test    dword ptr [rcx], 40010000h
 * 0000000140187837: jz      short loc_14018784D
 * 0000000140187839: test    byte ptr [rcx+2], 1
 * 000000014018783D: jz      short loc_14018784D
 * 000000014018783F: call    KiCopyCounters
 * 0000000140187844: mov     rcx, gs:188h
 * 000000014018784D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187851: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187859: jz      short loc_140187860
 * 000000014018785B: call    KiRestoreDebugRegisterState
 * 0000000140187860: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187864: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187868: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018786C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187870: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187874: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187878: mov     r11, [rbp+0E8h+var_108]
 * 000000014018787C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187880: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187884: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187888: movzx   eax, byte ptr gs:27Dh
 * 0000000140187891: cmp     gs:27Ah, al
 * 0000000140187899: jz      short loc_1401878AC
 * 000000014018789B: mov     gs:27Ah, al
 * 00000001401878A3: mov     ecx, 48h ; 'H'
 * 00000001401878A8: xor     edx, edx
 * 00000001401878AA: wrmsr
 * 00000001401878AC: btr     word ptr gs:278h, 2
 * 00000001401878B7: jnb     short loc_1401878C7
 * 00000001401878B9: mov     eax, 1
 * 00000001401878BE: xor     edx, edx
 * 00000001401878C0: mov     ecx, 49h ; 'I'
 * 00000001401878C5: wrmsr
 * 00000001401878C7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401878CB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401878CF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401878D3: mov     rsp, rbp
 * 00000001401878D6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401878DD: add     rsp, 0E8h
 * 00000001401878E4: test    cs:KiKvaShadow, 1
 * 00000001401878EB: jz      short loc_1401878F2
 * 00000001401878ED: jmp     KiKernelExit
 * 00000001401878F2: swapgs
 * 00000001401878F5: iretq
 * 00000001401878F7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401878FB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401878FF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187903: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187907: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018790B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018790F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187913: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187917: mov     r10, [rbp+0E8h+var_110]
 * 000000014018791B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018791F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187923: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187927: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018792B: mov     rax, [rbp+0E8h+var_138]
 * 000000014018792F: mov     rsp, rbp
 * 0000000140187932: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187939: add     rsp, 0E8h
 * 0000000140187940: iretq
 */
