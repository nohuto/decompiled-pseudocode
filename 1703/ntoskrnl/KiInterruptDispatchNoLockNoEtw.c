/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140183570
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182FD0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140183570
 * Reason: Hex-Rays returned no pseudocode for 0x140183570
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140183570: mov     rdx, rsp
 * 0000000140183573: mov     rcx, gs:6598h
 * 000000014018357C: lea     rax, [rcx-6000h]
 * 0000000140183583: cmp     rax, rsp
 * 0000000140183586: ja      short loc_14018358D
 * 0000000140183588: cmp     rsp, rcx
 * 000000014018358B: jb      short loc_140183599
 * 000000014018358D: cmp     cs:KiBugCheckActive, 0
 * 0000000140183594: jnz     short loc_140183599
 * 0000000140183596: mov     rsp, rcx
 * 0000000140183599: sub     rsp, 20h
 * 000000014018359D: mov     [rsp+20h+var_10], rdx
 * 00000001401835A2: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401835A7: mov     rsp, [rsp+20h+var_10]
 * 00000001401835AC: mov     rcx, rsi
 * 00000001401835AF: call    HalPerformEndOfInterrupt_0
 * 00000001401835B4: mov     rcx, gs:20h
 * 00000001401835BD: cmp     byte ptr [rcx+20h], 1
 * 00000001401835C1: ja      short loc_140183637
 * 00000001401835C3: rdtsc
 * 00000001401835C5: shl     rdx, 20h
 * 00000001401835C9: or      rax, rdx
 * 00000001401835CC: sub     rax, [rcx+5BC0h]
 * 00000001401835D3: add     [rcx+5C78h], rax
 * 00000001401835DA: add     [rcx+5BC0h], rax
 * 00000001401835E1: mov     r8, rax
 * 00000001401835E4: mov     rax, [rcx+8]
 * 00000001401835E8: test    byte ptr [rax+2], 32h
 * 00000001401835EC: jz      short loc_140183601
 * 00000001401835EE: xor     edx, edx
 * 00000001401835F0: call    KiBeginThreadAccountingPeriod
 * 00000001401835F5: mov     rcx, gs:20h
 * 00000001401835FE: inc     byte ptr [rcx+20h]
 * 0000000140183601: mov     dl, [rcx+6]
 * 0000000140183604: and     byte ptr [rcx+6], 0
 * 0000000140183608: cmp     byte ptr [rcx+7], 0
 * 000000014018360C: jnz     short loc_140183637
 * 000000014018360E: test    dl, dl
 * 0000000140183610: jz      short loc_140183637
 * 0000000140183612: cmp     byte ptr [rbp-57h], 2
 * 0000000140183616: jnb     short loc_140183623
 * 0000000140183618: and     byte ptr [rcx+20h], 0
 * 000000014018361C: call    KiDpcInterruptBypass
 * 0000000140183621: jmp     short loc_14018363A
 * 0000000140183623: mov     ecx, 2
 * 0000000140183628: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018362E: mov     rcx, gs:20h
 * 0000000140183637: dec     byte ptr [rcx+20h]
 * 000000014018363A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018363E: mov     cr8, rcx
 * 0000000140183642: mov     rsi, [rbp+0D0h]
 * 0000000140183649: test    byte ptr [rbp+0F0h], 1
 * 0000000140183650: jz      loc_140183766
 * 0000000140183656: mov     rcx, gs:188h
 * 000000014018365F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140183666: jz      short loc_140183681
 * 0000000140183668: mov     ecx, 1
 * 000000014018366D: mov     cr8, rcx
 * 0000000140183671: sti
 * 0000000140183672: call    KiInitiateUserApc
 * 0000000140183677: cli
 * 0000000140183678: mov     ecx, 0
 * 000000014018367D: mov     cr8, rcx
 * 0000000140183681: mov     rcx, gs:188h
 * 000000014018368A: test    dword ptr [rcx], 8000000h
 * 0000000140183690: jz      short loc_140183697
 * 0000000140183692: call    KiRestoreSetContextState
 * 0000000140183697: mov     rcx, gs:188h
 * 00000001401836A0: test    dword ptr [rcx], 40010000h
 * 00000001401836A6: jz      short loc_1401836BC
 * 00000001401836A8: test    byte ptr [rcx+2], 1
 * 00000001401836AC: jz      short loc_1401836BC
 * 00000001401836AE: call    KiCopyCounters
 * 00000001401836B3: mov     rcx, gs:188h
 * 00000001401836BC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401836C0: cmp     word ptr [rbp+80h], 0
 * 00000001401836C8: jz      short loc_1401836CF
 * 00000001401836CA: call    KiRestoreDebugRegisterState
 * 00000001401836CF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401836D3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401836D7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401836DB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401836DF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401836E3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401836E7: mov     r11, [rbp-20h]
 * 00000001401836EB: mov     r10, [rbp-28h]
 * 00000001401836EF: mov     r9, [rbp-30h]
 * 00000001401836F3: mov     r8, [rbp-38h]
 * 00000001401836F7: movzx   eax, byte ptr gs:27Dh
 * 0000000140183700: cmp     gs:27Ah, al
 * 0000000140183708: jz      short loc_14018371B
 * 000000014018370A: mov     gs:27Ah, al
 * 0000000140183712: mov     ecx, 48h ; 'H'
 * 0000000140183717: xor     edx, edx
 * 0000000140183719: wrmsr
 * 000000014018371B: btr     word ptr gs:278h, 2
 * 0000000140183726: jnb     short loc_140183736
 * 0000000140183728: mov     eax, 1
 * 000000014018372D: xor     edx, edx
 * 000000014018372F: mov     ecx, 49h ; 'I'
 * 0000000140183734: wrmsr
 * 0000000140183736: mov     rdx, [rbp-40h]
 * 000000014018373A: mov     rcx, [rbp-48h]
 * 000000014018373E: mov     rax, [rbp-50h]
 * 0000000140183742: mov     rsp, rbp
 * 0000000140183745: mov     rbp, [rbp+0D8h]
 * 000000014018374C: add     rsp, 0E8h
 * 0000000140183753: test    cs:KiKvaShadow, 1
 * 000000014018375A: jz      short loc_140183761
 * 000000014018375C: jmp     KiKernelExit
 * 0000000140183761: swapgs
 * 0000000140183764: iretq
 * 0000000140183766: ldmxcsr dword ptr [rbp-54h]
 * 000000014018376A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018376E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183772: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140183776: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018377A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018377E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183782: mov     r11, [rbp-20h]
 * 0000000140183786: mov     r10, [rbp-28h]
 * 000000014018378A: mov     r9, [rbp-30h]
 * 000000014018378E: mov     r8, [rbp-38h]
 * 0000000140183792: mov     rdx, [rbp-40h]
 * 0000000140183796: mov     rcx, [rbp-48h]
 * 000000014018379A: mov     rax, [rbp-50h]
 * 000000014018379E: mov     rsp, rbp
 * 00000001401837A1: mov     rbp, [rbp+0D8h]
 * 00000001401837A8: add     rsp, 0E8h
 * 00000001401837AF: iretq
 */
