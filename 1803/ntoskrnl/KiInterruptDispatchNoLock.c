/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401AC9F0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1401AC9F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401AC9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AC9F0: mov     rdx, rsp
 * 00000001401AC9F3: mov     rcx, gs:6458h
 * 00000001401AC9FC: lea     rax, [rcx-6000h]
 * 00000001401ACA03: cmp     rax, rsp
 * 00000001401ACA06: ja      short loc_1401ACA0D
 * 00000001401ACA08: cmp     rsp, rcx
 * 00000001401ACA0B: jb      short loc_1401ACA19
 * 00000001401ACA0D: cmp     cs:KiBugCheckActive, 0
 * 00000001401ACA14: jnz     short loc_1401ACA19
 * 00000001401ACA16: mov     rsp, rcx
 * 00000001401ACA19: sub     rsp, 20h
 * 00000001401ACA1D: mov     [rsp+20h+var_10], rdx
 * 00000001401ACA22: call    KiInterruptSubDispatchNoLock
 * 00000001401ACA27: mov     rsp, [rsp+20h+var_10]
 * 00000001401ACA2C: mov     rcx, rsi
 * 00000001401ACA2F: call    HalPerformEndOfInterrupt_0
 * 00000001401ACA34: mov     rcx, gs:20h
 * 00000001401ACA3D: cmp     byte ptr [rcx+20h], 1
 * 00000001401ACA41: ja      short loc_1401ACAB7
 * 00000001401ACA43: rdtsc
 * 00000001401ACA45: shl     rdx, 20h
 * 00000001401ACA49: or      rax, rdx
 * 00000001401ACA4C: sub     rax, [rcx+5BC0h]
 * 00000001401ACA53: add     [rcx+5C38h], rax
 * 00000001401ACA5A: add     [rcx+5BC0h], rax
 * 00000001401ACA61: mov     r8, rax
 * 00000001401ACA64: mov     rax, [rcx+8]
 * 00000001401ACA68: test    byte ptr [rax+2], 72h
 * 00000001401ACA6C: jz      short loc_1401ACA81
 * 00000001401ACA6E: xor     edx, edx
 * 00000001401ACA70: call    KiBeginThreadAccountingPeriod
 * 00000001401ACA75: mov     rcx, gs:20h
 * 00000001401ACA7E: inc     byte ptr [rcx+20h]
 * 00000001401ACA81: mov     dl, [rcx+6]
 * 00000001401ACA84: and     byte ptr [rcx+6], 0
 * 00000001401ACA88: cmp     byte ptr [rcx+7], 0
 * 00000001401ACA8C: jnz     short loc_1401ACAB7
 * 00000001401ACA8E: test    dl, dl
 * 00000001401ACA90: jz      short loc_1401ACAB7
 * 00000001401ACA92: cmp     byte ptr [rbp-57h], 2
 * 00000001401ACA96: jnb     short loc_1401ACAA3
 * 00000001401ACA98: and     byte ptr [rcx+20h], 0
 * 00000001401ACA9C: call    KiDpcInterruptBypass
 * 00000001401ACAA1: jmp     short loc_1401ACABA
 * 00000001401ACAA3: mov     ecx, 2
 * 00000001401ACAA8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401ACAAE: mov     rcx, gs:20h
 * 00000001401ACAB7: dec     byte ptr [rcx+20h]
 * 00000001401ACABA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401ACABE: mov     cr8, rcx
 * 00000001401ACAC2: mov     rsi, [rbp+0D0h]
 * 00000001401ACAC9: test    byte ptr [rbp+0F0h], 1
 * 00000001401ACAD0: jz      loc_1401ACBE6
 * 00000001401ACAD6: mov     rcx, gs:188h
 * 00000001401ACADF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401ACAE6: jz      short loc_1401ACB01
 * 00000001401ACAE8: mov     ecx, 1
 * 00000001401ACAED: mov     cr8, rcx
 * 00000001401ACAF1: sti
 * 00000001401ACAF2: call    KiInitiateUserApc
 * 00000001401ACAF7: cli
 * 00000001401ACAF8: mov     ecx, 0
 * 00000001401ACAFD: mov     cr8, rcx
 * 00000001401ACB01: mov     rcx, gs:188h
 * 00000001401ACB0A: test    dword ptr [rcx], 8000000h
 * 00000001401ACB10: jz      short loc_1401ACB17
 * 00000001401ACB12: call    KiRestoreSetContextState
 * 00000001401ACB17: mov     rcx, gs:188h
 * 00000001401ACB20: test    dword ptr [rcx], 40010000h
 * 00000001401ACB26: jz      short loc_1401ACB3C
 * 00000001401ACB28: test    byte ptr [rcx+2], 1
 * 00000001401ACB2C: jz      short loc_1401ACB3C
 * 00000001401ACB2E: call    KiCopyCounters
 * 00000001401ACB33: mov     rcx, gs:188h
 * 00000001401ACB3C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401ACB40: cmp     word ptr [rbp+80h], 0
 * 00000001401ACB48: jz      short loc_1401ACB4F
 * 00000001401ACB4A: call    KiRestoreDebugRegisterState
 * 00000001401ACB4F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401ACB53: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401ACB57: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401ACB5B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401ACB5F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401ACB63: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401ACB67: mov     r11, [rbp-20h]
 * 00000001401ACB6B: mov     r10, [rbp-28h]
 * 00000001401ACB6F: mov     r9, [rbp-30h]
 * 00000001401ACB73: mov     r8, [rbp-38h]
 * 00000001401ACB77: movzx   eax, byte ptr gs:27Dh
 * 00000001401ACB80: cmp     gs:27Ah, al
 * 00000001401ACB88: jz      short loc_1401ACB9B
 * 00000001401ACB8A: mov     gs:27Ah, al
 * 00000001401ACB92: mov     ecx, 48h ; 'H'
 * 00000001401ACB97: xor     edx, edx
 * 00000001401ACB99: wrmsr
 * 00000001401ACB9B: btr     word ptr gs:278h, 2
 * 00000001401ACBA6: jnb     short loc_1401ACBB6
 * 00000001401ACBA8: mov     eax, 1
 * 00000001401ACBAD: xor     edx, edx
 * 00000001401ACBAF: mov     ecx, 49h ; 'I'
 * 00000001401ACBB4: wrmsr
 * 00000001401ACBB6: mov     rdx, [rbp-40h]
 * 00000001401ACBBA: mov     rcx, [rbp-48h]
 * 00000001401ACBBE: mov     rax, [rbp-50h]
 * 00000001401ACBC2: mov     rsp, rbp
 * 00000001401ACBC5: mov     rbp, [rbp+0D8h]
 * 00000001401ACBCC: add     rsp, 0E8h
 * 00000001401ACBD3: test    cs:KiKvaShadow, 1
 * 00000001401ACBDA: jz      short loc_1401ACBE1
 * 00000001401ACBDC: jmp     KiKernelExit
 * 00000001401ACBE1: swapgs
 * 00000001401ACBE4: iretq
 * 00000001401ACBE6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401ACBEA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401ACBEE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401ACBF2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401ACBF6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401ACBFA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401ACBFE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401ACC02: mov     r11, [rbp-20h]
 * 00000001401ACC06: mov     r10, [rbp-28h]
 * 00000001401ACC0A: mov     r9, [rbp-30h]
 * 00000001401ACC0E: mov     r8, [rbp-38h]
 * 00000001401ACC12: mov     rdx, [rbp-40h]
 * 00000001401ACC16: mov     rcx, [rbp-48h]
 * 00000001401ACC1A: mov     rax, [rbp-50h]
 * 00000001401ACC1E: mov     rsp, rbp
 * 00000001401ACC21: mov     rbp, [rbp+0D8h]
 * 00000001401ACC28: add     rsp, 0E8h
 * 00000001401ACC2F: iretq
 */
