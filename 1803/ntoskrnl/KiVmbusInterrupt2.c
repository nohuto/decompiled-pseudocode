/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401B0610
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x1402D0080 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401B0610
 * Reason: Hex-Rays returned no pseudocode for 0x1401B0610
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B0610: sub     rsp, 8
 * 00000001401B0614: push    rbp
 * 00000001401B0615: push    rsi
 * 00000001401B0616: sub     rsp, 150h
 * 00000001401B061D: lea     rbp, [rsp+80h]
 * 00000001401B0625: mov     [rbp+0E8h+var_13D], 0
 * 00000001401B0629: mov     [rbp+0E8h+var_138], rax
 * 00000001401B062D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B0631: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B0635: mov     [rbp+0E8h+var_120], r8
 * 00000001401B0639: mov     [rbp+0E8h+var_118], r9
 * 00000001401B063D: mov     [rbp+0E8h+var_110], r10
 * 00000001401B0641: mov     [rbp+0E8h+var_108], r11
 * 00000001401B0645: test    [rbp+0E8h+arg_0], 1
 * 00000001401B064C: jnz     short loc_1401B067B
 * 00000001401B064E: lfence
 * 00000001401B0651: test    byte ptr gs:278h, 1
 * 00000001401B065A: jnz     short loc_1401B0664
 * 00000001401B065C: lfence
 * 00000001401B065F: jmp     loc_1401B084E
 * 00000001401B0664: movzx   eax, byte ptr gs:27Ah
 * 00000001401B066D: mov     ecx, 48h ; 'H'
 * 00000001401B0672: xor     edx, edx
 * 00000001401B0674: wrmsr
 * 00000001401B0676: jmp     loc_1401B084E
 * 00000001401B067B: test    cs:KiKvaShadow, 1
 * 00000001401B0682: jnz     short loc_1401B0687
 * 00000001401B0684: swapgs
 * 00000001401B0687: lfence
 * 00000001401B068A: mov     r10, gs:188h
 * 00000001401B0693: mov     rcx, gs:188h
 * 00000001401B069C: mov     rcx, [rcx+220h]
 * 00000001401B06A3: mov     rcx, [rcx+838h]
 * 00000001401B06AA: mov     gs:270h, rcx
 * 00000001401B06B3: movzx   eax, byte ptr gs:27Bh
 * 00000001401B06BC: cmp     gs:27Ah, al
 * 00000001401B06C4: jz      short loc_1401B06D7
 * 00000001401B06C6: mov     gs:27Ah, al
 * 00000001401B06CE: mov     ecx, 48h ; 'H'
 * 00000001401B06D3: xor     edx, edx
 * 00000001401B06D5: wrmsr
 * 00000001401B06D7: movzx   edx, byte ptr gs:278h
 * 00000001401B06E0: test    edx, 8
 * 00000001401B06E6: jz      short loc_1401B06FB
 * 00000001401B06E8: mov     eax, 1
 * 00000001401B06ED: xor     edx, edx
 * 00000001401B06EF: mov     ecx, 49h ; 'I'
 * 00000001401B06F4: wrmsr
 * 00000001401B06F6: jmp     loc_1401B0839
 * 00000001401B06FB: test    edx, 2
 * 00000001401B0701: jz      loc_1401B0836
 * 00000001401B0707: test    byte ptr gs:279h, 4
 * 00000001401B0710: jnz     loc_1401B0836
 * 00000001401B0716: call    loc_1401B0829
 * 00000001401B071B: add     rsp, 8
 * 00000001401B071F: call    loc_1401B0832
 * 00000001401B0724: add     rsp, 8
 * 00000001401B0728: call    loc_1401B071B
 * 00000001401B072D: add     rsp, 8
 * 00000001401B0731: call    loc_1401B0724
 * 00000001401B0736: add     rsp, 8
 * 00000001401B073A: call    loc_1401B072D
 * 00000001401B073F: add     rsp, 8
 * 00000001401B0743: call    loc_1401B0736
 * 00000001401B0748: add     rsp, 8
 * 00000001401B074C: call    loc_1401B073F
 * 00000001401B0751: add     rsp, 8
 * 00000001401B0755: call    loc_1401B0748
 * 00000001401B075A: add     rsp, 8
 * 00000001401B075E: call    loc_1401B0751
 * 00000001401B0763: add     rsp, 8
 * 00000001401B0767: call    loc_1401B075A
 * 00000001401B076C: add     rsp, 8
 * 00000001401B0770: call    loc_1401B0763
 * 00000001401B0775: add     rsp, 8
 * 00000001401B0779: call    loc_1401B076C
 * 00000001401B077E: add     rsp, 8
 * 00000001401B0782: call    loc_1401B0775
 * 00000001401B0787: add     rsp, 8
 * 00000001401B078B: call    loc_1401B077E
 * 00000001401B0790: add     rsp, 8
 * 00000001401B0794: call    loc_1401B0787
 * 00000001401B0799: add     rsp, 8
 * 00000001401B079D: call    loc_1401B0790
 * 00000001401B07A2: add     rsp, 8
 * 00000001401B07A6: call    loc_1401B0799
 * 00000001401B07AB: add     rsp, 8
 * 00000001401B07AF: call    loc_1401B07A2
 * 00000001401B07B4: add     rsp, 8
 * 00000001401B07B8: call    loc_1401B07AB
 * 00000001401B07BD: add     rsp, 8
 * 00000001401B07C1: call    loc_1401B07B4
 * 00000001401B07C6: add     rsp, 8
 * 00000001401B07CA: call    loc_1401B07BD
 * 00000001401B07CF: add     rsp, 8
 * 00000001401B07D3: call    loc_1401B07C6
 * 00000001401B07D8: add     rsp, 8
 * 00000001401B07DC: call    loc_1401B07CF
 * 00000001401B07E1: add     rsp, 8
 * 00000001401B07E5: call    loc_1401B07D8
 * 00000001401B07EA: add     rsp, 8
 * 00000001401B07EE: call    loc_1401B07E1
 * 00000001401B07F3: add     rsp, 8
 * 00000001401B07F7: call    loc_1401B07EA
 * 00000001401B07FC: add     rsp, 8
 * 00000001401B0800: call    loc_1401B07F3
 * 00000001401B0805: add     rsp, 8
 * 00000001401B0809: call    loc_1401B07FC
 * 00000001401B080E: add     rsp, 8
 * 00000001401B0812: call    loc_1401B0805
 * 00000001401B0817: add     rsp, 8
 * 00000001401B081B: call    loc_1401B080E
 * 00000001401B0820: add     rsp, 8
 * 00000001401B0824: call    loc_1401B0817
 * 00000001401B0829: add     rsp, 8
 * 00000001401B082D: call    loc_1401B0820
 * 00000001401B0832: add     rsp, 8
 * 00000001401B0836: lfence
 * 00000001401B0839: test    byte ptr [r10+3], 3
 * 00000001401B083E: mov     [rbp+0E8h+var_68], 0
 * 00000001401B0847: jz      short loc_1401B084E
 * 00000001401B0849: call    KiSaveDebugRegisterState
 * 00000001401B084E: cld
 * 00000001401B084F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B0853: ldmxcsr dword ptr gs:180h
 * 00000001401B085C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B0860: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B0864: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B0868: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B086C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B0870: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B0874: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401B087D: jz      short loc_1401B0884
 * 00000001401B087F: call    KeWakeProcessor
 * 00000001401B0884: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401B088B: cmp     rax, [rbp+0E8h]
 * 00000001401B0892: jnb     short loc_1401B08AD
 * 00000001401B0894: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401B089B: cmp     rax, [rbp+0E8h]
 * 00000001401B08A2: jb      short loc_1401B08AD
 * 00000001401B08A4: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401B08A8: call    KiCheckForSListAddress
 * 00000001401B08AD: xor     esi, esi
 * 00000001401B08AF: inc     dword ptr gs:5D00h
 * 00000001401B08B7: mov     ecx, 3
 * 00000001401B08BC: mov     rax, cr8
 * 00000001401B08C0: mov     cr8, rcx
 * 00000001401B08C4: mov     [rbp+0E8h+var_13F], al
 * 00000001401B08C7: mov     [rbp+0E8h+var_148], 0
 * 00000001401B08CE: mov     rcx, gs:20h
 * 00000001401B08D7: inc     byte ptr [rcx+20h]
 * 00000001401B08DA: cmp     byte ptr [rcx+20h], 1
 * 00000001401B08DE: jnz     loc_1401B0974
 * 00000001401B08E4: rdtsc
 * 00000001401B08E6: shl     rdx, 20h
 * 00000001401B08EA: or      rax, rdx
 * 00000001401B08ED: mov     edx, [rcx+62E0h]
 * 00000001401B08F3: mov     r11d, edx
 * 00000001401B08F6: and     edx, 7FFh
 * 00000001401B08FC: shr     edx, 5
 * 00000001401B08FF: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401B0907: mov     edx, [r10]
 * 00000001401B090A: ror     edx, 5
 * 00000001401B090D: xor     edx, eax
 * 00000001401B090F: mov     [r10], edx
 * 00000001401B0912: add     r11d, 1
 * 00000001401B0916: mov     [rcx+62E0h], r11d
 * 00000001401B091D: and     r11d, 3FFh
 * 00000001401B0924: jnz     short loc_1401B092D
 * 00000001401B0926: mov     [rbp+0E8h+var_148], 1
 * 00000001401B092D: mov     r8, [rcx+8]
 * 00000001401B0931: sub     rax, [rcx+5BC0h]
 * 00000001401B0938: add     [r8+48h], rax
 * 00000001401B093C: mov     edx, [r8+50h]
 * 00000001401B0940: add     [rcx+5BC0h], rax
 * 00000001401B0947: add     rdx, rax
 * 00000001401B094A: mov     ecx, edx
 * 00000001401B094C: shr     rdx, 20h
 * 00000001401B0950: jz      short loc_1401B0955
 * 00000001401B0952: or      ecx, 0FFFFFFFFh
 * 00000001401B0955: mov     [r8+50h], ecx
 * 00000001401B0959: test    byte ptr [r8+2], 3Eh
 * 00000001401B095E: jz      short loc_1401B0974
 * 00000001401B0960: mov     rdx, r8
 * 00000001401B0963: mov     r8, rax
 * 00000001401B0966: mov     rcx, gs:20h
 * 00000001401B096F: call    KiEndThreadAccountingPeriod
 * 00000001401B0974: sti
 * 00000001401B0975: cmp     [rbp+0E8h+var_148], 0
 * 00000001401B0979: jz      short loc_1401B0989
 * 00000001401B097B: mov     rcx, gs:20h
 * 00000001401B0984: call    KiEntropyQueueDpc
 * 00000001401B0989: mov     ecx, 3
 * 00000001401B098E: call    HvlRouteInterrupt
 * 00000001401B0993: cli
 * 00000001401B0994: mov     rcx, gs:20h
 * 00000001401B099D: cmp     byte ptr [rcx+20h], 1
 * 00000001401B09A1: ja      short loc_1401B0A17
 * 00000001401B09A3: rdtsc
 * 00000001401B09A5: shl     rdx, 20h
 * 00000001401B09A9: or      rax, rdx
 * 00000001401B09AC: sub     rax, [rcx+5BC0h]
 * 00000001401B09B3: add     [rcx+5C38h], rax
 * 00000001401B09BA: add     [rcx+5BC0h], rax
 * 00000001401B09C1: mov     r8, rax
 * 00000001401B09C4: mov     rax, [rcx+8]
 * 00000001401B09C8: test    byte ptr [rax+2], 72h
 * 00000001401B09CC: jz      short loc_1401B09E1
 * 00000001401B09CE: xor     edx, edx
 * 00000001401B09D0: call    KiBeginThreadAccountingPeriod
 * 00000001401B09D5: mov     rcx, gs:20h
 * 00000001401B09DE: inc     byte ptr [rcx+20h]
 * 00000001401B09E1: mov     dl, [rcx+6]
 * 00000001401B09E4: and     byte ptr [rcx+6], 0
 * 00000001401B09E8: cmp     byte ptr [rcx+7], 0
 * 00000001401B09EC: jnz     short loc_1401B0A17
 * 00000001401B09EE: test    dl, dl
 * 00000001401B09F0: jz      short loc_1401B0A17
 * 00000001401B09F2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401B09F6: jnb     short loc_1401B0A03
 * 00000001401B09F8: and     byte ptr [rcx+20h], 0
 * 00000001401B09FC: call    KiDpcInterruptBypass
 * 00000001401B0A01: jmp     short loc_1401B0A1A
 * 00000001401B0A03: mov     ecx, 2
 * 00000001401B0A08: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401B0A0E: mov     rcx, gs:20h
 * 00000001401B0A17: dec     byte ptr [rcx+20h]
 * 00000001401B0A1A: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401B0A1E: mov     cr8, rcx
 * 00000001401B0A22: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401B0A29: cli
 * 00000001401B0A2A: test    [rbp+0E8h+arg_0], 1
 * 00000001401B0A31: jz      loc_1401B0B47
 * 00000001401B0A37: mov     rcx, gs:188h
 * 00000001401B0A40: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B0A47: jz      short loc_1401B0A62
 * 00000001401B0A49: mov     ecx, 1
 * 00000001401B0A4E: mov     cr8, rcx
 * 00000001401B0A52: sti
 * 00000001401B0A53: call    KiInitiateUserApc
 * 00000001401B0A58: cli
 * 00000001401B0A59: mov     ecx, 0
 * 00000001401B0A5E: mov     cr8, rcx
 * 00000001401B0A62: mov     rcx, gs:188h
 * 00000001401B0A6B: test    dword ptr [rcx], 8000000h
 * 00000001401B0A71: jz      short loc_1401B0A78
 * 00000001401B0A73: call    KiRestoreSetContextState
 * 00000001401B0A78: mov     rcx, gs:188h
 * 00000001401B0A81: test    dword ptr [rcx], 40010000h
 * 00000001401B0A87: jz      short loc_1401B0A9D
 * 00000001401B0A89: test    byte ptr [rcx+2], 1
 * 00000001401B0A8D: jz      short loc_1401B0A9D
 * 00000001401B0A8F: call    KiCopyCounters
 * 00000001401B0A94: mov     rcx, gs:188h
 * 00000001401B0A9D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B0AA1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401B0AA9: jz      short loc_1401B0AB0
 * 00000001401B0AAB: call    KiRestoreDebugRegisterState
 * 00000001401B0AB0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B0AB4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B0AB8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B0ABC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B0AC0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B0AC4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B0AC8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B0ACC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B0AD0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B0AD4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B0AD8: movzx   eax, byte ptr gs:27Dh
 * 00000001401B0AE1: cmp     gs:27Ah, al
 * 00000001401B0AE9: jz      short loc_1401B0AFC
 * 00000001401B0AEB: mov     gs:27Ah, al
 * 00000001401B0AF3: mov     ecx, 48h ; 'H'
 * 00000001401B0AF8: xor     edx, edx
 * 00000001401B0AFA: wrmsr
 * 00000001401B0AFC: btr     word ptr gs:278h, 2
 * 00000001401B0B07: jnb     short loc_1401B0B17
 * 00000001401B0B09: mov     eax, 1
 * 00000001401B0B0E: xor     edx, edx
 * 00000001401B0B10: mov     ecx, 49h ; 'I'
 * 00000001401B0B15: wrmsr
 * 00000001401B0B17: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B0B1B: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B0B1F: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B0B23: mov     rsp, rbp
 * 00000001401B0B26: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B0B2D: add     rsp, 0E8h
 * 00000001401B0B34: test    cs:KiKvaShadow, 1
 * 00000001401B0B3B: jz      short loc_1401B0B42
 * 00000001401B0B3D: jmp     KiKernelExit
 * 00000001401B0B42: swapgs
 * 00000001401B0B45: iretq
 * 00000001401B0B47: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B0B4B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B0B4F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B0B53: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B0B57: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B0B5B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B0B5F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B0B63: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B0B67: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B0B6B: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B0B6F: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B0B73: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B0B77: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B0B7B: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B0B7F: mov     rsp, rbp
 * 00000001401B0B82: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B0B89: add     rsp, 0E8h
 * 00000001401B0B90: iretq
 */
