/*
 * XREFs of KiSwInterrupt @ 0x1401AF5C0
 * Callers:
 *     KiSwInterruptShadow @ 0x1402CFC00 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x140193570 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401AF5C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401AF5C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AF5C0: sub     rsp, 8
 * 00000001401AF5C4: push    rbp
 * 00000001401AF5C5: push    rsi
 * 00000001401AF5C6: sub     rsp, 150h
 * 00000001401AF5CD: lea     rbp, [rsp+80h]
 * 00000001401AF5D5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401AF5D9: mov     [rbp+0E8h+var_138], rax
 * 00000001401AF5DD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401AF5E1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401AF5E5: mov     [rbp+0E8h+var_120], r8
 * 00000001401AF5E9: mov     [rbp+0E8h+var_118], r9
 * 00000001401AF5ED: mov     [rbp+0E8h+var_110], r10
 * 00000001401AF5F1: mov     [rbp+0E8h+var_108], r11
 * 00000001401AF5F5: test    [rbp+0E8h+arg_0], 1
 * 00000001401AF5FC: jnz     short loc_1401AF62B
 * 00000001401AF5FE: lfence
 * 00000001401AF601: test    byte ptr gs:278h, 1
 * 00000001401AF60A: jnz     short loc_1401AF614
 * 00000001401AF60C: lfence
 * 00000001401AF60F: jmp     loc_1401AF7FE
 * 00000001401AF614: movzx   eax, byte ptr gs:27Ah
 * 00000001401AF61D: mov     ecx, 48h ; 'H'
 * 00000001401AF622: xor     edx, edx
 * 00000001401AF624: wrmsr
 * 00000001401AF626: jmp     loc_1401AF7FE
 * 00000001401AF62B: test    cs:KiKvaShadow, 1
 * 00000001401AF632: jnz     short loc_1401AF637
 * 00000001401AF634: swapgs
 * 00000001401AF637: lfence
 * 00000001401AF63A: mov     r10, gs:188h
 * 00000001401AF643: mov     rcx, gs:188h
 * 00000001401AF64C: mov     rcx, [rcx+220h]
 * 00000001401AF653: mov     rcx, [rcx+838h]
 * 00000001401AF65A: mov     gs:270h, rcx
 * 00000001401AF663: movzx   eax, byte ptr gs:27Bh
 * 00000001401AF66C: cmp     gs:27Ah, al
 * 00000001401AF674: jz      short loc_1401AF687
 * 00000001401AF676: mov     gs:27Ah, al
 * 00000001401AF67E: mov     ecx, 48h ; 'H'
 * 00000001401AF683: xor     edx, edx
 * 00000001401AF685: wrmsr
 * 00000001401AF687: movzx   edx, byte ptr gs:278h
 * 00000001401AF690: test    edx, 8
 * 00000001401AF696: jz      short loc_1401AF6AB
 * 00000001401AF698: mov     eax, 1
 * 00000001401AF69D: xor     edx, edx
 * 00000001401AF69F: mov     ecx, 49h ; 'I'
 * 00000001401AF6A4: wrmsr
 * 00000001401AF6A6: jmp     loc_1401AF7E9
 * 00000001401AF6AB: test    edx, 2
 * 00000001401AF6B1: jz      loc_1401AF7E6
 * 00000001401AF6B7: test    byte ptr gs:279h, 4
 * 00000001401AF6C0: jnz     loc_1401AF7E6
 * 00000001401AF6C6: call    loc_1401AF7D9
 * 00000001401AF6CB: add     rsp, 8
 * 00000001401AF6CF: call    loc_1401AF7E2
 * 00000001401AF6D4: add     rsp, 8
 * 00000001401AF6D8: call    loc_1401AF6CB
 * 00000001401AF6DD: add     rsp, 8
 * 00000001401AF6E1: call    loc_1401AF6D4
 * 00000001401AF6E6: add     rsp, 8
 * 00000001401AF6EA: call    loc_1401AF6DD
 * 00000001401AF6EF: add     rsp, 8
 * 00000001401AF6F3: call    loc_1401AF6E6
 * 00000001401AF6F8: add     rsp, 8
 * 00000001401AF6FC: call    loc_1401AF6EF
 * 00000001401AF701: add     rsp, 8
 * 00000001401AF705: call    loc_1401AF6F8
 * 00000001401AF70A: add     rsp, 8
 * 00000001401AF70E: call    loc_1401AF701
 * 00000001401AF713: add     rsp, 8
 * 00000001401AF717: call    loc_1401AF70A
 * 00000001401AF71C: add     rsp, 8
 * 00000001401AF720: call    loc_1401AF713
 * 00000001401AF725: add     rsp, 8
 * 00000001401AF729: call    loc_1401AF71C
 * 00000001401AF72E: add     rsp, 8
 * 00000001401AF732: call    loc_1401AF725
 * 00000001401AF737: add     rsp, 8
 * 00000001401AF73B: call    loc_1401AF72E
 * 00000001401AF740: add     rsp, 8
 * 00000001401AF744: call    loc_1401AF737
 * 00000001401AF749: add     rsp, 8
 * 00000001401AF74D: call    loc_1401AF740
 * 00000001401AF752: add     rsp, 8
 * 00000001401AF756: call    loc_1401AF749
 * 00000001401AF75B: add     rsp, 8
 * 00000001401AF75F: call    loc_1401AF752
 * 00000001401AF764: add     rsp, 8
 * 00000001401AF768: call    loc_1401AF75B
 * 00000001401AF76D: add     rsp, 8
 * 00000001401AF771: call    loc_1401AF764
 * 00000001401AF776: add     rsp, 8
 * 00000001401AF77A: call    loc_1401AF76D
 * 00000001401AF77F: add     rsp, 8
 * 00000001401AF783: call    loc_1401AF776
 * 00000001401AF788: add     rsp, 8
 * 00000001401AF78C: call    loc_1401AF77F
 * 00000001401AF791: add     rsp, 8
 * 00000001401AF795: call    loc_1401AF788
 * 00000001401AF79A: add     rsp, 8
 * 00000001401AF79E: call    loc_1401AF791
 * 00000001401AF7A3: add     rsp, 8
 * 00000001401AF7A7: call    loc_1401AF79A
 * 00000001401AF7AC: add     rsp, 8
 * 00000001401AF7B0: call    loc_1401AF7A3
 * 00000001401AF7B5: add     rsp, 8
 * 00000001401AF7B9: call    loc_1401AF7AC
 * 00000001401AF7BE: add     rsp, 8
 * 00000001401AF7C2: call    loc_1401AF7B5
 * 00000001401AF7C7: add     rsp, 8
 * 00000001401AF7CB: call    loc_1401AF7BE
 * 00000001401AF7D0: add     rsp, 8
 * 00000001401AF7D4: call    loc_1401AF7C7
 * 00000001401AF7D9: add     rsp, 8
 * 00000001401AF7DD: call    loc_1401AF7D0
 * 00000001401AF7E2: add     rsp, 8
 * 00000001401AF7E6: lfence
 * 00000001401AF7E9: test    byte ptr [r10+3], 3
 * 00000001401AF7EE: mov     [rbp+0E8h+var_68], 0
 * 00000001401AF7F7: jz      short loc_1401AF7FE
 * 00000001401AF7F9: call    KiSaveDebugRegisterState
 * 00000001401AF7FE: cld
 * 00000001401AF7FF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401AF803: ldmxcsr dword ptr gs:180h
 * 00000001401AF80C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401AF810: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401AF814: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401AF818: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401AF81C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401AF820: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401AF824: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401AF82D: jz      short loc_1401AF834
 * 00000001401AF82F: call    KeWakeProcessor
 * 00000001401AF834: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401AF83B: cmp     rax, [rbp+0E8h]
 * 00000001401AF842: jnb     short loc_1401AF85D
 * 00000001401AF844: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401AF84B: cmp     rax, [rbp+0E8h]
 * 00000001401AF852: jb      short loc_1401AF85D
 * 00000001401AF854: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401AF858: call    KiCheckForSListAddress
 * 00000001401AF85D: xor     esi, esi
 * 00000001401AF85F: inc     dword ptr gs:5D00h
 * 00000001401AF867: mov     ecx, 2
 * 00000001401AF86C: mov     rax, cr8
 * 00000001401AF870: mov     cr8, rcx
 * 00000001401AF874: mov     [rbp+0E8h+var_13F], al
 * 00000001401AF877: mov     rcx, gs:20h
 * 00000001401AF880: inc     byte ptr [rcx+20h]
 * 00000001401AF883: cmp     byte ptr [rcx+20h], 1
 * 00000001401AF887: jnz     short loc_1401AF8D9
 * 00000001401AF889: rdtsc
 * 00000001401AF88B: shl     rdx, 20h
 * 00000001401AF88F: or      rax, rdx
 * 00000001401AF892: mov     r8, [rcx+8]
 * 00000001401AF896: sub     rax, [rcx+5BC0h]
 * 00000001401AF89D: add     [r8+48h], rax
 * 00000001401AF8A1: mov     edx, [r8+50h]
 * 00000001401AF8A5: add     [rcx+5BC0h], rax
 * 00000001401AF8AC: add     rdx, rax
 * 00000001401AF8AF: mov     ecx, edx
 * 00000001401AF8B1: shr     rdx, 20h
 * 00000001401AF8B5: jz      short loc_1401AF8BA
 * 00000001401AF8B7: or      ecx, 0FFFFFFFFh
 * 00000001401AF8BA: mov     [r8+50h], ecx
 * 00000001401AF8BE: test    byte ptr [r8+2], 3Eh
 * 00000001401AF8C3: jz      short loc_1401AF8D9
 * 00000001401AF8C5: mov     rdx, r8
 * 00000001401AF8C8: mov     r8, rax
 * 00000001401AF8CB: mov     rcx, gs:20h
 * 00000001401AF8D4: call    KiEndThreadAccountingPeriod
 * 00000001401AF8D9: sti
 * 00000001401AF8DA: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401AF8DE: call    KiSwInterruptDispatch
 * 00000001401AF8E3: cli
 * 00000001401AF8E4: mov     rcx, rsi
 * 00000001401AF8E7: call    HalPerformEndOfInterrupt_0
 * 00000001401AF8EC: mov     rcx, gs:20h
 * 00000001401AF8F5: cmp     byte ptr [rcx+20h], 1
 * 00000001401AF8F9: ja      short loc_1401AF96F
 * 00000001401AF8FB: rdtsc
 * 00000001401AF8FD: shl     rdx, 20h
 * 00000001401AF901: or      rax, rdx
 * 00000001401AF904: sub     rax, [rcx+5BC0h]
 * 00000001401AF90B: add     [rcx+5C38h], rax
 * 00000001401AF912: add     [rcx+5BC0h], rax
 * 00000001401AF919: mov     r8, rax
 * 00000001401AF91C: mov     rax, [rcx+8]
 * 00000001401AF920: test    byte ptr [rax+2], 72h
 * 00000001401AF924: jz      short loc_1401AF939
 * 00000001401AF926: xor     edx, edx
 * 00000001401AF928: call    KiBeginThreadAccountingPeriod
 * 00000001401AF92D: mov     rcx, gs:20h
 * 00000001401AF936: inc     byte ptr [rcx+20h]
 * 00000001401AF939: mov     dl, [rcx+6]
 * 00000001401AF93C: and     byte ptr [rcx+6], 0
 * 00000001401AF940: cmp     byte ptr [rcx+7], 0
 * 00000001401AF944: jnz     short loc_1401AF96F
 * 00000001401AF946: test    dl, dl
 * 00000001401AF948: jz      short loc_1401AF96F
 * 00000001401AF94A: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401AF94E: jnb     short loc_1401AF95B
 * 00000001401AF950: and     byte ptr [rcx+20h], 0
 * 00000001401AF954: call    KiDpcInterruptBypass
 * 00000001401AF959: jmp     short loc_1401AF972
 * 00000001401AF95B: mov     ecx, 2
 * 00000001401AF960: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401AF966: mov     rcx, gs:20h
 * 00000001401AF96F: dec     byte ptr [rcx+20h]
 * 00000001401AF972: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401AF976: mov     cr8, rcx
 * 00000001401AF97A: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401AF981: cli
 * 00000001401AF982: test    [rbp+0E8h+arg_0], 1
 * 00000001401AF989: jz      loc_1401AFA9F
 * 00000001401AF98F: mov     rcx, gs:188h
 * 00000001401AF998: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401AF99F: jz      short loc_1401AF9BA
 * 00000001401AF9A1: mov     ecx, 1
 * 00000001401AF9A6: mov     cr8, rcx
 * 00000001401AF9AA: sti
 * 00000001401AF9AB: call    KiInitiateUserApc
 * 00000001401AF9B0: cli
 * 00000001401AF9B1: mov     ecx, 0
 * 00000001401AF9B6: mov     cr8, rcx
 * 00000001401AF9BA: mov     rcx, gs:188h
 * 00000001401AF9C3: test    dword ptr [rcx], 8000000h
 * 00000001401AF9C9: jz      short loc_1401AF9D0
 * 00000001401AF9CB: call    KiRestoreSetContextState
 * 00000001401AF9D0: mov     rcx, gs:188h
 * 00000001401AF9D9: test    dword ptr [rcx], 40010000h
 * 00000001401AF9DF: jz      short loc_1401AF9F5
 * 00000001401AF9E1: test    byte ptr [rcx+2], 1
 * 00000001401AF9E5: jz      short loc_1401AF9F5
 * 00000001401AF9E7: call    KiCopyCounters
 * 00000001401AF9EC: mov     rcx, gs:188h
 * 00000001401AF9F5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401AF9F9: cmp     [rbp+0E8h+var_68], 0
 * 00000001401AFA01: jz      short loc_1401AFA08
 * 00000001401AFA03: call    KiRestoreDebugRegisterState
 * 00000001401AFA08: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401AFA0C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401AFA10: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401AFA14: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401AFA18: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401AFA1C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401AFA20: mov     r11, [rbp+0E8h+var_108]
 * 00000001401AFA24: mov     r10, [rbp+0E8h+var_110]
 * 00000001401AFA28: mov     r9, [rbp+0E8h+var_118]
 * 00000001401AFA2C: mov     r8, [rbp+0E8h+var_120]
 * 00000001401AFA30: movzx   eax, byte ptr gs:27Dh
 * 00000001401AFA39: cmp     gs:27Ah, al
 * 00000001401AFA41: jz      short loc_1401AFA54
 * 00000001401AFA43: mov     gs:27Ah, al
 * 00000001401AFA4B: mov     ecx, 48h ; 'H'
 * 00000001401AFA50: xor     edx, edx
 * 00000001401AFA52: wrmsr
 * 00000001401AFA54: btr     word ptr gs:278h, 2
 * 00000001401AFA5F: jnb     short loc_1401AFA6F
 * 00000001401AFA61: mov     eax, 1
 * 00000001401AFA66: xor     edx, edx
 * 00000001401AFA68: mov     ecx, 49h ; 'I'
 * 00000001401AFA6D: wrmsr
 * 00000001401AFA6F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401AFA73: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401AFA77: mov     rax, [rbp+0E8h+var_138]
 * 00000001401AFA7B: mov     rsp, rbp
 * 00000001401AFA7E: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401AFA85: add     rsp, 0E8h
 * 00000001401AFA8C: test    cs:KiKvaShadow, 1
 * 00000001401AFA93: jz      short loc_1401AFA9A
 * 00000001401AFA95: jmp     KiKernelExit
 * 00000001401AFA9A: swapgs
 * 00000001401AFA9D: iretq
 * 00000001401AFA9F: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401AFAA3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401AFAA7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401AFAAB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401AFAAF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401AFAB3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401AFAB7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401AFABB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401AFABF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401AFAC3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401AFAC7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401AFACB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401AFACF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401AFAD3: mov     rax, [rbp+0E8h+var_138]
 * 00000001401AFAD7: mov     rsp, rbp
 * 00000001401AFADA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401AFAE1: add     rsp, 0E8h
 * 00000001401AFAE8: iretq
 */
