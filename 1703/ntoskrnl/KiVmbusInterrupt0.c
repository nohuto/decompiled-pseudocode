/*
 * XREFs of KiVmbusInterrupt0 @ 0x140186420
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x14026CF00 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E4EA0 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140186420
 * Reason: Hex-Rays returned no pseudocode for 0x140186420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140186420: sub     rsp, 8
 * 0000000140186424: push    rbp
 * 0000000140186425: push    rsi
 * 0000000140186426: sub     rsp, 150h
 * 000000014018642D: lea     rbp, [rsp+80h]
 * 0000000140186435: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186439: mov     [rbp+0E8h+var_138], rax
 * 000000014018643D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186441: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186445: mov     [rbp+0E8h+var_120], r8
 * 0000000140186449: mov     [rbp+0E8h+var_118], r9
 * 000000014018644D: mov     [rbp+0E8h+var_110], r10
 * 0000000140186451: mov     [rbp+0E8h+var_108], r11
 * 0000000140186455: test    [rbp+0E8h+arg_0], 1
 * 000000014018645C: jnz     short loc_14018648B
 * 000000014018645E: lfence
 * 0000000140186461: test    byte ptr gs:278h, 1
 * 000000014018646A: jnz     short loc_140186474
 * 000000014018646C: lfence
 * 000000014018646F: jmp     loc_14018665E
 * 0000000140186474: movzx   eax, byte ptr gs:27Ah
 * 000000014018647D: mov     ecx, 48h ; 'H'
 * 0000000140186482: xor     edx, edx
 * 0000000140186484: wrmsr
 * 0000000140186486: jmp     loc_14018665E
 * 000000014018648B: test    cs:KiKvaShadow, 1
 * 0000000140186492: jnz     short loc_140186497
 * 0000000140186494: swapgs
 * 0000000140186497: lfence
 * 000000014018649A: mov     r10, gs:188h
 * 00000001401864A3: mov     rcx, gs:188h
 * 00000001401864AC: mov     rcx, [rcx+220h]
 * 00000001401864B3: mov     rcx, [rcx+818h]
 * 00000001401864BA: mov     gs:270h, rcx
 * 00000001401864C3: movzx   eax, byte ptr gs:27Bh
 * 00000001401864CC: cmp     gs:27Ah, al
 * 00000001401864D4: jz      short loc_1401864E7
 * 00000001401864D6: mov     gs:27Ah, al
 * 00000001401864DE: mov     ecx, 48h ; 'H'
 * 00000001401864E3: xor     edx, edx
 * 00000001401864E5: wrmsr
 * 00000001401864E7: movzx   edx, byte ptr gs:278h
 * 00000001401864F0: test    edx, 8
 * 00000001401864F6: jz      short loc_14018650B
 * 00000001401864F8: mov     eax, 1
 * 00000001401864FD: xor     edx, edx
 * 00000001401864FF: mov     ecx, 49h ; 'I'
 * 0000000140186504: wrmsr
 * 0000000140186506: jmp     loc_140186649
 * 000000014018650B: test    edx, 2
 * 0000000140186511: jz      loc_140186646
 * 0000000140186517: test    byte ptr gs:279h, 4
 * 0000000140186520: jnz     loc_140186646
 * 0000000140186526: call    loc_140186639
 * 000000014018652B: add     rsp, 8
 * 000000014018652F: call    loc_140186642
 * 0000000140186534: add     rsp, 8
 * 0000000140186538: call    loc_14018652B
 * 000000014018653D: add     rsp, 8
 * 0000000140186541: call    loc_140186534
 * 0000000140186546: add     rsp, 8
 * 000000014018654A: call    loc_14018653D
 * 000000014018654F: add     rsp, 8
 * 0000000140186553: call    loc_140186546
 * 0000000140186558: add     rsp, 8
 * 000000014018655C: call    loc_14018654F
 * 0000000140186561: add     rsp, 8
 * 0000000140186565: call    loc_140186558
 * 000000014018656A: add     rsp, 8
 * 000000014018656E: call    loc_140186561
 * 0000000140186573: add     rsp, 8
 * 0000000140186577: call    loc_14018656A
 * 000000014018657C: add     rsp, 8
 * 0000000140186580: call    loc_140186573
 * 0000000140186585: add     rsp, 8
 * 0000000140186589: call    loc_14018657C
 * 000000014018658E: add     rsp, 8
 * 0000000140186592: call    loc_140186585
 * 0000000140186597: add     rsp, 8
 * 000000014018659B: call    loc_14018658E
 * 00000001401865A0: add     rsp, 8
 * 00000001401865A4: call    loc_140186597
 * 00000001401865A9: add     rsp, 8
 * 00000001401865AD: call    loc_1401865A0
 * 00000001401865B2: add     rsp, 8
 * 00000001401865B6: call    loc_1401865A9
 * 00000001401865BB: add     rsp, 8
 * 00000001401865BF: call    loc_1401865B2
 * 00000001401865C4: add     rsp, 8
 * 00000001401865C8: call    loc_1401865BB
 * 00000001401865CD: add     rsp, 8
 * 00000001401865D1: call    loc_1401865C4
 * 00000001401865D6: add     rsp, 8
 * 00000001401865DA: call    loc_1401865CD
 * 00000001401865DF: add     rsp, 8
 * 00000001401865E3: call    loc_1401865D6
 * 00000001401865E8: add     rsp, 8
 * 00000001401865EC: call    loc_1401865DF
 * 00000001401865F1: add     rsp, 8
 * 00000001401865F5: call    loc_1401865E8
 * 00000001401865FA: add     rsp, 8
 * 00000001401865FE: call    loc_1401865F1
 * 0000000140186603: add     rsp, 8
 * 0000000140186607: call    loc_1401865FA
 * 000000014018660C: add     rsp, 8
 * 0000000140186610: call    loc_140186603
 * 0000000140186615: add     rsp, 8
 * 0000000140186619: call    loc_14018660C
 * 000000014018661E: add     rsp, 8
 * 0000000140186622: call    loc_140186615
 * 0000000140186627: add     rsp, 8
 * 000000014018662B: call    loc_14018661E
 * 0000000140186630: add     rsp, 8
 * 0000000140186634: call    loc_140186627
 * 0000000140186639: add     rsp, 8
 * 000000014018663D: call    loc_140186630
 * 0000000140186642: add     rsp, 8
 * 0000000140186646: lfence
 * 0000000140186649: test    byte ptr [r10+3], 3
 * 000000014018664E: mov     [rbp+0E8h+var_68], 0
 * 0000000140186657: jz      short loc_14018665E
 * 0000000140186659: call    KiSaveDebugRegisterState
 * 000000014018665E: cld
 * 000000014018665F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186663: ldmxcsr dword ptr gs:180h
 * 000000014018666C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186670: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186674: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186678: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018667C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186680: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186684: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018668D: jz      short loc_140186694
 * 000000014018668F: call    KeWakeProcessor
 * 0000000140186694: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018669B: cmp     rax, [rbp+0E8h]
 * 00000001401866A2: jnb     short loc_1401866BD
 * 00000001401866A4: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401866AB: cmp     rax, [rbp+0E8h]
 * 00000001401866B2: jb      short loc_1401866BD
 * 00000001401866B4: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401866B8: call    KiCheckForSListAddress
 * 00000001401866BD: xor     esi, esi
 * 00000001401866BF: inc     dword ptr gs:5D00h
 * 00000001401866C7: mov     ecx, 3
 * 00000001401866CC: mov     rax, cr8
 * 00000001401866D0: mov     cr8, rcx
 * 00000001401866D4: mov     [rbp+0E8h+var_13F], al
 * 00000001401866D7: mov     [rbp+0E8h+var_148], 0
 * 00000001401866DE: mov     rcx, gs:20h
 * 00000001401866E7: inc     byte ptr [rcx+20h]
 * 00000001401866EA: cmp     byte ptr [rcx+20h], 1
 * 00000001401866EE: jnz     loc_140186784
 * 00000001401866F4: rdtsc
 * 00000001401866F6: shl     rdx, 20h
 * 00000001401866FA: or      rax, rdx
 * 00000001401866FD: mov     edx, [rcx+6420h]
 * 0000000140186703: mov     r11d, edx
 * 0000000140186706: and     edx, 7FFh
 * 000000014018670C: shr     edx, 5
 * 000000014018670F: lea     r10, [rcx+rdx*4+6424h]
 * 0000000140186717: mov     edx, [r10]
 * 000000014018671A: ror     edx, 5
 * 000000014018671D: xor     edx, eax
 * 000000014018671F: mov     [r10], edx
 * 0000000140186722: add     r11d, 1
 * 0000000140186726: mov     [rcx+6420h], r11d
 * 000000014018672D: and     r11d, 3FFh
 * 0000000140186734: jnz     short loc_14018673D
 * 0000000140186736: mov     [rbp+0E8h+var_148], 1
 * 000000014018673D: mov     r8, [rcx+8]
 * 0000000140186741: sub     rax, [rcx+5BC0h]
 * 0000000140186748: add     [r8+48h], rax
 * 000000014018674C: mov     edx, [r8+50h]
 * 0000000140186750: add     [rcx+5BC0h], rax
 * 0000000140186757: add     rdx, rax
 * 000000014018675A: mov     ecx, edx
 * 000000014018675C: shr     rdx, 20h
 * 0000000140186760: jz      short loc_140186765
 * 0000000140186762: or      ecx, 0FFFFFFFFh
 * 0000000140186765: mov     [r8+50h], ecx
 * 0000000140186769: test    byte ptr [r8+2], 3Eh
 * 000000014018676E: jz      short loc_140186784
 * 0000000140186770: mov     rdx, r8
 * 0000000140186773: mov     r8, rax
 * 0000000140186776: mov     rcx, gs:20h
 * 000000014018677F: call    KiEndThreadAccountingPeriod
 * 0000000140186784: sti
 * 0000000140186785: cmp     [rbp+0E8h+var_148], 0
 * 0000000140186789: jz      short loc_140186799
 * 000000014018678B: mov     rcx, gs:20h
 * 0000000140186794: call    KiEntropyQueueDpc
 * 0000000140186799: mov     ecx, 1
 * 000000014018679E: call    HvlRouteInterrupt
 * 00000001401867A3: cli
 * 00000001401867A4: mov     rcx, gs:20h
 * 00000001401867AD: cmp     byte ptr [rcx+20h], 1
 * 00000001401867B1: ja      short loc_140186827
 * 00000001401867B3: rdtsc
 * 00000001401867B5: shl     rdx, 20h
 * 00000001401867B9: or      rax, rdx
 * 00000001401867BC: sub     rax, [rcx+5BC0h]
 * 00000001401867C3: add     [rcx+5C78h], rax
 * 00000001401867CA: add     [rcx+5BC0h], rax
 * 00000001401867D1: mov     r8, rax
 * 00000001401867D4: mov     rax, [rcx+8]
 * 00000001401867D8: test    byte ptr [rax+2], 32h
 * 00000001401867DC: jz      short loc_1401867F1
 * 00000001401867DE: xor     edx, edx
 * 00000001401867E0: call    KiBeginThreadAccountingPeriod
 * 00000001401867E5: mov     rcx, gs:20h
 * 00000001401867EE: inc     byte ptr [rcx+20h]
 * 00000001401867F1: mov     dl, [rcx+6]
 * 00000001401867F4: and     byte ptr [rcx+6], 0
 * 00000001401867F8: cmp     byte ptr [rcx+7], 0
 * 00000001401867FC: jnz     short loc_140186827
 * 00000001401867FE: test    dl, dl
 * 0000000140186800: jz      short loc_140186827
 * 0000000140186802: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140186806: jnb     short loc_140186813
 * 0000000140186808: and     byte ptr [rcx+20h], 0
 * 000000014018680C: call    KiDpcInterruptBypass
 * 0000000140186811: jmp     short loc_14018682A
 * 0000000140186813: mov     ecx, 2
 * 0000000140186818: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018681E: mov     rcx, gs:20h
 * 0000000140186827: dec     byte ptr [rcx+20h]
 * 000000014018682A: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018682E: mov     cr8, rcx
 * 0000000140186832: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140186839: cli
 * 000000014018683A: test    [rbp+0E8h+arg_0], 1
 * 0000000140186841: jz      loc_140186957
 * 0000000140186847: mov     rcx, gs:188h
 * 0000000140186850: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140186857: jz      short loc_140186872
 * 0000000140186859: mov     ecx, 1
 * 000000014018685E: mov     cr8, rcx
 * 0000000140186862: sti
 * 0000000140186863: call    KiInitiateUserApc
 * 0000000140186868: cli
 * 0000000140186869: mov     ecx, 0
 * 000000014018686E: mov     cr8, rcx
 * 0000000140186872: mov     rcx, gs:188h
 * 000000014018687B: test    dword ptr [rcx], 8000000h
 * 0000000140186881: jz      short loc_140186888
 * 0000000140186883: call    KiRestoreSetContextState
 * 0000000140186888: mov     rcx, gs:188h
 * 0000000140186891: test    dword ptr [rcx], 40010000h
 * 0000000140186897: jz      short loc_1401868AD
 * 0000000140186899: test    byte ptr [rcx+2], 1
 * 000000014018689D: jz      short loc_1401868AD
 * 000000014018689F: call    KiCopyCounters
 * 00000001401868A4: mov     rcx, gs:188h
 * 00000001401868AD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401868B1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401868B9: jz      short loc_1401868C0
 * 00000001401868BB: call    KiRestoreDebugRegisterState
 * 00000001401868C0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401868C4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401868C8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401868CC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401868D0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401868D4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401868D8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401868DC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401868E0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401868E4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401868E8: movzx   eax, byte ptr gs:27Dh
 * 00000001401868F1: cmp     gs:27Ah, al
 * 00000001401868F9: jz      short loc_14018690C
 * 00000001401868FB: mov     gs:27Ah, al
 * 0000000140186903: mov     ecx, 48h ; 'H'
 * 0000000140186908: xor     edx, edx
 * 000000014018690A: wrmsr
 * 000000014018690C: btr     word ptr gs:278h, 2
 * 0000000140186917: jnb     short loc_140186927
 * 0000000140186919: mov     eax, 1
 * 000000014018691E: xor     edx, edx
 * 0000000140186920: mov     ecx, 49h ; 'I'
 * 0000000140186925: wrmsr
 * 0000000140186927: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018692B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018692F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186933: mov     rsp, rbp
 * 0000000140186936: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018693D: add     rsp, 0E8h
 * 0000000140186944: test    cs:KiKvaShadow, 1
 * 000000014018694B: jz      short loc_140186952
 * 000000014018694D: jmp     KiKernelExit
 * 0000000140186952: swapgs
 * 0000000140186955: iretq
 * 0000000140186957: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018695B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018695F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186963: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186967: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018696B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018696F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186973: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186977: mov     r10, [rbp+0E8h+var_110]
 * 000000014018697B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018697F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186983: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186987: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018698B: mov     rax, [rbp+0E8h+var_138]
 * 000000014018698F: mov     rsp, rbp
 * 0000000140186992: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186999: add     rsp, 0E8h
 * 00000001401869A0: iretq
 */
