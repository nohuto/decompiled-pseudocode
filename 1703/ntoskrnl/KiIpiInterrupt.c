/*
 * XREFs of KiIpiInterrupt @ 0x140187EE0
 * Callers:
 *     KiIpiInterruptShadow @ 0x14026D100 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140187EE0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401883D0 (KiIpiInterruptSubDispatch.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140187EE0
 * Reason: Hex-Rays returned no pseudocode for 0x140187EE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187EE0: sub     rsp, 8
 * 0000000140187EE4: push    rbp
 * 0000000140187EE5: push    rsi
 * 0000000140187EE6: sub     rsp, 150h
 * 0000000140187EED: lea     rbp, [rsp+80h]
 * 0000000140187EF5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140187EF9: mov     [rbp+0E8h+var_138], rax
 * 0000000140187EFD: mov     [rbp+0E8h+var_130], rcx
 * 0000000140187F01: mov     [rbp+0E8h+var_128], rdx
 * 0000000140187F05: mov     [rbp+0E8h+var_120], r8
 * 0000000140187F09: mov     [rbp+0E8h+var_118], r9
 * 0000000140187F0D: mov     [rbp+0E8h+var_110], r10
 * 0000000140187F11: mov     [rbp+0E8h+var_108], r11
 * 0000000140187F15: test    [rbp+0E8h+arg_0], 1
 * 0000000140187F1C: jnz     short loc_140187F4B
 * 0000000140187F1E: lfence
 * 0000000140187F21: test    byte ptr gs:278h, 1
 * 0000000140187F2A: jnz     short loc_140187F34
 * 0000000140187F2C: lfence
 * 0000000140187F2F: jmp     loc_14018811E
 * 0000000140187F34: movzx   eax, byte ptr gs:27Ah
 * 0000000140187F3D: mov     ecx, 48h ; 'H'
 * 0000000140187F42: xor     edx, edx
 * 0000000140187F44: wrmsr
 * 0000000140187F46: jmp     loc_14018811E
 * 0000000140187F4B: test    cs:KiKvaShadow, 1
 * 0000000140187F52: jnz     short loc_140187F57
 * 0000000140187F54: swapgs
 * 0000000140187F57: lfence
 * 0000000140187F5A: mov     r10, gs:188h
 * 0000000140187F63: mov     rcx, gs:188h
 * 0000000140187F6C: mov     rcx, [rcx+220h]
 * 0000000140187F73: mov     rcx, [rcx+818h]
 * 0000000140187F7A: mov     gs:270h, rcx
 * 0000000140187F83: movzx   eax, byte ptr gs:27Bh
 * 0000000140187F8C: cmp     gs:27Ah, al
 * 0000000140187F94: jz      short loc_140187FA7
 * 0000000140187F96: mov     gs:27Ah, al
 * 0000000140187F9E: mov     ecx, 48h ; 'H'
 * 0000000140187FA3: xor     edx, edx
 * 0000000140187FA5: wrmsr
 * 0000000140187FA7: movzx   edx, byte ptr gs:278h
 * 0000000140187FB0: test    edx, 8
 * 0000000140187FB6: jz      short loc_140187FCB
 * 0000000140187FB8: mov     eax, 1
 * 0000000140187FBD: xor     edx, edx
 * 0000000140187FBF: mov     ecx, 49h ; 'I'
 * 0000000140187FC4: wrmsr
 * 0000000140187FC6: jmp     loc_140188109
 * 0000000140187FCB: test    edx, 2
 * 0000000140187FD1: jz      loc_140188106
 * 0000000140187FD7: test    byte ptr gs:279h, 4
 * 0000000140187FE0: jnz     loc_140188106
 * 0000000140187FE6: call    loc_1401880F9
 * 0000000140187FEB: add     rsp, 8
 * 0000000140187FEF: call    loc_140188102
 * 0000000140187FF4: add     rsp, 8
 * 0000000140187FF8: call    loc_140187FEB
 * 0000000140187FFD: add     rsp, 8
 * 0000000140188001: call    loc_140187FF4
 * 0000000140188006: add     rsp, 8
 * 000000014018800A: call    loc_140187FFD
 * 000000014018800F: add     rsp, 8
 * 0000000140188013: call    loc_140188006
 * 0000000140188018: add     rsp, 8
 * 000000014018801C: call    loc_14018800F
 * 0000000140188021: add     rsp, 8
 * 0000000140188025: call    loc_140188018
 * 000000014018802A: add     rsp, 8
 * 000000014018802E: call    loc_140188021
 * 0000000140188033: add     rsp, 8
 * 0000000140188037: call    loc_14018802A
 * 000000014018803C: add     rsp, 8
 * 0000000140188040: call    loc_140188033
 * 0000000140188045: add     rsp, 8
 * 0000000140188049: call    loc_14018803C
 * 000000014018804E: add     rsp, 8
 * 0000000140188052: call    loc_140188045
 * 0000000140188057: add     rsp, 8
 * 000000014018805B: call    loc_14018804E
 * 0000000140188060: add     rsp, 8
 * 0000000140188064: call    loc_140188057
 * 0000000140188069: add     rsp, 8
 * 000000014018806D: call    loc_140188060
 * 0000000140188072: add     rsp, 8
 * 0000000140188076: call    loc_140188069
 * 000000014018807B: add     rsp, 8
 * 000000014018807F: call    loc_140188072
 * 0000000140188084: add     rsp, 8
 * 0000000140188088: call    loc_14018807B
 * 000000014018808D: add     rsp, 8
 * 0000000140188091: call    loc_140188084
 * 0000000140188096: add     rsp, 8
 * 000000014018809A: call    loc_14018808D
 * 000000014018809F: add     rsp, 8
 * 00000001401880A3: call    loc_140188096
 * 00000001401880A8: add     rsp, 8
 * 00000001401880AC: call    loc_14018809F
 * 00000001401880B1: add     rsp, 8
 * 00000001401880B5: call    loc_1401880A8
 * 00000001401880BA: add     rsp, 8
 * 00000001401880BE: call    loc_1401880B1
 * 00000001401880C3: add     rsp, 8
 * 00000001401880C7: call    loc_1401880BA
 * 00000001401880CC: add     rsp, 8
 * 00000001401880D0: call    loc_1401880C3
 * 00000001401880D5: add     rsp, 8
 * 00000001401880D9: call    loc_1401880CC
 * 00000001401880DE: add     rsp, 8
 * 00000001401880E2: call    loc_1401880D5
 * 00000001401880E7: add     rsp, 8
 * 00000001401880EB: call    loc_1401880DE
 * 00000001401880F0: add     rsp, 8
 * 00000001401880F4: call    loc_1401880E7
 * 00000001401880F9: add     rsp, 8
 * 00000001401880FD: call    loc_1401880F0
 * 0000000140188102: add     rsp, 8
 * 0000000140188106: lfence
 * 0000000140188109: test    byte ptr [r10+3], 3
 * 000000014018810E: mov     [rbp+0E8h+var_68], 0
 * 0000000140188117: jz      short loc_14018811E
 * 0000000140188119: call    KiSaveDebugRegisterState
 * 000000014018811E: cld
 * 000000014018811F: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140188123: ldmxcsr dword ptr gs:180h
 * 000000014018812C: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140188130: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140188134: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140188138: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018813C: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140188140: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140188144: cmp     byte ptr gs:5D1Ah, 0
 * 000000014018814D: jz      short loc_140188154
 * 000000014018814F: call    KeWakeProcessor
 * 0000000140188154: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014018815B: cmp     rax, [rbp+0E8h]
 * 0000000140188162: jnb     short loc_14018817D
 * 0000000140188164: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014018816B: cmp     rax, [rbp+0E8h]
 * 0000000140188172: jb      short loc_14018817D
 * 0000000140188174: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140188178: call    KiCheckForSListAddress
 * 000000014018817D: xor     esi, esi
 * 000000014018817F: inc     dword ptr gs:5D00h
 * 0000000140188187: mov     rdx, rsp
 * 000000014018818A: mov     rcx, gs:6598h
 * 0000000140188193: lea     rax, [rcx-6000h]
 * 000000014018819A: cmp     rax, rsp
 * 000000014018819D: ja      short loc_1401881A4
 * 000000014018819F: cmp     rsp, rcx
 * 00000001401881A2: jb      short loc_1401881B0
 * 00000001401881A4: cmp     cs:KiBugCheckActive, 0
 * 00000001401881AB: jnz     short loc_1401881B0
 * 00000001401881AD: mov     rsp, rcx
 * 00000001401881B0: sub     rsp, 20h
 * 00000001401881B4: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401881B9: call    KiIpiInterruptSubDispatch
 * 00000001401881BE: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401881C3: mov     rcx, rsi
 * 00000001401881C6: call    HalPerformEndOfInterrupt_0
 * 00000001401881CB: mov     rcx, gs:20h
 * 00000001401881D4: cmp     byte ptr [rcx+20h], 1
 * 00000001401881D8: ja      short loc_14018824E
 * 00000001401881DA: rdtsc
 * 00000001401881DC: shl     rdx, 20h
 * 00000001401881E0: or      rax, rdx
 * 00000001401881E3: sub     rax, [rcx+5BC0h]
 * 00000001401881EA: add     [rcx+5C78h], rax
 * 00000001401881F1: add     [rcx+5BC0h], rax
 * 00000001401881F8: mov     r8, rax
 * 00000001401881FB: mov     rax, [rcx+8]
 * 00000001401881FF: test    byte ptr [rax+2], 32h
 * 0000000140188203: jz      short loc_140188218
 * 0000000140188205: xor     edx, edx
 * 0000000140188207: call    KiBeginThreadAccountingPeriod
 * 000000014018820C: mov     rcx, gs:20h
 * 0000000140188215: inc     byte ptr [rcx+20h]
 * 0000000140188218: mov     dl, [rcx+6]
 * 000000014018821B: and     byte ptr [rcx+6], 0
 * 000000014018821F: cmp     byte ptr [rcx+7], 0
 * 0000000140188223: jnz     short loc_14018824E
 * 0000000140188225: test    dl, dl
 * 0000000140188227: jz      short loc_14018824E
 * 0000000140188229: cmp     [rbp+0E8h+var_13F], 2
 * 000000014018822D: jnb     short loc_14018823A
 * 000000014018822F: and     byte ptr [rcx+20h], 0
 * 0000000140188233: call    KiDpcInterruptBypass
 * 0000000140188238: jmp     short loc_140188251
 * 000000014018823A: mov     ecx, 2
 * 000000014018823F: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140188245: mov     rcx, gs:20h
 * 000000014018824E: dec     byte ptr [rcx+20h]
 * 0000000140188251: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140188255: mov     cr8, rcx
 * 0000000140188259: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140188260: test    [rbp+0E8h+arg_0], 1
 * 0000000140188267: jz      loc_14018837D
 * 000000014018826D: mov     rcx, gs:188h
 * 0000000140188276: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018827D: jz      short loc_140188298
 * 000000014018827F: mov     ecx, 1
 * 0000000140188284: mov     cr8, rcx
 * 0000000140188288: sti
 * 0000000140188289: call    KiInitiateUserApc
 * 000000014018828E: cli
 * 000000014018828F: mov     ecx, 0
 * 0000000140188294: mov     cr8, rcx
 * 0000000140188298: mov     rcx, gs:188h
 * 00000001401882A1: test    dword ptr [rcx], 8000000h
 * 00000001401882A7: jz      short loc_1401882AE
 * 00000001401882A9: call    KiRestoreSetContextState
 * 00000001401882AE: mov     rcx, gs:188h
 * 00000001401882B7: test    dword ptr [rcx], 40010000h
 * 00000001401882BD: jz      short loc_1401882D3
 * 00000001401882BF: test    byte ptr [rcx+2], 1
 * 00000001401882C3: jz      short loc_1401882D3
 * 00000001401882C5: call    KiCopyCounters
 * 00000001401882CA: mov     rcx, gs:188h
 * 00000001401882D3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401882D7: cmp     [rbp+0E8h+var_68], 0
 * 00000001401882DF: jz      short loc_1401882E6
 * 00000001401882E1: call    KiRestoreDebugRegisterState
 * 00000001401882E6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401882EA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401882EE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401882F2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401882F6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401882FA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401882FE: mov     r11, [rbp+0E8h+var_108]
 * 0000000140188302: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188306: mov     r9, [rbp+0E8h+var_118]
 * 000000014018830A: mov     r8, [rbp+0E8h+var_120]
 * 000000014018830E: movzx   eax, byte ptr gs:27Dh
 * 0000000140188317: cmp     gs:27Ah, al
 * 000000014018831F: jz      short loc_140188332
 * 0000000140188321: mov     gs:27Ah, al
 * 0000000140188329: mov     ecx, 48h ; 'H'
 * 000000014018832E: xor     edx, edx
 * 0000000140188330: wrmsr
 * 0000000140188332: btr     word ptr gs:278h, 2
 * 000000014018833D: jnb     short loc_14018834D
 * 000000014018833F: mov     eax, 1
 * 0000000140188344: xor     edx, edx
 * 0000000140188346: mov     ecx, 49h ; 'I'
 * 000000014018834B: wrmsr
 * 000000014018834D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140188351: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140188355: mov     rax, [rbp+0E8h+var_138]
 * 0000000140188359: mov     rsp, rbp
 * 000000014018835C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188363: add     rsp, 0E8h
 * 000000014018836A: test    cs:KiKvaShadow, 1
 * 0000000140188371: jz      short loc_140188378
 * 0000000140188373: jmp     KiKernelExit
 * 0000000140188378: swapgs
 * 000000014018837B: iretq
 * 000000014018837D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188381: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140188385: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140188389: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018838D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188391: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140188395: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140188399: mov     r11, [rbp+0E8h+var_108]
 * 000000014018839D: mov     r10, [rbp+0E8h+var_110]
 * 00000001401883A1: mov     r9, [rbp+0E8h+var_118]
 * 00000001401883A5: mov     r8, [rbp+0E8h+var_120]
 * 00000001401883A9: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401883AD: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401883B1: mov     rax, [rbp+0E8h+var_138]
 * 00000001401883B5: mov     rsp, rbp
 * 00000001401883B8: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401883BF: add     rsp, 0E8h
 * 00000001401883C6: iretq
 */
