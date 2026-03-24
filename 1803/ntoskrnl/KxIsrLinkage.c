/*
 * XREFs of KxIsrLinkage @ 0x1401ADB60
 * Callers:
 *     KxIsrLinkageShadow @ 0x1402D0A40 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140156130 (PerfInfoLogUnexpectedInterrupt.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     _guard_check_icall @ 0x1401B3510 (_guard_check_icall.c)
 *     KiBugCheckDispatch @ 0x1401BBA40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401ADB60
 * Reason: Hex-Rays returned no pseudocode for 0x1401ADB60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401ADB60: push    rbp
 * 00000001401ADB61: push    rsi
 * 00000001401ADB62: sub     rsp, 150h
 * 00000001401ADB69: lea     rbp, [rsp+80h]
 * 00000001401ADB71: mov     [rbp+0D8h+var_12D], 0
 * 00000001401ADB75: mov     [rbp+0D8h+var_128], rax
 * 00000001401ADB79: mov     [rbp+0D8h+var_120], rcx
 * 00000001401ADB7D: mov     [rbp+0D8h+var_118], rdx
 * 00000001401ADB81: mov     [rbp+0D8h+var_110], r8
 * 00000001401ADB85: mov     [rbp+0D8h+var_108], r9
 * 00000001401ADB89: mov     [rbp+0D8h+var_100], r10
 * 00000001401ADB8D: mov     [rbp+0D8h+var_F8], r11
 * 00000001401ADB91: test    [rbp+0D8h+arg_8], 1
 * 00000001401ADB98: jnz     short loc_1401ADBC7
 * 00000001401ADB9A: lfence
 * 00000001401ADB9D: test    byte ptr gs:278h, 1
 * 00000001401ADBA6: jnz     short loc_1401ADBB0
 * 00000001401ADBA8: lfence
 * 00000001401ADBAB: jmp     loc_1401ADD9A
 * 00000001401ADBB0: movzx   eax, byte ptr gs:27Ah
 * 00000001401ADBB9: mov     ecx, 48h ; 'H'
 * 00000001401ADBBE: xor     edx, edx
 * 00000001401ADBC0: wrmsr
 * 00000001401ADBC2: jmp     loc_1401ADD9A
 * 00000001401ADBC7: test    cs:KiKvaShadow, 1
 * 00000001401ADBCE: jnz     short loc_1401ADBD3
 * 00000001401ADBD0: swapgs
 * 00000001401ADBD3: lfence
 * 00000001401ADBD6: mov     r10, gs:188h
 * 00000001401ADBDF: mov     rcx, gs:188h
 * 00000001401ADBE8: mov     rcx, [rcx+220h]
 * 00000001401ADBEF: mov     rcx, [rcx+838h]
 * 00000001401ADBF6: mov     gs:270h, rcx
 * 00000001401ADBFF: movzx   eax, byte ptr gs:27Bh
 * 00000001401ADC08: cmp     gs:27Ah, al
 * 00000001401ADC10: jz      short loc_1401ADC23
 * 00000001401ADC12: mov     gs:27Ah, al
 * 00000001401ADC1A: mov     ecx, 48h ; 'H'
 * 00000001401ADC1F: xor     edx, edx
 * 00000001401ADC21: wrmsr
 * 00000001401ADC23: movzx   edx, byte ptr gs:278h
 * 00000001401ADC2C: test    edx, 8
 * 00000001401ADC32: jz      short loc_1401ADC47
 * 00000001401ADC34: mov     eax, 1
 * 00000001401ADC39: xor     edx, edx
 * 00000001401ADC3B: mov     ecx, 49h ; 'I'
 * 00000001401ADC40: wrmsr
 * 00000001401ADC42: jmp     loc_1401ADD85
 * 00000001401ADC47: test    edx, 2
 * 00000001401ADC4D: jz      loc_1401ADD82
 * 00000001401ADC53: test    byte ptr gs:279h, 4
 * 00000001401ADC5C: jnz     loc_1401ADD82
 * 00000001401ADC62: call    loc_1401ADD75
 * 00000001401ADC67: add     rsp, 8
 * 00000001401ADC6B: call    loc_1401ADD7E
 * 00000001401ADC70: add     rsp, 8
 * 00000001401ADC74: call    loc_1401ADC67
 * 00000001401ADC79: add     rsp, 8
 * 00000001401ADC7D: call    loc_1401ADC70
 * 00000001401ADC82: add     rsp, 8
 * 00000001401ADC86: call    loc_1401ADC79
 * 00000001401ADC8B: add     rsp, 8
 * 00000001401ADC8F: call    loc_1401ADC82
 * 00000001401ADC94: add     rsp, 8
 * 00000001401ADC98: call    loc_1401ADC8B
 * 00000001401ADC9D: add     rsp, 8
 * 00000001401ADCA1: call    loc_1401ADC94
 * 00000001401ADCA6: add     rsp, 8
 * 00000001401ADCAA: call    loc_1401ADC9D
 * 00000001401ADCAF: add     rsp, 8
 * 00000001401ADCB3: call    loc_1401ADCA6
 * 00000001401ADCB8: add     rsp, 8
 * 00000001401ADCBC: call    loc_1401ADCAF
 * 00000001401ADCC1: add     rsp, 8
 * 00000001401ADCC5: call    loc_1401ADCB8
 * 00000001401ADCCA: add     rsp, 8
 * 00000001401ADCCE: call    loc_1401ADCC1
 * 00000001401ADCD3: add     rsp, 8
 * 00000001401ADCD7: call    loc_1401ADCCA
 * 00000001401ADCDC: add     rsp, 8
 * 00000001401ADCE0: call    loc_1401ADCD3
 * 00000001401ADCE5: add     rsp, 8
 * 00000001401ADCE9: call    loc_1401ADCDC
 * 00000001401ADCEE: add     rsp, 8
 * 00000001401ADCF2: call    loc_1401ADCE5
 * 00000001401ADCF7: add     rsp, 8
 * 00000001401ADCFB: call    loc_1401ADCEE
 * 00000001401ADD00: add     rsp, 8
 * 00000001401ADD04: call    loc_1401ADCF7
 * 00000001401ADD09: add     rsp, 8
 * 00000001401ADD0D: call    loc_1401ADD00
 * 00000001401ADD12: add     rsp, 8
 * 00000001401ADD16: call    loc_1401ADD09
 * 00000001401ADD1B: add     rsp, 8
 * 00000001401ADD1F: call    loc_1401ADD12
 * 00000001401ADD24: add     rsp, 8
 * 00000001401ADD28: call    loc_1401ADD1B
 * 00000001401ADD2D: add     rsp, 8
 * 00000001401ADD31: call    loc_1401ADD24
 * 00000001401ADD36: add     rsp, 8
 * 00000001401ADD3A: call    loc_1401ADD2D
 * 00000001401ADD3F: add     rsp, 8
 * 00000001401ADD43: call    loc_1401ADD36
 * 00000001401ADD48: add     rsp, 8
 * 00000001401ADD4C: call    loc_1401ADD3F
 * 00000001401ADD51: add     rsp, 8
 * 00000001401ADD55: call    loc_1401ADD48
 * 00000001401ADD5A: add     rsp, 8
 * 00000001401ADD5E: call    loc_1401ADD51
 * 00000001401ADD63: add     rsp, 8
 * 00000001401ADD67: call    loc_1401ADD5A
 * 00000001401ADD6C: add     rsp, 8
 * 00000001401ADD70: call    loc_1401ADD63
 * 00000001401ADD75: add     rsp, 8
 * 00000001401ADD79: call    loc_1401ADD6C
 * 00000001401ADD7E: add     rsp, 8
 * 00000001401ADD82: lfence
 * 00000001401ADD85: test    byte ptr [r10+3], 3
 * 00000001401ADD8A: mov     [rbp+0D8h+var_58], 0
 * 00000001401ADD93: jz      short loc_1401ADD9A
 * 00000001401ADD95: call    KiSaveDebugRegisterState
 * 00000001401ADD9A: cld
 * 00000001401ADD9B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401ADD9F: ldmxcsr dword ptr gs:180h
 * 00000001401ADDA8: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401ADDAC: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401ADDB0: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401ADDB4: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401ADDB8: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401ADDBC: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401ADDC0: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401ADDC9: jz      short loc_1401ADDD0
 * 00000001401ADDCB: call    KeWakeProcessor
 * 00000001401ADDD0: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401ADDD7: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401ADDDE: jnb     short loc_1401ADDF9
 * 00000001401ADDE0: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401ADDE7: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401ADDEE: jb      short loc_1401ADDF9
 * 00000001401ADDF0: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401ADDF4: call    KiCheckForSListAddress
 * 00000001401ADDF9: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401ADE00: mov     rsi, gs:20h
 * 00000001401ADE09: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401ADE11: inc     dword ptr gs:5D00h
 * 00000001401ADE19: test    rsi, rsi
 * 00000001401ADE1C: jz      short loc_1401ADE29
 * 00000001401ADE1E: mov     rcx, [rsi+50h]; Target
 * 00000001401ADE22: call    _guard_check_icall
 * 00000001401ADE27: jmp     rcx
 * 00000001401ADE29: mov     ecx, eax
 * 00000001401ADE2B: shr     ecx, 4
 * 00000001401ADE2E: mov     rax, cr8
 * 00000001401ADE32: mov     cr8, rcx
 * 00000001401ADE36: mov     [rbp+0D8h+var_12F], al
 * 00000001401ADE39: mov     rcx, gs:20h
 * 00000001401ADE42: inc     byte ptr [rcx+20h]
 * 00000001401ADE45: cmp     byte ptr [rcx+20h], 1
 * 00000001401ADE49: jnz     short loc_1401ADE9B
 * 00000001401ADE4B: rdtsc
 * 00000001401ADE4D: shl     rdx, 20h
 * 00000001401ADE51: or      rax, rdx
 * 00000001401ADE54: mov     r8, [rcx+8]
 * 00000001401ADE58: sub     rax, [rcx+5BC0h]
 * 00000001401ADE5F: add     [r8+48h], rax
 * 00000001401ADE63: mov     edx, [r8+50h]
 * 00000001401ADE67: add     [rcx+5BC0h], rax
 * 00000001401ADE6E: add     rdx, rax
 * 00000001401ADE71: mov     ecx, edx
 * 00000001401ADE73: shr     rdx, 20h
 * 00000001401ADE77: jz      short loc_1401ADE7C
 * 00000001401ADE79: or      ecx, 0FFFFFFFFh
 * 00000001401ADE7C: mov     [r8+50h], ecx
 * 00000001401ADE80: test    byte ptr [r8+2], 3Eh
 * 00000001401ADE85: jz      short loc_1401ADE9B
 * 00000001401ADE87: mov     rdx, r8
 * 00000001401ADE8A: mov     r8, rax
 * 00000001401ADE8D: mov     rcx, gs:20h
 * 00000001401ADE96: call    KiEndThreadAccountingPeriod
 * 00000001401ADE9B: sti
 * 00000001401ADE9C: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401ADEA6: jz      short loc_1401ADEB4
 * 00000001401ADEA8: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401ADEAF: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401ADEB4: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401ADEBB: jz      short loc_1401ADEDC
 * 00000001401ADEBD: and     [rbp+0D8h+var_138], 0
 * 00000001401ADEC2: xor     r9, r9
 * 00000001401ADEC5: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401ADECD: mov     edx, 1
 * 00000001401ADED2: mov     ecx, 12h
 * 00000001401ADED7: call    KiBugCheckDispatch
 * 00000001401ADEDC: cli
 * 00000001401ADEDD: mov     rcx, rsi
 * 00000001401ADEE0: call    HalPerformEndOfInterrupt_0
 * 00000001401ADEE5: mov     rcx, gs:20h
 * 00000001401ADEEE: cmp     byte ptr [rcx+20h], 1
 * 00000001401ADEF2: ja      short loc_1401ADF68
 * 00000001401ADEF4: rdtsc
 * 00000001401ADEF6: shl     rdx, 20h
 * 00000001401ADEFA: or      rax, rdx
 * 00000001401ADEFD: sub     rax, [rcx+5BC0h]
 * 00000001401ADF04: add     [rcx+5C38h], rax
 * 00000001401ADF0B: add     [rcx+5BC0h], rax
 * 00000001401ADF12: mov     r8, rax
 * 00000001401ADF15: mov     rax, [rcx+8]
 * 00000001401ADF19: test    byte ptr [rax+2], 72h
 * 00000001401ADF1D: jz      short loc_1401ADF32
 * 00000001401ADF1F: xor     edx, edx
 * 00000001401ADF21: call    KiBeginThreadAccountingPeriod
 * 00000001401ADF26: mov     rcx, gs:20h
 * 00000001401ADF2F: inc     byte ptr [rcx+20h]
 * 00000001401ADF32: mov     dl, [rcx+6]
 * 00000001401ADF35: and     byte ptr [rcx+6], 0
 * 00000001401ADF39: cmp     byte ptr [rcx+7], 0
 * 00000001401ADF3D: jnz     short loc_1401ADF68
 * 00000001401ADF3F: test    dl, dl
 * 00000001401ADF41: jz      short loc_1401ADF68
 * 00000001401ADF43: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401ADF47: jnb     short loc_1401ADF54
 * 00000001401ADF49: and     byte ptr [rcx+20h], 0
 * 00000001401ADF4D: call    KiDpcInterruptBypass
 * 00000001401ADF52: jmp     short loc_1401ADF6B
 * 00000001401ADF54: mov     ecx, 2
 * 00000001401ADF59: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401ADF5F: mov     rcx, gs:20h
 * 00000001401ADF68: dec     byte ptr [rcx+20h]
 * 00000001401ADF6B: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401ADF6F: mov     cr8, rcx
 * 00000001401ADF73: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401ADF7A: cli
 * 00000001401ADF7B: test    [rbp+0D8h+arg_8], 1
 * 00000001401ADF82: jz      loc_1401AE098
 * 00000001401ADF88: mov     rcx, gs:188h
 * 00000001401ADF91: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401ADF98: jz      short loc_1401ADFB3
 * 00000001401ADF9A: mov     ecx, 1
 * 00000001401ADF9F: mov     cr8, rcx
 * 00000001401ADFA3: sti
 * 00000001401ADFA4: call    KiInitiateUserApc
 * 00000001401ADFA9: cli
 * 00000001401ADFAA: mov     ecx, 0
 * 00000001401ADFAF: mov     cr8, rcx
 * 00000001401ADFB3: mov     rcx, gs:188h
 * 00000001401ADFBC: test    dword ptr [rcx], 8000000h
 * 00000001401ADFC2: jz      short loc_1401ADFC9
 * 00000001401ADFC4: call    KiRestoreSetContextState
 * 00000001401ADFC9: mov     rcx, gs:188h
 * 00000001401ADFD2: test    dword ptr [rcx], 40010000h
 * 00000001401ADFD8: jz      short loc_1401ADFEE
 * 00000001401ADFDA: test    byte ptr [rcx+2], 1
 * 00000001401ADFDE: jz      short loc_1401ADFEE
 * 00000001401ADFE0: call    KiCopyCounters
 * 00000001401ADFE5: mov     rcx, gs:188h
 * 00000001401ADFEE: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401ADFF2: cmp     [rbp+0D8h+var_58], 0
 * 00000001401ADFFA: jz      short loc_1401AE001
 * 00000001401ADFFC: call    KiRestoreDebugRegisterState
 * 00000001401AE001: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401AE005: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401AE009: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401AE00D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401AE011: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401AE015: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401AE019: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401AE01D: mov     r10, [rbp+0D8h+var_100]
 * 00000001401AE021: mov     r9, [rbp+0D8h+var_108]
 * 00000001401AE025: mov     r8, [rbp+0D8h+var_110]
 * 00000001401AE029: movzx   eax, byte ptr gs:27Dh
 * 00000001401AE032: cmp     gs:27Ah, al
 * 00000001401AE03A: jz      short loc_1401AE04D
 * 00000001401AE03C: mov     gs:27Ah, al
 * 00000001401AE044: mov     ecx, 48h ; 'H'
 * 00000001401AE049: xor     edx, edx
 * 00000001401AE04B: wrmsr
 * 00000001401AE04D: btr     word ptr gs:278h, 2
 * 00000001401AE058: jnb     short loc_1401AE068
 * 00000001401AE05A: mov     eax, 1
 * 00000001401AE05F: xor     edx, edx
 * 00000001401AE061: mov     ecx, 49h ; 'I'
 * 00000001401AE066: wrmsr
 * 00000001401AE068: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401AE06C: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401AE070: mov     rax, [rbp+0D8h+var_128]
 * 00000001401AE074: mov     rsp, rbp
 * 00000001401AE077: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401AE07E: add     rsp, 0E8h
 * 00000001401AE085: test    cs:KiKvaShadow, 1
 * 00000001401AE08C: jz      short loc_1401AE093
 * 00000001401AE08E: jmp     KiKernelExit
 * 00000001401AE093: swapgs
 * 00000001401AE096: iretq
 * 00000001401AE098: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401AE09C: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401AE0A0: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401AE0A4: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401AE0A8: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401AE0AC: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401AE0B0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401AE0B4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401AE0B8: mov     r10, [rbp+0D8h+var_100]
 * 00000001401AE0BC: mov     r9, [rbp+0D8h+var_108]
 * 00000001401AE0C0: mov     r8, [rbp+0D8h+var_110]
 * 00000001401AE0C4: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401AE0C8: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401AE0CC: mov     rax, [rbp+0D8h+var_128]
 * 00000001401AE0D0: mov     rsp, rbp
 * 00000001401AE0D3: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401AE0DA: add     rsp, 0E8h
 * 00000001401AE0E1: iretq
 */
