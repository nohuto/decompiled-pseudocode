/*
 * XREFs of KiHvInterrupt @ 0x1401AF010
 * Callers:
 *     KiHvInterruptShadow @ 0x1402CFF00 (KiHvInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 *     HvlSharedIsr @ 0x140226D70 (HvlSharedIsr.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 *     KiEpfCompletionIsr @ 0x14024B1F0 (KiEpfCompletionIsr.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1401AF010
 * Reason: Hex-Rays returned no pseudocode for 0x1401AF010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AF010: sub     rsp, 8
 * 00000001401AF014: push    rbp
 * 00000001401AF015: push    rsi
 * 00000001401AF016: sub     rsp, 150h
 * 00000001401AF01D: lea     rbp, [rsp+80h]
 * 00000001401AF025: mov     [rbp+0E8h+var_13D], 0
 * 00000001401AF029: mov     [rbp+0E8h+var_138], rax
 * 00000001401AF02D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401AF031: mov     [rbp+0E8h+var_128], rdx
 * 00000001401AF035: mov     [rbp+0E8h+var_120], r8
 * 00000001401AF039: mov     [rbp+0E8h+var_118], r9
 * 00000001401AF03D: mov     [rbp+0E8h+var_110], r10
 * 00000001401AF041: mov     [rbp+0E8h+var_108], r11
 * 00000001401AF045: test    [rbp+0E8h+arg_0], 1
 * 00000001401AF04C: jnz     short loc_1401AF07B
 * 00000001401AF04E: lfence
 * 00000001401AF051: test    byte ptr gs:278h, 1
 * 00000001401AF05A: jnz     short loc_1401AF064
 * 00000001401AF05C: lfence
 * 00000001401AF05F: jmp     loc_1401AF24E
 * 00000001401AF064: movzx   eax, byte ptr gs:27Ah
 * 00000001401AF06D: mov     ecx, 48h ; 'H'
 * 00000001401AF072: xor     edx, edx
 * 00000001401AF074: wrmsr
 * 00000001401AF076: jmp     loc_1401AF24E
 * 00000001401AF07B: test    cs:KiKvaShadow, 1
 * 00000001401AF082: jnz     short loc_1401AF087
 * 00000001401AF084: swapgs
 * 00000001401AF087: lfence
 * 00000001401AF08A: mov     r10, gs:188h
 * 00000001401AF093: mov     rcx, gs:188h
 * 00000001401AF09C: mov     rcx, [rcx+220h]
 * 00000001401AF0A3: mov     rcx, [rcx+838h]
 * 00000001401AF0AA: mov     gs:270h, rcx
 * 00000001401AF0B3: movzx   eax, byte ptr gs:27Bh
 * 00000001401AF0BC: cmp     gs:27Ah, al
 * 00000001401AF0C4: jz      short loc_1401AF0D7
 * 00000001401AF0C6: mov     gs:27Ah, al
 * 00000001401AF0CE: mov     ecx, 48h ; 'H'
 * 00000001401AF0D3: xor     edx, edx
 * 00000001401AF0D5: wrmsr
 * 00000001401AF0D7: movzx   edx, byte ptr gs:278h
 * 00000001401AF0E0: test    edx, 8
 * 00000001401AF0E6: jz      short loc_1401AF0FB
 * 00000001401AF0E8: mov     eax, 1
 * 00000001401AF0ED: xor     edx, edx
 * 00000001401AF0EF: mov     ecx, 49h ; 'I'
 * 00000001401AF0F4: wrmsr
 * 00000001401AF0F6: jmp     loc_1401AF239
 * 00000001401AF0FB: test    edx, 2
 * 00000001401AF101: jz      loc_1401AF236
 * 00000001401AF107: test    byte ptr gs:279h, 4
 * 00000001401AF110: jnz     loc_1401AF236
 * 00000001401AF116: call    loc_1401AF229
 * 00000001401AF11B: add     rsp, 8
 * 00000001401AF11F: call    loc_1401AF232
 * 00000001401AF124: add     rsp, 8
 * 00000001401AF128: call    loc_1401AF11B
 * 00000001401AF12D: add     rsp, 8
 * 00000001401AF131: call    loc_1401AF124
 * 00000001401AF136: add     rsp, 8
 * 00000001401AF13A: call    loc_1401AF12D
 * 00000001401AF13F: add     rsp, 8
 * 00000001401AF143: call    loc_1401AF136
 * 00000001401AF148: add     rsp, 8
 * 00000001401AF14C: call    loc_1401AF13F
 * 00000001401AF151: add     rsp, 8
 * 00000001401AF155: call    loc_1401AF148
 * 00000001401AF15A: add     rsp, 8
 * 00000001401AF15E: call    loc_1401AF151
 * 00000001401AF163: add     rsp, 8
 * 00000001401AF167: call    loc_1401AF15A
 * 00000001401AF16C: add     rsp, 8
 * 00000001401AF170: call    loc_1401AF163
 * 00000001401AF175: add     rsp, 8
 * 00000001401AF179: call    loc_1401AF16C
 * 00000001401AF17E: add     rsp, 8
 * 00000001401AF182: call    loc_1401AF175
 * 00000001401AF187: add     rsp, 8
 * 00000001401AF18B: call    loc_1401AF17E
 * 00000001401AF190: add     rsp, 8
 * 00000001401AF194: call    loc_1401AF187
 * 00000001401AF199: add     rsp, 8
 * 00000001401AF19D: call    loc_1401AF190
 * 00000001401AF1A2: add     rsp, 8
 * 00000001401AF1A6: call    loc_1401AF199
 * 00000001401AF1AB: add     rsp, 8
 * 00000001401AF1AF: call    loc_1401AF1A2
 * 00000001401AF1B4: add     rsp, 8
 * 00000001401AF1B8: call    loc_1401AF1AB
 * 00000001401AF1BD: add     rsp, 8
 * 00000001401AF1C1: call    loc_1401AF1B4
 * 00000001401AF1C6: add     rsp, 8
 * 00000001401AF1CA: call    loc_1401AF1BD
 * 00000001401AF1CF: add     rsp, 8
 * 00000001401AF1D3: call    loc_1401AF1C6
 * 00000001401AF1D8: add     rsp, 8
 * 00000001401AF1DC: call    loc_1401AF1CF
 * 00000001401AF1E1: add     rsp, 8
 * 00000001401AF1E5: call    loc_1401AF1D8
 * 00000001401AF1EA: add     rsp, 8
 * 00000001401AF1EE: call    loc_1401AF1E1
 * 00000001401AF1F3: add     rsp, 8
 * 00000001401AF1F7: call    loc_1401AF1EA
 * 00000001401AF1FC: add     rsp, 8
 * 00000001401AF200: call    loc_1401AF1F3
 * 00000001401AF205: add     rsp, 8
 * 00000001401AF209: call    loc_1401AF1FC
 * 00000001401AF20E: add     rsp, 8
 * 00000001401AF212: call    loc_1401AF205
 * 00000001401AF217: add     rsp, 8
 * 00000001401AF21B: call    loc_1401AF20E
 * 00000001401AF220: add     rsp, 8
 * 00000001401AF224: call    loc_1401AF217
 * 00000001401AF229: add     rsp, 8
 * 00000001401AF22D: call    loc_1401AF220
 * 00000001401AF232: add     rsp, 8
 * 00000001401AF236: lfence
 * 00000001401AF239: test    byte ptr [r10+3], 3
 * 00000001401AF23E: mov     [rbp+0E8h+var_68], 0
 * 00000001401AF247: jz      short loc_1401AF24E
 * 00000001401AF249: call    KiSaveDebugRegisterState
 * 00000001401AF24E: cld
 * 00000001401AF24F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401AF253: ldmxcsr dword ptr gs:180h
 * 00000001401AF25C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401AF260: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401AF264: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401AF268: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401AF26C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401AF270: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401AF274: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401AF27D: jz      short loc_1401AF284
 * 00000001401AF27F: call    KeWakeProcessor
 * 00000001401AF284: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401AF28B: cmp     rax, [rbp+0E8h]
 * 00000001401AF292: jnb     short loc_1401AF2AD
 * 00000001401AF294: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401AF29B: cmp     rax, [rbp+0E8h]
 * 00000001401AF2A2: jb      short loc_1401AF2AD
 * 00000001401AF2A4: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401AF2A8: call    KiCheckForSListAddress
 * 00000001401AF2AD: xor     esi, esi
 * 00000001401AF2AF: inc     dword ptr gs:5D00h
 * 00000001401AF2B7: mov     ecx, 3
 * 00000001401AF2BC: mov     rax, cr8
 * 00000001401AF2C0: mov     cr8, rcx
 * 00000001401AF2C4: mov     [rbp+0E8h+var_13F], al
 * 00000001401AF2C7: mov     [rbp+0E8h+var_148], 0
 * 00000001401AF2CE: mov     rcx, gs:20h
 * 00000001401AF2D7: inc     byte ptr [rcx+20h]
 * 00000001401AF2DA: cmp     byte ptr [rcx+20h], 1
 * 00000001401AF2DE: jnz     loc_1401AF374
 * 00000001401AF2E4: rdtsc
 * 00000001401AF2E6: shl     rdx, 20h
 * 00000001401AF2EA: or      rax, rdx
 * 00000001401AF2ED: mov     edx, [rcx+62E0h]
 * 00000001401AF2F3: mov     r11d, edx
 * 00000001401AF2F6: and     edx, 7FFh
 * 00000001401AF2FC: shr     edx, 5
 * 00000001401AF2FF: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401AF307: mov     edx, [r10]
 * 00000001401AF30A: ror     edx, 5
 * 00000001401AF30D: xor     edx, eax
 * 00000001401AF30F: mov     [r10], edx
 * 00000001401AF312: add     r11d, 1
 * 00000001401AF316: mov     [rcx+62E0h], r11d
 * 00000001401AF31D: and     r11d, 3FFh
 * 00000001401AF324: jnz     short loc_1401AF32D
 * 00000001401AF326: mov     [rbp+0E8h+var_148], 1
 * 00000001401AF32D: mov     r8, [rcx+8]
 * 00000001401AF331: sub     rax, [rcx+5BC0h]
 * 00000001401AF338: add     [r8+48h], rax
 * 00000001401AF33C: mov     edx, [r8+50h]
 * 00000001401AF340: add     [rcx+5BC0h], rax
 * 00000001401AF347: add     rdx, rax
 * 00000001401AF34A: mov     ecx, edx
 * 00000001401AF34C: shr     rdx, 20h
 * 00000001401AF350: jz      short loc_1401AF355
 * 00000001401AF352: or      ecx, 0FFFFFFFFh
 * 00000001401AF355: mov     [r8+50h], ecx
 * 00000001401AF359: test    byte ptr [r8+2], 3Eh
 * 00000001401AF35E: jz      short loc_1401AF374
 * 00000001401AF360: mov     rdx, r8
 * 00000001401AF363: mov     r8, rax
 * 00000001401AF366: mov     rcx, gs:20h
 * 00000001401AF36F: call    KiEndThreadAccountingPeriod
 * 00000001401AF374: sti
 * 00000001401AF375: cmp     [rbp+0E8h+var_148], 0
 * 00000001401AF379: jz      short loc_1401AF389
 * 00000001401AF37B: mov     rcx, gs:20h
 * 00000001401AF384: call    KiEntropyQueueDpc
 * 00000001401AF389: call    KiEpfCompletionIsr
 * 00000001401AF38E: call    HvlSharedIsr
 * 00000001401AF393: xor     ecx, ecx
 * 00000001401AF395: call    HvlRouteInterrupt
 * 00000001401AF39A: test    cs:HvlEnlightenments, 1000h
 * 00000001401AF3A4: jz      short loc_1401AF3B0
 * 00000001401AF3A6: cli
 * 00000001401AF3A7: mov     rcx, rsi
 * 00000001401AF3AA: call    HalPerformEndOfInterrupt_0
 * 00000001401AF3AF: sti
 * 00000001401AF3B0: cli
 * 00000001401AF3B1: mov     rcx, gs:20h
 * 00000001401AF3BA: cmp     byte ptr [rcx+20h], 1
 * 00000001401AF3BE: ja      short loc_1401AF434
 * 00000001401AF3C0: rdtsc
 * 00000001401AF3C2: shl     rdx, 20h
 * 00000001401AF3C6: or      rax, rdx
 * 00000001401AF3C9: sub     rax, [rcx+5BC0h]
 * 00000001401AF3D0: add     [rcx+5C38h], rax
 * 00000001401AF3D7: add     [rcx+5BC0h], rax
 * 00000001401AF3DE: mov     r8, rax
 * 00000001401AF3E1: mov     rax, [rcx+8]
 * 00000001401AF3E5: test    byte ptr [rax+2], 72h
 * 00000001401AF3E9: jz      short loc_1401AF3FE
 * 00000001401AF3EB: xor     edx, edx
 * 00000001401AF3ED: call    KiBeginThreadAccountingPeriod
 * 00000001401AF3F2: mov     rcx, gs:20h
 * 00000001401AF3FB: inc     byte ptr [rcx+20h]
 * 00000001401AF3FE: mov     dl, [rcx+6]
 * 00000001401AF401: and     byte ptr [rcx+6], 0
 * 00000001401AF405: cmp     byte ptr [rcx+7], 0
 * 00000001401AF409: jnz     short loc_1401AF434
 * 00000001401AF40B: test    dl, dl
 * 00000001401AF40D: jz      short loc_1401AF434
 * 00000001401AF40F: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401AF413: jnb     short loc_1401AF420
 * 00000001401AF415: and     byte ptr [rcx+20h], 0
 * 00000001401AF419: call    KiDpcInterruptBypass
 * 00000001401AF41E: jmp     short loc_1401AF437
 * 00000001401AF420: mov     ecx, 2
 * 00000001401AF425: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401AF42B: mov     rcx, gs:20h
 * 00000001401AF434: dec     byte ptr [rcx+20h]
 * 00000001401AF437: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401AF43B: mov     cr8, rcx
 * 00000001401AF43F: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401AF446: cli
 * 00000001401AF447: test    [rbp+0E8h+arg_0], 1
 * 00000001401AF44E: jz      loc_1401AF564
 * 00000001401AF454: mov     rcx, gs:188h
 * 00000001401AF45D: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401AF464: jz      short loc_1401AF47F
 * 00000001401AF466: mov     ecx, 1
 * 00000001401AF46B: mov     cr8, rcx
 * 00000001401AF46F: sti
 * 00000001401AF470: call    KiInitiateUserApc
 * 00000001401AF475: cli
 * 00000001401AF476: mov     ecx, 0
 * 00000001401AF47B: mov     cr8, rcx
 * 00000001401AF47F: mov     rcx, gs:188h
 * 00000001401AF488: test    dword ptr [rcx], 8000000h
 * 00000001401AF48E: jz      short loc_1401AF495
 * 00000001401AF490: call    KiRestoreSetContextState
 * 00000001401AF495: mov     rcx, gs:188h
 * 00000001401AF49E: test    dword ptr [rcx], 40010000h
 * 00000001401AF4A4: jz      short loc_1401AF4BA
 * 00000001401AF4A6: test    byte ptr [rcx+2], 1
 * 00000001401AF4AA: jz      short loc_1401AF4BA
 * 00000001401AF4AC: call    KiCopyCounters
 * 00000001401AF4B1: mov     rcx, gs:188h
 * 00000001401AF4BA: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401AF4BE: cmp     [rbp+0E8h+var_68], 0
 * 00000001401AF4C6: jz      short loc_1401AF4CD
 * 00000001401AF4C8: call    KiRestoreDebugRegisterState
 * 00000001401AF4CD: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401AF4D1: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401AF4D5: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401AF4D9: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401AF4DD: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401AF4E1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401AF4E5: mov     r11, [rbp+0E8h+var_108]
 * 00000001401AF4E9: mov     r10, [rbp+0E8h+var_110]
 * 00000001401AF4ED: mov     r9, [rbp+0E8h+var_118]
 * 00000001401AF4F1: mov     r8, [rbp+0E8h+var_120]
 * 00000001401AF4F5: movzx   eax, byte ptr gs:27Dh
 * 00000001401AF4FE: cmp     gs:27Ah, al
 * 00000001401AF506: jz      short loc_1401AF519
 * 00000001401AF508: mov     gs:27Ah, al
 * 00000001401AF510: mov     ecx, 48h ; 'H'
 * 00000001401AF515: xor     edx, edx
 * 00000001401AF517: wrmsr
 * 00000001401AF519: btr     word ptr gs:278h, 2
 * 00000001401AF524: jnb     short loc_1401AF534
 * 00000001401AF526: mov     eax, 1
 * 00000001401AF52B: xor     edx, edx
 * 00000001401AF52D: mov     ecx, 49h ; 'I'
 * 00000001401AF532: wrmsr
 * 00000001401AF534: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401AF538: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401AF53C: mov     rax, [rbp+0E8h+var_138]
 * 00000001401AF540: mov     rsp, rbp
 * 00000001401AF543: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401AF54A: add     rsp, 0E8h
 * 00000001401AF551: test    cs:KiKvaShadow, 1
 * 00000001401AF558: jz      short loc_1401AF55F
 * 00000001401AF55A: jmp     KiKernelExit
 * 00000001401AF55F: swapgs
 * 00000001401AF562: iretq
 * 00000001401AF564: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401AF568: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401AF56C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401AF570: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401AF574: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401AF578: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401AF57C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401AF580: mov     r11, [rbp+0E8h+var_108]
 * 00000001401AF584: mov     r10, [rbp+0E8h+var_110]
 * 00000001401AF588: mov     r9, [rbp+0E8h+var_118]
 * 00000001401AF58C: mov     r8, [rbp+0E8h+var_120]
 * 00000001401AF590: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401AF594: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401AF598: mov     rax, [rbp+0E8h+var_138]
 * 00000001401AF59C: mov     rsp, rbp
 * 00000001401AF59F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401AF5A6: add     rsp, 0E8h
 * 00000001401AF5AD: iretq
 */
