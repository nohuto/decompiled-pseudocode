/*
 * XREFs of KiIpiInterrupt @ 0x1401B15B0
 * Callers:
 *     KiIpiInterruptShadow @ 0x1402D0180 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400A47B0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401B15B0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401B1AA0 (KiIpiInterruptSubDispatch.c)
 *     KeWakeProcessor @ 0x140245130 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401B15B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401B15B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B15B0: sub     rsp, 8
 * 00000001401B15B4: push    rbp
 * 00000001401B15B5: push    rsi
 * 00000001401B15B6: sub     rsp, 150h
 * 00000001401B15BD: lea     rbp, [rsp+80h]
 * 00000001401B15C5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401B15C9: mov     [rbp+0E8h+var_138], rax
 * 00000001401B15CD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401B15D1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401B15D5: mov     [rbp+0E8h+var_120], r8
 * 00000001401B15D9: mov     [rbp+0E8h+var_118], r9
 * 00000001401B15DD: mov     [rbp+0E8h+var_110], r10
 * 00000001401B15E1: mov     [rbp+0E8h+var_108], r11
 * 00000001401B15E5: test    [rbp+0E8h+arg_0], 1
 * 00000001401B15EC: jnz     short loc_1401B161B
 * 00000001401B15EE: lfence
 * 00000001401B15F1: test    byte ptr gs:278h, 1
 * 00000001401B15FA: jnz     short loc_1401B1604
 * 00000001401B15FC: lfence
 * 00000001401B15FF: jmp     loc_1401B17EE
 * 00000001401B1604: movzx   eax, byte ptr gs:27Ah
 * 00000001401B160D: mov     ecx, 48h ; 'H'
 * 00000001401B1612: xor     edx, edx
 * 00000001401B1614: wrmsr
 * 00000001401B1616: jmp     loc_1401B17EE
 * 00000001401B161B: test    cs:KiKvaShadow, 1
 * 00000001401B1622: jnz     short loc_1401B1627
 * 00000001401B1624: swapgs
 * 00000001401B1627: lfence
 * 00000001401B162A: mov     r10, gs:188h
 * 00000001401B1633: mov     rcx, gs:188h
 * 00000001401B163C: mov     rcx, [rcx+220h]
 * 00000001401B1643: mov     rcx, [rcx+838h]
 * 00000001401B164A: mov     gs:270h, rcx
 * 00000001401B1653: movzx   eax, byte ptr gs:27Bh
 * 00000001401B165C: cmp     gs:27Ah, al
 * 00000001401B1664: jz      short loc_1401B1677
 * 00000001401B1666: mov     gs:27Ah, al
 * 00000001401B166E: mov     ecx, 48h ; 'H'
 * 00000001401B1673: xor     edx, edx
 * 00000001401B1675: wrmsr
 * 00000001401B1677: movzx   edx, byte ptr gs:278h
 * 00000001401B1680: test    edx, 8
 * 00000001401B1686: jz      short loc_1401B169B
 * 00000001401B1688: mov     eax, 1
 * 00000001401B168D: xor     edx, edx
 * 00000001401B168F: mov     ecx, 49h ; 'I'
 * 00000001401B1694: wrmsr
 * 00000001401B1696: jmp     loc_1401B17D9
 * 00000001401B169B: test    edx, 2
 * 00000001401B16A1: jz      loc_1401B17D6
 * 00000001401B16A7: test    byte ptr gs:279h, 4
 * 00000001401B16B0: jnz     loc_1401B17D6
 * 00000001401B16B6: call    loc_1401B17C9
 * 00000001401B16BB: add     rsp, 8
 * 00000001401B16BF: call    loc_1401B17D2
 * 00000001401B16C4: add     rsp, 8
 * 00000001401B16C8: call    loc_1401B16BB
 * 00000001401B16CD: add     rsp, 8
 * 00000001401B16D1: call    loc_1401B16C4
 * 00000001401B16D6: add     rsp, 8
 * 00000001401B16DA: call    loc_1401B16CD
 * 00000001401B16DF: add     rsp, 8
 * 00000001401B16E3: call    loc_1401B16D6
 * 00000001401B16E8: add     rsp, 8
 * 00000001401B16EC: call    loc_1401B16DF
 * 00000001401B16F1: add     rsp, 8
 * 00000001401B16F5: call    loc_1401B16E8
 * 00000001401B16FA: add     rsp, 8
 * 00000001401B16FE: call    loc_1401B16F1
 * 00000001401B1703: add     rsp, 8
 * 00000001401B1707: call    loc_1401B16FA
 * 00000001401B170C: add     rsp, 8
 * 00000001401B1710: call    loc_1401B1703
 * 00000001401B1715: add     rsp, 8
 * 00000001401B1719: call    loc_1401B170C
 * 00000001401B171E: add     rsp, 8
 * 00000001401B1722: call    loc_1401B1715
 * 00000001401B1727: add     rsp, 8
 * 00000001401B172B: call    loc_1401B171E
 * 00000001401B1730: add     rsp, 8
 * 00000001401B1734: call    loc_1401B1727
 * 00000001401B1739: add     rsp, 8
 * 00000001401B173D: call    loc_1401B1730
 * 00000001401B1742: add     rsp, 8
 * 00000001401B1746: call    loc_1401B1739
 * 00000001401B174B: add     rsp, 8
 * 00000001401B174F: call    loc_1401B1742
 * 00000001401B1754: add     rsp, 8
 * 00000001401B1758: call    loc_1401B174B
 * 00000001401B175D: add     rsp, 8
 * 00000001401B1761: call    loc_1401B1754
 * 00000001401B1766: add     rsp, 8
 * 00000001401B176A: call    loc_1401B175D
 * 00000001401B176F: add     rsp, 8
 * 00000001401B1773: call    loc_1401B1766
 * 00000001401B1778: add     rsp, 8
 * 00000001401B177C: call    loc_1401B176F
 * 00000001401B1781: add     rsp, 8
 * 00000001401B1785: call    loc_1401B1778
 * 00000001401B178A: add     rsp, 8
 * 00000001401B178E: call    loc_1401B1781
 * 00000001401B1793: add     rsp, 8
 * 00000001401B1797: call    loc_1401B178A
 * 00000001401B179C: add     rsp, 8
 * 00000001401B17A0: call    loc_1401B1793
 * 00000001401B17A5: add     rsp, 8
 * 00000001401B17A9: call    loc_1401B179C
 * 00000001401B17AE: add     rsp, 8
 * 00000001401B17B2: call    loc_1401B17A5
 * 00000001401B17B7: add     rsp, 8
 * 00000001401B17BB: call    loc_1401B17AE
 * 00000001401B17C0: add     rsp, 8
 * 00000001401B17C4: call    loc_1401B17B7
 * 00000001401B17C9: add     rsp, 8
 * 00000001401B17CD: call    loc_1401B17C0
 * 00000001401B17D2: add     rsp, 8
 * 00000001401B17D6: lfence
 * 00000001401B17D9: test    byte ptr [r10+3], 3
 * 00000001401B17DE: mov     [rbp+0E8h+var_68], 0
 * 00000001401B17E7: jz      short loc_1401B17EE
 * 00000001401B17E9: call    KiSaveDebugRegisterState
 * 00000001401B17EE: cld
 * 00000001401B17EF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401B17F3: ldmxcsr dword ptr gs:180h
 * 00000001401B17FC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401B1800: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401B1804: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401B1808: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401B180C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401B1810: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401B1814: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401B181D: jz      short loc_1401B1824
 * 00000001401B181F: call    KeWakeProcessor
 * 00000001401B1824: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401B182B: cmp     rax, [rbp+0E8h]
 * 00000001401B1832: jnb     short loc_1401B184D
 * 00000001401B1834: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401B183B: cmp     rax, [rbp+0E8h]
 * 00000001401B1842: jb      short loc_1401B184D
 * 00000001401B1844: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401B1848: call    KiCheckForSListAddress
 * 00000001401B184D: xor     esi, esi
 * 00000001401B184F: inc     dword ptr gs:5D00h
 * 00000001401B1857: mov     rdx, rsp
 * 00000001401B185A: mov     rcx, gs:6458h
 * 00000001401B1863: lea     rax, [rcx-6000h]
 * 00000001401B186A: cmp     rax, rsp
 * 00000001401B186D: ja      short loc_1401B1874
 * 00000001401B186F: cmp     rsp, rcx
 * 00000001401B1872: jb      short loc_1401B1880
 * 00000001401B1874: cmp     cs:KiBugCheckActive, 0
 * 00000001401B187B: jnz     short loc_1401B1880
 * 00000001401B187D: mov     rsp, rcx
 * 00000001401B1880: sub     rsp, 20h
 * 00000001401B1884: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401B1889: call    KiIpiInterruptSubDispatch
 * 00000001401B188E: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401B1893: mov     rcx, rsi
 * 00000001401B1896: call    HalPerformEndOfInterrupt_0
 * 00000001401B189B: mov     rcx, gs:20h
 * 00000001401B18A4: cmp     byte ptr [rcx+20h], 1
 * 00000001401B18A8: ja      short loc_1401B191E
 * 00000001401B18AA: rdtsc
 * 00000001401B18AC: shl     rdx, 20h
 * 00000001401B18B0: or      rax, rdx
 * 00000001401B18B3: sub     rax, [rcx+5BC0h]
 * 00000001401B18BA: add     [rcx+5C38h], rax
 * 00000001401B18C1: add     [rcx+5BC0h], rax
 * 00000001401B18C8: mov     r8, rax
 * 00000001401B18CB: mov     rax, [rcx+8]
 * 00000001401B18CF: test    byte ptr [rax+2], 72h
 * 00000001401B18D3: jz      short loc_1401B18E8
 * 00000001401B18D5: xor     edx, edx
 * 00000001401B18D7: call    KiBeginThreadAccountingPeriod
 * 00000001401B18DC: mov     rcx, gs:20h
 * 00000001401B18E5: inc     byte ptr [rcx+20h]
 * 00000001401B18E8: mov     dl, [rcx+6]
 * 00000001401B18EB: and     byte ptr [rcx+6], 0
 * 00000001401B18EF: cmp     byte ptr [rcx+7], 0
 * 00000001401B18F3: jnz     short loc_1401B191E
 * 00000001401B18F5: test    dl, dl
 * 00000001401B18F7: jz      short loc_1401B191E
 * 00000001401B18F9: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401B18FD: jnb     short loc_1401B190A
 * 00000001401B18FF: and     byte ptr [rcx+20h], 0
 * 00000001401B1903: call    KiDpcInterruptBypass
 * 00000001401B1908: jmp     short loc_1401B1921
 * 00000001401B190A: mov     ecx, 2
 * 00000001401B190F: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401B1915: mov     rcx, gs:20h
 * 00000001401B191E: dec     byte ptr [rcx+20h]
 * 00000001401B1921: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401B1925: mov     cr8, rcx
 * 00000001401B1929: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401B1930: test    [rbp+0E8h+arg_0], 1
 * 00000001401B1937: jz      loc_1401B1A4D
 * 00000001401B193D: mov     rcx, gs:188h
 * 00000001401B1946: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401B194D: jz      short loc_1401B1968
 * 00000001401B194F: mov     ecx, 1
 * 00000001401B1954: mov     cr8, rcx
 * 00000001401B1958: sti
 * 00000001401B1959: call    KiInitiateUserApc
 * 00000001401B195E: cli
 * 00000001401B195F: mov     ecx, 0
 * 00000001401B1964: mov     cr8, rcx
 * 00000001401B1968: mov     rcx, gs:188h
 * 00000001401B1971: test    dword ptr [rcx], 8000000h
 * 00000001401B1977: jz      short loc_1401B197E
 * 00000001401B1979: call    KiRestoreSetContextState
 * 00000001401B197E: mov     rcx, gs:188h
 * 00000001401B1987: test    dword ptr [rcx], 40010000h
 * 00000001401B198D: jz      short loc_1401B19A3
 * 00000001401B198F: test    byte ptr [rcx+2], 1
 * 00000001401B1993: jz      short loc_1401B19A3
 * 00000001401B1995: call    KiCopyCounters
 * 00000001401B199A: mov     rcx, gs:188h
 * 00000001401B19A3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B19A7: cmp     [rbp+0E8h+var_68], 0
 * 00000001401B19AF: jz      short loc_1401B19B6
 * 00000001401B19B1: call    KiRestoreDebugRegisterState
 * 00000001401B19B6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B19BA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B19BE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B19C2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B19C6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B19CA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B19CE: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B19D2: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B19D6: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B19DA: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B19DE: movzx   eax, byte ptr gs:27Dh
 * 00000001401B19E7: cmp     gs:27Ah, al
 * 00000001401B19EF: jz      short loc_1401B1A02
 * 00000001401B19F1: mov     gs:27Ah, al
 * 00000001401B19F9: mov     ecx, 48h ; 'H'
 * 00000001401B19FE: xor     edx, edx
 * 00000001401B1A00: wrmsr
 * 00000001401B1A02: btr     word ptr gs:278h, 2
 * 00000001401B1A0D: jnb     short loc_1401B1A1D
 * 00000001401B1A0F: mov     eax, 1
 * 00000001401B1A14: xor     edx, edx
 * 00000001401B1A16: mov     ecx, 49h ; 'I'
 * 00000001401B1A1B: wrmsr
 * 00000001401B1A1D: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B1A21: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B1A25: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B1A29: mov     rsp, rbp
 * 00000001401B1A2C: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B1A33: add     rsp, 0E8h
 * 00000001401B1A3A: test    cs:KiKvaShadow, 1
 * 00000001401B1A41: jz      short loc_1401B1A48
 * 00000001401B1A43: jmp     KiKernelExit
 * 00000001401B1A48: swapgs
 * 00000001401B1A4B: iretq
 * 00000001401B1A4D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401B1A51: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401B1A55: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401B1A59: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401B1A5D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401B1A61: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401B1A65: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401B1A69: mov     r11, [rbp+0E8h+var_108]
 * 00000001401B1A6D: mov     r10, [rbp+0E8h+var_110]
 * 00000001401B1A71: mov     r9, [rbp+0E8h+var_118]
 * 00000001401B1A75: mov     r8, [rbp+0E8h+var_120]
 * 00000001401B1A79: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401B1A7D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401B1A81: mov     rax, [rbp+0E8h+var_138]
 * 00000001401B1A85: mov     rsp, rbp
 * 00000001401B1A88: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401B1A8F: add     rsp, 0E8h
 * 00000001401B1A96: iretq
 */
