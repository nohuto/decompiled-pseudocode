/*
 * XREFs of KiChainedDispatch @ 0x1401823B0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401823B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401823B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401823B0: mov     rdx, rsp
 * 00000001401823B3: mov     rcx, gs:6458h
 * 00000001401823BC: lea     rax, [rcx-6000h]
 * 00000001401823C3: cmp     rax, rsp
 * 00000001401823C6: ja      short loc_1401823CD
 * 00000001401823C8: cmp     rsp, rcx
 * 00000001401823CB: jb      short loc_1401823D9
 * 00000001401823CD: cmp     cs:KiBugCheckActive, 0
 * 00000001401823D4: jnz     short loc_1401823D9
 * 00000001401823D6: mov     rsp, rcx
 * 00000001401823D9: sub     rsp, 20h
 * 00000001401823DD: mov     [rsp+20h+var_10], rdx
 * 00000001401823E2: call    KiScanInterruptObjectList
 * 00000001401823E7: mov     rsp, [rsp+20h+var_10]
 * 00000001401823EC: mov     rcx, rsi
 * 00000001401823EF: call    HalPerformEndOfInterrupt_0
 * 00000001401823F4: mov     rcx, gs:20h
 * 00000001401823FD: cmp     byte ptr [rcx+20h], 1
 * 0000000140182401: ja      short loc_140182477
 * 0000000140182403: rdtsc
 * 0000000140182405: shl     rdx, 20h
 * 0000000140182409: or      rax, rdx
 * 000000014018240C: sub     rax, [rcx+5BC0h]
 * 0000000140182413: add     [rcx+5C38h], rax
 * 000000014018241A: add     [rcx+5BC0h], rax
 * 0000000140182421: mov     r8, rax
 * 0000000140182424: mov     rax, [rcx+8]
 * 0000000140182428: test    byte ptr [rax+2], 32h
 * 000000014018242C: jz      short loc_140182441
 * 000000014018242E: xor     edx, edx
 * 0000000140182430: call    KiBeginThreadAccountingPeriod
 * 0000000140182435: mov     rcx, gs:20h
 * 000000014018243E: inc     byte ptr [rcx+20h]
 * 0000000140182441: mov     dl, [rcx+6]
 * 0000000140182444: and     byte ptr [rcx+6], 0
 * 0000000140182448: cmp     byte ptr [rcx+7], 0
 * 000000014018244C: jnz     short loc_140182477
 * 000000014018244E: test    dl, dl
 * 0000000140182450: jz      short loc_140182477
 * 0000000140182452: cmp     byte ptr [rbp-57h], 2
 * 0000000140182456: jnb     short loc_140182463
 * 0000000140182458: and     byte ptr [rcx+20h], 0
 * 000000014018245C: call    KiDpcInterruptBypass
 * 0000000140182461: jmp     short loc_14018247A
 * 0000000140182463: mov     ecx, 2
 * 0000000140182468: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018246E: mov     rcx, gs:20h
 * 0000000140182477: dec     byte ptr [rcx+20h]
 * 000000014018247A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018247E: mov     cr8, rcx
 * 0000000140182482: mov     rsi, [rbp+0D0h]
 * 0000000140182489: test    byte ptr [rbp+0F0h], 1
 * 0000000140182490: jz      loc_1401825A6
 * 0000000140182496: mov     rcx, gs:188h
 * 000000014018249F: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401824A6: jz      short loc_1401824C1
 * 00000001401824A8: mov     ecx, 1
 * 00000001401824AD: mov     cr8, rcx
 * 00000001401824B1: sti
 * 00000001401824B2: call    KiInitiateUserApc
 * 00000001401824B7: cli
 * 00000001401824B8: mov     ecx, 0
 * 00000001401824BD: mov     cr8, rcx
 * 00000001401824C1: mov     rcx, gs:188h
 * 00000001401824CA: test    dword ptr [rcx], 8000000h
 * 00000001401824D0: jz      short loc_1401824D7
 * 00000001401824D2: call    KiRestoreSetContextState
 * 00000001401824D7: mov     rcx, gs:188h
 * 00000001401824E0: test    dword ptr [rcx], 40010000h
 * 00000001401824E6: jz      short loc_1401824FC
 * 00000001401824E8: test    byte ptr [rcx+2], 1
 * 00000001401824EC: jz      short loc_1401824FC
 * 00000001401824EE: call    KiCopyCounters
 * 00000001401824F3: mov     rcx, gs:188h
 * 00000001401824FC: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182500: cmp     word ptr [rbp+80h], 0
 * 0000000140182508: jz      short loc_14018250F
 * 000000014018250A: call    KiRestoreDebugRegisterState
 * 000000014018250F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182513: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182517: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014018251B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018251F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182523: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182527: mov     r11, [rbp-20h]
 * 000000014018252B: mov     r10, [rbp-28h]
 * 000000014018252F: mov     r9, [rbp-30h]
 * 0000000140182533: mov     r8, [rbp-38h]
 * 0000000140182537: movzx   eax, byte ptr gs:27Dh
 * 0000000140182540: cmp     gs:27Ah, al
 * 0000000140182548: jz      short loc_14018255B
 * 000000014018254A: mov     gs:27Ah, al
 * 0000000140182552: mov     ecx, 48h ; 'H'
 * 0000000140182557: xor     edx, edx
 * 0000000140182559: wrmsr
 * 000000014018255B: btr     word ptr gs:278h, 2
 * 0000000140182566: jnb     short loc_140182576
 * 0000000140182568: mov     eax, 1
 * 000000014018256D: xor     edx, edx
 * 000000014018256F: mov     ecx, 49h ; 'I'
 * 0000000140182574: wrmsr
 * 0000000140182576: mov     rdx, [rbp-40h]
 * 000000014018257A: mov     rcx, [rbp-48h]
 * 000000014018257E: mov     rax, [rbp-50h]
 * 0000000140182582: mov     rsp, rbp
 * 0000000140182585: mov     rbp, [rbp+0D8h]
 * 000000014018258C: add     rsp, 0E8h
 * 0000000140182593: test    cs:KiKvaShadow, 1
 * 000000014018259A: jz      short loc_1401825A1
 * 000000014018259C: jmp     KiKernelExit
 * 00000001401825A1: swapgs
 * 00000001401825A4: iretq
 * 00000001401825A6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401825AA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401825AE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401825B2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401825B6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401825BA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401825BE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401825C2: mov     r11, [rbp-20h]
 * 00000001401825C6: mov     r10, [rbp-28h]
 * 00000001401825CA: mov     r9, [rbp-30h]
 * 00000001401825CE: mov     r8, [rbp-38h]
 * 00000001401825D2: mov     rdx, [rbp-40h]
 * 00000001401825D6: mov     rcx, [rbp-48h]
 * 00000001401825DA: mov     rax, [rbp-50h]
 * 00000001401825DE: mov     rsp, rbp
 * 00000001401825E1: mov     rbp, [rbp+0D8h]
 * 00000001401825E8: add     rsp, 0E8h
 * 00000001401825EF: iretq
 */
