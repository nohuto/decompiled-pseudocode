/*
 * XREFs of KiHvInterrupt @ 0x1401853F0
 * Callers:
 *     KiHvInterruptShadow @ 0x140297F00 (KiHvInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 *     HvlSharedIsr @ 0x1401E9C70 (HvlSharedIsr.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 *     KiEpfCompletionIsr @ 0x14020CE70 (KiEpfCompletionIsr.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1401853F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401853F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401853F0: sub     rsp, 8
 * 00000001401853F4: push    rbp
 * 00000001401853F5: push    rsi
 * 00000001401853F6: sub     rsp, 150h
 * 00000001401853FD: lea     rbp, [rsp+80h]
 * 0000000140185405: mov     [rbp+0E8h+var_13D], 0
 * 0000000140185409: mov     [rbp+0E8h+var_138], rax
 * 000000014018540D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140185411: mov     [rbp+0E8h+var_128], rdx
 * 0000000140185415: mov     [rbp+0E8h+var_120], r8
 * 0000000140185419: mov     [rbp+0E8h+var_118], r9
 * 000000014018541D: mov     [rbp+0E8h+var_110], r10
 * 0000000140185421: mov     [rbp+0E8h+var_108], r11
 * 0000000140185425: test    [rbp+0E8h+arg_0], 1
 * 000000014018542C: jnz     short loc_14018545B
 * 000000014018542E: lfence
 * 0000000140185431: test    byte ptr gs:278h, 1
 * 000000014018543A: jnz     short loc_140185444
 * 000000014018543C: lfence
 * 000000014018543F: jmp     loc_14018562E
 * 0000000140185444: movzx   eax, byte ptr gs:27Ah
 * 000000014018544D: mov     ecx, 48h ; 'H'
 * 0000000140185452: xor     edx, edx
 * 0000000140185454: wrmsr
 * 0000000140185456: jmp     loc_14018562E
 * 000000014018545B: test    cs:KiKvaShadow, 1
 * 0000000140185462: jnz     short loc_140185467
 * 0000000140185464: swapgs
 * 0000000140185467: lfence
 * 000000014018546A: mov     r10, gs:188h
 * 0000000140185473: mov     rcx, gs:188h
 * 000000014018547C: mov     rcx, [rcx+220h]
 * 0000000140185483: mov     rcx, [rcx+838h]
 * 000000014018548A: mov     gs:270h, rcx
 * 0000000140185493: movzx   eax, byte ptr gs:27Bh
 * 000000014018549C: cmp     gs:27Ah, al
 * 00000001401854A4: jz      short loc_1401854B7
 * 00000001401854A6: mov     gs:27Ah, al
 * 00000001401854AE: mov     ecx, 48h ; 'H'
 * 00000001401854B3: xor     edx, edx
 * 00000001401854B5: wrmsr
 * 00000001401854B7: movzx   edx, byte ptr gs:278h
 * 00000001401854C0: test    edx, 8
 * 00000001401854C6: jz      short loc_1401854DB
 * 00000001401854C8: mov     eax, 1
 * 00000001401854CD: xor     edx, edx
 * 00000001401854CF: mov     ecx, 49h ; 'I'
 * 00000001401854D4: wrmsr
 * 00000001401854D6: jmp     loc_140185619
 * 00000001401854DB: test    edx, 2
 * 00000001401854E1: jz      loc_140185616
 * 00000001401854E7: test    byte ptr gs:279h, 4
 * 00000001401854F0: jnz     loc_140185616
 * 00000001401854F6: call    loc_140185609
 * 00000001401854FB: add     rsp, 8
 * 00000001401854FF: call    loc_140185612
 * 0000000140185504: add     rsp, 8
 * 0000000140185508: call    loc_1401854FB
 * 000000014018550D: add     rsp, 8
 * 0000000140185511: call    loc_140185504
 * 0000000140185516: add     rsp, 8
 * 000000014018551A: call    loc_14018550D
 * 000000014018551F: add     rsp, 8
 * 0000000140185523: call    loc_140185516
 * 0000000140185528: add     rsp, 8
 * 000000014018552C: call    loc_14018551F
 * 0000000140185531: add     rsp, 8
 * 0000000140185535: call    loc_140185528
 * 000000014018553A: add     rsp, 8
 * 000000014018553E: call    loc_140185531
 * 0000000140185543: add     rsp, 8
 * 0000000140185547: call    loc_14018553A
 * 000000014018554C: add     rsp, 8
 * 0000000140185550: call    loc_140185543
 * 0000000140185555: add     rsp, 8
 * 0000000140185559: call    loc_14018554C
 * 000000014018555E: add     rsp, 8
 * 0000000140185562: call    loc_140185555
 * 0000000140185567: add     rsp, 8
 * 000000014018556B: call    loc_14018555E
 * 0000000140185570: add     rsp, 8
 * 0000000140185574: call    loc_140185567
 * 0000000140185579: add     rsp, 8
 * 000000014018557D: call    loc_140185570
 * 0000000140185582: add     rsp, 8
 * 0000000140185586: call    loc_140185579
 * 000000014018558B: add     rsp, 8
 * 000000014018558F: call    loc_140185582
 * 0000000140185594: add     rsp, 8
 * 0000000140185598: call    loc_14018558B
 * 000000014018559D: add     rsp, 8
 * 00000001401855A1: call    loc_140185594
 * 00000001401855A6: add     rsp, 8
 * 00000001401855AA: call    loc_14018559D
 * 00000001401855AF: add     rsp, 8
 * 00000001401855B3: call    loc_1401855A6
 * 00000001401855B8: add     rsp, 8
 * 00000001401855BC: call    loc_1401855AF
 * 00000001401855C1: add     rsp, 8
 * 00000001401855C5: call    loc_1401855B8
 * 00000001401855CA: add     rsp, 8
 * 00000001401855CE: call    loc_1401855C1
 * 00000001401855D3: add     rsp, 8
 * 00000001401855D7: call    loc_1401855CA
 * 00000001401855DC: add     rsp, 8
 * 00000001401855E0: call    loc_1401855D3
 * 00000001401855E5: add     rsp, 8
 * 00000001401855E9: call    loc_1401855DC
 * 00000001401855EE: add     rsp, 8
 * 00000001401855F2: call    loc_1401855E5
 * 00000001401855F7: add     rsp, 8
 * 00000001401855FB: call    loc_1401855EE
 * 0000000140185600: add     rsp, 8
 * 0000000140185604: call    loc_1401855F7
 * 0000000140185609: add     rsp, 8
 * 000000014018560D: call    loc_140185600
 * 0000000140185612: add     rsp, 8
 * 0000000140185616: lfence
 * 0000000140185619: test    byte ptr [r10+3], 3
 * 000000014018561E: mov     [rbp+0E8h+var_68], 0
 * 0000000140185627: jz      short loc_14018562E
 * 0000000140185629: call    KiSaveDebugRegisterState
 * 000000014018562E: cld
 * 000000014018562F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140185633: ldmxcsr dword ptr gs:180h
 * 000000014018563C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140185640: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140185644: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140185648: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018564C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140185650: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140185654: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018565D: jz      short loc_140185664
 * 000000014018565F: call    KeWakeProcessor
 * 0000000140185664: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018566B: cmp     rax, [rbp+0E8h]
 * 0000000140185672: jnb     short loc_14018568D
 * 0000000140185674: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018567B: cmp     rax, [rbp+0E8h]
 * 0000000140185682: jb      short loc_14018568D
 * 0000000140185684: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140185688: call    KiCheckForSListAddress
 * 000000014018568D: xor     esi, esi
 * 000000014018568F: inc     dword ptr gs:5D00h
 * 0000000140185697: mov     ecx, 3
 * 000000014018569C: mov     rax, cr8
 * 00000001401856A0: mov     cr8, rcx
 * 00000001401856A4: mov     [rbp+0E8h+var_13F], al
 * 00000001401856A7: mov     [rbp+0E8h+var_148], 0
 * 00000001401856AE: mov     rcx, gs:20h
 * 00000001401856B7: inc     byte ptr [rcx+20h]
 * 00000001401856BA: cmp     byte ptr [rcx+20h], 1
 * 00000001401856BE: jnz     loc_140185754
 * 00000001401856C4: rdtsc
 * 00000001401856C6: shl     rdx, 20h
 * 00000001401856CA: or      rax, rdx
 * 00000001401856CD: mov     edx, [rcx+62E0h]
 * 00000001401856D3: mov     r11d, edx
 * 00000001401856D6: and     edx, 7FFh
 * 00000001401856DC: shr     edx, 5
 * 00000001401856DF: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401856E7: mov     edx, [r10]
 * 00000001401856EA: ror     edx, 5
 * 00000001401856ED: xor     edx, eax
 * 00000001401856EF: mov     [r10], edx
 * 00000001401856F2: add     r11d, 1
 * 00000001401856F6: mov     [rcx+62E0h], r11d
 * 00000001401856FD: and     r11d, 3FFh
 * 0000000140185704: jnz     short loc_14018570D
 * 0000000140185706: mov     [rbp+0E8h+var_148], 1
 * 000000014018570D: mov     r8, [rcx+8]
 * 0000000140185711: sub     rax, [rcx+5BC0h]
 * 0000000140185718: add     [r8+48h], rax
 * 000000014018571C: mov     edx, [r8+50h]
 * 0000000140185720: add     [rcx+5BC0h], rax
 * 0000000140185727: add     rdx, rax
 * 000000014018572A: mov     ecx, edx
 * 000000014018572C: shr     rdx, 20h
 * 0000000140185730: jz      short loc_140185735
 * 0000000140185732: or      ecx, 0FFFFFFFFh
 * 0000000140185735: mov     [r8+50h], ecx
 * 0000000140185739: test    byte ptr [r8+2], 3Eh
 * 000000014018573E: jz      short loc_140185754
 * 0000000140185740: mov     rdx, r8
 * 0000000140185743: mov     r8, rax
 * 0000000140185746: mov     rcx, gs:20h
 * 000000014018574F: call    KiEndThreadAccountingPeriod
 * 0000000140185754: sti
 * 0000000140185755: cmp     [rbp+0E8h+var_148], 0
 * 0000000140185759: jz      short loc_140185769
 * 000000014018575B: mov     rcx, gs:20h
 * 0000000140185764: call    KiEntropyQueueDpc
 * 0000000140185769: call    KiEpfCompletionIsr
 * 000000014018576E: call    HvlSharedIsr
 * 0000000140185773: xor     ecx, ecx
 * 0000000140185775: call    HvlRouteInterrupt
 * 000000014018577A: test    cs:HvlEnlightenments, 1000h
 * 0000000140185784: jz      short loc_140185790
 * 0000000140185786: cli
 * 0000000140185787: mov     rcx, rsi
 * 000000014018578A: call    HalPerformEndOfInterrupt_0
 * 000000014018578F: sti
 * 0000000140185790: cli
 * 0000000140185791: mov     rcx, gs:20h
 * 000000014018579A: cmp     byte ptr [rcx+20h], 1
 * 000000014018579E: ja      short loc_140185814
 * 00000001401857A0: rdtsc
 * 00000001401857A2: shl     rdx, 20h
 * 00000001401857A6: or      rax, rdx
 * 00000001401857A9: sub     rax, [rcx+5BC0h]
 * 00000001401857B0: add     [rcx+5C38h], rax
 * 00000001401857B7: add     [rcx+5BC0h], rax
 * 00000001401857BE: mov     r8, rax
 * 00000001401857C1: mov     rax, [rcx+8]
 * 00000001401857C5: test    byte ptr [rax+2], 32h
 * 00000001401857C9: jz      short loc_1401857DE
 * 00000001401857CB: xor     edx, edx
 * 00000001401857CD: call    KiBeginThreadAccountingPeriod
 * 00000001401857D2: mov     rcx, gs:20h
 * 00000001401857DB: inc     byte ptr [rcx+20h]
 * 00000001401857DE: mov     dl, [rcx+6]
 * 00000001401857E1: and     byte ptr [rcx+6], 0
 * 00000001401857E5: cmp     byte ptr [rcx+7], 0
 * 00000001401857E9: jnz     short loc_140185814
 * 00000001401857EB: test    dl, dl
 * 00000001401857ED: jz      short loc_140185814
 * 00000001401857EF: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401857F3: jnb     short loc_140185800
 * 00000001401857F5: and     byte ptr [rcx+20h], 0
 * 00000001401857F9: call    KiDpcInterruptBypass
 * 00000001401857FE: jmp     short loc_140185817
 * 0000000140185800: mov     ecx, 2
 * 0000000140185805: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018580B: mov     rcx, gs:20h
 * 0000000140185814: dec     byte ptr [rcx+20h]
 * 0000000140185817: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018581B: mov     cr8, rcx
 * 000000014018581F: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140185826: cli
 * 0000000140185827: test    [rbp+0E8h+arg_0], 1
 * 000000014018582E: jz      loc_140185944
 * 0000000140185834: mov     rcx, gs:188h
 * 000000014018583D: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140185844: jz      short loc_14018585F
 * 0000000140185846: mov     ecx, 1
 * 000000014018584B: mov     cr8, rcx
 * 000000014018584F: sti
 * 0000000140185850: call    KiInitiateUserApc
 * 0000000140185855: cli
 * 0000000140185856: mov     ecx, 0
 * 000000014018585B: mov     cr8, rcx
 * 000000014018585F: mov     rcx, gs:188h
 * 0000000140185868: test    dword ptr [rcx], 8000000h
 * 000000014018586E: jz      short loc_140185875
 * 0000000140185870: call    KiRestoreSetContextState
 * 0000000140185875: mov     rcx, gs:188h
 * 000000014018587E: test    dword ptr [rcx], 40010000h
 * 0000000140185884: jz      short loc_14018589A
 * 0000000140185886: test    byte ptr [rcx+2], 1
 * 000000014018588A: jz      short loc_14018589A
 * 000000014018588C: call    KiCopyCounters
 * 0000000140185891: mov     rcx, gs:188h
 * 000000014018589A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018589E: cmp     [rbp+0E8h+var_68], 0
 * 00000001401858A6: jz      short loc_1401858AD
 * 00000001401858A8: call    KiRestoreDebugRegisterState
 * 00000001401858AD: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401858B1: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401858B5: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401858B9: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401858BD: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401858C1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401858C5: mov     r11, [rbp+0E8h+var_108]
 * 00000001401858C9: mov     r10, [rbp+0E8h+var_110]
 * 00000001401858CD: mov     r9, [rbp+0E8h+var_118]
 * 00000001401858D1: mov     r8, [rbp+0E8h+var_120]
 * 00000001401858D5: movzx   eax, byte ptr gs:27Dh
 * 00000001401858DE: cmp     gs:27Ah, al
 * 00000001401858E6: jz      short loc_1401858F9
 * 00000001401858E8: mov     gs:27Ah, al
 * 00000001401858F0: mov     ecx, 48h ; 'H'
 * 00000001401858F5: xor     edx, edx
 * 00000001401858F7: wrmsr
 * 00000001401858F9: btr     word ptr gs:278h, 2
 * 0000000140185904: jnb     short loc_140185914
 * 0000000140185906: mov     eax, 1
 * 000000014018590B: xor     edx, edx
 * 000000014018590D: mov     ecx, 49h ; 'I'
 * 0000000140185912: wrmsr
 * 0000000140185914: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185918: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018591C: mov     rax, [rbp+0E8h+var_138]
 * 0000000140185920: mov     rsp, rbp
 * 0000000140185923: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018592A: add     rsp, 0E8h
 * 0000000140185931: test    cs:KiKvaShadow, 1
 * 0000000140185938: jz      short loc_14018593F
 * 000000014018593A: jmp     KiKernelExit
 * 000000014018593F: swapgs
 * 0000000140185942: iretq
 * 0000000140185944: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140185948: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018594C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140185950: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140185954: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140185958: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018595C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140185960: mov     r11, [rbp+0E8h+var_108]
 * 0000000140185964: mov     r10, [rbp+0E8h+var_110]
 * 0000000140185968: mov     r9, [rbp+0E8h+var_118]
 * 000000014018596C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140185970: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185974: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140185978: mov     rax, [rbp+0E8h+var_138]
 * 000000014018597C: mov     rsp, rbp
 * 000000014018597F: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140185986: add     rsp, 0E8h
 * 000000014018598D: iretq
 */
