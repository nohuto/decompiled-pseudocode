/*
 * XREFs of KiVmbusInterrupt1 @ 0x140186460
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140298000 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140186460
 * Reason: Hex-Rays returned no pseudocode for 0x140186460
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140186460: sub     rsp, 8
 * 0000000140186464: push    rbp
 * 0000000140186465: push    rsi
 * 0000000140186466: sub     rsp, 150h
 * 000000014018646D: lea     rbp, [rsp+80h]
 * 0000000140186475: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186479: mov     [rbp+0E8h+var_138], rax
 * 000000014018647D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186481: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186485: mov     [rbp+0E8h+var_120], r8
 * 0000000140186489: mov     [rbp+0E8h+var_118], r9
 * 000000014018648D: mov     [rbp+0E8h+var_110], r10
 * 0000000140186491: mov     [rbp+0E8h+var_108], r11
 * 0000000140186495: test    [rbp+0E8h+arg_0], 1
 * 000000014018649C: jnz     short loc_1401864CB
 * 000000014018649E: lfence
 * 00000001401864A1: test    byte ptr gs:278h, 1
 * 00000001401864AA: jnz     short loc_1401864B4
 * 00000001401864AC: lfence
 * 00000001401864AF: jmp     loc_14018669E
 * 00000001401864B4: movzx   eax, byte ptr gs:27Ah
 * 00000001401864BD: mov     ecx, 48h ; 'H'
 * 00000001401864C2: xor     edx, edx
 * 00000001401864C4: wrmsr
 * 00000001401864C6: jmp     loc_14018669E
 * 00000001401864CB: test    cs:KiKvaShadow, 1
 * 00000001401864D2: jnz     short loc_1401864D7
 * 00000001401864D4: swapgs
 * 00000001401864D7: lfence
 * 00000001401864DA: mov     r10, gs:188h
 * 00000001401864E3: mov     rcx, gs:188h
 * 00000001401864EC: mov     rcx, [rcx+220h]
 * 00000001401864F3: mov     rcx, [rcx+838h]
 * 00000001401864FA: mov     gs:270h, rcx
 * 0000000140186503: movzx   eax, byte ptr gs:27Bh
 * 000000014018650C: cmp     gs:27Ah, al
 * 0000000140186514: jz      short loc_140186527
 * 0000000140186516: mov     gs:27Ah, al
 * 000000014018651E: mov     ecx, 48h ; 'H'
 * 0000000140186523: xor     edx, edx
 * 0000000140186525: wrmsr
 * 0000000140186527: movzx   edx, byte ptr gs:278h
 * 0000000140186530: test    edx, 8
 * 0000000140186536: jz      short loc_14018654B
 * 0000000140186538: mov     eax, 1
 * 000000014018653D: xor     edx, edx
 * 000000014018653F: mov     ecx, 49h ; 'I'
 * 0000000140186544: wrmsr
 * 0000000140186546: jmp     loc_140186689
 * 000000014018654B: test    edx, 2
 * 0000000140186551: jz      loc_140186686
 * 0000000140186557: test    byte ptr gs:279h, 4
 * 0000000140186560: jnz     loc_140186686
 * 0000000140186566: call    loc_140186679
 * 000000014018656B: add     rsp, 8
 * 000000014018656F: call    loc_140186682
 * 0000000140186574: add     rsp, 8
 * 0000000140186578: call    loc_14018656B
 * 000000014018657D: add     rsp, 8
 * 0000000140186581: call    loc_140186574
 * 0000000140186586: add     rsp, 8
 * 000000014018658A: call    loc_14018657D
 * 000000014018658F: add     rsp, 8
 * 0000000140186593: call    loc_140186586
 * 0000000140186598: add     rsp, 8
 * 000000014018659C: call    loc_14018658F
 * 00000001401865A1: add     rsp, 8
 * 00000001401865A5: call    loc_140186598
 * 00000001401865AA: add     rsp, 8
 * 00000001401865AE: call    loc_1401865A1
 * 00000001401865B3: add     rsp, 8
 * 00000001401865B7: call    loc_1401865AA
 * 00000001401865BC: add     rsp, 8
 * 00000001401865C0: call    loc_1401865B3
 * 00000001401865C5: add     rsp, 8
 * 00000001401865C9: call    loc_1401865BC
 * 00000001401865CE: add     rsp, 8
 * 00000001401865D2: call    loc_1401865C5
 * 00000001401865D7: add     rsp, 8
 * 00000001401865DB: call    loc_1401865CE
 * 00000001401865E0: add     rsp, 8
 * 00000001401865E4: call    loc_1401865D7
 * 00000001401865E9: add     rsp, 8
 * 00000001401865ED: call    loc_1401865E0
 * 00000001401865F2: add     rsp, 8
 * 00000001401865F6: call    loc_1401865E9
 * 00000001401865FB: add     rsp, 8
 * 00000001401865FF: call    loc_1401865F2
 * 0000000140186604: add     rsp, 8
 * 0000000140186608: call    loc_1401865FB
 * 000000014018660D: add     rsp, 8
 * 0000000140186611: call    loc_140186604
 * 0000000140186616: add     rsp, 8
 * 000000014018661A: call    loc_14018660D
 * 000000014018661F: add     rsp, 8
 * 0000000140186623: call    loc_140186616
 * 0000000140186628: add     rsp, 8
 * 000000014018662C: call    loc_14018661F
 * 0000000140186631: add     rsp, 8
 * 0000000140186635: call    loc_140186628
 * 000000014018663A: add     rsp, 8
 * 000000014018663E: call    loc_140186631
 * 0000000140186643: add     rsp, 8
 * 0000000140186647: call    loc_14018663A
 * 000000014018664C: add     rsp, 8
 * 0000000140186650: call    loc_140186643
 * 0000000140186655: add     rsp, 8
 * 0000000140186659: call    loc_14018664C
 * 000000014018665E: add     rsp, 8
 * 0000000140186662: call    loc_140186655
 * 0000000140186667: add     rsp, 8
 * 000000014018666B: call    loc_14018665E
 * 0000000140186670: add     rsp, 8
 * 0000000140186674: call    loc_140186667
 * 0000000140186679: add     rsp, 8
 * 000000014018667D: call    loc_140186670
 * 0000000140186682: add     rsp, 8
 * 0000000140186686: lfence
 * 0000000140186689: test    byte ptr [r10+3], 3
 * 000000014018668E: mov     [rbp+0E8h+var_68], 0
 * 0000000140186697: jz      short loc_14018669E
 * 0000000140186699: call    KiSaveDebugRegisterState
 * 000000014018669E: cld
 * 000000014018669F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401866A3: ldmxcsr dword ptr gs:180h
 * 00000001401866AC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401866B0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401866B4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401866B8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401866BC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401866C0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401866C4: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401866CD: jz      short loc_1401866D4
 * 00000001401866CF: call    KeWakeProcessor
 * 00000001401866D4: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401866DB: cmp     rax, [rbp+0E8h]
 * 00000001401866E2: jnb     short loc_1401866FD
 * 00000001401866E4: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401866EB: cmp     rax, [rbp+0E8h]
 * 00000001401866F2: jb      short loc_1401866FD
 * 00000001401866F4: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401866F8: call    KiCheckForSListAddress
 * 00000001401866FD: xor     esi, esi
 * 00000001401866FF: inc     dword ptr gs:5D00h
 * 0000000140186707: mov     ecx, 3
 * 000000014018670C: mov     rax, cr8
 * 0000000140186710: mov     cr8, rcx
 * 0000000140186714: mov     [rbp+0E8h+var_13F], al
 * 0000000140186717: mov     [rbp+0E8h+var_148], 0
 * 000000014018671E: mov     rcx, gs:20h
 * 0000000140186727: inc     byte ptr [rcx+20h]
 * 000000014018672A: cmp     byte ptr [rcx+20h], 1
 * 000000014018672E: jnz     loc_1401867C4
 * 0000000140186734: rdtsc
 * 0000000140186736: shl     rdx, 20h
 * 000000014018673A: or      rax, rdx
 * 000000014018673D: mov     edx, [rcx+62E0h]
 * 0000000140186743: mov     r11d, edx
 * 0000000140186746: and     edx, 7FFh
 * 000000014018674C: shr     edx, 5
 * 000000014018674F: lea     r10, [rcx+rdx*4+62E4h]
 * 0000000140186757: mov     edx, [r10]
 * 000000014018675A: ror     edx, 5
 * 000000014018675D: xor     edx, eax
 * 000000014018675F: mov     [r10], edx
 * 0000000140186762: add     r11d, 1
 * 0000000140186766: mov     [rcx+62E0h], r11d
 * 000000014018676D: and     r11d, 3FFh
 * 0000000140186774: jnz     short loc_14018677D
 * 0000000140186776: mov     [rbp+0E8h+var_148], 1
 * 000000014018677D: mov     r8, [rcx+8]
 * 0000000140186781: sub     rax, [rcx+5BC0h]
 * 0000000140186788: add     [r8+48h], rax
 * 000000014018678C: mov     edx, [r8+50h]
 * 0000000140186790: add     [rcx+5BC0h], rax
 * 0000000140186797: add     rdx, rax
 * 000000014018679A: mov     ecx, edx
 * 000000014018679C: shr     rdx, 20h
 * 00000001401867A0: jz      short loc_1401867A5
 * 00000001401867A2: or      ecx, 0FFFFFFFFh
 * 00000001401867A5: mov     [r8+50h], ecx
 * 00000001401867A9: test    byte ptr [r8+2], 3Eh
 * 00000001401867AE: jz      short loc_1401867C4
 * 00000001401867B0: mov     rdx, r8
 * 00000001401867B3: mov     r8, rax
 * 00000001401867B6: mov     rcx, gs:20h
 * 00000001401867BF: call    KiEndThreadAccountingPeriod
 * 00000001401867C4: sti
 * 00000001401867C5: cmp     [rbp+0E8h+var_148], 0
 * 00000001401867C9: jz      short loc_1401867D9
 * 00000001401867CB: mov     rcx, gs:20h
 * 00000001401867D4: call    KiEntropyQueueDpc
 * 00000001401867D9: mov     ecx, 2
 * 00000001401867DE: call    HvlRouteInterrupt
 * 00000001401867E3: cli
 * 00000001401867E4: mov     rcx, gs:20h
 * 00000001401867ED: cmp     byte ptr [rcx+20h], 1
 * 00000001401867F1: ja      short loc_140186867
 * 00000001401867F3: rdtsc
 * 00000001401867F5: shl     rdx, 20h
 * 00000001401867F9: or      rax, rdx
 * 00000001401867FC: sub     rax, [rcx+5BC0h]
 * 0000000140186803: add     [rcx+5C38h], rax
 * 000000014018680A: add     [rcx+5BC0h], rax
 * 0000000140186811: mov     r8, rax
 * 0000000140186814: mov     rax, [rcx+8]
 * 0000000140186818: test    byte ptr [rax+2], 32h
 * 000000014018681C: jz      short loc_140186831
 * 000000014018681E: xor     edx, edx
 * 0000000140186820: call    KiBeginThreadAccountingPeriod
 * 0000000140186825: mov     rcx, gs:20h
 * 000000014018682E: inc     byte ptr [rcx+20h]
 * 0000000140186831: mov     dl, [rcx+6]
 * 0000000140186834: and     byte ptr [rcx+6], 0
 * 0000000140186838: cmp     byte ptr [rcx+7], 0
 * 000000014018683C: jnz     short loc_140186867
 * 000000014018683E: test    dl, dl
 * 0000000140186840: jz      short loc_140186867
 * 0000000140186842: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140186846: jnb     short loc_140186853
 * 0000000140186848: and     byte ptr [rcx+20h], 0
 * 000000014018684C: call    KiDpcInterruptBypass
 * 0000000140186851: jmp     short loc_14018686A
 * 0000000140186853: mov     ecx, 2
 * 0000000140186858: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018685E: mov     rcx, gs:20h
 * 0000000140186867: dec     byte ptr [rcx+20h]
 * 000000014018686A: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018686E: mov     cr8, rcx
 * 0000000140186872: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140186879: cli
 * 000000014018687A: test    [rbp+0E8h+arg_0], 1
 * 0000000140186881: jz      loc_140186997
 * 0000000140186887: mov     rcx, gs:188h
 * 0000000140186890: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140186897: jz      short loc_1401868B2
 * 0000000140186899: mov     ecx, 1
 * 000000014018689E: mov     cr8, rcx
 * 00000001401868A2: sti
 * 00000001401868A3: call    KiInitiateUserApc
 * 00000001401868A8: cli
 * 00000001401868A9: mov     ecx, 0
 * 00000001401868AE: mov     cr8, rcx
 * 00000001401868B2: mov     rcx, gs:188h
 * 00000001401868BB: test    dword ptr [rcx], 8000000h
 * 00000001401868C1: jz      short loc_1401868C8
 * 00000001401868C3: call    KiRestoreSetContextState
 * 00000001401868C8: mov     rcx, gs:188h
 * 00000001401868D1: test    dword ptr [rcx], 40010000h
 * 00000001401868D7: jz      short loc_1401868ED
 * 00000001401868D9: test    byte ptr [rcx+2], 1
 * 00000001401868DD: jz      short loc_1401868ED
 * 00000001401868DF: call    KiCopyCounters
 * 00000001401868E4: mov     rcx, gs:188h
 * 00000001401868ED: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401868F1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401868F9: jz      short loc_140186900
 * 00000001401868FB: call    KiRestoreDebugRegisterState
 * 0000000140186900: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186904: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186908: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018690C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186910: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186914: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186918: mov     r11, [rbp+0E8h+var_108]
 * 000000014018691C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186920: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186924: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186928: movzx   eax, byte ptr gs:27Dh
 * 0000000140186931: cmp     gs:27Ah, al
 * 0000000140186939: jz      short loc_14018694C
 * 000000014018693B: mov     gs:27Ah, al
 * 0000000140186943: mov     ecx, 48h ; 'H'
 * 0000000140186948: xor     edx, edx
 * 000000014018694A: wrmsr
 * 000000014018694C: btr     word ptr gs:278h, 2
 * 0000000140186957: jnb     short loc_140186967
 * 0000000140186959: mov     eax, 1
 * 000000014018695E: xor     edx, edx
 * 0000000140186960: mov     ecx, 49h ; 'I'
 * 0000000140186965: wrmsr
 * 0000000140186967: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018696B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018696F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186973: mov     rsp, rbp
 * 0000000140186976: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018697D: add     rsp, 0E8h
 * 0000000140186984: test    cs:KiKvaShadow, 1
 * 000000014018698B: jz      short loc_140186992
 * 000000014018698D: jmp     KiKernelExit
 * 0000000140186992: swapgs
 * 0000000140186995: iretq
 * 0000000140186997: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018699B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018699F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401869A3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401869A7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401869AB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401869AF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401869B3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401869B7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401869BB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401869BF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401869C3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401869C7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401869CB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401869CF: mov     rsp, rbp
 * 00000001401869D2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401869D9: add     rsp, 0E8h
 * 00000001401869E0: iretq
 */
