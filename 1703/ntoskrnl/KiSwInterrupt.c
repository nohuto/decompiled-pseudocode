/*
 * XREFs of KiSwInterrupt @ 0x140185EF0
 * Callers:
 *     KiSwInterruptShadow @ 0x14026CB80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiSwInterruptDispatch @ 0x140174B80 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140185EF0
 * Reason: Hex-Rays returned no pseudocode for 0x140185EF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140185EF0: sub     rsp, 8
 * 0000000140185EF4: push    rbp
 * 0000000140185EF5: push    rsi
 * 0000000140185EF6: sub     rsp, 150h
 * 0000000140185EFD: lea     rbp, [rsp+80h]
 * 0000000140185F05: mov     [rbp+0E8h+var_13D], 0
 * 0000000140185F09: mov     [rbp+0E8h+var_138], rax
 * 0000000140185F0D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140185F11: mov     [rbp+0E8h+var_128], rdx
 * 0000000140185F15: mov     [rbp+0E8h+var_120], r8
 * 0000000140185F19: mov     [rbp+0E8h+var_118], r9
 * 0000000140185F1D: mov     [rbp+0E8h+var_110], r10
 * 0000000140185F21: mov     [rbp+0E8h+var_108], r11
 * 0000000140185F25: test    [rbp+0E8h+arg_0], 1
 * 0000000140185F2C: jnz     short loc_140185F5B
 * 0000000140185F2E: lfence
 * 0000000140185F31: test    byte ptr gs:278h, 1
 * 0000000140185F3A: jnz     short loc_140185F44
 * 0000000140185F3C: lfence
 * 0000000140185F3F: jmp     loc_14018612E
 * 0000000140185F44: movzx   eax, byte ptr gs:27Ah
 * 0000000140185F4D: mov     ecx, 48h ; 'H'
 * 0000000140185F52: xor     edx, edx
 * 0000000140185F54: wrmsr
 * 0000000140185F56: jmp     loc_14018612E
 * 0000000140185F5B: test    cs:KiKvaShadow, 1
 * 0000000140185F62: jnz     short loc_140185F67
 * 0000000140185F64: swapgs
 * 0000000140185F67: lfence
 * 0000000140185F6A: mov     r10, gs:188h
 * 0000000140185F73: mov     rcx, gs:188h
 * 0000000140185F7C: mov     rcx, [rcx+220h]
 * 0000000140185F83: mov     rcx, [rcx+818h]
 * 0000000140185F8A: mov     gs:270h, rcx
 * 0000000140185F93: movzx   eax, byte ptr gs:27Bh
 * 0000000140185F9C: cmp     gs:27Ah, al
 * 0000000140185FA4: jz      short loc_140185FB7
 * 0000000140185FA6: mov     gs:27Ah, al
 * 0000000140185FAE: mov     ecx, 48h ; 'H'
 * 0000000140185FB3: xor     edx, edx
 * 0000000140185FB5: wrmsr
 * 0000000140185FB7: movzx   edx, byte ptr gs:278h
 * 0000000140185FC0: test    edx, 8
 * 0000000140185FC6: jz      short loc_140185FDB
 * 0000000140185FC8: mov     eax, 1
 * 0000000140185FCD: xor     edx, edx
 * 0000000140185FCF: mov     ecx, 49h ; 'I'
 * 0000000140185FD4: wrmsr
 * 0000000140185FD6: jmp     loc_140186119
 * 0000000140185FDB: test    edx, 2
 * 0000000140185FE1: jz      loc_140186116
 * 0000000140185FE7: test    byte ptr gs:279h, 4
 * 0000000140185FF0: jnz     loc_140186116
 * 0000000140185FF6: call    loc_140186109
 * 0000000140185FFB: add     rsp, 8
 * 0000000140185FFF: call    loc_140186112
 * 0000000140186004: add     rsp, 8
 * 0000000140186008: call    loc_140185FFB
 * 000000014018600D: add     rsp, 8
 * 0000000140186011: call    loc_140186004
 * 0000000140186016: add     rsp, 8
 * 000000014018601A: call    loc_14018600D
 * 000000014018601F: add     rsp, 8
 * 0000000140186023: call    loc_140186016
 * 0000000140186028: add     rsp, 8
 * 000000014018602C: call    loc_14018601F
 * 0000000140186031: add     rsp, 8
 * 0000000140186035: call    loc_140186028
 * 000000014018603A: add     rsp, 8
 * 000000014018603E: call    loc_140186031
 * 0000000140186043: add     rsp, 8
 * 0000000140186047: call    loc_14018603A
 * 000000014018604C: add     rsp, 8
 * 0000000140186050: call    loc_140186043
 * 0000000140186055: add     rsp, 8
 * 0000000140186059: call    loc_14018604C
 * 000000014018605E: add     rsp, 8
 * 0000000140186062: call    loc_140186055
 * 0000000140186067: add     rsp, 8
 * 000000014018606B: call    loc_14018605E
 * 0000000140186070: add     rsp, 8
 * 0000000140186074: call    loc_140186067
 * 0000000140186079: add     rsp, 8
 * 000000014018607D: call    loc_140186070
 * 0000000140186082: add     rsp, 8
 * 0000000140186086: call    loc_140186079
 * 000000014018608B: add     rsp, 8
 * 000000014018608F: call    loc_140186082
 * 0000000140186094: add     rsp, 8
 * 0000000140186098: call    loc_14018608B
 * 000000014018609D: add     rsp, 8
 * 00000001401860A1: call    loc_140186094
 * 00000001401860A6: add     rsp, 8
 * 00000001401860AA: call    loc_14018609D
 * 00000001401860AF: add     rsp, 8
 * 00000001401860B3: call    loc_1401860A6
 * 00000001401860B8: add     rsp, 8
 * 00000001401860BC: call    loc_1401860AF
 * 00000001401860C1: add     rsp, 8
 * 00000001401860C5: call    loc_1401860B8
 * 00000001401860CA: add     rsp, 8
 * 00000001401860CE: call    loc_1401860C1
 * 00000001401860D3: add     rsp, 8
 * 00000001401860D7: call    loc_1401860CA
 * 00000001401860DC: add     rsp, 8
 * 00000001401860E0: call    loc_1401860D3
 * 00000001401860E5: add     rsp, 8
 * 00000001401860E9: call    loc_1401860DC
 * 00000001401860EE: add     rsp, 8
 * 00000001401860F2: call    loc_1401860E5
 * 00000001401860F7: add     rsp, 8
 * 00000001401860FB: call    loc_1401860EE
 * 0000000140186100: add     rsp, 8
 * 0000000140186104: call    loc_1401860F7
 * 0000000140186109: add     rsp, 8
 * 000000014018610D: call    loc_140186100
 * 0000000140186112: add     rsp, 8
 * 0000000140186116: lfence
 * 0000000140186119: test    byte ptr [r10+3], 3
 * 000000014018611E: mov     [rbp+0E8h+var_68], 0
 * 0000000140186127: jz      short loc_14018612E
 * 0000000140186129: call    KiSaveDebugRegisterState
 * 000000014018612E: cld
 * 000000014018612F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140186133: ldmxcsr dword ptr gs:180h
 * 000000014018613C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140186140: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140186144: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140186148: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018614C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140186150: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140186154: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018615D: jz      short loc_140186164
 * 000000014018615F: call    KeWakeProcessor
 * 0000000140186164: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018616B: cmp     rax, [rbp+0E8h]
 * 0000000140186172: jnb     short loc_14018618D
 * 0000000140186174: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018617B: cmp     rax, [rbp+0E8h]
 * 0000000140186182: jb      short loc_14018618D
 * 0000000140186184: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140186188: call    KiCheckForSListAddress
 * 000000014018618D: xor     esi, esi
 * 000000014018618F: inc     dword ptr gs:5D00h
 * 0000000140186197: mov     ecx, 2
 * 000000014018619C: mov     rax, cr8
 * 00000001401861A0: mov     cr8, rcx
 * 00000001401861A4: mov     [rbp+0E8h+var_13F], al
 * 00000001401861A7: mov     rcx, gs:20h
 * 00000001401861B0: inc     byte ptr [rcx+20h]
 * 00000001401861B3: cmp     byte ptr [rcx+20h], 1
 * 00000001401861B7: jnz     short loc_140186209
 * 00000001401861B9: rdtsc
 * 00000001401861BB: shl     rdx, 20h
 * 00000001401861BF: or      rax, rdx
 * 00000001401861C2: mov     r8, [rcx+8]
 * 00000001401861C6: sub     rax, [rcx+5BC0h]
 * 00000001401861CD: add     [r8+48h], rax
 * 00000001401861D1: mov     edx, [r8+50h]
 * 00000001401861D5: add     [rcx+5BC0h], rax
 * 00000001401861DC: add     rdx, rax
 * 00000001401861DF: mov     ecx, edx
 * 00000001401861E1: shr     rdx, 20h
 * 00000001401861E5: jz      short loc_1401861EA
 * 00000001401861E7: or      ecx, 0FFFFFFFFh
 * 00000001401861EA: mov     [r8+50h], ecx
 * 00000001401861EE: test    byte ptr [r8+2], 3Eh
 * 00000001401861F3: jz      short loc_140186209
 * 00000001401861F5: mov     rdx, r8
 * 00000001401861F8: mov     r8, rax
 * 00000001401861FB: mov     rcx, gs:20h
 * 0000000140186204: call    KiEndThreadAccountingPeriod
 * 0000000140186209: sti
 * 000000014018620A: lea     rcx, [rbp+0E8h+var_168]
 * 000000014018620E: call    KiSwInterruptDispatch
 * 0000000140186213: cli
 * 0000000140186214: mov     rcx, rsi
 * 0000000140186217: call    HalPerformEndOfInterrupt_0
 * 000000014018621C: mov     rcx, gs:20h
 * 0000000140186225: cmp     byte ptr [rcx+20h], 1
 * 0000000140186229: ja      short loc_14018629F
 * 000000014018622B: rdtsc
 * 000000014018622D: shl     rdx, 20h
 * 0000000140186231: or      rax, rdx
 * 0000000140186234: sub     rax, [rcx+5BC0h]
 * 000000014018623B: add     [rcx+5C78h], rax
 * 0000000140186242: add     [rcx+5BC0h], rax
 * 0000000140186249: mov     r8, rax
 * 000000014018624C: mov     rax, [rcx+8]
 * 0000000140186250: test    byte ptr [rax+2], 32h
 * 0000000140186254: jz      short loc_140186269
 * 0000000140186256: xor     edx, edx
 * 0000000140186258: call    KiBeginThreadAccountingPeriod
 * 000000014018625D: mov     rcx, gs:20h
 * 0000000140186266: inc     byte ptr [rcx+20h]
 * 0000000140186269: mov     dl, [rcx+6]
 * 000000014018626C: and     byte ptr [rcx+6], 0
 * 0000000140186270: cmp     byte ptr [rcx+7], 0
 * 0000000140186274: jnz     short loc_14018629F
 * 0000000140186276: test    dl, dl
 * 0000000140186278: jz      short loc_14018629F
 * 000000014018627A: cmp     [rbp+0E8h+var_13F], 2
 * 000000014018627E: jnb     short loc_14018628B
 * 0000000140186280: and     byte ptr [rcx+20h], 0
 * 0000000140186284: call    KiDpcInterruptBypass
 * 0000000140186289: jmp     short loc_1401862A2
 * 000000014018628B: mov     ecx, 2
 * 0000000140186290: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140186296: mov     rcx, gs:20h
 * 000000014018629F: dec     byte ptr [rcx+20h]
 * 00000001401862A2: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401862A6: mov     cr8, rcx
 * 00000001401862AA: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401862B1: cli
 * 00000001401862B2: test    [rbp+0E8h+arg_0], 1
 * 00000001401862B9: jz      loc_1401863CF
 * 00000001401862BF: mov     rcx, gs:188h
 * 00000001401862C8: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401862CF: jz      short loc_1401862EA
 * 00000001401862D1: mov     ecx, 1
 * 00000001401862D6: mov     cr8, rcx
 * 00000001401862DA: sti
 * 00000001401862DB: call    KiInitiateUserApc
 * 00000001401862E0: cli
 * 00000001401862E1: mov     ecx, 0
 * 00000001401862E6: mov     cr8, rcx
 * 00000001401862EA: mov     rcx, gs:188h
 * 00000001401862F3: test    dword ptr [rcx], 8000000h
 * 00000001401862F9: jz      short loc_140186300
 * 00000001401862FB: call    KiRestoreSetContextState
 * 0000000140186300: mov     rcx, gs:188h
 * 0000000140186309: test    dword ptr [rcx], 40010000h
 * 000000014018630F: jz      short loc_140186325
 * 0000000140186311: test    byte ptr [rcx+2], 1
 * 0000000140186315: jz      short loc_140186325
 * 0000000140186317: call    KiCopyCounters
 * 000000014018631C: mov     rcx, gs:188h
 * 0000000140186325: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140186329: cmp     [rbp+0E8h+var_68], 0
 * 0000000140186331: jz      short loc_140186338
 * 0000000140186333: call    KiRestoreDebugRegisterState
 * 0000000140186338: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018633C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140186340: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140186344: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140186348: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018634C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140186350: mov     r11, [rbp+0E8h+var_108]
 * 0000000140186354: mov     r10, [rbp+0E8h+var_110]
 * 0000000140186358: mov     r9, [rbp+0E8h+var_118]
 * 000000014018635C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140186360: movzx   eax, byte ptr gs:27Dh
 * 0000000140186369: cmp     gs:27Ah, al
 * 0000000140186371: jz      short loc_140186384
 * 0000000140186373: mov     gs:27Ah, al
 * 000000014018637B: mov     ecx, 48h ; 'H'
 * 0000000140186380: xor     edx, edx
 * 0000000140186382: wrmsr
 * 0000000140186384: btr     word ptr gs:278h, 2
 * 000000014018638F: jnb     short loc_14018639F
 * 0000000140186391: mov     eax, 1
 * 0000000140186396: xor     edx, edx
 * 0000000140186398: mov     ecx, 49h ; 'I'
 * 000000014018639D: wrmsr
 * 000000014018639F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401863A3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401863A7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401863AB: mov     rsp, rbp
 * 00000001401863AE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401863B5: add     rsp, 0E8h
 * 00000001401863BC: test    cs:KiKvaShadow, 1
 * 00000001401863C3: jz      short loc_1401863CA
 * 00000001401863C5: jmp     KiKernelExit
 * 00000001401863CA: swapgs
 * 00000001401863CD: iretq
 * 00000001401863CF: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401863D3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401863D7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401863DB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401863DF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401863E3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401863E7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401863EB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401863EF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401863F3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401863F7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401863FB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401863FF: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140186403: mov     rax, [rbp+0E8h+var_138]
 * 0000000140186407: mov     rsp, rbp
 * 000000014018640A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140186411: add     rsp, 0E8h
 * 0000000140186418: iretq
 */
