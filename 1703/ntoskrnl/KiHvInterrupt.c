/*
 * XREFs of KiHvInterrupt @ 0x140185950
 * Callers:
 *     KiHvInterruptShadow @ 0x14026CE80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x14002F740 (KiEntropyQueueDpc.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     HvlRouteInterrupt @ 0x1401E4EA0 (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140185950
 * Reason: Hex-Rays returned no pseudocode for 0x140185950
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140185950: sub     rsp, 8
 * 0000000140185954: push    rbp
 * 0000000140185955: push    rsi
 * 0000000140185956: sub     rsp, 150h
 * 000000014018595D: lea     rbp, [rsp+80h]
 * 0000000140185965: mov     [rbp+0E8h+var_13D], 0
 * 0000000140185969: mov     [rbp+0E8h+var_138], rax
 * 000000014018596D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140185971: mov     [rbp+0E8h+var_128], rdx
 * 0000000140185975: mov     [rbp+0E8h+var_120], r8
 * 0000000140185979: mov     [rbp+0E8h+var_118], r9
 * 000000014018597D: mov     [rbp+0E8h+var_110], r10
 * 0000000140185981: mov     [rbp+0E8h+var_108], r11
 * 0000000140185985: test    [rbp+0E8h+arg_0], 1
 * 000000014018598C: jnz     short loc_1401859BB
 * 000000014018598E: lfence
 * 0000000140185991: test    byte ptr gs:278h, 1
 * 000000014018599A: jnz     short loc_1401859A4
 * 000000014018599C: lfence
 * 000000014018599F: jmp     loc_140185B8E
 * 00000001401859A4: movzx   eax, byte ptr gs:27Ah
 * 00000001401859AD: mov     ecx, 48h ; 'H'
 * 00000001401859B2: xor     edx, edx
 * 00000001401859B4: wrmsr
 * 00000001401859B6: jmp     loc_140185B8E
 * 00000001401859BB: test    cs:KiKvaShadow, 1
 * 00000001401859C2: jnz     short loc_1401859C7
 * 00000001401859C4: swapgs
 * 00000001401859C7: lfence
 * 00000001401859CA: mov     r10, gs:188h
 * 00000001401859D3: mov     rcx, gs:188h
 * 00000001401859DC: mov     rcx, [rcx+220h]
 * 00000001401859E3: mov     rcx, [rcx+818h]
 * 00000001401859EA: mov     gs:270h, rcx
 * 00000001401859F3: movzx   eax, byte ptr gs:27Bh
 * 00000001401859FC: cmp     gs:27Ah, al
 * 0000000140185A04: jz      short loc_140185A17
 * 0000000140185A06: mov     gs:27Ah, al
 * 0000000140185A0E: mov     ecx, 48h ; 'H'
 * 0000000140185A13: xor     edx, edx
 * 0000000140185A15: wrmsr
 * 0000000140185A17: movzx   edx, byte ptr gs:278h
 * 0000000140185A20: test    edx, 8
 * 0000000140185A26: jz      short loc_140185A3B
 * 0000000140185A28: mov     eax, 1
 * 0000000140185A2D: xor     edx, edx
 * 0000000140185A2F: mov     ecx, 49h ; 'I'
 * 0000000140185A34: wrmsr
 * 0000000140185A36: jmp     loc_140185B79
 * 0000000140185A3B: test    edx, 2
 * 0000000140185A41: jz      loc_140185B76
 * 0000000140185A47: test    byte ptr gs:279h, 4
 * 0000000140185A50: jnz     loc_140185B76
 * 0000000140185A56: call    loc_140185B69
 * 0000000140185A5B: add     rsp, 8
 * 0000000140185A5F: call    loc_140185B72
 * 0000000140185A64: add     rsp, 8
 * 0000000140185A68: call    loc_140185A5B
 * 0000000140185A6D: add     rsp, 8
 * 0000000140185A71: call    loc_140185A64
 * 0000000140185A76: add     rsp, 8
 * 0000000140185A7A: call    loc_140185A6D
 * 0000000140185A7F: add     rsp, 8
 * 0000000140185A83: call    loc_140185A76
 * 0000000140185A88: add     rsp, 8
 * 0000000140185A8C: call    loc_140185A7F
 * 0000000140185A91: add     rsp, 8
 * 0000000140185A95: call    loc_140185A88
 * 0000000140185A9A: add     rsp, 8
 * 0000000140185A9E: call    loc_140185A91
 * 0000000140185AA3: add     rsp, 8
 * 0000000140185AA7: call    loc_140185A9A
 * 0000000140185AAC: add     rsp, 8
 * 0000000140185AB0: call    loc_140185AA3
 * 0000000140185AB5: add     rsp, 8
 * 0000000140185AB9: call    loc_140185AAC
 * 0000000140185ABE: add     rsp, 8
 * 0000000140185AC2: call    loc_140185AB5
 * 0000000140185AC7: add     rsp, 8
 * 0000000140185ACB: call    loc_140185ABE
 * 0000000140185AD0: add     rsp, 8
 * 0000000140185AD4: call    loc_140185AC7
 * 0000000140185AD9: add     rsp, 8
 * 0000000140185ADD: call    loc_140185AD0
 * 0000000140185AE2: add     rsp, 8
 * 0000000140185AE6: call    loc_140185AD9
 * 0000000140185AEB: add     rsp, 8
 * 0000000140185AEF: call    loc_140185AE2
 * 0000000140185AF4: add     rsp, 8
 * 0000000140185AF8: call    loc_140185AEB
 * 0000000140185AFD: add     rsp, 8
 * 0000000140185B01: call    loc_140185AF4
 * 0000000140185B06: add     rsp, 8
 * 0000000140185B0A: call    loc_140185AFD
 * 0000000140185B0F: add     rsp, 8
 * 0000000140185B13: call    loc_140185B06
 * 0000000140185B18: add     rsp, 8
 * 0000000140185B1C: call    loc_140185B0F
 * 0000000140185B21: add     rsp, 8
 * 0000000140185B25: call    loc_140185B18
 * 0000000140185B2A: add     rsp, 8
 * 0000000140185B2E: call    loc_140185B21
 * 0000000140185B33: add     rsp, 8
 * 0000000140185B37: call    loc_140185B2A
 * 0000000140185B3C: add     rsp, 8
 * 0000000140185B40: call    loc_140185B33
 * 0000000140185B45: add     rsp, 8
 * 0000000140185B49: call    loc_140185B3C
 * 0000000140185B4E: add     rsp, 8
 * 0000000140185B52: call    loc_140185B45
 * 0000000140185B57: add     rsp, 8
 * 0000000140185B5B: call    loc_140185B4E
 * 0000000140185B60: add     rsp, 8
 * 0000000140185B64: call    loc_140185B57
 * 0000000140185B69: add     rsp, 8
 * 0000000140185B6D: call    loc_140185B60
 * 0000000140185B72: add     rsp, 8
 * 0000000140185B76: lfence
 * 0000000140185B79: test    byte ptr [r10+3], 3
 * 0000000140185B7E: mov     [rbp+0E8h+var_68], 0
 * 0000000140185B87: jz      short loc_140185B8E
 * 0000000140185B89: call    KiSaveDebugRegisterState
 * 0000000140185B8E: cld
 * 0000000140185B8F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140185B93: ldmxcsr dword ptr gs:180h
 * 0000000140185B9C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140185BA0: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140185BA4: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140185BA8: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140185BAC: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140185BB0: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140185BB4: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140185BBD: jz      short loc_140185BC4
 * 0000000140185BBF: call    KeWakeProcessor
 * 0000000140185BC4: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140185BCB: cmp     rax, [rbp+0E8h]
 * 0000000140185BD2: jnb     short loc_140185BED
 * 0000000140185BD4: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140185BDB: cmp     rax, [rbp+0E8h]
 * 0000000140185BE2: jb      short loc_140185BED
 * 0000000140185BE4: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140185BE8: call    KiCheckForSListAddress
 * 0000000140185BED: xor     esi, esi
 * 0000000140185BEF: inc     dword ptr gs:5D00h
 * 0000000140185BF7: mov     ecx, 3
 * 0000000140185BFC: mov     rax, cr8
 * 0000000140185C00: mov     cr8, rcx
 * 0000000140185C04: mov     [rbp+0E8h+var_13F], al
 * 0000000140185C07: mov     [rbp+0E8h+var_148], 0
 * 0000000140185C0E: mov     rcx, gs:20h
 * 0000000140185C17: inc     byte ptr [rcx+20h]
 * 0000000140185C1A: cmp     byte ptr [rcx+20h], 1
 * 0000000140185C1E: jnz     loc_140185CB4
 * 0000000140185C24: rdtsc
 * 0000000140185C26: shl     rdx, 20h
 * 0000000140185C2A: or      rax, rdx
 * 0000000140185C2D: mov     edx, [rcx+6420h]
 * 0000000140185C33: mov     r11d, edx
 * 0000000140185C36: and     edx, 7FFh
 * 0000000140185C3C: shr     edx, 5
 * 0000000140185C3F: lea     r10, [rcx+rdx*4+6424h]
 * 0000000140185C47: mov     edx, [r10]
 * 0000000140185C4A: ror     edx, 5
 * 0000000140185C4D: xor     edx, eax
 * 0000000140185C4F: mov     [r10], edx
 * 0000000140185C52: add     r11d, 1
 * 0000000140185C56: mov     [rcx+6420h], r11d
 * 0000000140185C5D: and     r11d, 3FFh
 * 0000000140185C64: jnz     short loc_140185C6D
 * 0000000140185C66: mov     [rbp+0E8h+var_148], 1
 * 0000000140185C6D: mov     r8, [rcx+8]
 * 0000000140185C71: sub     rax, [rcx+5BC0h]
 * 0000000140185C78: add     [r8+48h], rax
 * 0000000140185C7C: mov     edx, [r8+50h]
 * 0000000140185C80: add     [rcx+5BC0h], rax
 * 0000000140185C87: add     rdx, rax
 * 0000000140185C8A: mov     ecx, edx
 * 0000000140185C8C: shr     rdx, 20h
 * 0000000140185C90: jz      short loc_140185C95
 * 0000000140185C92: or      ecx, 0FFFFFFFFh
 * 0000000140185C95: mov     [r8+50h], ecx
 * 0000000140185C99: test    byte ptr [r8+2], 3Eh
 * 0000000140185C9E: jz      short loc_140185CB4
 * 0000000140185CA0: mov     rdx, r8
 * 0000000140185CA3: mov     r8, rax
 * 0000000140185CA6: mov     rcx, gs:20h
 * 0000000140185CAF: call    KiEndThreadAccountingPeriod
 * 0000000140185CB4: sti
 * 0000000140185CB5: cmp     [rbp+0E8h+var_148], 0
 * 0000000140185CB9: jz      short loc_140185CC9
 * 0000000140185CBB: mov     rcx, gs:20h
 * 0000000140185CC4: call    KiEntropyQueueDpc
 * 0000000140185CC9: xor     ecx, ecx
 * 0000000140185CCB: call    HvlRouteInterrupt
 * 0000000140185CD0: test    cs:HvlEnlightenments, 1000h
 * 0000000140185CDA: jz      short loc_140185CE6
 * 0000000140185CDC: cli
 * 0000000140185CDD: mov     rcx, rsi
 * 0000000140185CE0: call    HalPerformEndOfInterrupt_0
 * 0000000140185CE5: sti
 * 0000000140185CE6: cli
 * 0000000140185CE7: mov     rcx, gs:20h
 * 0000000140185CF0: cmp     byte ptr [rcx+20h], 1
 * 0000000140185CF4: ja      short loc_140185D6A
 * 0000000140185CF6: rdtsc
 * 0000000140185CF8: shl     rdx, 20h
 * 0000000140185CFC: or      rax, rdx
 * 0000000140185CFF: sub     rax, [rcx+5BC0h]
 * 0000000140185D06: add     [rcx+5C78h], rax
 * 0000000140185D0D: add     [rcx+5BC0h], rax
 * 0000000140185D14: mov     r8, rax
 * 0000000140185D17: mov     rax, [rcx+8]
 * 0000000140185D1B: test    byte ptr [rax+2], 32h
 * 0000000140185D1F: jz      short loc_140185D34
 * 0000000140185D21: xor     edx, edx
 * 0000000140185D23: call    KiBeginThreadAccountingPeriod
 * 0000000140185D28: mov     rcx, gs:20h
 * 0000000140185D31: inc     byte ptr [rcx+20h]
 * 0000000140185D34: mov     dl, [rcx+6]
 * 0000000140185D37: and     byte ptr [rcx+6], 0
 * 0000000140185D3B: cmp     byte ptr [rcx+7], 0
 * 0000000140185D3F: jnz     short loc_140185D6A
 * 0000000140185D41: test    dl, dl
 * 0000000140185D43: jz      short loc_140185D6A
 * 0000000140185D45: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140185D49: jnb     short loc_140185D56
 * 0000000140185D4B: and     byte ptr [rcx+20h], 0
 * 0000000140185D4F: call    KiDpcInterruptBypass
 * 0000000140185D54: jmp     short loc_140185D6D
 * 0000000140185D56: mov     ecx, 2
 * 0000000140185D5B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140185D61: mov     rcx, gs:20h
 * 0000000140185D6A: dec     byte ptr [rcx+20h]
 * 0000000140185D6D: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140185D71: mov     cr8, rcx
 * 0000000140185D75: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140185D7C: cli
 * 0000000140185D7D: test    [rbp+0E8h+arg_0], 1
 * 0000000140185D84: jz      loc_140185E9A
 * 0000000140185D8A: mov     rcx, gs:188h
 * 0000000140185D93: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140185D9A: jz      short loc_140185DB5
 * 0000000140185D9C: mov     ecx, 1
 * 0000000140185DA1: mov     cr8, rcx
 * 0000000140185DA5: sti
 * 0000000140185DA6: call    KiInitiateUserApc
 * 0000000140185DAB: cli
 * 0000000140185DAC: mov     ecx, 0
 * 0000000140185DB1: mov     cr8, rcx
 * 0000000140185DB5: mov     rcx, gs:188h
 * 0000000140185DBE: test    dword ptr [rcx], 8000000h
 * 0000000140185DC4: jz      short loc_140185DCB
 * 0000000140185DC6: call    KiRestoreSetContextState
 * 0000000140185DCB: mov     rcx, gs:188h
 * 0000000140185DD4: test    dword ptr [rcx], 40010000h
 * 0000000140185DDA: jz      short loc_140185DF0
 * 0000000140185DDC: test    byte ptr [rcx+2], 1
 * 0000000140185DE0: jz      short loc_140185DF0
 * 0000000140185DE2: call    KiCopyCounters
 * 0000000140185DE7: mov     rcx, gs:188h
 * 0000000140185DF0: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140185DF4: cmp     [rbp+0E8h+var_68], 0
 * 0000000140185DFC: jz      short loc_140185E03
 * 0000000140185DFE: call    KiRestoreDebugRegisterState
 * 0000000140185E03: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140185E07: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140185E0B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140185E0F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140185E13: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140185E17: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140185E1B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140185E1F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140185E23: mov     r9, [rbp+0E8h+var_118]
 * 0000000140185E27: mov     r8, [rbp+0E8h+var_120]
 * 0000000140185E2B: movzx   eax, byte ptr gs:27Dh
 * 0000000140185E34: cmp     gs:27Ah, al
 * 0000000140185E3C: jz      short loc_140185E4F
 * 0000000140185E3E: mov     gs:27Ah, al
 * 0000000140185E46: mov     ecx, 48h ; 'H'
 * 0000000140185E4B: xor     edx, edx
 * 0000000140185E4D: wrmsr
 * 0000000140185E4F: btr     word ptr gs:278h, 2
 * 0000000140185E5A: jnb     short loc_140185E6A
 * 0000000140185E5C: mov     eax, 1
 * 0000000140185E61: xor     edx, edx
 * 0000000140185E63: mov     ecx, 49h ; 'I'
 * 0000000140185E68: wrmsr
 * 0000000140185E6A: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185E6E: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140185E72: mov     rax, [rbp+0E8h+var_138]
 * 0000000140185E76: mov     rsp, rbp
 * 0000000140185E79: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140185E80: add     rsp, 0E8h
 * 0000000140185E87: test    cs:KiKvaShadow, 1
 * 0000000140185E8E: jz      short loc_140185E95
 * 0000000140185E90: jmp     KiKernelExit
 * 0000000140185E95: swapgs
 * 0000000140185E98: iretq
 * 0000000140185E9A: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140185E9E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140185EA2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140185EA6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140185EAA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140185EAE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140185EB2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140185EB6: mov     r11, [rbp+0E8h+var_108]
 * 0000000140185EBA: mov     r10, [rbp+0E8h+var_110]
 * 0000000140185EBE: mov     r9, [rbp+0E8h+var_118]
 * 0000000140185EC2: mov     r8, [rbp+0E8h+var_120]
 * 0000000140185EC6: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185ECA: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140185ECE: mov     rax, [rbp+0E8h+var_138]
 * 0000000140185ED2: mov     rsp, rbp
 * 0000000140185ED5: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140185EDC: add     rsp, 0E8h
 * 0000000140185EE3: iretq
 */
