/*
 * XREFs of KxIsrLinkage @ 0x140184490
 * Callers:
 *     KxIsrLinkageShadow @ 0x14026D9C0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     _guard_check_icall @ 0x140189D70 (_guard_check_icall.c)
 *     KiBugCheckDispatch @ 0x140191B80 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140255510 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140184490
 * Reason: Hex-Rays returned no pseudocode for 0x140184490
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140184490: push    rbp
 * 0000000140184491: push    rsi
 * 0000000140184492: sub     rsp, 150h
 * 0000000140184499: lea     rbp, [rsp+80h]
 * 00000001401844A1: mov     [rbp+0D8h+var_12D], 0
 * 00000001401844A5: mov     [rbp+0D8h+var_128], rax
 * 00000001401844A9: mov     [rbp+0D8h+var_120], rcx
 * 00000001401844AD: mov     [rbp+0D8h+var_118], rdx
 * 00000001401844B1: mov     [rbp+0D8h+var_110], r8
 * 00000001401844B5: mov     [rbp+0D8h+var_108], r9
 * 00000001401844B9: mov     [rbp+0D8h+var_100], r10
 * 00000001401844BD: mov     [rbp+0D8h+var_F8], r11
 * 00000001401844C1: test    [rbp+0D8h+arg_8], 1
 * 00000001401844C8: jnz     short loc_1401844F7
 * 00000001401844CA: lfence
 * 00000001401844CD: test    byte ptr gs:278h, 1
 * 00000001401844D6: jnz     short loc_1401844E0
 * 00000001401844D8: lfence
 * 00000001401844DB: jmp     loc_1401846CA
 * 00000001401844E0: movzx   eax, byte ptr gs:27Ah
 * 00000001401844E9: mov     ecx, 48h ; 'H'
 * 00000001401844EE: xor     edx, edx
 * 00000001401844F0: wrmsr
 * 00000001401844F2: jmp     loc_1401846CA
 * 00000001401844F7: test    cs:KiKvaShadow, 1
 * 00000001401844FE: jnz     short loc_140184503
 * 0000000140184500: swapgs
 * 0000000140184503: lfence
 * 0000000140184506: mov     r10, gs:188h
 * 000000014018450F: mov     rcx, gs:188h
 * 0000000140184518: mov     rcx, [rcx+220h]
 * 000000014018451F: mov     rcx, [rcx+818h]
 * 0000000140184526: mov     gs:270h, rcx
 * 000000014018452F: movzx   eax, byte ptr gs:27Bh
 * 0000000140184538: cmp     gs:27Ah, al
 * 0000000140184540: jz      short loc_140184553
 * 0000000140184542: mov     gs:27Ah, al
 * 000000014018454A: mov     ecx, 48h ; 'H'
 * 000000014018454F: xor     edx, edx
 * 0000000140184551: wrmsr
 * 0000000140184553: movzx   edx, byte ptr gs:278h
 * 000000014018455C: test    edx, 8
 * 0000000140184562: jz      short loc_140184577
 * 0000000140184564: mov     eax, 1
 * 0000000140184569: xor     edx, edx
 * 000000014018456B: mov     ecx, 49h ; 'I'
 * 0000000140184570: wrmsr
 * 0000000140184572: jmp     loc_1401846B5
 * 0000000140184577: test    edx, 2
 * 000000014018457D: jz      loc_1401846B2
 * 0000000140184583: test    byte ptr gs:279h, 4
 * 000000014018458C: jnz     loc_1401846B2
 * 0000000140184592: call    loc_1401846A5
 * 0000000140184597: add     rsp, 8
 * 000000014018459B: call    loc_1401846AE
 * 00000001401845A0: add     rsp, 8
 * 00000001401845A4: call    loc_140184597
 * 00000001401845A9: add     rsp, 8
 * 00000001401845AD: call    loc_1401845A0
 * 00000001401845B2: add     rsp, 8
 * 00000001401845B6: call    loc_1401845A9
 * 00000001401845BB: add     rsp, 8
 * 00000001401845BF: call    loc_1401845B2
 * 00000001401845C4: add     rsp, 8
 * 00000001401845C8: call    loc_1401845BB
 * 00000001401845CD: add     rsp, 8
 * 00000001401845D1: call    loc_1401845C4
 * 00000001401845D6: add     rsp, 8
 * 00000001401845DA: call    loc_1401845CD
 * 00000001401845DF: add     rsp, 8
 * 00000001401845E3: call    loc_1401845D6
 * 00000001401845E8: add     rsp, 8
 * 00000001401845EC: call    loc_1401845DF
 * 00000001401845F1: add     rsp, 8
 * 00000001401845F5: call    loc_1401845E8
 * 00000001401845FA: add     rsp, 8
 * 00000001401845FE: call    loc_1401845F1
 * 0000000140184603: add     rsp, 8
 * 0000000140184607: call    loc_1401845FA
 * 000000014018460C: add     rsp, 8
 * 0000000140184610: call    loc_140184603
 * 0000000140184615: add     rsp, 8
 * 0000000140184619: call    loc_14018460C
 * 000000014018461E: add     rsp, 8
 * 0000000140184622: call    loc_140184615
 * 0000000140184627: add     rsp, 8
 * 000000014018462B: call    loc_14018461E
 * 0000000140184630: add     rsp, 8
 * 0000000140184634: call    loc_140184627
 * 0000000140184639: add     rsp, 8
 * 000000014018463D: call    loc_140184630
 * 0000000140184642: add     rsp, 8
 * 0000000140184646: call    loc_140184639
 * 000000014018464B: add     rsp, 8
 * 000000014018464F: call    loc_140184642
 * 0000000140184654: add     rsp, 8
 * 0000000140184658: call    loc_14018464B
 * 000000014018465D: add     rsp, 8
 * 0000000140184661: call    loc_140184654
 * 0000000140184666: add     rsp, 8
 * 000000014018466A: call    loc_14018465D
 * 000000014018466F: add     rsp, 8
 * 0000000140184673: call    loc_140184666
 * 0000000140184678: add     rsp, 8
 * 000000014018467C: call    loc_14018466F
 * 0000000140184681: add     rsp, 8
 * 0000000140184685: call    loc_140184678
 * 000000014018468A: add     rsp, 8
 * 000000014018468E: call    loc_140184681
 * 0000000140184693: add     rsp, 8
 * 0000000140184697: call    loc_14018468A
 * 000000014018469C: add     rsp, 8
 * 00000001401846A0: call    loc_140184693
 * 00000001401846A5: add     rsp, 8
 * 00000001401846A9: call    loc_14018469C
 * 00000001401846AE: add     rsp, 8
 * 00000001401846B2: lfence
 * 00000001401846B5: test    byte ptr [r10+3], 3
 * 00000001401846BA: mov     [rbp+0D8h+var_58], 0
 * 00000001401846C3: jz      short loc_1401846CA
 * 00000001401846C5: call    KiSaveDebugRegisterState
 * 00000001401846CA: cld
 * 00000001401846CB: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401846CF: ldmxcsr dword ptr gs:180h
 * 00000001401846D8: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401846DC: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401846E0: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401846E4: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401846E8: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401846EC: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401846F0: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401846F9: jz      short loc_140184700
 * 00000001401846FB: call    KeWakeProcessor
 * 0000000140184700: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140184707: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014018470E: jnb     short loc_140184729
 * 0000000140184710: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140184717: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014018471E: jb      short loc_140184729
 * 0000000140184720: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140184724: call    KiCheckForSListAddress
 * 0000000140184729: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140184730: mov     rsi, gs:20h
 * 0000000140184739: mov     rsi, [rsi+rax*8+2E80h]
 * 0000000140184741: inc     dword ptr gs:5D00h
 * 0000000140184749: test    rsi, rsi
 * 000000014018474C: jz      short loc_140184759
 * 000000014018474E: mov     rcx, [rsi+50h]; Target
 * 0000000140184752: call    _guard_check_icall
 * 0000000140184757: jmp     rcx
 * 0000000140184759: mov     ecx, eax
 * 000000014018475B: shr     ecx, 4
 * 000000014018475E: mov     rax, cr8
 * 0000000140184762: mov     cr8, rcx
 * 0000000140184766: mov     [rbp+0D8h+var_12F], al
 * 0000000140184769: mov     rcx, gs:20h
 * 0000000140184772: inc     byte ptr [rcx+20h]
 * 0000000140184775: cmp     byte ptr [rcx+20h], 1
 * 0000000140184779: jnz     short loc_1401847CB
 * 000000014018477B: rdtsc
 * 000000014018477D: shl     rdx, 20h
 * 0000000140184781: or      rax, rdx
 * 0000000140184784: mov     r8, [rcx+8]
 * 0000000140184788: sub     rax, [rcx+5BC0h]
 * 000000014018478F: add     [r8+48h], rax
 * 0000000140184793: mov     edx, [r8+50h]
 * 0000000140184797: add     [rcx+5BC0h], rax
 * 000000014018479E: add     rdx, rax
 * 00000001401847A1: mov     ecx, edx
 * 00000001401847A3: shr     rdx, 20h
 * 00000001401847A7: jz      short loc_1401847AC
 * 00000001401847A9: or      ecx, 0FFFFFFFFh
 * 00000001401847AC: mov     [r8+50h], ecx
 * 00000001401847B0: test    byte ptr [r8+2], 3Eh
 * 00000001401847B5: jz      short loc_1401847CB
 * 00000001401847B7: mov     rdx, r8
 * 00000001401847BA: mov     r8, rax
 * 00000001401847BD: mov     rcx, gs:20h
 * 00000001401847C6: call    KiEndThreadAccountingPeriod
 * 00000001401847CB: sti
 * 00000001401847CC: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401847D6: jz      short loc_1401847E4
 * 00000001401847D8: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401847DF: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401847E4: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401847EB: jz      short loc_14018480C
 * 00000001401847ED: and     [rbp+0D8h+var_138], 0
 * 00000001401847F2: xor     r9, r9
 * 00000001401847F5: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401847FD: mov     edx, 1
 * 0000000140184802: mov     ecx, 12h
 * 0000000140184807: call    KiBugCheckDispatch
 * 000000014018480C: cli
 * 000000014018480D: mov     rcx, rsi
 * 0000000140184810: call    HalPerformEndOfInterrupt_0
 * 0000000140184815: mov     rcx, gs:20h
 * 000000014018481E: cmp     byte ptr [rcx+20h], 1
 * 0000000140184822: ja      short loc_140184898
 * 0000000140184824: rdtsc
 * 0000000140184826: shl     rdx, 20h
 * 000000014018482A: or      rax, rdx
 * 000000014018482D: sub     rax, [rcx+5BC0h]
 * 0000000140184834: add     [rcx+5C78h], rax
 * 000000014018483B: add     [rcx+5BC0h], rax
 * 0000000140184842: mov     r8, rax
 * 0000000140184845: mov     rax, [rcx+8]
 * 0000000140184849: test    byte ptr [rax+2], 32h
 * 000000014018484D: jz      short loc_140184862
 * 000000014018484F: xor     edx, edx
 * 0000000140184851: call    KiBeginThreadAccountingPeriod
 * 0000000140184856: mov     rcx, gs:20h
 * 000000014018485F: inc     byte ptr [rcx+20h]
 * 0000000140184862: mov     dl, [rcx+6]
 * 0000000140184865: and     byte ptr [rcx+6], 0
 * 0000000140184869: cmp     byte ptr [rcx+7], 0
 * 000000014018486D: jnz     short loc_140184898
 * 000000014018486F: test    dl, dl
 * 0000000140184871: jz      short loc_140184898
 * 0000000140184873: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140184877: jnb     short loc_140184884
 * 0000000140184879: and     byte ptr [rcx+20h], 0
 * 000000014018487D: call    KiDpcInterruptBypass
 * 0000000140184882: jmp     short loc_14018489B
 * 0000000140184884: mov     ecx, 2
 * 0000000140184889: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018488F: mov     rcx, gs:20h
 * 0000000140184898: dec     byte ptr [rcx+20h]
 * 000000014018489B: movzx   ecx, [rbp+0D8h+var_12F]
 * 000000014018489F: mov     cr8, rcx
 * 00000001401848A3: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401848AA: cli
 * 00000001401848AB: test    [rbp+0D8h+arg_8], 1
 * 00000001401848B2: jz      loc_1401849C8
 * 00000001401848B8: mov     rcx, gs:188h
 * 00000001401848C1: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401848C8: jz      short loc_1401848E3
 * 00000001401848CA: mov     ecx, 1
 * 00000001401848CF: mov     cr8, rcx
 * 00000001401848D3: sti
 * 00000001401848D4: call    KiInitiateUserApc
 * 00000001401848D9: cli
 * 00000001401848DA: mov     ecx, 0
 * 00000001401848DF: mov     cr8, rcx
 * 00000001401848E3: mov     rcx, gs:188h
 * 00000001401848EC: test    dword ptr [rcx], 8000000h
 * 00000001401848F2: jz      short loc_1401848F9
 * 00000001401848F4: call    KiRestoreSetContextState
 * 00000001401848F9: mov     rcx, gs:188h
 * 0000000140184902: test    dword ptr [rcx], 40010000h
 * 0000000140184908: jz      short loc_14018491E
 * 000000014018490A: test    byte ptr [rcx+2], 1
 * 000000014018490E: jz      short loc_14018491E
 * 0000000140184910: call    KiCopyCounters
 * 0000000140184915: mov     rcx, gs:188h
 * 000000014018491E: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140184922: cmp     [rbp+0D8h+var_58], 0
 * 000000014018492A: jz      short loc_140184931
 * 000000014018492C: call    KiRestoreDebugRegisterState
 * 0000000140184931: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140184935: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140184939: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018493D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140184941: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140184945: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140184949: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018494D: mov     r10, [rbp+0D8h+var_100]
 * 0000000140184951: mov     r9, [rbp+0D8h+var_108]
 * 0000000140184955: mov     r8, [rbp+0D8h+var_110]
 * 0000000140184959: movzx   eax, byte ptr gs:27Dh
 * 0000000140184962: cmp     gs:27Ah, al
 * 000000014018496A: jz      short loc_14018497D
 * 000000014018496C: mov     gs:27Ah, al
 * 0000000140184974: mov     ecx, 48h ; 'H'
 * 0000000140184979: xor     edx, edx
 * 000000014018497B: wrmsr
 * 000000014018497D: btr     word ptr gs:278h, 2
 * 0000000140184988: jnb     short loc_140184998
 * 000000014018498A: mov     eax, 1
 * 000000014018498F: xor     edx, edx
 * 0000000140184991: mov     ecx, 49h ; 'I'
 * 0000000140184996: wrmsr
 * 0000000140184998: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018499C: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401849A0: mov     rax, [rbp+0D8h+var_128]
 * 00000001401849A4: mov     rsp, rbp
 * 00000001401849A7: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401849AE: add     rsp, 0E8h
 * 00000001401849B5: test    cs:KiKvaShadow, 1
 * 00000001401849BC: jz      short loc_1401849C3
 * 00000001401849BE: jmp     KiKernelExit
 * 00000001401849C3: swapgs
 * 00000001401849C6: iretq
 * 00000001401849C8: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401849CC: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401849D0: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401849D4: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401849D8: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401849DC: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401849E0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401849E4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401849E8: mov     r10, [rbp+0D8h+var_100]
 * 00000001401849EC: mov     r9, [rbp+0D8h+var_108]
 * 00000001401849F0: mov     r8, [rbp+0D8h+var_110]
 * 00000001401849F4: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401849F8: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401849FC: mov     rax, [rbp+0D8h+var_128]
 * 0000000140184A00: mov     rsp, rbp
 * 0000000140184A03: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140184A0A: add     rsp, 0E8h
 * 0000000140184A11: iretq
 */
