/*
 * XREFs of KiSwInterrupt @ 0x1401859A0
 * Callers:
 *     KiSwInterruptShadow @ 0x140297C00 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1401694C0 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401859A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401859A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401859A0: sub     rsp, 8
 * 00000001401859A4: push    rbp
 * 00000001401859A5: push    rsi
 * 00000001401859A6: sub     rsp, 150h
 * 00000001401859AD: lea     rbp, [rsp+80h]
 * 00000001401859B5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401859B9: mov     [rbp+0E8h+var_138], rax
 * 00000001401859BD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401859C1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401859C5: mov     [rbp+0E8h+var_120], r8
 * 00000001401859C9: mov     [rbp+0E8h+var_118], r9
 * 00000001401859CD: mov     [rbp+0E8h+var_110], r10
 * 00000001401859D1: mov     [rbp+0E8h+var_108], r11
 * 00000001401859D5: test    [rbp+0E8h+arg_0], 1
 * 00000001401859DC: jnz     short loc_140185A0B
 * 00000001401859DE: lfence
 * 00000001401859E1: test    byte ptr gs:278h, 1
 * 00000001401859EA: jnz     short loc_1401859F4
 * 00000001401859EC: lfence
 * 00000001401859EF: jmp     loc_140185BDE
 * 00000001401859F4: movzx   eax, byte ptr gs:27Ah
 * 00000001401859FD: mov     ecx, 48h ; 'H'
 * 0000000140185A02: xor     edx, edx
 * 0000000140185A04: wrmsr
 * 0000000140185A06: jmp     loc_140185BDE
 * 0000000140185A0B: test    cs:KiKvaShadow, 1
 * 0000000140185A12: jnz     short loc_140185A17
 * 0000000140185A14: swapgs
 * 0000000140185A17: lfence
 * 0000000140185A1A: mov     r10, gs:188h
 * 0000000140185A23: mov     rcx, gs:188h
 * 0000000140185A2C: mov     rcx, [rcx+220h]
 * 0000000140185A33: mov     rcx, [rcx+838h]
 * 0000000140185A3A: mov     gs:270h, rcx
 * 0000000140185A43: movzx   eax, byte ptr gs:27Bh
 * 0000000140185A4C: cmp     gs:27Ah, al
 * 0000000140185A54: jz      short loc_140185A67
 * 0000000140185A56: mov     gs:27Ah, al
 * 0000000140185A5E: mov     ecx, 48h ; 'H'
 * 0000000140185A63: xor     edx, edx
 * 0000000140185A65: wrmsr
 * 0000000140185A67: movzx   edx, byte ptr gs:278h
 * 0000000140185A70: test    edx, 8
 * 0000000140185A76: jz      short loc_140185A8B
 * 0000000140185A78: mov     eax, 1
 * 0000000140185A7D: xor     edx, edx
 * 0000000140185A7F: mov     ecx, 49h ; 'I'
 * 0000000140185A84: wrmsr
 * 0000000140185A86: jmp     loc_140185BC9
 * 0000000140185A8B: test    edx, 2
 * 0000000140185A91: jz      loc_140185BC6
 * 0000000140185A97: test    byte ptr gs:279h, 4
 * 0000000140185AA0: jnz     loc_140185BC6
 * 0000000140185AA6: call    loc_140185BB9
 * 0000000140185AAB: add     rsp, 8
 * 0000000140185AAF: call    loc_140185BC2
 * 0000000140185AB4: add     rsp, 8
 * 0000000140185AB8: call    loc_140185AAB
 * 0000000140185ABD: add     rsp, 8
 * 0000000140185AC1: call    loc_140185AB4
 * 0000000140185AC6: add     rsp, 8
 * 0000000140185ACA: call    loc_140185ABD
 * 0000000140185ACF: add     rsp, 8
 * 0000000140185AD3: call    loc_140185AC6
 * 0000000140185AD8: add     rsp, 8
 * 0000000140185ADC: call    loc_140185ACF
 * 0000000140185AE1: add     rsp, 8
 * 0000000140185AE5: call    loc_140185AD8
 * 0000000140185AEA: add     rsp, 8
 * 0000000140185AEE: call    loc_140185AE1
 * 0000000140185AF3: add     rsp, 8
 * 0000000140185AF7: call    loc_140185AEA
 * 0000000140185AFC: add     rsp, 8
 * 0000000140185B00: call    loc_140185AF3
 * 0000000140185B05: add     rsp, 8
 * 0000000140185B09: call    loc_140185AFC
 * 0000000140185B0E: add     rsp, 8
 * 0000000140185B12: call    loc_140185B05
 * 0000000140185B17: add     rsp, 8
 * 0000000140185B1B: call    loc_140185B0E
 * 0000000140185B20: add     rsp, 8
 * 0000000140185B24: call    loc_140185B17
 * 0000000140185B29: add     rsp, 8
 * 0000000140185B2D: call    loc_140185B20
 * 0000000140185B32: add     rsp, 8
 * 0000000140185B36: call    loc_140185B29
 * 0000000140185B3B: add     rsp, 8
 * 0000000140185B3F: call    loc_140185B32
 * 0000000140185B44: add     rsp, 8
 * 0000000140185B48: call    loc_140185B3B
 * 0000000140185B4D: add     rsp, 8
 * 0000000140185B51: call    loc_140185B44
 * 0000000140185B56: add     rsp, 8
 * 0000000140185B5A: call    loc_140185B4D
 * 0000000140185B5F: add     rsp, 8
 * 0000000140185B63: call    loc_140185B56
 * 0000000140185B68: add     rsp, 8
 * 0000000140185B6C: call    loc_140185B5F
 * 0000000140185B71: add     rsp, 8
 * 0000000140185B75: call    loc_140185B68
 * 0000000140185B7A: add     rsp, 8
 * 0000000140185B7E: call    loc_140185B71
 * 0000000140185B83: add     rsp, 8
 * 0000000140185B87: call    loc_140185B7A
 * 0000000140185B8C: add     rsp, 8
 * 0000000140185B90: call    loc_140185B83
 * 0000000140185B95: add     rsp, 8
 * 0000000140185B99: call    loc_140185B8C
 * 0000000140185B9E: add     rsp, 8
 * 0000000140185BA2: call    loc_140185B95
 * 0000000140185BA7: add     rsp, 8
 * 0000000140185BAB: call    loc_140185B9E
 * 0000000140185BB0: add     rsp, 8
 * 0000000140185BB4: call    loc_140185BA7
 * 0000000140185BB9: add     rsp, 8
 * 0000000140185BBD: call    loc_140185BB0
 * 0000000140185BC2: add     rsp, 8
 * 0000000140185BC6: lfence
 * 0000000140185BC9: test    byte ptr [r10+3], 3
 * 0000000140185BCE: mov     [rbp+0E8h+var_68], 0
 * 0000000140185BD7: jz      short loc_140185BDE
 * 0000000140185BD9: call    KiSaveDebugRegisterState
 * 0000000140185BDE: cld
 * 0000000140185BDF: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140185BE3: ldmxcsr dword ptr gs:180h
 * 0000000140185BEC: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140185BF0: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140185BF4: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140185BF8: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140185BFC: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140185C00: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140185C04: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140185C0D: jz      short loc_140185C14
 * 0000000140185C0F: call    KeWakeProcessor
 * 0000000140185C14: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140185C1B: cmp     rax, [rbp+0E8h]
 * 0000000140185C22: jnb     short loc_140185C3D
 * 0000000140185C24: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140185C2B: cmp     rax, [rbp+0E8h]
 * 0000000140185C32: jb      short loc_140185C3D
 * 0000000140185C34: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140185C38: call    KiCheckForSListAddress
 * 0000000140185C3D: xor     esi, esi
 * 0000000140185C3F: inc     dword ptr gs:5D00h
 * 0000000140185C47: mov     ecx, 2
 * 0000000140185C4C: mov     rax, cr8
 * 0000000140185C50: mov     cr8, rcx
 * 0000000140185C54: mov     [rbp+0E8h+var_13F], al
 * 0000000140185C57: mov     rcx, gs:20h
 * 0000000140185C60: inc     byte ptr [rcx+20h]
 * 0000000140185C63: cmp     byte ptr [rcx+20h], 1
 * 0000000140185C67: jnz     short loc_140185CB9
 * 0000000140185C69: rdtsc
 * 0000000140185C6B: shl     rdx, 20h
 * 0000000140185C6F: or      rax, rdx
 * 0000000140185C72: mov     r8, [rcx+8]
 * 0000000140185C76: sub     rax, [rcx+5BC0h]
 * 0000000140185C7D: add     [r8+48h], rax
 * 0000000140185C81: mov     edx, [r8+50h]
 * 0000000140185C85: add     [rcx+5BC0h], rax
 * 0000000140185C8C: add     rdx, rax
 * 0000000140185C8F: mov     ecx, edx
 * 0000000140185C91: shr     rdx, 20h
 * 0000000140185C95: jz      short loc_140185C9A
 * 0000000140185C97: or      ecx, 0FFFFFFFFh
 * 0000000140185C9A: mov     [r8+50h], ecx
 * 0000000140185C9E: test    byte ptr [r8+2], 3Eh
 * 0000000140185CA3: jz      short loc_140185CB9
 * 0000000140185CA5: mov     rdx, r8
 * 0000000140185CA8: mov     r8, rax
 * 0000000140185CAB: mov     rcx, gs:20h
 * 0000000140185CB4: call    KiEndThreadAccountingPeriod
 * 0000000140185CB9: sti
 * 0000000140185CBA: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140185CBE: call    KiSwInterruptDispatch
 * 0000000140185CC3: cli
 * 0000000140185CC4: mov     rcx, rsi
 * 0000000140185CC7: call    HalPerformEndOfInterrupt_0
 * 0000000140185CCC: mov     rcx, gs:20h
 * 0000000140185CD5: cmp     byte ptr [rcx+20h], 1
 * 0000000140185CD9: ja      short loc_140185D4F
 * 0000000140185CDB: rdtsc
 * 0000000140185CDD: shl     rdx, 20h
 * 0000000140185CE1: or      rax, rdx
 * 0000000140185CE4: sub     rax, [rcx+5BC0h]
 * 0000000140185CEB: add     [rcx+5C38h], rax
 * 0000000140185CF2: add     [rcx+5BC0h], rax
 * 0000000140185CF9: mov     r8, rax
 * 0000000140185CFC: mov     rax, [rcx+8]
 * 0000000140185D00: test    byte ptr [rax+2], 32h
 * 0000000140185D04: jz      short loc_140185D19
 * 0000000140185D06: xor     edx, edx
 * 0000000140185D08: call    KiBeginThreadAccountingPeriod
 * 0000000140185D0D: mov     rcx, gs:20h
 * 0000000140185D16: inc     byte ptr [rcx+20h]
 * 0000000140185D19: mov     dl, [rcx+6]
 * 0000000140185D1C: and     byte ptr [rcx+6], 0
 * 0000000140185D20: cmp     byte ptr [rcx+7], 0
 * 0000000140185D24: jnz     short loc_140185D4F
 * 0000000140185D26: test    dl, dl
 * 0000000140185D28: jz      short loc_140185D4F
 * 0000000140185D2A: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140185D2E: jnb     short loc_140185D3B
 * 0000000140185D30: and     byte ptr [rcx+20h], 0
 * 0000000140185D34: call    KiDpcInterruptBypass
 * 0000000140185D39: jmp     short loc_140185D52
 * 0000000140185D3B: mov     ecx, 2
 * 0000000140185D40: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140185D46: mov     rcx, gs:20h
 * 0000000140185D4F: dec     byte ptr [rcx+20h]
 * 0000000140185D52: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140185D56: mov     cr8, rcx
 * 0000000140185D5A: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140185D61: cli
 * 0000000140185D62: test    [rbp+0E8h+arg_0], 1
 * 0000000140185D69: jz      loc_140185E7F
 * 0000000140185D6F: mov     rcx, gs:188h
 * 0000000140185D78: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140185D7F: jz      short loc_140185D9A
 * 0000000140185D81: mov     ecx, 1
 * 0000000140185D86: mov     cr8, rcx
 * 0000000140185D8A: sti
 * 0000000140185D8B: call    KiInitiateUserApc
 * 0000000140185D90: cli
 * 0000000140185D91: mov     ecx, 0
 * 0000000140185D96: mov     cr8, rcx
 * 0000000140185D9A: mov     rcx, gs:188h
 * 0000000140185DA3: test    dword ptr [rcx], 8000000h
 * 0000000140185DA9: jz      short loc_140185DB0
 * 0000000140185DAB: call    KiRestoreSetContextState
 * 0000000140185DB0: mov     rcx, gs:188h
 * 0000000140185DB9: test    dword ptr [rcx], 40010000h
 * 0000000140185DBF: jz      short loc_140185DD5
 * 0000000140185DC1: test    byte ptr [rcx+2], 1
 * 0000000140185DC5: jz      short loc_140185DD5
 * 0000000140185DC7: call    KiCopyCounters
 * 0000000140185DCC: mov     rcx, gs:188h
 * 0000000140185DD5: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140185DD9: cmp     [rbp+0E8h+var_68], 0
 * 0000000140185DE1: jz      short loc_140185DE8
 * 0000000140185DE3: call    KiRestoreDebugRegisterState
 * 0000000140185DE8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140185DEC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140185DF0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140185DF4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140185DF8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140185DFC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140185E00: mov     r11, [rbp+0E8h+var_108]
 * 0000000140185E04: mov     r10, [rbp+0E8h+var_110]
 * 0000000140185E08: mov     r9, [rbp+0E8h+var_118]
 * 0000000140185E0C: mov     r8, [rbp+0E8h+var_120]
 * 0000000140185E10: movzx   eax, byte ptr gs:27Dh
 * 0000000140185E19: cmp     gs:27Ah, al
 * 0000000140185E21: jz      short loc_140185E34
 * 0000000140185E23: mov     gs:27Ah, al
 * 0000000140185E2B: mov     ecx, 48h ; 'H'
 * 0000000140185E30: xor     edx, edx
 * 0000000140185E32: wrmsr
 * 0000000140185E34: btr     word ptr gs:278h, 2
 * 0000000140185E3F: jnb     short loc_140185E4F
 * 0000000140185E41: mov     eax, 1
 * 0000000140185E46: xor     edx, edx
 * 0000000140185E48: mov     ecx, 49h ; 'I'
 * 0000000140185E4D: wrmsr
 * 0000000140185E4F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185E53: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140185E57: mov     rax, [rbp+0E8h+var_138]
 * 0000000140185E5B: mov     rsp, rbp
 * 0000000140185E5E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140185E65: add     rsp, 0E8h
 * 0000000140185E6C: test    cs:KiKvaShadow, 1
 * 0000000140185E73: jz      short loc_140185E7A
 * 0000000140185E75: jmp     KiKernelExit
 * 0000000140185E7A: swapgs
 * 0000000140185E7D: iretq
 * 0000000140185E7F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140185E83: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140185E87: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140185E8B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140185E8F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140185E93: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140185E97: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140185E9B: mov     r11, [rbp+0E8h+var_108]
 * 0000000140185E9F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140185EA3: mov     r9, [rbp+0E8h+var_118]
 * 0000000140185EA7: mov     r8, [rbp+0E8h+var_120]
 * 0000000140185EAB: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140185EAF: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140185EB3: mov     rax, [rbp+0E8h+var_138]
 * 0000000140185EB7: mov     rsp, rbp
 * 0000000140185EBA: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140185EC1: add     rsp, 0E8h
 * 0000000140185EC8: iretq
 */
