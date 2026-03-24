/*
 * XREFs of KxIsrLinkage @ 0x140183F10
 * Callers:
 *     KxIsrLinkageShadow @ 0x140298A40 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     _guard_check_icall @ 0x1401898B0 (_guard_check_icall.c)
 *     KiBugCheckDispatch @ 0x140191D40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x14027DD20 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140183F10
 * Reason: Hex-Rays returned no pseudocode for 0x140183F10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140183F10: push    rbp
 * 0000000140183F11: push    rsi
 * 0000000140183F12: sub     rsp, 150h
 * 0000000140183F19: lea     rbp, [rsp+80h]
 * 0000000140183F21: mov     [rbp+0D8h+var_12D], 0
 * 0000000140183F25: mov     [rbp+0D8h+var_128], rax
 * 0000000140183F29: mov     [rbp+0D8h+var_120], rcx
 * 0000000140183F2D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140183F31: mov     [rbp+0D8h+var_110], r8
 * 0000000140183F35: mov     [rbp+0D8h+var_108], r9
 * 0000000140183F39: mov     [rbp+0D8h+var_100], r10
 * 0000000140183F3D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140183F41: test    [rbp+0D8h+arg_8], 1
 * 0000000140183F48: jnz     short loc_140183F77
 * 0000000140183F4A: lfence
 * 0000000140183F4D: test    byte ptr gs:278h, 1
 * 0000000140183F56: jnz     short loc_140183F60
 * 0000000140183F58: lfence
 * 0000000140183F5B: jmp     loc_14018414A
 * 0000000140183F60: movzx   eax, byte ptr gs:27Ah
 * 0000000140183F69: mov     ecx, 48h ; 'H'
 * 0000000140183F6E: xor     edx, edx
 * 0000000140183F70: wrmsr
 * 0000000140183F72: jmp     loc_14018414A
 * 0000000140183F77: test    cs:KiKvaShadow, 1
 * 0000000140183F7E: jnz     short loc_140183F83
 * 0000000140183F80: swapgs
 * 0000000140183F83: lfence
 * 0000000140183F86: mov     r10, gs:188h
 * 0000000140183F8F: mov     rcx, gs:188h
 * 0000000140183F98: mov     rcx, [rcx+220h]
 * 0000000140183F9F: mov     rcx, [rcx+838h]
 * 0000000140183FA6: mov     gs:270h, rcx
 * 0000000140183FAF: movzx   eax, byte ptr gs:27Bh
 * 0000000140183FB8: cmp     gs:27Ah, al
 * 0000000140183FC0: jz      short loc_140183FD3
 * 0000000140183FC2: mov     gs:27Ah, al
 * 0000000140183FCA: mov     ecx, 48h ; 'H'
 * 0000000140183FCF: xor     edx, edx
 * 0000000140183FD1: wrmsr
 * 0000000140183FD3: movzx   edx, byte ptr gs:278h
 * 0000000140183FDC: test    edx, 8
 * 0000000140183FE2: jz      short loc_140183FF7
 * 0000000140183FE4: mov     eax, 1
 * 0000000140183FE9: xor     edx, edx
 * 0000000140183FEB: mov     ecx, 49h ; 'I'
 * 0000000140183FF0: wrmsr
 * 0000000140183FF2: jmp     loc_140184135
 * 0000000140183FF7: test    edx, 2
 * 0000000140183FFD: jz      loc_140184132
 * 0000000140184003: test    byte ptr gs:279h, 4
 * 000000014018400C: jnz     loc_140184132
 * 0000000140184012: call    loc_140184125
 * 0000000140184017: add     rsp, 8
 * 000000014018401B: call    loc_14018412E
 * 0000000140184020: add     rsp, 8
 * 0000000140184024: call    loc_140184017
 * 0000000140184029: add     rsp, 8
 * 000000014018402D: call    loc_140184020
 * 0000000140184032: add     rsp, 8
 * 0000000140184036: call    loc_140184029
 * 000000014018403B: add     rsp, 8
 * 000000014018403F: call    loc_140184032
 * 0000000140184044: add     rsp, 8
 * 0000000140184048: call    loc_14018403B
 * 000000014018404D: add     rsp, 8
 * 0000000140184051: call    loc_140184044
 * 0000000140184056: add     rsp, 8
 * 000000014018405A: call    loc_14018404D
 * 000000014018405F: add     rsp, 8
 * 0000000140184063: call    loc_140184056
 * 0000000140184068: add     rsp, 8
 * 000000014018406C: call    loc_14018405F
 * 0000000140184071: add     rsp, 8
 * 0000000140184075: call    loc_140184068
 * 000000014018407A: add     rsp, 8
 * 000000014018407E: call    loc_140184071
 * 0000000140184083: add     rsp, 8
 * 0000000140184087: call    loc_14018407A
 * 000000014018408C: add     rsp, 8
 * 0000000140184090: call    loc_140184083
 * 0000000140184095: add     rsp, 8
 * 0000000140184099: call    loc_14018408C
 * 000000014018409E: add     rsp, 8
 * 00000001401840A2: call    loc_140184095
 * 00000001401840A7: add     rsp, 8
 * 00000001401840AB: call    loc_14018409E
 * 00000001401840B0: add     rsp, 8
 * 00000001401840B4: call    loc_1401840A7
 * 00000001401840B9: add     rsp, 8
 * 00000001401840BD: call    loc_1401840B0
 * 00000001401840C2: add     rsp, 8
 * 00000001401840C6: call    loc_1401840B9
 * 00000001401840CB: add     rsp, 8
 * 00000001401840CF: call    loc_1401840C2
 * 00000001401840D4: add     rsp, 8
 * 00000001401840D8: call    loc_1401840CB
 * 00000001401840DD: add     rsp, 8
 * 00000001401840E1: call    loc_1401840D4
 * 00000001401840E6: add     rsp, 8
 * 00000001401840EA: call    loc_1401840DD
 * 00000001401840EF: add     rsp, 8
 * 00000001401840F3: call    loc_1401840E6
 * 00000001401840F8: add     rsp, 8
 * 00000001401840FC: call    loc_1401840EF
 * 0000000140184101: add     rsp, 8
 * 0000000140184105: call    loc_1401840F8
 * 000000014018410A: add     rsp, 8
 * 000000014018410E: call    loc_140184101
 * 0000000140184113: add     rsp, 8
 * 0000000140184117: call    loc_14018410A
 * 000000014018411C: add     rsp, 8
 * 0000000140184120: call    loc_140184113
 * 0000000140184125: add     rsp, 8
 * 0000000140184129: call    loc_14018411C
 * 000000014018412E: add     rsp, 8
 * 0000000140184132: lfence
 * 0000000140184135: test    byte ptr [r10+3], 3
 * 000000014018413A: mov     [rbp+0D8h+var_58], 0
 * 0000000140184143: jz      short loc_14018414A
 * 0000000140184145: call    KiSaveDebugRegisterState
 * 000000014018414A: cld
 * 000000014018414B: stmxcsr [rbp+0D8h+var_12C]
 * 000000014018414F: ldmxcsr dword ptr gs:180h
 * 0000000140184158: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014018415C: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140184160: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140184164: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140184168: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014018416C: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140184170: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140184179: jz      short loc_140184180
 * 000000014018417B: call    KeWakeProcessor
 * 0000000140184180: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140184187: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014018418E: jnb     short loc_1401841A9
 * 0000000140184190: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140184197: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014018419E: jb      short loc_1401841A9
 * 00000001401841A0: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401841A4: call    KiCheckForSListAddress
 * 00000001401841A9: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401841B0: mov     rsi, gs:20h
 * 00000001401841B9: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401841C1: inc     dword ptr gs:5D00h
 * 00000001401841C9: test    rsi, rsi
 * 00000001401841CC: jz      short loc_1401841D9
 * 00000001401841CE: mov     rcx, [rsi+50h]; Target
 * 00000001401841D2: call    _guard_check_icall
 * 00000001401841D7: jmp     rcx
 * 00000001401841D9: mov     ecx, eax
 * 00000001401841DB: shr     ecx, 4
 * 00000001401841DE: mov     rax, cr8
 * 00000001401841E2: mov     cr8, rcx
 * 00000001401841E6: mov     [rbp+0D8h+var_12F], al
 * 00000001401841E9: mov     rcx, gs:20h
 * 00000001401841F2: inc     byte ptr [rcx+20h]
 * 00000001401841F5: cmp     byte ptr [rcx+20h], 1
 * 00000001401841F9: jnz     short loc_14018424B
 * 00000001401841FB: rdtsc
 * 00000001401841FD: shl     rdx, 20h
 * 0000000140184201: or      rax, rdx
 * 0000000140184204: mov     r8, [rcx+8]
 * 0000000140184208: sub     rax, [rcx+5BC0h]
 * 000000014018420F: add     [r8+48h], rax
 * 0000000140184213: mov     edx, [r8+50h]
 * 0000000140184217: add     [rcx+5BC0h], rax
 * 000000014018421E: add     rdx, rax
 * 0000000140184221: mov     ecx, edx
 * 0000000140184223: shr     rdx, 20h
 * 0000000140184227: jz      short loc_14018422C
 * 0000000140184229: or      ecx, 0FFFFFFFFh
 * 000000014018422C: mov     [r8+50h], ecx
 * 0000000140184230: test    byte ptr [r8+2], 3Eh
 * 0000000140184235: jz      short loc_14018424B
 * 0000000140184237: mov     rdx, r8
 * 000000014018423A: mov     r8, rax
 * 000000014018423D: mov     rcx, gs:20h
 * 0000000140184246: call    KiEndThreadAccountingPeriod
 * 000000014018424B: sti
 * 000000014018424C: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140184256: jz      short loc_140184264
 * 0000000140184258: movzx   ecx, byte ptr [rbp+0E0h]
 * 000000014018425F: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140184264: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 000000014018426B: jz      short loc_14018428C
 * 000000014018426D: and     [rbp+0D8h+var_138], 0
 * 0000000140184272: xor     r9, r9
 * 0000000140184275: movzx   r8d, byte ptr [rbp+0E0h]
 * 000000014018427D: mov     edx, 1
 * 0000000140184282: mov     ecx, 12h
 * 0000000140184287: call    KiBugCheckDispatch
 * 000000014018428C: cli
 * 000000014018428D: mov     rcx, rsi
 * 0000000140184290: call    HalPerformEndOfInterrupt_0
 * 0000000140184295: mov     rcx, gs:20h
 * 000000014018429E: cmp     byte ptr [rcx+20h], 1
 * 00000001401842A2: ja      short loc_140184318
 * 00000001401842A4: rdtsc
 * 00000001401842A6: shl     rdx, 20h
 * 00000001401842AA: or      rax, rdx
 * 00000001401842AD: sub     rax, [rcx+5BC0h]
 * 00000001401842B4: add     [rcx+5C38h], rax
 * 00000001401842BB: add     [rcx+5BC0h], rax
 * 00000001401842C2: mov     r8, rax
 * 00000001401842C5: mov     rax, [rcx+8]
 * 00000001401842C9: test    byte ptr [rax+2], 32h
 * 00000001401842CD: jz      short loc_1401842E2
 * 00000001401842CF: xor     edx, edx
 * 00000001401842D1: call    KiBeginThreadAccountingPeriod
 * 00000001401842D6: mov     rcx, gs:20h
 * 00000001401842DF: inc     byte ptr [rcx+20h]
 * 00000001401842E2: mov     dl, [rcx+6]
 * 00000001401842E5: and     byte ptr [rcx+6], 0
 * 00000001401842E9: cmp     byte ptr [rcx+7], 0
 * 00000001401842ED: jnz     short loc_140184318
 * 00000001401842EF: test    dl, dl
 * 00000001401842F1: jz      short loc_140184318
 * 00000001401842F3: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401842F7: jnb     short loc_140184304
 * 00000001401842F9: and     byte ptr [rcx+20h], 0
 * 00000001401842FD: call    KiDpcInterruptBypass
 * 0000000140184302: jmp     short loc_14018431B
 * 0000000140184304: mov     ecx, 2
 * 0000000140184309: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018430F: mov     rcx, gs:20h
 * 0000000140184318: dec     byte ptr [rcx+20h]
 * 000000014018431B: movzx   ecx, [rbp+0D8h+var_12F]
 * 000000014018431F: mov     cr8, rcx
 * 0000000140184323: mov     rsi, [rbp+0D8h+var_8]
 * 000000014018432A: cli
 * 000000014018432B: test    [rbp+0D8h+arg_8], 1
 * 0000000140184332: jz      loc_140184448
 * 0000000140184338: mov     rcx, gs:188h
 * 0000000140184341: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140184348: jz      short loc_140184363
 * 000000014018434A: mov     ecx, 1
 * 000000014018434F: mov     cr8, rcx
 * 0000000140184353: sti
 * 0000000140184354: call    KiInitiateUserApc
 * 0000000140184359: cli
 * 000000014018435A: mov     ecx, 0
 * 000000014018435F: mov     cr8, rcx
 * 0000000140184363: mov     rcx, gs:188h
 * 000000014018436C: test    dword ptr [rcx], 8000000h
 * 0000000140184372: jz      short loc_140184379
 * 0000000140184374: call    KiRestoreSetContextState
 * 0000000140184379: mov     rcx, gs:188h
 * 0000000140184382: test    dword ptr [rcx], 40010000h
 * 0000000140184388: jz      short loc_14018439E
 * 000000014018438A: test    byte ptr [rcx+2], 1
 * 000000014018438E: jz      short loc_14018439E
 * 0000000140184390: call    KiCopyCounters
 * 0000000140184395: mov     rcx, gs:188h
 * 000000014018439E: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401843A2: cmp     [rbp+0D8h+var_58], 0
 * 00000001401843AA: jz      short loc_1401843B1
 * 00000001401843AC: call    KiRestoreDebugRegisterState
 * 00000001401843B1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401843B5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401843B9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401843BD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401843C1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401843C5: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401843C9: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401843CD: mov     r10, [rbp+0D8h+var_100]
 * 00000001401843D1: mov     r9, [rbp+0D8h+var_108]
 * 00000001401843D5: mov     r8, [rbp+0D8h+var_110]
 * 00000001401843D9: movzx   eax, byte ptr gs:27Dh
 * 00000001401843E2: cmp     gs:27Ah, al
 * 00000001401843EA: jz      short loc_1401843FD
 * 00000001401843EC: mov     gs:27Ah, al
 * 00000001401843F4: mov     ecx, 48h ; 'H'
 * 00000001401843F9: xor     edx, edx
 * 00000001401843FB: wrmsr
 * 00000001401843FD: btr     word ptr gs:278h, 2
 * 0000000140184408: jnb     short loc_140184418
 * 000000014018440A: mov     eax, 1
 * 000000014018440F: xor     edx, edx
 * 0000000140184411: mov     ecx, 49h ; 'I'
 * 0000000140184416: wrmsr
 * 0000000140184418: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018441C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140184420: mov     rax, [rbp+0D8h+var_128]
 * 0000000140184424: mov     rsp, rbp
 * 0000000140184427: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018442E: add     rsp, 0E8h
 * 0000000140184435: test    cs:KiKvaShadow, 1
 * 000000014018443C: jz      short loc_140184443
 * 000000014018443E: jmp     KiKernelExit
 * 0000000140184443: swapgs
 * 0000000140184446: iretq
 * 0000000140184448: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018444C: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140184450: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140184454: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140184458: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018445C: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140184460: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140184464: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140184468: mov     r10, [rbp+0D8h+var_100]
 * 000000014018446C: mov     r9, [rbp+0D8h+var_108]
 * 0000000140184470: mov     r8, [rbp+0D8h+var_110]
 * 0000000140184474: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140184478: mov     rcx, [rbp+0D8h+var_120]
 * 000000014018447C: mov     rax, [rbp+0D8h+var_128]
 * 0000000140184480: mov     rsp, rbp
 * 0000000140184483: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018448A: add     rsp, 0E8h
 * 0000000140184491: iretq
 */
