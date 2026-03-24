/*
 * XREFs of KiChainedDispatch @ 0x140182930
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x140182930
 * Reason: Hex-Rays returned no pseudocode for 0x140182930
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140182930: mov     rdx, rsp
 * 0000000140182933: mov     rcx, gs:6598h
 * 000000014018293C: lea     rax, [rcx-6000h]
 * 0000000140182943: cmp     rax, rsp
 * 0000000140182946: ja      short loc_14018294D
 * 0000000140182948: cmp     rsp, rcx
 * 000000014018294B: jb      short loc_140182959
 * 000000014018294D: cmp     cs:KiBugCheckActive, 0
 * 0000000140182954: jnz     short loc_140182959
 * 0000000140182956: mov     rsp, rcx
 * 0000000140182959: sub     rsp, 20h
 * 000000014018295D: mov     [rsp+20h+var_10], rdx
 * 0000000140182962: call    KiScanInterruptObjectList
 * 0000000140182967: mov     rsp, [rsp+20h+var_10]
 * 000000014018296C: mov     rcx, rsi
 * 000000014018296F: call    HalPerformEndOfInterrupt_0
 * 0000000140182974: mov     rcx, gs:20h
 * 000000014018297D: cmp     byte ptr [rcx+20h], 1
 * 0000000140182981: ja      short loc_1401829F7
 * 0000000140182983: rdtsc
 * 0000000140182985: shl     rdx, 20h
 * 0000000140182989: or      rax, rdx
 * 000000014018298C: sub     rax, [rcx+5BC0h]
 * 0000000140182993: add     [rcx+5C78h], rax
 * 000000014018299A: add     [rcx+5BC0h], rax
 * 00000001401829A1: mov     r8, rax
 * 00000001401829A4: mov     rax, [rcx+8]
 * 00000001401829A8: test    byte ptr [rax+2], 32h
 * 00000001401829AC: jz      short loc_1401829C1
 * 00000001401829AE: xor     edx, edx
 * 00000001401829B0: call    KiBeginThreadAccountingPeriod
 * 00000001401829B5: mov     rcx, gs:20h
 * 00000001401829BE: inc     byte ptr [rcx+20h]
 * 00000001401829C1: mov     dl, [rcx+6]
 * 00000001401829C4: and     byte ptr [rcx+6], 0
 * 00000001401829C8: cmp     byte ptr [rcx+7], 0
 * 00000001401829CC: jnz     short loc_1401829F7
 * 00000001401829CE: test    dl, dl
 * 00000001401829D0: jz      short loc_1401829F7
 * 00000001401829D2: cmp     byte ptr [rbp-57h], 2
 * 00000001401829D6: jnb     short loc_1401829E3
 * 00000001401829D8: and     byte ptr [rcx+20h], 0
 * 00000001401829DC: call    KiDpcInterruptBypass
 * 00000001401829E1: jmp     short loc_1401829FA
 * 00000001401829E3: mov     ecx, 2
 * 00000001401829E8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401829EE: mov     rcx, gs:20h
 * 00000001401829F7: dec     byte ptr [rcx+20h]
 * 00000001401829FA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401829FE: mov     cr8, rcx
 * 0000000140182A02: mov     rsi, [rbp+0D0h]
 * 0000000140182A09: test    byte ptr [rbp+0F0h], 1
 * 0000000140182A10: jz      loc_140182B26
 * 0000000140182A16: mov     rcx, gs:188h
 * 0000000140182A1F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140182A26: jz      short loc_140182A41
 * 0000000140182A28: mov     ecx, 1
 * 0000000140182A2D: mov     cr8, rcx
 * 0000000140182A31: sti
 * 0000000140182A32: call    KiInitiateUserApc
 * 0000000140182A37: cli
 * 0000000140182A38: mov     ecx, 0
 * 0000000140182A3D: mov     cr8, rcx
 * 0000000140182A41: mov     rcx, gs:188h
 * 0000000140182A4A: test    dword ptr [rcx], 8000000h
 * 0000000140182A50: jz      short loc_140182A57
 * 0000000140182A52: call    KiRestoreSetContextState
 * 0000000140182A57: mov     rcx, gs:188h
 * 0000000140182A60: test    dword ptr [rcx], 40010000h
 * 0000000140182A66: jz      short loc_140182A7C
 * 0000000140182A68: test    byte ptr [rcx+2], 1
 * 0000000140182A6C: jz      short loc_140182A7C
 * 0000000140182A6E: call    KiCopyCounters
 * 0000000140182A73: mov     rcx, gs:188h
 * 0000000140182A7C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182A80: cmp     word ptr [rbp+80h], 0
 * 0000000140182A88: jz      short loc_140182A8F
 * 0000000140182A8A: call    KiRestoreDebugRegisterState
 * 0000000140182A8F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182A93: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182A97: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182A9B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182A9F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182AA3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182AA7: mov     r11, [rbp-20h]
 * 0000000140182AAB: mov     r10, [rbp-28h]
 * 0000000140182AAF: mov     r9, [rbp-30h]
 * 0000000140182AB3: mov     r8, [rbp-38h]
 * 0000000140182AB7: movzx   eax, byte ptr gs:27Dh
 * 0000000140182AC0: cmp     gs:27Ah, al
 * 0000000140182AC8: jz      short loc_140182ADB
 * 0000000140182ACA: mov     gs:27Ah, al
 * 0000000140182AD2: mov     ecx, 48h ; 'H'
 * 0000000140182AD7: xor     edx, edx
 * 0000000140182AD9: wrmsr
 * 0000000140182ADB: btr     word ptr gs:278h, 2
 * 0000000140182AE6: jnb     short loc_140182AF6
 * 0000000140182AE8: mov     eax, 1
 * 0000000140182AED: xor     edx, edx
 * 0000000140182AEF: mov     ecx, 49h ; 'I'
 * 0000000140182AF4: wrmsr
 * 0000000140182AF6: mov     rdx, [rbp-40h]
 * 0000000140182AFA: mov     rcx, [rbp-48h]
 * 0000000140182AFE: mov     rax, [rbp-50h]
 * 0000000140182B02: mov     rsp, rbp
 * 0000000140182B05: mov     rbp, [rbp+0D8h]
 * 0000000140182B0C: add     rsp, 0E8h
 * 0000000140182B13: test    cs:KiKvaShadow, 1
 * 0000000140182B1A: jz      short loc_140182B21
 * 0000000140182B1C: jmp     KiKernelExit
 * 0000000140182B21: swapgs
 * 0000000140182B24: iretq
 * 0000000140182B26: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182B2A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182B2E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182B32: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182B36: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182B3A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182B3E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182B42: mov     r11, [rbp-20h]
 * 0000000140182B46: mov     r10, [rbp-28h]
 * 0000000140182B4A: mov     r9, [rbp-30h]
 * 0000000140182B4E: mov     r8, [rbp-38h]
 * 0000000140182B52: mov     rdx, [rbp-40h]
 * 0000000140182B56: mov     rcx, [rbp-48h]
 * 0000000140182B5A: mov     rax, [rbp-50h]
 * 0000000140182B5E: mov     rsp, rbp
 * 0000000140182B61: mov     rbp, [rbp+0D8h]
 * 0000000140182B68: add     rsp, 0E8h
 * 0000000140182B6F: iretq
 */
