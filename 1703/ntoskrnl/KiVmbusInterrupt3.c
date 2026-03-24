/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401874D0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x14026D080 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E4EA0 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401874D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401874D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401874D0: sub     rsp, 8
 * 00000001401874D4: push    rbp
 * 00000001401874D5: push    rsi
 * 00000001401874D6: sub     rsp, 150h
 * 00000001401874DD: lea     rbp, [rsp+80h]
 * 00000001401874E5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401874E9: mov     [rbp+0E8h+var_138], rax
 * 00000001401874ED: mov     [rbp+0E8h+var_130], rcx
 * 00000001401874F1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401874F5: mov     [rbp+0E8h+var_120], r8
 * 00000001401874F9: mov     [rbp+0E8h+var_118], r9
 * 00000001401874FD: mov     [rbp+0E8h+var_110], r10
 * 0000000140187501: mov     [rbp+0E8h+var_108], r11
 * 0000000140187505: test    [rbp+0E8h+arg_0], 1
 * 000000014018750C: jnz     short loc_14018753B
 * 000000014018750E: lfence
 * 0000000140187511: test    byte ptr gs:278h, 1
 * 000000014018751A: jnz     short loc_140187524
 * 000000014018751C: lfence
 * 000000014018751F: jmp     loc_14018770E
 * 0000000140187524: movzx   eax, byte ptr gs:27Ah
 * 000000014018752D: mov     ecx, 48h ; 'H'
 * 0000000140187532: xor     edx, edx
 * 0000000140187534: wrmsr
 * 0000000140187536: jmp     loc_14018770E
 * 000000014018753B: test    cs:KiKvaShadow, 1
 * 0000000140187542: jnz     short loc_140187547
 * 0000000140187544: swapgs
 * 0000000140187547: lfence
 * 000000014018754A: mov     r10, gs:188h
 * 0000000140187553: mov     rcx, gs:188h
 * 000000014018755C: mov     rcx, [rcx+220h]
 * 0000000140187563: mov     rcx, [rcx+818h]
 * 000000014018756A: mov     gs:270h, rcx
 * 0000000140187573: movzx   eax, byte ptr gs:27Bh
 * 000000014018757C: cmp     gs:27Ah, al
 * 0000000140187584: jz      short loc_140187597
 * 0000000140187586: mov     gs:27Ah, al
 * 000000014018758E: mov     ecx, 48h ; 'H'
 * 0000000140187593: xor     edx, edx
 * 0000000140187595: wrmsr
 * 0000000140187597: movzx   edx, byte ptr gs:278h
 * 00000001401875A0: test    edx, 8
 * 00000001401875A6: jz      short loc_1401875BB
 * 00000001401875A8: mov     eax, 1
 * 00000001401875AD: xor     edx, edx
 * 00000001401875AF: mov     ecx, 49h ; 'I'
 * 00000001401875B4: wrmsr
 * 00000001401875B6: jmp     loc_1401876F9
 * 00000001401875BB: test    edx, 2
 * 00000001401875C1: jz      loc_1401876F6
 * 00000001401875C7: test    byte ptr gs:279h, 4
 * 00000001401875D0: jnz     loc_1401876F6
 * 00000001401875D6: call    loc_1401876E9
 * 00000001401875DB: add     rsp, 8
 * 00000001401875DF: call    loc_1401876F2
 * 00000001401875E4: add     rsp, 8
 * 00000001401875E8: call    loc_1401875DB
 * 00000001401875ED: add     rsp, 8
 * 00000001401875F1: call    loc_1401875E4
 * 00000001401875F6: add     rsp, 8
 * 00000001401875FA: call    loc_1401875ED
 * 00000001401875FF: add     rsp, 8
 * 0000000140187603: call    loc_1401875F6
 * 0000000140187608: add     rsp, 8
 * 000000014018760C: call    loc_1401875FF
 * 0000000140187611: add     rsp, 8
 * 0000000140187615: call    loc_140187608
 * 000000014018761A: add     rsp, 8
 * 000000014018761E: call    loc_140187611
 * 0000000140187623: add     rsp, 8
 * 0000000140187627: call    loc_14018761A
 * 000000014018762C: add     rsp, 8
 * 0000000140187630: call    loc_140187623
 * 0000000140187635: add     rsp, 8
 * 0000000140187639: call    loc_14018762C
 * 000000014018763E: add     rsp, 8
 * 0000000140187642: call    loc_140187635
 * 0000000140187647: add     rsp, 8
 * 000000014018764B: call    loc_14018763E
 * 0000000140187650: add     rsp, 8
 * 0000000140187654: call    loc_140187647
 * 0000000140187659: add     rsp, 8
 * 000000014018765D: call    loc_140187650
 * 0000000140187662: add     rsp, 8
 * 0000000140187666: call    loc_140187659
 * 000000014018766B: add     rsp, 8
 * 000000014018766F: call    loc_140187662
 * 0000000140187674: add     rsp, 8
 * 0000000140187678: call    loc_14018766B
 * 000000014018767D: add     rsp, 8
 * 0000000140187681: call    loc_140187674
 * 0000000140187686: add     rsp, 8
 * 000000014018768A: call    loc_14018767D
 * 000000014018768F: add     rsp, 8
 * 0000000140187693: call    loc_140187686
 * 0000000140187698: add     rsp, 8
 * 000000014018769C: call    loc_14018768F
 * 00000001401876A1: add     rsp, 8
 * 00000001401876A5: call    loc_140187698
 * 00000001401876AA: add     rsp, 8
 * 00000001401876AE: call    loc_1401876A1
 * 00000001401876B3: add     rsp, 8
 * 00000001401876B7: call    loc_1401876AA
 * 00000001401876BC: add     rsp, 8
 * 00000001401876C0: call    loc_1401876B3
 * 00000001401876C5: add     rsp, 8
 * 00000001401876C9: call    loc_1401876BC
 * 00000001401876CE: add     rsp, 8
 * 00000001401876D2: call    loc_1401876C5
 * 00000001401876D7: add     rsp, 8
 * 00000001401876DB: call    loc_1401876CE
 * 00000001401876E0: add     rsp, 8
 * 00000001401876E4: call    loc_1401876D7
 * 00000001401876E9: add     rsp, 8
 * 00000001401876ED: call    loc_1401876E0
 * 00000001401876F2: add     rsp, 8
 * 00000001401876F6: lfence
 * 00000001401876F9: test    byte ptr [r10+3], 3
 * 00000001401876FE: mov     [rbp+0E8h+var_68], 0
 * 0000000140187707: jz      short loc_14018770E
 * 0000000140187709: call    KiSaveDebugRegisterState
 * 000000014018770E: cld
 * 000000014018770F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187713: ldmxcsr dword ptr gs:180h
 * 000000014018771C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187720: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187724: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187728: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018772C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140187730: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140187734: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018773D: jz      short loc_140187744
 * 000000014018773F: call    KeWakeProcessor
 * 0000000140187744: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018774B: cmp     rax, [rbp+0E8h]
 * 0000000140187752: jnb     short loc_14018776D
 * 0000000140187754: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018775B: cmp     rax, [rbp+0E8h]
 * 0000000140187762: jb      short loc_14018776D
 * 0000000140187764: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140187768: call    KiCheckForSListAddress
 * 000000014018776D: xor     esi, esi
 * 000000014018776F: inc     dword ptr gs:5D00h
 * 0000000140187777: mov     ecx, 3
 * 000000014018777C: mov     rax, cr8
 * 0000000140187780: mov     cr8, rcx
 * 0000000140187784: mov     [rbp+0E8h+var_13F], al
 * 0000000140187787: mov     [rbp+0E8h+var_148], 0
 * 000000014018778E: mov     rcx, gs:20h
 * 0000000140187797: inc     byte ptr [rcx+20h]
 * 000000014018779A: cmp     byte ptr [rcx+20h], 1
 * 000000014018779E: jnz     loc_140187834
 * 00000001401877A4: rdtsc
 * 00000001401877A6: shl     rdx, 20h
 * 00000001401877AA: or      rax, rdx
 * 00000001401877AD: mov     edx, [rcx+6420h]
 * 00000001401877B3: mov     r11d, edx
 * 00000001401877B6: and     edx, 7FFh
 * 00000001401877BC: shr     edx, 5
 * 00000001401877BF: lea     r10, [rcx+rdx*4+6424h]
 * 00000001401877C7: mov     edx, [r10]
 * 00000001401877CA: ror     edx, 5
 * 00000001401877CD: xor     edx, eax
 * 00000001401877CF: mov     [r10], edx
 * 00000001401877D2: add     r11d, 1
 * 00000001401877D6: mov     [rcx+6420h], r11d
 * 00000001401877DD: and     r11d, 3FFh
 * 00000001401877E4: jnz     short loc_1401877ED
 * 00000001401877E6: mov     [rbp+0E8h+var_148], 1
 * 00000001401877ED: mov     r8, [rcx+8]
 * 00000001401877F1: sub     rax, [rcx+5BC0h]
 * 00000001401877F8: add     [r8+48h], rax
 * 00000001401877FC: mov     edx, [r8+50h]
 * 0000000140187800: add     [rcx+5BC0h], rax
 * 0000000140187807: add     rdx, rax
 * 000000014018780A: mov     ecx, edx
 * 000000014018780C: shr     rdx, 20h
 * 0000000140187810: jz      short loc_140187815
 * 0000000140187812: or      ecx, 0FFFFFFFFh
 * 0000000140187815: mov     [r8+50h], ecx
 * 0000000140187819: test    byte ptr [r8+2], 3Eh
 * 000000014018781E: jz      short loc_140187834
 * 0000000140187820: mov     rdx, r8
 * 0000000140187823: mov     r8, rax
 * 0000000140187826: mov     rcx, gs:20h
 * 000000014018782F: call    KiEndThreadAccountingPeriod
 * 0000000140187834: sti
 * 0000000140187835: cmp     [rbp+0E8h+var_148], 0
 * 0000000140187839: jz      short loc_140187849
 * 000000014018783B: mov     rcx, gs:20h
 * 0000000140187844: call    KiEntropyQueueDpc
 * 0000000140187849: mov     ecx, 4
 * 000000014018784E: call    HvlRouteInterrupt
 * 0000000140187853: cli
 * 0000000140187854: mov     rcx, gs:20h
 * 000000014018785D: cmp     byte ptr [rcx+20h], 1
 * 0000000140187861: ja      short loc_1401878D7
 * 0000000140187863: rdtsc
 * 0000000140187865: shl     rdx, 20h
 * 0000000140187869: or      rax, rdx
 * 000000014018786C: sub     rax, [rcx+5BC0h]
 * 0000000140187873: add     [rcx+5C78h], rax
 * 000000014018787A: add     [rcx+5BC0h], rax
 * 0000000140187881: mov     r8, rax
 * 0000000140187884: mov     rax, [rcx+8]
 * 0000000140187888: test    byte ptr [rax+2], 32h
 * 000000014018788C: jz      short loc_1401878A1
 * 000000014018788E: xor     edx, edx
 * 0000000140187890: call    KiBeginThreadAccountingPeriod
 * 0000000140187895: mov     rcx, gs:20h
 * 000000014018789E: inc     byte ptr [rcx+20h]
 * 00000001401878A1: mov     dl, [rcx+6]
 * 00000001401878A4: and     byte ptr [rcx+6], 0
 * 00000001401878A8: cmp     byte ptr [rcx+7], 0
 * 00000001401878AC: jnz     short loc_1401878D7
 * 00000001401878AE: test    dl, dl
 * 00000001401878B0: jz      short loc_1401878D7
 * 00000001401878B2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401878B6: jnb     short loc_1401878C3
 * 00000001401878B8: and     byte ptr [rcx+20h], 0
 * 00000001401878BC: call    KiDpcInterruptBypass
 * 00000001401878C1: jmp     short loc_1401878DA
 * 00000001401878C3: mov     ecx, 2
 * 00000001401878C8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401878CE: mov     rcx, gs:20h
 * 00000001401878D7: dec     byte ptr [rcx+20h]
 * 00000001401878DA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401878DE: mov     cr8, rcx
 * 00000001401878E2: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401878E9: cli
 * 00000001401878EA: test    [rbp+0E8h+arg_0], 1
 * 00000001401878F1: jz      loc_140187A07
 * 00000001401878F7: mov     rcx, gs:188h
 * 0000000140187900: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140187907: jz      short loc_140187922
 * 0000000140187909: mov     ecx, 1
 * 000000014018790E: mov     cr8, rcx
 * 0000000140187912: sti
 * 0000000140187913: call    KiInitiateUserApc
 * 0000000140187918: cli
 * 0000000140187919: mov     ecx, 0
 * 000000014018791E: mov     cr8, rcx
 * 0000000140187922: mov     rcx, gs:188h
 * 000000014018792B: test    dword ptr [rcx], 8000000h
 * 0000000140187931: jz      short loc_140187938
 * 0000000140187933: call    KiRestoreSetContextState
 * 0000000140187938: mov     rcx, gs:188h
 * 0000000140187941: test    dword ptr [rcx], 40010000h
 * 0000000140187947: jz      short loc_14018795D
 * 0000000140187949: test    byte ptr [rcx+2], 1
 * 000000014018794D: jz      short loc_14018795D
 * 000000014018794F: call    KiCopyCounters
 * 0000000140187954: mov     rcx, gs:188h
 * 000000014018795D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187961: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187969: jz      short loc_140187970
 * 000000014018796B: call    KiRestoreDebugRegisterState
 * 0000000140187970: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187974: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187978: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018797C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187980: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187984: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187988: mov     r11, [rbp+0E8h+var_108]
 * 000000014018798C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187990: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187994: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187998: movzx   eax, byte ptr gs:27Dh
 * 00000001401879A1: cmp     gs:27Ah, al
 * 00000001401879A9: jz      short loc_1401879BC
 * 00000001401879AB: mov     gs:27Ah, al
 * 00000001401879B3: mov     ecx, 48h ; 'H'
 * 00000001401879B8: xor     edx, edx
 * 00000001401879BA: wrmsr
 * 00000001401879BC: btr     word ptr gs:278h, 2
 * 00000001401879C7: jnb     short loc_1401879D7
 * 00000001401879C9: mov     eax, 1
 * 00000001401879CE: xor     edx, edx
 * 00000001401879D0: mov     ecx, 49h ; 'I'
 * 00000001401879D5: wrmsr
 * 00000001401879D7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401879DB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401879DF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401879E3: mov     rsp, rbp
 * 00000001401879E6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401879ED: add     rsp, 0E8h
 * 00000001401879F4: test    cs:KiKvaShadow, 1
 * 00000001401879FB: jz      short loc_140187A02
 * 00000001401879FD: jmp     KiKernelExit
 * 0000000140187A02: swapgs
 * 0000000140187A05: iretq
 * 0000000140187A07: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187A0B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187A0F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187A13: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187A17: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187A1B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187A1F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187A23: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187A27: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187A2B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187A2F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187A33: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187A37: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187A3B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187A3F: mov     rsp, rbp
 * 0000000140187A42: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187A49: add     rsp, 0E8h
 * 0000000140187A50: iretq
 */
