/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401B0080
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x1402D0000 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400C76A0 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401B0080
 * Reason: Hex-Rays returned no pseudocode for 0x1401B0080
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B0080: sub     rsp, 8
 * 00000001401B0084: push    rbp
 * 00000001401B0085: push    rsi
 * 00000001401B0086: sub     rsp, 150h
 * 00000001401B008D: lea     rbp, [rsp+80h]
 * 00000001401B0095: mov     [rbp+0E8h+var_13D], 0
 * 00000001401B0099: mov     [rbp+0E8h+var_138], rax
 * 00000001401B009D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B00A1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B00A5: mov     [rbp+0E8h+var_120], r8
 * 00000001401B00A9: mov     [rbp+0E8h+var_118], r9
 * 00000001401B00AD: mov     [rbp+0E8h+var_110], r10
 * 00000001401B00B1: mov     [rbp+0E8h+var_108], r11
 * 00000001401B00B5: test    [rbp+0E8h+arg_0], 1
 * 00000001401B00BC: jnz     short loc_1401B00EB
 * 00000001401B00BE: lfence
 * 00000001401B00C1: test    byte ptr gs:278h, 1
 * 00000001401B00CA: jnz     short loc_1401B00D4
 * 00000001401B00CC: lfence
 * 00000001401B00CF: jmp     loc_1401B02BE
 * 00000001401B00D4: movzx   eax, byte ptr gs:27Ah
 * 00000001401B00DD: mov     ecx, 48h ; 'H'
 * 00000001401B00E2: xor     edx, edx
 * 00000001401B00E4: wrmsr
 * 00000001401B00E6: jmp     loc_1401B02BE
 * 00000001401B00EB: test    cs:KiKvaShadow, 1
 * 00000001401B00F2: jnz     short loc_1401B00F7
 * 00000001401B00F4: swapgs
 * 00000001401B00F7: lfence
 * 00000001401B00FA: mov     r10, gs:188h
 * 00000001401B0103: mov     rcx, gs:188h
 * 00000001401B010C: mov     rcx, [rcx+220h]
 * 00000001401B0113: mov     rcx, [rcx+838h]
 * 00000001401B011A: mov     gs:270h, rcx
 * 00000001401B0123: movzx   eax, byte ptr gs:27Bh
 * 00000001401B012C: cmp     gs:27Ah, al
 * 00000001401B0134: jz      short loc_1401B0147
 * 00000001401B0136: mov     gs:27Ah, al
 * 00000001401B013E: mov     ecx, 48h ; 'H'
 * 00000001401B0143: xor     edx, edx
 * 00000001401B0145: wrmsr
 * 00000001401B0147: movzx   edx, byte ptr gs:278h
 * 00000001401B0150: test    edx, 8
 * 00000001401B0156: jz      short loc_1401B016B
 * 00000001401B0158: mov     eax, 1
 * 00000001401B015D: xor     edx, edx
 * 00000001401B015F: mov     ecx, 49h ; 'I'
 * 00000001401B0164: wrmsr
 * 00000001401B0166: jmp     loc_1401B02A9
 * 00000001401B016B: test    edx, 2
 * 00000001401B0171: jz      loc_1401B02A6
 * 00000001401B0177: test    byte ptr gs:279h, 4
 * 00000001401B0180: jnz     loc_1401B02A6
 * 00000001401B0186: call    loc_1401B0299
 * 00000001401B018B: add     rsp, 8
 * 00000001401B018F: call    loc_1401B02A2
 * 00000001401B0194: add     rsp, 8
 * 00000001401B0198: call    loc_1401B018B
 * 00000001401B019D: add     rsp, 8
 * 00000001401B01A1: call    loc_1401B0194
 * 00000001401B01A6: add     rsp, 8
 * 00000001401B01AA: call    loc_1401B019D
 * 00000001401B01AF: add     rsp, 8
 * 00000001401B01B3: call    loc_1401B01A6
 * 00000001401B01B8: add     rsp, 8
 * 00000001401B01BC: call    loc_1401B01AF
 * 00000001401B01C1: add     rsp, 8
 * 00000001401B01C5: call    loc_1401B01B8
 * 00000001401B01CA: add     rsp, 8
 * 00000001401B01CE: call    loc_1401B01C1
 * 00000001401B01D3: add     rsp, 8
 * 00000001401B01D7: call    loc_1401B01CA
 * 00000001401B01DC: add     rsp, 8
 * 00000001401B01E0: call    loc_1401B01D3
 * 00000001401B01E5: add     rsp, 8
 * 00000001401B01E9: call    loc_1401B01DC
 * 00000001401B01EE: add     rsp, 8
 * 00000001401B01F2: call    loc_1401B01E5
 * 00000001401B01F7: add     rsp, 8
 * 00000001401B01FB: call    loc_1401B01EE
 * 00000001401B0200: add     rsp, 8
 * 00000001401B0204: call    loc_1401B01F7
 * 00000001401B0209: add     rsp, 8
 * 00000001401B020D: call    loc_1401B0200
 * 00000001401B0212: add     rsp, 8
 * 00000001401B0216: call    loc_1401B0209
 * 00000001401B021B: add     rsp, 8
 * 00000001401B021F: call    loc_1401B0212
 * 00000001401B0224: add     rsp, 8
 * 00000001401B0228: call    loc_1401B021B
 * 00000001401B022D: add     rsp, 8
 * 00000001401B0231: call    loc_1401B0224
 * 00000001401B0236: add     rsp, 8
 * 00000001401B023A: call    loc_1401B022D
 * 00000001401B023F: add     rsp, 8
 * 00000001401B0243: call    loc_1401B0236
 * 00000001401B0248: add     rsp, 8
 * 00000001401B024C: call    loc_1401B023F
 * 00000001401B0251: add     rsp, 8
 * 00000001401B0255: call    loc_1401B0248
 * 00000001401B025A: add     rsp, 8
 * 00000001401B025E: call    loc_1401B0251
 * 00000001401B0263: add     rsp, 8
 * 00000001401B0267: call    loc_1401B025A
 * 00000001401B026C: add     rsp, 8
 * 00000001401B0270: call    loc_1401B0263
 * 00000001401B0275: add     rsp, 8
 * 00000001401B0279: call    loc_1401B026C
 * 00000001401B027E: add     rsp, 8
 * 00000001401B0282: call    loc_1401B0275
 * 00000001401B0287: add     rsp, 8
 * 00000001401B028B: call    loc_1401B027E
 * 00000001401B0290: add     rsp, 8
 * 00000001401B0294: call    loc_1401B0287
 * 00000001401B0299: add     rsp, 8
 * 00000001401B029D: call    loc_1401B0290
 * 00000001401B02A2: add     rsp, 8
 * 00000001401B02A6: lfence
 * 00000001401B02A9: test    byte ptr [r10+3], 3
 * 00000001401B02AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401B02B7: jz      short loc_1401B02BE
 * 00000001401B02B9: call    KiSaveDebugRegisterState
 * 00000001401B02BE: cld
 * 00000001401B02BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B02C3: ldmxcsr dword ptr gs:180h
 * 00000001401B02CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B02D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B02D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B02D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B02DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B02E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B02E4: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401B02ED: jz      short loc_1401B02F4
 * 00000001401B02EF: call    KeWakeProcessor
 * 00000001401B02F4: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401B02FB: cmp     rax, [rbp+0E8h]
 * 00000001401B0302: jnb     short loc_1401B031D
 * 00000001401B0304: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401B030B: cmp     rax, [rbp+0E8h]
 * 00000001401B0312: jb      short loc_1401B031D
 * 00000001401B0314: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401B0318: call    KiCheckForSListAddress
 * 00000001401B031D: xor     esi, esi
 * 00000001401B031F: inc     dword ptr gs:5D00h
 * 00000001401B0327: mov     ecx, 3
 * 00000001401B032C: mov     rax, cr8
 * 00000001401B0330: mov     cr8, rcx
 * 00000001401B0334: mov     [rbp+0E8h+var_13F], al
 * 00000001401B0337: mov     [rbp+0E8h+var_148], 0
 * 00000001401B033E: mov     rcx, gs:20h
 * 00000001401B0347: inc     byte ptr [rcx+20h]
 * 00000001401B034A: cmp     byte ptr [rcx+20h], 1
 * 00000001401B034E: jnz     loc_1401B03E4
 * 00000001401B0354: rdtsc
 * 00000001401B0356: shl     rdx, 20h
 * 00000001401B035A: or      rax, rdx
 * 00000001401B035D: mov     edx, [rcx+62E0h]
 * 00000001401B0363: mov     r11d, edx
 * 00000001401B0366: and     edx, 7FFh
 * 00000001401B036C: shr     edx, 5
 * 00000001401B036F: lea     r10, [rcx+rdx*4+62E4h]
 * 00000001401B0377: mov     edx, [r10]
 * 00000001401B037A: ror     edx, 5
 * 00000001401B037D: xor     edx, eax
 * 00000001401B037F: mov     [r10], edx
 * 00000001401B0382: add     r11d, 1
 * 00000001401B0386: mov     [rcx+62E0h], r11d
 * 00000001401B038D: and     r11d, 3FFh
 * 00000001401B0394: jnz     short loc_1401B039D
 * 00000001401B0396: mov     [rbp+0E8h+var_148], 1
 * 00000001401B039D: mov     r8, [rcx+8]
 * 00000001401B03A1: sub     rax, [rcx+5BC0h]
 * 00000001401B03A8: add     [r8+48h], rax
 * 00000001401B03AC: mov     edx, [r8+50h]
 * 00000001401B03B0: add     [rcx+5BC0h], rax
 * 00000001401B03B7: add     rdx, rax
 * 00000001401B03BA: mov     ecx, edx
 * 00000001401B03BC: shr     rdx, 20h
 * 00000001401B03C0: jz      short loc_1401B03C5
 * 00000001401B03C2: or      ecx, 0FFFFFFFFh
 * 00000001401B03C5: mov     [r8+50h], ecx
 * 00000001401B03C9: test    byte ptr [r8+2], 3Eh
 * 00000001401B03CE: jz      short loc_1401B03E4
 * 00000001401B03D0: mov     rdx, r8
 * 00000001401B03D3: mov     r8, rax
 * 00000001401B03D6: mov     rcx, gs:20h
 * 00000001401B03DF: call    KiEndThreadAccountingPeriod
 * 00000001401B03E4: sti
 * 00000001401B03E5: cmp     [rbp+0E8h+var_148], 0
 * 00000001401B03E9: jz      short loc_1401B03F9
 * 00000001401B03EB: mov     rcx, gs:20h
 * 00000001401B03F4: call    KiEntropyQueueDpc
 * 00000001401B03F9: mov     ecx, 2
 * 00000001401B03FE: call    HvlRouteInterrupt
 * 00000001401B0403: cli
 * 00000001401B0404: mov     rcx, gs:20h
 * 00000001401B040D: cmp     byte ptr [rcx+20h], 1
 * 00000001401B0411: ja      short loc_1401B0487
 * 00000001401B0413: rdtsc
 * 00000001401B0415: shl     rdx, 20h
 * 00000001401B0419: or      rax, rdx
 * 00000001401B041C: sub     rax, [rcx+5BC0h]
 * 00000001401B0423: add     [rcx+5C38h], rax
 * 00000001401B042A: add     [rcx+5BC0h], rax
 * 00000001401B0431: mov     r8, rax
 * 00000001401B0434: mov     rax, [rcx+8]
 * 00000001401B0438: test    byte ptr [rax+2], 72h
 * 00000001401B043C: jz      short loc_1401B0451
 * 00000001401B043E: xor     edx, edx
 * 00000001401B0440: call    KiBeginThreadAccountingPeriod
 * 00000001401B0445: mov     rcx, gs:20h
 * 00000001401B044E: inc     byte ptr [rcx+20h]
 * 00000001401B0451: mov     dl, [rcx+6]
 * 00000001401B0454: and     byte ptr [rcx+6], 0
 * 00000001401B0458: cmp     byte ptr [rcx+7], 0
 * 00000001401B045C: jnz     short loc_1401B0487
 * 00000001401B045E: test    dl, dl
 * 00000001401B0460: jz      short loc_1401B0487
 * 00000001401B0462: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401B0466: jnb     short loc_1401B0473
 * 00000001401B0468: and     byte ptr [rcx+20h], 0
 * 00000001401B046C: call    KiDpcInterruptBypass
 * 00000001401B0471: jmp     short loc_1401B048A
 * 00000001401B0473: mov     ecx, 2
 * 00000001401B0478: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401B047E: mov     rcx, gs:20h
 * 00000001401B0487: dec     byte ptr [rcx+20h]
 * 00000001401B048A: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401B048E: mov     cr8, rcx
 * 00000001401B0492: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401B0499: cli
 * 00000001401B049A: test    [rbp+0E8h+arg_0], 1
 * 00000001401B04A1: jz      loc_1401B05B7
 * 00000001401B04A7: mov     rcx, gs:188h
 * 00000001401B04B0: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B04B7: jz      short loc_1401B04D2
 * 00000001401B04B9: mov     ecx, 1
 * 00000001401B04BE: mov     cr8, rcx
 * 00000001401B04C2: sti
 * 00000001401B04C3: call    KiInitiateUserApc
 * 00000001401B04C8: cli
 * 00000001401B04C9: mov     ecx, 0
 * 00000001401B04CE: mov     cr8, rcx
 * 00000001401B04D2: mov     rcx, gs:188h
 * 00000001401B04DB: test    dword ptr [rcx], 8000000h
 * 00000001401B04E1: jz      short loc_1401B04E8
 * 00000001401B04E3: call    KiRestoreSetContextState
 * 00000001401B04E8: mov     rcx, gs:188h
 * 00000001401B04F1: test    dword ptr [rcx], 40010000h
 * 00000001401B04F7: jz      short loc_1401B050D
 * 00000001401B04F9: test    byte ptr [rcx+2], 1
 * 00000001401B04FD: jz      short loc_1401B050D
 * 00000001401B04FF: call    KiCopyCounters
 * 00000001401B0504: mov     rcx, gs:188h
 * 00000001401B050D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B0511: cmp     [rbp+0E8h+var_68], 0
 * 00000001401B0519: jz      short loc_1401B0520
 * 00000001401B051B: call    KiRestoreDebugRegisterState
 * 00000001401B0520: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B0524: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B0528: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B052C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B0530: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B0534: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B0538: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B053C: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B0540: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B0544: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B0548: movzx   eax, byte ptr gs:27Dh
 * 00000001401B0551: cmp     gs:27Ah, al
 * 00000001401B0559: jz      short loc_1401B056C
 * 00000001401B055B: mov     gs:27Ah, al
 * 00000001401B0563: mov     ecx, 48h ; 'H'
 * 00000001401B0568: xor     edx, edx
 * 00000001401B056A: wrmsr
 * 00000001401B056C: btr     word ptr gs:278h, 2
 * 00000001401B0577: jnb     short loc_1401B0587
 * 00000001401B0579: mov     eax, 1
 * 00000001401B057E: xor     edx, edx
 * 00000001401B0580: mov     ecx, 49h ; 'I'
 * 00000001401B0585: wrmsr
 * 00000001401B0587: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B058B: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B058F: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B0593: mov     rsp, rbp
 * 00000001401B0596: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B059D: add     rsp, 0E8h
 * 00000001401B05A4: test    cs:KiKvaShadow, 1
 * 00000001401B05AB: jz      short loc_1401B05B2
 * 00000001401B05AD: jmp     KiKernelExit
 * 00000001401B05B2: swapgs
 * 00000001401B05B5: iretq
 * 00000001401B05B7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B05BB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B05BF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B05C3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B05C7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B05CB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B05CF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B05D3: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B05D7: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B05DB: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B05DF: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B05E3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B05E7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B05EB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B05EF: mov     rsp, rbp
 * 00000001401B05F2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B05F9: add     rsp, 0E8h
 * 00000001401B0600: iretq
 */
