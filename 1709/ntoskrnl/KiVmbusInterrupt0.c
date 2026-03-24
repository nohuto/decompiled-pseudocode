/*
 * XREFs of KiVmbusInterrupt0 @ 0x140185ED0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140297F80 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140185ED0
 * Reason: Hex-Rays returned no pseudocode for 0x140185ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140185ED0: sub     rsp, 8
 * 0000000140185ED4: push    rbp
 * 0000000140185ED5: push    rsi
 * 0000000140185ED6: sub     rsp, 150h
 * 0000000140185EDD: lea     rbp, [rsp+80h]
 * 0000000140185EE5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140185EE9: mov     [rbp+0E8h+var_138], rax
 * 0000000140185EED: mov     [rbp+0E8h+var_130], rcx
 * 0000000140185EF1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140185EF5: mov     [rbp+0E8h+var_120], r8
 * 0000000140185EF9: mov     [rbp+0E8h+var_118], r9
 * 0000000140185EFD: mov     [rbp+0E8h+var_110], r10
 * 0000000140185F01: mov     [rbp+0E8h+var_108], r11
 * 0000000140185F05: test    [rbp+0E8h+arg_0], 1
 * 0000000140185F0C: jnz     short loc_140185F3B
 * 0000000140185F0E: lfence
 * 0000000140185F11: test    byte ptr gs:278h, 1
 * 0000000140185F1A: jnz     short loc_140185F24
 * 0000000140185F1C: lfence
 * 0000000140185F1F: jmp     loc_14018610E
 * 0000000140185F24: movzx   eax, byte ptr gs:27Ah
 * 0000000140185F2D: mov     ecx, 48h ; 'H'
 * 0000000140185F32: xor     edx, edx
 * 0000000140185F34: wrmsr
 * 0000000140185F36: jmp     loc_14018610E
 * 0000000140185F3B: test    cs:KiKvaShadow, 1
 * 0000000140185F42: jnz     short loc_140185F47
 * 0000000140185F44: swapgs
 * 0000000140185F47: lfence
 * 0000000140185F4A: mov     r10, gs:188h
 * 0000000140185F53: mov     rcx, gs:188h
 * 0000000140185F5C: mov     rcx, [rcx+220h]
 * 0000000140185F63: mov     rcx, [rcx+838h]
 * 0000000140185F6A: mov     gs:270h, rcx
 * 0000000140185F73: movzx   eax, byte ptr gs:27Bh
 * 0000000140185F7C: cmp     gs:27Ah, al
 * 0000000140185F84: jz      short loc_140185F97
 * 0000000140185F86: mov     gs:27Ah, al
 * 0000000140185F8E: mov     ecx, 48h ; 'H'
 * 0000000140185F93: xor     edx, edx
 * 0000000140185F95: wrmsr
 * 0000000140185F97: movzx   edx, byte ptr gs:278h
 * 0000000140185FA0: test    edx, 8
 * 0000000140185FA6: jz      short loc_140185FBB
 * 0000000140185FA8: mov     eax, 1
 * 0000000140185FAD: xor     edx, edx
 * 0000000140185FAF: mov     ecx, 49h ; 'I'
 * 0000000140185FB4: wrmsr
 * 0000000140185FB6: jmp     loc_1401860F9
 * 0000000140185FBB: test    edx, 2
 * 0000000140185FC1: jz      loc_1401860F6
 * 0000000140185FC7: test    byte ptr gs:279h, 4
 * 0000000140185FD0: jnz     loc_1401860F6
 * 0000000140185FD6: call    loc_1401860E9
 * 0000000140185FDB: add     rsp, 8
 * 0000000140185FDF: call    loc_1401860F2
 * 0000000140185FE4: add     rsp, 8
 * 0000000140185FE8: call    loc_140185FDB
 * 0000000140185FED: add     rsp, 8
 * 0000000140185FF1: call    loc_140185FE4
 * 0000000140185FF6: add     rsp, 8
 * 0000000140185FFA: call    loc_140185FED
 * 0000000140185FFF: add     rsp, 8
 * 0000000140186003: call    loc_140185FF6
 * 0000000140186008: add     rsp, 8
 * 000000014018600C: call    loc_140185FFF
 * 0000000140186011: add     rsp, 8
 * 0000000140186015: call    loc_140186008
 * 000000014018601A: add     rsp, 8
 * 000000014018601E: call    loc_140186011
 * 0000000140186023: add     rsp, 8
 * 0000000140186027: call    loc_14018601A
 * 000000014018602C: add     rsp, 8
 * 0000000140186030: call    loc_140186023
 * 0000000140186035: add     rsp, 8
 * 0000000140186039: call    loc_14018602C
 * 000000014018603E: add     rsp, 8
 * 0000000140186042: call    loc_140186035
 * 0000000140186047: add     rsp, 8
 * 000000014018604B: call    loc_14018603E
 * 0000000140186050: add     rsp, 8
 * 0000000140186054: call    loc_140186047
 * 0000000140186059: add     rsp, 8
 * 000000014018605D: call    loc_140186050
 * 0000000140186062: add     rsp, 8
 * 0000000140186066: call    loc_140186059
 * 000000014018606B: add     rsp, 8
 * 000000014018606F: call    loc_140186062
 * 0000000140186074: add     rsp, 8
 * 0000000140186078: call    loc_14018606B
 * 000000014018607D: add     rsp, 8
 * 0000000140186081: call    loc_140186074
 * 0000000140186086: add     rsp, 8
 * 000000014018608A: call    loc_14018607D
 * 000000014018608F: add     rsp, 8
 * 0000000140186093: call    loc_140186086
 * 0000000140186098: add     rsp, 8
 * 000000014018609C: call    loc_14018608F
 * 00000001401860A1: add     rsp, 8
 * 00000001401860A5: call    loc_140186098
 * 00000001401860AA: add     rsp, 8
 * 00000001401860AE: call    loc_1401860A1
 * 00000001401860B3: add     rsp, 8
 * 00000001401860B7: call    loc_1401860AA
 * 00000001401860BC: add     rsp, 8
 * 00000001401860C0: call    loc_1401860B3
 * 00000001401860C5: add     rsp, 8
 * 00000001401860C9: call    loc_1401860BC
 * 00000001401860CE: add     rsp, 8
 * 00000001401860D2: call    loc_1401860C5
 * 00000001401860D7: add     rsp, 8
 * 00000001401860DB: call    loc_1401860CE
 * 00000001401860E0: add     rsp, 8
 * 00000001401860E4: call    loc_1401860D7
 * 00000001401860E9: add     rsp, 8
 * 00000001401860ED: call    loc_1401860E0
 * 00000001401860F2: add     rsp, 8
 * 00000001401860F6: lfence
 * 00000001401860F9: test    byte ptr [r10+3], 3
 * 00000001401860FE: mov     [rbp+0E8h+var_68], 0
 * 0000000140186107: jz      short loc_14018610E
 * 0000000140186109: call    KiSaveDebugRegisterState
 * 000000014018610E: cld
 * 000000014018610F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186113: ldmxcsr dword ptr gs:180h
 * 000000014018611C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186120: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186124: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186128: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018612C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186130: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186134: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018613D: jz      short loc_140186144
 * 000000014018613F: call    KeWakeProcessor
 * 0000000140186144: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018614B: cmp     rax, [rbp+0E8h]
 * 0000000140186152: jnb     short loc_14018616D
 * 0000000140186154: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018615B: cmp     rax, [rbp+0E8h]
 * 0000000140186162: jb      short loc_14018616D
 * 0000000140186164: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140186168: call    KiCheckForSListAddress
 * 000000014018616D: xor     esi, esi
 * 000000014018616F: inc     dword ptr gs:5D00h
 * 0000000140186177: mov     ecx, 3
 * 000000014018617C: mov     rax, cr8
 * 0000000140186180: mov     cr8, rcx
 * 0000000140186184: mov     [rbp+0E8h+var_13F], al
 * 0000000140186187: mov     [rbp+0E8h+var_148], 0
 * 000000014018618E: mov     rcx, gs:20h
 * 0000000140186197: inc     byte ptr [rcx+20h]
 * 000000014018619A: cmp     byte ptr [rcx+20h], 1
 * 000000014018619E: jnz     loc_140186234
 * 00000001401861A4: rdtsc
 * 00000001401861A6: shl     rdx, 20h
 * 00000001401861AA: or      rax, rdx
 * 00000001401861AD: mov     edx, [rcx+62E0h]
 * 00000001401861B3: mov     r11d, edx
 * 00000001401861B6: and     edx, 7FFh
 * 00000001401861BC: shr     edx, 5
 * 00000001401861BF: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401861C7: mov     edx, [r10]
 * 00000001401861CA: ror     edx, 5
 * 00000001401861CD: xor     edx, eax
 * 00000001401861CF: mov     [r10], edx
 * 00000001401861D2: add     r11d, 1
 * 00000001401861D6: mov     [rcx+62E0h], r11d
 * 00000001401861DD: and     r11d, 3FFh
 * 00000001401861E4: jnz     short loc_1401861ED
 * 00000001401861E6: mov     [rbp+0E8h+var_148], 1
 * 00000001401861ED: mov     r8, [rcx+8]
 * 00000001401861F1: sub     rax, [rcx+5BC0h]
 * 00000001401861F8: add     [r8+48h], rax
 * 00000001401861FC: mov     edx, [r8+50h]
 * 0000000140186200: add     [rcx+5BC0h], rax
 * 0000000140186207: add     rdx, rax
 * 000000014018620A: mov     ecx, edx
 * 000000014018620C: shr     rdx, 20h
 * 0000000140186210: jz      short loc_140186215
 * 0000000140186212: or      ecx, 0FFFFFFFFh
 * 0000000140186215: mov     [r8+50h], ecx
 * 0000000140186219: test    byte ptr [r8+2], 3Eh
 * 000000014018621E: jz      short loc_140186234
 * 0000000140186220: mov     rdx, r8
 * 0000000140186223: mov     r8, rax
 * 0000000140186226: mov     rcx, gs:20h
 * 000000014018622F: call    KiEndThreadAccountingPeriod
 * 0000000140186234: sti
 * 0000000140186235: cmp     [rbp+0E8h+var_148], 0
 * 0000000140186239: jz      short loc_140186249
 * 000000014018623B: mov     rcx, gs:20h
 * 0000000140186244: call    KiEntropyQueueDpc
 * 0000000140186249: mov     ecx, 1
 * 000000014018624E: call    HvlRouteInterrupt
 * 0000000140186253: cli
 * 0000000140186254: mov     rcx, gs:20h
 * 000000014018625D: cmp     byte ptr [rcx+20h], 1
 * 0000000140186261: ja      short loc_1401862D7
 * 0000000140186263: rdtsc
 * 0000000140186265: shl     rdx, 20h
 * 0000000140186269: or      rax, rdx
 * 000000014018626C: sub     rax, [rcx+5BC0h]
 * 0000000140186273: add     [rcx+5C38h], rax
 * 000000014018627A: add     [rcx+5BC0h], rax
 * 0000000140186281: mov     r8, rax
 * 0000000140186284: mov     rax, [rcx+8]
 * 0000000140186288: test    byte ptr [rax+2], 32h
 * 000000014018628C: jz      short loc_1401862A1
 * 000000014018628E: xor     edx, edx
 * 0000000140186290: call    KiBeginThreadAccountingPeriod
 * 0000000140186295: mov     rcx, gs:20h
 * 000000014018629E: inc     byte ptr [rcx+20h]
 * 00000001401862A1: mov     dl, [rcx+6]
 * 00000001401862A4: and     byte ptr [rcx+6], 0
 * 00000001401862A8: cmp     byte ptr [rcx+7], 0
 * 00000001401862AC: jnz     short loc_1401862D7
 * 00000001401862AE: test    dl, dl
 * 00000001401862B0: jz      short loc_1401862D7
 * 00000001401862B2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401862B6: jnb     short loc_1401862C3
 * 00000001401862B8: and     byte ptr [rcx+20h], 0
 * 00000001401862BC: call    KiDpcInterruptBypass
 * 00000001401862C1: jmp     short loc_1401862DA
 * 00000001401862C3: mov     ecx, 2
 * 00000001401862C8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401862CE: mov     rcx, gs:20h
 * 00000001401862D7: dec     byte ptr [rcx+20h]
 * 00000001401862DA: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401862DE: mov     cr8, rcx
 * 00000001401862E2: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401862E9: cli
 * 00000001401862EA: test    [rbp+0E8h+arg_0], 1
 * 00000001401862F1: jz      loc_140186407
 * 00000001401862F7: mov     rcx, gs:188h
 * 0000000140186300: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140186307: jz      short loc_140186322
 * 0000000140186309: mov     ecx, 1
 * 000000014018630E: mov     cr8, rcx
 * 0000000140186312: sti
 * 0000000140186313: call    KiInitiateUserApc
 * 0000000140186318: cli
 * 0000000140186319: mov     ecx, 0
 * 000000014018631E: mov     cr8, rcx
 * 0000000140186322: mov     rcx, gs:188h
 * 000000014018632B: test    dword ptr [rcx], 8000000h
 * 0000000140186331: jz      short loc_140186338
 * 0000000140186333: call    KiRestoreSetContextState
 * 0000000140186338: mov     rcx, gs:188h
 * 0000000140186341: test    dword ptr [rcx], 40010000h
 * 0000000140186347: jz      short loc_14018635D
 * 0000000140186349: test    byte ptr [rcx+2], 1
 * 000000014018634D: jz      short loc_14018635D
 * 000000014018634F: call    KiCopyCounters
 * 0000000140186354: mov     rcx, gs:188h
 * 000000014018635D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186361: cmp     [rbp+0E8h+var_68], 0
 * 0000000140186369: jz      short loc_140186370
 * 000000014018636B: call    KiRestoreDebugRegisterState
 * 0000000140186370: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140186374: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186378: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018637C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186380: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140186384: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186388: mov     r11, [rbp+0E8h+var_108]
 * 000000014018638C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186390: mov     r9, [rbp+0E8h+var_118]
 * 0000000140186394: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186398: movzx   eax, byte ptr gs:27Dh
 * 00000001401863A1: cmp     gs:27Ah, al
 * 00000001401863A9: jz      short loc_1401863BC
 * 00000001401863AB: mov     gs:27Ah, al
 * 00000001401863B3: mov     ecx, 48h ; 'H'
 * 00000001401863B8: xor     edx, edx
 * 00000001401863BA: wrmsr
 * 00000001401863BC: btr     word ptr gs:278h, 2
 * 00000001401863C7: jnb     short loc_1401863D7
 * 00000001401863C9: mov     eax, 1
 * 00000001401863CE: xor     edx, edx
 * 00000001401863D0: mov     ecx, 49h ; 'I'
 * 00000001401863D5: wrmsr
 * 00000001401863D7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401863DB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401863DF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401863E3: mov     rsp, rbp
 * 00000001401863E6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401863ED: add     rsp, 0E8h
 * 00000001401863F4: test    cs:KiKvaShadow, 1
 * 00000001401863FB: jz      short loc_140186402
 * 00000001401863FD: jmp     KiKernelExit
 * 0000000140186402: swapgs
 * 0000000140186405: iretq
 * 0000000140186407: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018640B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018640F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186413: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186417: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018641B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018641F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186423: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186427: mov     r10, [rbp+0E8h+var_110]
 * 000000014018642B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018642F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186433: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140186437: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018643B: mov     rax, [rbp+0E8h+var_138]
 * 000000014018643F: mov     rsp, rbp
 * 0000000140186442: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186449: add     rsp, 0E8h
 * 0000000140186450: iretq
 */
