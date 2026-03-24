/*
 * XREFs of KiVmbusInterrupt3 @ 0x140186F80
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140298100 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x140127180 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140186F80
 * Reason: Hex-Rays returned no pseudocode for 0x140186F80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140186F80: sub     rsp, 8
 * 0000000140186F84: push    rbp
 * 0000000140186F85: push    rsi
 * 0000000140186F86: sub     rsp, 150h
 * 0000000140186F8D: lea     rbp, [rsp+80h]
 * 0000000140186F95: mov     [rbp+0E8h+var_13D], 0
 * 0000000140186F99: mov     [rbp+0E8h+var_138], rax
 * 0000000140186F9D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140186FA1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140186FA5: mov     [rbp+0E8h+var_120], r8
 * 0000000140186FA9: mov     [rbp+0E8h+var_118], r9
 * 0000000140186FAD: mov     [rbp+0E8h+var_110], r10
 * 0000000140186FB1: mov     [rbp+0E8h+var_108], r11
 * 0000000140186FB5: test    [rbp+0E8h+arg_0], 1
 * 0000000140186FBC: jnz     short loc_140186FEB
 * 0000000140186FBE: lfence
 * 0000000140186FC1: test    byte ptr gs:278h, 1
 * 0000000140186FCA: jnz     short loc_140186FD4
 * 0000000140186FCC: lfence
 * 0000000140186FCF: jmp     loc_1401871BE
 * 0000000140186FD4: movzx   eax, byte ptr gs:27Ah
 * 0000000140186FDD: mov     ecx, 48h ; 'H'
 * 0000000140186FE2: xor     edx, edx
 * 0000000140186FE4: wrmsr
 * 0000000140186FE6: jmp     loc_1401871BE
 * 0000000140186FEB: test    cs:KiKvaShadow, 1
 * 0000000140186FF2: jnz     short loc_140186FF7
 * 0000000140186FF4: swapgs
 * 0000000140186FF7: lfence
 * 0000000140186FFA: mov     r10, gs:188h
 * 0000000140187003: mov     rcx, gs:188h
 * 000000014018700C: mov     rcx, [rcx+220h]
 * 0000000140187013: mov     rcx, [rcx+838h]
 * 000000014018701A: mov     gs:270h, rcx
 * 0000000140187023: movzx   eax, byte ptr gs:27Bh
 * 000000014018702C: cmp     gs:27Ah, al
 * 0000000140187034: jz      short loc_140187047
 * 0000000140187036: mov     gs:27Ah, al
 * 000000014018703E: mov     ecx, 48h ; 'H'
 * 0000000140187043: xor     edx, edx
 * 0000000140187045: wrmsr
 * 0000000140187047: movzx   edx, byte ptr gs:278h
 * 0000000140187050: test    edx, 8
 * 0000000140187056: jz      short loc_14018706B
 * 0000000140187058: mov     eax, 1
 * 000000014018705D: xor     edx, edx
 * 000000014018705F: mov     ecx, 49h ; 'I'
 * 0000000140187064: wrmsr
 * 0000000140187066: jmp     loc_1401871A9
 * 000000014018706B: test    edx, 2
 * 0000000140187071: jz      loc_1401871A6
 * 0000000140187077: test    byte ptr gs:279h, 4
 * 0000000140187080: jnz     loc_1401871A6
 * 0000000140187086: call    loc_140187199
 * 000000014018708B: add     rsp, 8
 * 000000014018708F: call    loc_1401871A2
 * 0000000140187094: add     rsp, 8
 * 0000000140187098: call    loc_14018708B
 * 000000014018709D: add     rsp, 8
 * 00000001401870A1: call    loc_140187094
 * 00000001401870A6: add     rsp, 8
 * 00000001401870AA: call    loc_14018709D
 * 00000001401870AF: add     rsp, 8
 * 00000001401870B3: call    loc_1401870A6
 * 00000001401870B8: add     rsp, 8
 * 00000001401870BC: call    loc_1401870AF
 * 00000001401870C1: add     rsp, 8
 * 00000001401870C5: call    loc_1401870B8
 * 00000001401870CA: add     rsp, 8
 * 00000001401870CE: call    loc_1401870C1
 * 00000001401870D3: add     rsp, 8
 * 00000001401870D7: call    loc_1401870CA
 * 00000001401870DC: add     rsp, 8
 * 00000001401870E0: call    loc_1401870D3
 * 00000001401870E5: add     rsp, 8
 * 00000001401870E9: call    loc_1401870DC
 * 00000001401870EE: add     rsp, 8
 * 00000001401870F2: call    loc_1401870E5
 * 00000001401870F7: add     rsp, 8
 * 00000001401870FB: call    loc_1401870EE
 * 0000000140187100: add     rsp, 8
 * 0000000140187104: call    loc_1401870F7
 * 0000000140187109: add     rsp, 8
 * 000000014018710D: call    loc_140187100
 * 0000000140187112: add     rsp, 8
 * 0000000140187116: call    loc_140187109
 * 000000014018711B: add     rsp, 8
 * 000000014018711F: call    loc_140187112
 * 0000000140187124: add     rsp, 8
 * 0000000140187128: call    loc_14018711B
 * 000000014018712D: add     rsp, 8
 * 0000000140187131: call    loc_140187124
 * 0000000140187136: add     rsp, 8
 * 000000014018713A: call    loc_14018712D
 * 000000014018713F: add     rsp, 8
 * 0000000140187143: call    loc_140187136
 * 0000000140187148: add     rsp, 8
 * 000000014018714C: call    loc_14018713F
 * 0000000140187151: add     rsp, 8
 * 0000000140187155: call    loc_140187148
 * 000000014018715A: add     rsp, 8
 * 000000014018715E: call    loc_140187151
 * 0000000140187163: add     rsp, 8
 * 0000000140187167: call    loc_14018715A
 * 000000014018716C: add     rsp, 8
 * 0000000140187170: call    loc_140187163
 * 0000000140187175: add     rsp, 8
 * 0000000140187179: call    loc_14018716C
 * 000000014018717E: add     rsp, 8
 * 0000000140187182: call    loc_140187175
 * 0000000140187187: add     rsp, 8
 * 000000014018718B: call    loc_14018717E
 * 0000000140187190: add     rsp, 8
 * 0000000140187194: call    loc_140187187
 * 0000000140187199: add     rsp, 8
 * 000000014018719D: call    loc_140187190
 * 00000001401871A2: add     rsp, 8
 * 00000001401871A6: lfence
 * 00000001401871A9: test    byte ptr [r10+3], 3
 * 00000001401871AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401871B7: jz      short loc_1401871BE
 * 00000001401871B9: call    KiSaveDebugRegisterState
 * 00000001401871BE: cld
 * 00000001401871BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401871C3: ldmxcsr dword ptr gs:180h
 * 00000001401871CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401871D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401871D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401871D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401871DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401871E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401871E4: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401871ED: jz      short loc_1401871F4
 * 00000001401871EF: call    KeWakeProcessor
 * 00000001401871F4: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401871FB: cmp     rax, [rbp+0E8h]
 * 0000000140187202: jnb     short loc_14018721D
 * 0000000140187204: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018720B: cmp     rax, [rbp+0E8h]
 * 0000000140187212: jb      short loc_14018721D
 * 0000000140187214: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140187218: call    KiCheckForSListAddress
 * 000000014018721D: xor     esi, esi
 * 000000014018721F: inc     dword ptr gs:5D00h
 * 0000000140187227: mov     ecx, 3
 * 000000014018722C: mov     rax, cr8
 * 0000000140187230: mov     cr8, rcx
 * 0000000140187234: mov     [rbp+0E8h+var_13F], al
 * 0000000140187237: mov     [rbp+0E8h+var_148], 0
 * 000000014018723E: mov     rcx, gs:20h
 * 0000000140187247: inc     byte ptr [rcx+20h]
 * 000000014018724A: cmp     byte ptr [rcx+20h], 1
 * 000000014018724E: jnz     loc_1401872E4
 * 0000000140187254: rdtsc
 * 0000000140187256: shl     rdx, 20h
 * 000000014018725A: or      rax, rdx
 * 000000014018725D: mov     edx, [rcx+62E0h]
 * 0000000140187263: mov     r11d, edx
 * 0000000140187266: and     edx, 7FFh
 * 000000014018726C: shr     edx, 5
 * 000000014018726F: lea     r10, [rcx+rdx*4+62E4h]
 * 0000000140187277: mov     edx, [r10]
 * 000000014018727A: ror     edx, 5
 * 000000014018727D: xor     edx, eax
 * 000000014018727F: mov     [r10], edx
 * 0000000140187282: add     r11d, 1
 * 0000000140187286: mov     [rcx+62E0h], r11d
 * 000000014018728D: and     r11d, 3FFh
 * 0000000140187294: jnz     short loc_14018729D
 * 0000000140187296: mov     [rbp+0E8h+var_148], 1
 * 000000014018729D: mov     r8, [rcx+8]
 * 00000001401872A1: sub     rax, [rcx+5BC0h]
 * 00000001401872A8: add     [r8+48h], rax
 * 00000001401872AC: mov     edx, [r8+50h]
 * 00000001401872B0: add     [rcx+5BC0h], rax
 * 00000001401872B7: add     rdx, rax
 * 00000001401872BA: mov     ecx, edx
 * 00000001401872BC: shr     rdx, 20h
 * 00000001401872C0: jz      short loc_1401872C5
 * 00000001401872C2: or      ecx, 0FFFFFFFFh
 * 00000001401872C5: mov     [r8+50h], ecx
 * 00000001401872C9: test    byte ptr [r8+2], 3Eh
 * 00000001401872CE: jz      short loc_1401872E4
 * 00000001401872D0: mov     rdx, r8
 * 00000001401872D3: mov     r8, rax
 * 00000001401872D6: mov     rcx, gs:20h
 * 00000001401872DF: call    KiEndThreadAccountingPeriod
 * 00000001401872E4: sti
 * 00000001401872E5: cmp     [rbp+0E8h+var_148], 0
 * 00000001401872E9: jz      short loc_1401872F9
 * 00000001401872EB: mov     rcx, gs:20h
 * 00000001401872F4: call    KiEntropyQueueDpc
 * 00000001401872F9: mov     ecx, 4
 * 00000001401872FE: call    HvlRouteInterrupt
 * 0000000140187303: cli
 * 0000000140187304: mov     rcx, gs:20h
 * 000000014018730D: cmp     byte ptr [rcx+20h], 1
 * 0000000140187311: ja      short loc_140187387
 * 0000000140187313: rdtsc
 * 0000000140187315: shl     rdx, 20h
 * 0000000140187319: or      rax, rdx
 * 000000014018731C: sub     rax, [rcx+5BC0h]
 * 0000000140187323: add     [rcx+5C38h], rax
 * 000000014018732A: add     [rcx+5BC0h], rax
 * 0000000140187331: mov     r8, rax
 * 0000000140187334: mov     rax, [rcx+8]
 * 0000000140187338: test    byte ptr [rax+2], 32h
 * 000000014018733C: jz      short loc_140187351
 * 000000014018733E: xor     edx, edx
 * 0000000140187340: call    KiBeginThreadAccountingPeriod
 * 0000000140187345: mov     rcx, gs:20h
 * 000000014018734E: inc     byte ptr [rcx+20h]
 * 0000000140187351: mov     dl, [rcx+6]
 * 0000000140187354: and     byte ptr [rcx+6], 0
 * 0000000140187358: cmp     byte ptr [rcx+7], 0
 * 000000014018735C: jnz     short loc_140187387
 * 000000014018735E: test    dl, dl
 * 0000000140187360: jz      short loc_140187387
 * 0000000140187362: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140187366: jnb     short loc_140187373
 * 0000000140187368: and     byte ptr [rcx+20h], 0
 * 000000014018736C: call    KiDpcInterruptBypass
 * 0000000140187371: jmp     short loc_14018738A
 * 0000000140187373: mov     ecx, 2
 * 0000000140187378: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018737E: mov     rcx, gs:20h
 * 0000000140187387: dec     byte ptr [rcx+20h]
 * 000000014018738A: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014018738E: mov     cr8, rcx
 * 0000000140187392: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187399: cli
 * 000000014018739A: test    [rbp+0E8h+arg_0], 1
 * 00000001401873A1: jz      loc_1401874B7
 * 00000001401873A7: mov     rcx, gs:188h
 * 00000001401873B0: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401873B7: jz      short loc_1401873D2
 * 00000001401873B9: mov     ecx, 1
 * 00000001401873BE: mov     cr8, rcx
 * 00000001401873C2: sti
 * 00000001401873C3: call    KiInitiateUserApc
 * 00000001401873C8: cli
 * 00000001401873C9: mov     ecx, 0
 * 00000001401873CE: mov     cr8, rcx
 * 00000001401873D2: mov     rcx, gs:188h
 * 00000001401873DB: test    dword ptr [rcx], 8000000h
 * 00000001401873E1: jz      short loc_1401873E8
 * 00000001401873E3: call    KiRestoreSetContextState
 * 00000001401873E8: mov     rcx, gs:188h
 * 00000001401873F1: test    dword ptr [rcx], 40010000h
 * 00000001401873F7: jz      short loc_14018740D
 * 00000001401873F9: test    byte ptr [rcx+2], 1
 * 00000001401873FD: jz      short loc_14018740D
 * 00000001401873FF: call    KiCopyCounters
 * 0000000140187404: mov     rcx, gs:188h
 * 000000014018740D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187411: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187419: jz      short loc_140187420
 * 000000014018741B: call    KiRestoreDebugRegisterState
 * 0000000140187420: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187424: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187428: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018742C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187430: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187434: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187438: mov     r11, [rbp+0E8h+var_108]
 * 000000014018743C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187440: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187444: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187448: movzx   eax, byte ptr gs:27Dh
 * 0000000140187451: cmp     gs:27Ah, al
 * 0000000140187459: jz      short loc_14018746C
 * 000000014018745B: mov     gs:27Ah, al
 * 0000000140187463: mov     ecx, 48h ; 'H'
 * 0000000140187468: xor     edx, edx
 * 000000014018746A: wrmsr
 * 000000014018746C: btr     word ptr gs:278h, 2
 * 0000000140187477: jnb     short loc_140187487
 * 0000000140187479: mov     eax, 1
 * 000000014018747E: xor     edx, edx
 * 0000000140187480: mov     ecx, 49h ; 'I'
 * 0000000140187485: wrmsr
 * 0000000140187487: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018748B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018748F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187493: mov     rsp, rbp
 * 0000000140187496: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018749D: add     rsp, 0E8h
 * 00000001401874A4: test    cs:KiKvaShadow, 1
 * 00000001401874AB: jz      short loc_1401874B2
 * 00000001401874AD: jmp     KiKernelExit
 * 00000001401874B2: swapgs
 * 00000001401874B5: iretq
 * 00000001401874B7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401874BB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401874BF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401874C3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401874C7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401874CB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401874CF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401874D3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401874D7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401874DB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401874DF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401874E3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401874E7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401874EB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401874EF: mov     rsp, rbp
 * 00000001401874F2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401874F9: add     rsp, 0E8h
 * 0000000140187500: iretq
 */
