/*
 * XREFs of KiVmbusInterrupt2 @ 0x140186F40
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x14026D000 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E4EA0 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140186F40
 * Reason: Hex-Rays returned no pseudocode for 0x140186F40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140186F40: sub     rsp, 8
 * 0000000140186F44: push    rbp
 * 0000000140186F45: push    rsi
 * 0000000140186F46: sub     rsp, 150h
 * 0000000140186F4D: lea     rbp, [rsp+80h]
 * 0000000140186F55: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186F59: mov     [rbp+0E8h+var_138], rax
 * 0000000140186F5D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186F61: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186F65: mov     [rbp+0E8h+var_120], r8
 * 0000000140186F69: mov     [rbp+0E8h+var_118], r9
 * 0000000140186F6D: mov     [rbp+0E8h+var_110], r10
 * 0000000140186F71: mov     [rbp+0E8h+var_108], r11
 * 0000000140186F75: test    [rbp+0E8h+arg_0], 1
 * 0000000140186F7C: jnz     short loc_140186FAB
 * 0000000140186F7E: lfence
 * 0000000140186F81: test    byte ptr gs:278h, 1
 * 0000000140186F8A: jnz     short loc_140186F94
 * 0000000140186F8C: lfence
 * 0000000140186F8F: jmp     loc_14018717E
 * 0000000140186F94: movzx   eax, byte ptr gs:27Ah
 * 0000000140186F9D: mov     ecx, 48h ; 'H'
 * 0000000140186FA2: xor     edx, edx
 * 0000000140186FA4: wrmsr
 * 0000000140186FA6: jmp     loc_14018717E
 * 0000000140186FAB: test    cs:KiKvaShadow, 1
 * 0000000140186FB2: jnz     short loc_140186FB7
 * 0000000140186FB4: swapgs
 * 0000000140186FB7: lfence
 * 0000000140186FBA: mov     r10, gs:188h
 * 0000000140186FC3: mov     rcx, gs:188h
 * 0000000140186FCC: mov     rcx, [rcx+220h]
 * 0000000140186FD3: mov     rcx, [rcx+818h]
 * 0000000140186FDA: mov     gs:270h, rcx
 * 0000000140186FE3: movzx   eax, byte ptr gs:27Bh
 * 0000000140186FEC: cmp     gs:27Ah, al
 * 0000000140186FF4: jz      short loc_140187007
 * 0000000140186FF6: mov     gs:27Ah, al
 * 0000000140186FFE: mov     ecx, 48h ; 'H'
 * 0000000140187003: xor     edx, edx
 * 0000000140187005: wrmsr
 * 0000000140187007: movzx   edx, byte ptr gs:278h
 * 0000000140187010: test    edx, 8
 * 0000000140187016: jz      short loc_14018702B
 * 0000000140187018: mov     eax, 1
 * 000000014018701D: xor     edx, edx
 * 000000014018701F: mov     ecx, 49h ; 'I'
 * 0000000140187024: wrmsr
 * 0000000140187026: jmp     loc_140187169
 * 000000014018702B: test    edx, 2
 * 0000000140187031: jz      loc_140187166
 * 0000000140187037: test    byte ptr gs:279h, 4
 * 0000000140187040: jnz     loc_140187166
 * 0000000140187046: call    loc_140187159
 * 000000014018704B: add     rsp, 8
 * 000000014018704F: call    loc_140187162
 * 0000000140187054: add     rsp, 8
 * 0000000140187058: call    loc_14018704B
 * 000000014018705D: add     rsp, 8
 * 0000000140187061: call    loc_140187054
 * 0000000140187066: add     rsp, 8
 * 000000014018706A: call    loc_14018705D
 * 000000014018706F: add     rsp, 8
 * 0000000140187073: call    loc_140187066
 * 0000000140187078: add     rsp, 8
 * 000000014018707C: call    loc_14018706F
 * 0000000140187081: add     rsp, 8
 * 0000000140187085: call    loc_140187078
 * 000000014018708A: add     rsp, 8
 * 000000014018708E: call    loc_140187081
 * 0000000140187093: add     rsp, 8
 * 0000000140187097: call    loc_14018708A
 * 000000014018709C: add     rsp, 8
 * 00000001401870A0: call    loc_140187093
 * 00000001401870A5: add     rsp, 8
 * 00000001401870A9: call    loc_14018709C
 * 00000001401870AE: add     rsp, 8
 * 00000001401870B2: call    loc_1401870A5
 * 00000001401870B7: add     rsp, 8
 * 00000001401870BB: call    loc_1401870AE
 * 00000001401870C0: add     rsp, 8
 * 00000001401870C4: call    loc_1401870B7
 * 00000001401870C9: add     rsp, 8
 * 00000001401870CD: call    loc_1401870C0
 * 00000001401870D2: add     rsp, 8
 * 00000001401870D6: call    loc_1401870C9
 * 00000001401870DB: add     rsp, 8
 * 00000001401870DF: call    loc_1401870D2
 * 00000001401870E4: add     rsp, 8
 * 00000001401870E8: call    loc_1401870DB
 * 00000001401870ED: add     rsp, 8
 * 00000001401870F1: call    loc_1401870E4
 * 00000001401870F6: add     rsp, 8
 * 00000001401870FA: call    loc_1401870ED
 * 00000001401870FF: add     rsp, 8
 * 0000000140187103: call    loc_1401870F6
 * 0000000140187108: add     rsp, 8
 * 000000014018710C: call    loc_1401870FF
 * 0000000140187111: add     rsp, 8
 * 0000000140187115: call    loc_140187108
 * 000000014018711A: add     rsp, 8
 * 000000014018711E: call    loc_140187111
 * 0000000140187123: add     rsp, 8
 * 0000000140187127: call    loc_14018711A
 * 000000014018712C: add     rsp, 8
 * 0000000140187130: call    loc_140187123
 * 0000000140187135: add     rsp, 8
 * 0000000140187139: call    loc_14018712C
 * 000000014018713E: add     rsp, 8
 * 0000000140187142: call    loc_140187135
 * 0000000140187147: add     rsp, 8
 * 000000014018714B: call    loc_14018713E
 * 0000000140187150: add     rsp, 8
 * 0000000140187154: call    loc_140187147
 * 0000000140187159: add     rsp, 8
 * 000000014018715D: call    loc_140187150
 * 0000000140187162: add     rsp, 8
 * 0000000140187166: lfence
 * 0000000140187169: test    byte ptr [r10+3], 3
 * 000000014018716E: mov     [rbp+0E8h+var_68], 0
 * 0000000140187177: jz      short loc_14018717E
 * 0000000140187179: call    KiSaveDebugRegisterState
 * 000000014018717E: cld
 * 000000014018717F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187183: ldmxcsr dword ptr gs:180h
 * 000000014018718C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187190: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187194: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187198: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018719C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401871A0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401871A4: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401871AD: jz      short loc_1401871B4
 * 00000001401871AF: call    KeWakeProcessor
 * 00000001401871B4: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401871BB: cmp     rax, [rbp+0E8h]
 * 00000001401871C2: jnb     short loc_1401871DD
 * 00000001401871C4: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401871CB: cmp     rax, [rbp+0E8h]
 * 00000001401871D2: jb      short loc_1401871DD
 * 00000001401871D4: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401871D8: call    KiCheckForSListAddress
 * 00000001401871DD: xor     esi, esi
 * 00000001401871DF: inc     dword ptr gs:5D00h
 * 00000001401871E7: mov     ecx, 3
 * 00000001401871EC: mov     rax, cr8
 * 00000001401871F0: mov     cr8, rcx
 * 00000001401871F4: mov     [rbp+0E8h+var_13F], al
 * 00000001401871F7: mov     [rbp+0E8h+var_148], 0
 * 00000001401871FE: mov     rcx, gs:20h
 * 0000000140187207: inc     byte ptr [rcx+20h]
 * 000000014018720A: cmp     byte ptr [rcx+20h], 1
 * 000000014018720E: jnz     loc_1401872A4
 * 0000000140187214: rdtsc
 * 0000000140187216: shl     rdx, 20h
 * 000000014018721A: or      rax, rdx
 * 000000014018721D: mov     edx, [rcx+6420h]
 * 0000000140187223: mov     r11d, edx
 * 0000000140187226: and     edx, 7FFh
 * 000000014018722C: shr     edx, 5
 * 000000014018722F: lea     r10, [rcx+rdx*4+6424h]
 * 0000000140187237: mov     edx, [r10]
 * 000000014018723A: ror     edx, 5
 * 000000014018723D: xor     edx, eax
 * 000000014018723F: mov     [r10], edx
 * 0000000140187242: add     r11d, 1
 * 0000000140187246: mov     [rcx+6420h], r11d
 * 000000014018724D: and     r11d, 3FFh
 * 0000000140187254: jnz     short loc_14018725D
 * 0000000140187256: mov     [rbp+0E8h+var_148], 1
 * 000000014018725D: mov     r8, [rcx+8]
 * 0000000140187261: sub     rax, [rcx+5BC0h]
 * 0000000140187268: add     [r8+48h], rax
 * 000000014018726C: mov     edx, [r8+50h]
 * 0000000140187270: add     [rcx+5BC0h], rax
 * 0000000140187277: add     rdx, rax
 * 000000014018727A: mov     ecx, edx
 * 000000014018727C: shr     rdx, 20h
 * 0000000140187280: jz      short loc_140187285
 * 0000000140187282: or      ecx, 0FFFFFFFFh
 * 0000000140187285: mov     [r8+50h], ecx
 * 0000000140187289: test    byte ptr [r8+2], 3Eh
 * 000000014018728E: jz      short loc_1401872A4
 * 0000000140187290: mov     rdx, r8
 * 0000000140187293: mov     r8, rax
 * 0000000140187296: mov     rcx, gs:20h
 * 000000014018729F: call    KiEndThreadAccountingPeriod
 * 00000001401872A4: sti
 * 00000001401872A5: cmp     [rbp+0E8h+var_148], 0
 * 00000001401872A9: jz      short loc_1401872B9
 * 00000001401872AB: mov     rcx, gs:20h
 * 00000001401872B4: call    KiEntropyQueueDpc
 * 00000001401872B9: mov     ecx, 3
 * 00000001401872BE: call    HvlRouteInterrupt
 * 00000001401872C3: cli
 * 00000001401872C4: mov     rcx, gs:20h
 * 00000001401872CD: cmp     byte ptr [rcx+20h], 1
 * 00000001401872D1: ja      short loc_140187347
 * 00000001401872D3: rdtsc
 * 00000001401872D5: shl     rdx, 20h
 * 00000001401872D9: or      rax, rdx
 * 00000001401872DC: sub     rax, [rcx+5BC0h]
 * 00000001401872E3: add     [rcx+5C78h], rax
 * 00000001401872EA: add     [rcx+5BC0h], rax
 * 00000001401872F1: mov     r8, rax
 * 00000001401872F4: mov     rax, [rcx+8]
 * 00000001401872F8: test    byte ptr [rax+2], 32h
 * 00000001401872FC: jz      short loc_140187311
 * 00000001401872FE: xor     edx, edx
 * 0000000140187300: call    KiBeginThreadAccountingPeriod
 * 0000000140187305: mov     rcx, gs:20h
 * 000000014018730E: inc     byte ptr [rcx+20h]
 * 0000000140187311: mov     dl, [rcx+6]
 * 0000000140187314: and     byte ptr [rcx+6], 0
 * 0000000140187318: cmp     byte ptr [rcx+7], 0
 * 000000014018731C: jnz     short loc_140187347
 * 000000014018731E: test    dl, dl
 * 0000000140187320: jz      short loc_140187347
 * 0000000140187322: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140187326: jnb     short loc_140187333
 * 0000000140187328: and     byte ptr [rcx+20h], 0
 * 000000014018732C: call    KiDpcInterruptBypass
 * 0000000140187331: jmp     short loc_14018734A
 * 0000000140187333: mov     ecx, 2
 * 0000000140187338: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018733E: mov     rcx, gs:20h
 * 0000000140187347: dec     byte ptr [rcx+20h]
 * 000000014018734A: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018734E: mov     cr8, rcx
 * 0000000140187352: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187359: cli
 * 000000014018735A: test    [rbp+0E8h+arg_0], 1
 * 0000000140187361: jz      loc_140187477
 * 0000000140187367: mov     rcx, gs:188h
 * 0000000140187370: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140187377: jz      short loc_140187392
 * 0000000140187379: mov     ecx, 1
 * 000000014018737E: mov     cr8, rcx
 * 0000000140187382: sti
 * 0000000140187383: call    KiInitiateUserApc
 * 0000000140187388: cli
 * 0000000140187389: mov     ecx, 0
 * 000000014018738E: mov     cr8, rcx
 * 0000000140187392: mov     rcx, gs:188h
 * 000000014018739B: test    dword ptr [rcx], 8000000h
 * 00000001401873A1: jz      short loc_1401873A8
 * 00000001401873A3: call    KiRestoreSetContextState
 * 00000001401873A8: mov     rcx, gs:188h
 * 00000001401873B1: test    dword ptr [rcx], 40010000h
 * 00000001401873B7: jz      short loc_1401873CD
 * 00000001401873B9: test    byte ptr [rcx+2], 1
 * 00000001401873BD: jz      short loc_1401873CD
 * 00000001401873BF: call    KiCopyCounters
 * 00000001401873C4: mov     rcx, gs:188h
 * 00000001401873CD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401873D1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401873D9: jz      short loc_1401873E0
 * 00000001401873DB: call    KiRestoreDebugRegisterState
 * 00000001401873E0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401873E4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401873E8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401873EC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401873F0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401873F4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401873F8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401873FC: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187400: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187404: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187408: movzx   eax, byte ptr gs:27Dh
 * 0000000140187411: cmp     gs:27Ah, al
 * 0000000140187419: jz      short loc_14018742C
 * 000000014018741B: mov     gs:27Ah, al
 * 0000000140187423: mov     ecx, 48h ; 'H'
 * 0000000140187428: xor     edx, edx
 * 000000014018742A: wrmsr
 * 000000014018742C: btr     word ptr gs:278h, 2
 * 0000000140187437: jnb     short loc_140187447
 * 0000000140187439: mov     eax, 1
 * 000000014018743E: xor     edx, edx
 * 0000000140187440: mov     ecx, 49h ; 'I'
 * 0000000140187445: wrmsr
 * 0000000140187447: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018744B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018744F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187453: mov     rsp, rbp
 * 0000000140187456: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018745D: add     rsp, 0E8h
 * 0000000140187464: test    cs:KiKvaShadow, 1
 * 000000014018746B: jz      short loc_140187472
 * 000000014018746D: jmp     KiKernelExit
 * 0000000140187472: swapgs
 * 0000000140187475: iretq
 * 0000000140187477: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018747B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018747F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187483: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187487: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018748B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018748F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187493: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187497: mov     r10, [rbp+0E8h+var_110]
 * 000000014018749B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018749F: mov     r8, [rbp+0E8h+var_120]
 * 00000001401874A3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401874A7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401874AB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401874AF: mov     rsp, rbp
 * 00000001401874B2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401874B9: add     rsp, 0E8h
 * 00000001401874C0: iretq
 */
