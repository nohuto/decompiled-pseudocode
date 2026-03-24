/*
 * XREFs of KiChainedDispatch @ 0x1401AC000
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401AC000
 * Reason: Hex-Rays returned no pseudocode for 0x1401AC000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AC000: mov     rdx, rsp
 * 00000001401AC003: mov     rcx, gs:6458h
 * 00000001401AC00C: lea     rax, [rcx-6000h]
 * 00000001401AC013: cmp     rax, rsp
 * 00000001401AC016: ja      short loc_1401AC01D
 * 00000001401AC018: cmp     rsp, rcx
 * 00000001401AC01B: jb      short loc_1401AC029
 * 00000001401AC01D: cmp     cs:KiBugCheckActive, 0
 * 00000001401AC024: jnz     short loc_1401AC029
 * 00000001401AC026: mov     rsp, rcx
 * 00000001401AC029: sub     rsp, 20h
 * 00000001401AC02D: mov     [rsp+20h+var_10], rdx
 * 00000001401AC032: call    KiScanInterruptObjectList
 * 00000001401AC037: mov     rsp, [rsp+20h+var_10]
 * 00000001401AC03C: mov     rcx, rsi
 * 00000001401AC03F: call    HalPerformEndOfInterrupt_0
 * 00000001401AC044: mov     rcx, gs:20h
 * 00000001401AC04D: cmp     byte ptr [rcx+20h], 1
 * 00000001401AC051: ja      short loc_1401AC0C7
 * 00000001401AC053: rdtsc
 * 00000001401AC055: shl     rdx, 20h
 * 00000001401AC059: or      rax, rdx
 * 00000001401AC05C: sub     rax, [rcx+5BC0h]
 * 00000001401AC063: add     [rcx+5C38h], rax
 * 00000001401AC06A: add     [rcx+5BC0h], rax
 * 00000001401AC071: mov     r8, rax
 * 00000001401AC074: mov     rax, [rcx+8]
 * 00000001401AC078: test    byte ptr [rax+2], 72h
 * 00000001401AC07C: jz      short loc_1401AC091
 * 00000001401AC07E: xor     edx, edx
 * 00000001401AC080: call    KiBeginThreadAccountingPeriod
 * 00000001401AC085: mov     rcx, gs:20h
 * 00000001401AC08E: inc     byte ptr [rcx+20h]
 * 00000001401AC091: mov     dl, [rcx+6]
 * 00000001401AC094: and     byte ptr [rcx+6], 0
 * 00000001401AC098: cmp     byte ptr [rcx+7], 0
 * 00000001401AC09C: jnz     short loc_1401AC0C7
 * 00000001401AC09E: test    dl, dl
 * 00000001401AC0A0: jz      short loc_1401AC0C7
 * 00000001401AC0A2: cmp     byte ptr [rbp-57h], 2
 * 00000001401AC0A6: jnb     short loc_1401AC0B3
 * 00000001401AC0A8: and     byte ptr [rcx+20h], 0
 * 00000001401AC0AC: call    KiDpcInterruptBypass
 * 00000001401AC0B1: jmp     short loc_1401AC0CA
 * 00000001401AC0B3: mov     ecx, 2
 * 00000001401AC0B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401AC0BE: mov     rcx, gs:20h
 * 00000001401AC0C7: dec     byte ptr [rcx+20h]
 * 00000001401AC0CA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401AC0CE: mov     cr8, rcx
 * 00000001401AC0D2: mov     rsi, [rbp+0D0h]
 * 00000001401AC0D9: test    byte ptr [rbp+0F0h], 1
 * 00000001401AC0E0: jz      loc_1401AC1F6
 * 00000001401AC0E6: mov     rcx, gs:188h
 * 00000001401AC0EF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401AC0F6: jz      short loc_1401AC111
 * 00000001401AC0F8: mov     ecx, 1
 * 00000001401AC0FD: mov     cr8, rcx
 * 00000001401AC101: sti
 * 00000001401AC102: call    KiInitiateUserApc
 * 00000001401AC107: cli
 * 00000001401AC108: mov     ecx, 0
 * 00000001401AC10D: mov     cr8, rcx
 * 00000001401AC111: mov     rcx, gs:188h
 * 00000001401AC11A: test    dword ptr [rcx], 8000000h
 * 00000001401AC120: jz      short loc_1401AC127
 * 00000001401AC122: call    KiRestoreSetContextState
 * 00000001401AC127: mov     rcx, gs:188h
 * 00000001401AC130: test    dword ptr [rcx], 40010000h
 * 00000001401AC136: jz      short loc_1401AC14C
 * 00000001401AC138: test    byte ptr [rcx+2], 1
 * 00000001401AC13C: jz      short loc_1401AC14C
 * 00000001401AC13E: call    KiCopyCounters
 * 00000001401AC143: mov     rcx, gs:188h
 * 00000001401AC14C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401AC150: cmp     word ptr [rbp+80h], 0
 * 00000001401AC158: jz      short loc_1401AC15F
 * 00000001401AC15A: call    KiRestoreDebugRegisterState
 * 00000001401AC15F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401AC163: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401AC167: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401AC16B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401AC16F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401AC173: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401AC177: mov     r11, [rbp-20h]
 * 00000001401AC17B: mov     r10, [rbp-28h]
 * 00000001401AC17F: mov     r9, [rbp-30h]
 * 00000001401AC183: mov     r8, [rbp-38h]
 * 00000001401AC187: movzx   eax, byte ptr gs:27Dh
 * 00000001401AC190: cmp     gs:27Ah, al
 * 00000001401AC198: jz      short loc_1401AC1AB
 * 00000001401AC19A: mov     gs:27Ah, al
 * 00000001401AC1A2: mov     ecx, 48h ; 'H'
 * 00000001401AC1A7: xor     edx, edx
 * 00000001401AC1A9: wrmsr
 * 00000001401AC1AB: btr     word ptr gs:278h, 2
 * 00000001401AC1B6: jnb     short loc_1401AC1C6
 * 00000001401AC1B8: mov     eax, 1
 * 00000001401AC1BD: xor     edx, edx
 * 00000001401AC1BF: mov     ecx, 49h ; 'I'
 * 00000001401AC1C4: wrmsr
 * 00000001401AC1C6: mov     rdx, [rbp-40h]
 * 00000001401AC1CA: mov     rcx, [rbp-48h]
 * 00000001401AC1CE: mov     rax, [rbp-50h]
 * 00000001401AC1D2: mov     rsp, rbp
 * 00000001401AC1D5: mov     rbp, [rbp+0D8h]
 * 00000001401AC1DC: add     rsp, 0E8h
 * 00000001401AC1E3: test    cs:KiKvaShadow, 1
 * 00000001401AC1EA: jz      short loc_1401AC1F1
 * 00000001401AC1EC: jmp     KiKernelExit
 * 00000001401AC1F1: swapgs
 * 00000001401AC1F4: iretq
 * 00000001401AC1F6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401AC1FA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401AC1FE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401AC202: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401AC206: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401AC20A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401AC20E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401AC212: mov     r11, [rbp-20h]
 * 00000001401AC216: mov     r10, [rbp-28h]
 * 00000001401AC21A: mov     r9, [rbp-30h]
 * 00000001401AC21E: mov     r8, [rbp-38h]
 * 00000001401AC222: mov     rdx, [rbp-40h]
 * 00000001401AC226: mov     rcx, [rbp-48h]
 * 00000001401AC22A: mov     rax, [rbp-50h]
 * 00000001401AC22E: mov     rsp, rbp
 * 00000001401AC231: mov     rbp, [rbp+0D8h]
 * 00000001401AC238: add     rsp, 0E8h
 * 00000001401AC23F: iretq
 */
