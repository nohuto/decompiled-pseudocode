/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140182DA0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140182DA0
 * Reason: Hex-Rays returned no pseudocode for 0x140182DA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140182DA0: mov     rdx, rsp
 * 0000000140182DA3: mov     rcx, gs:6458h
 * 0000000140182DAC: lea     rax, [rcx-6000h]
 * 0000000140182DB3: cmp     rax, rsp
 * 0000000140182DB6: ja      short loc_140182DBD
 * 0000000140182DB8: cmp     rsp, rcx
 * 0000000140182DBB: jb      short loc_140182DC9
 * 0000000140182DBD: cmp     cs:KiBugCheckActive, 0
 * 0000000140182DC4: jnz     short loc_140182DC9
 * 0000000140182DC6: mov     rsp, rcx
 * 0000000140182DC9: sub     rsp, 20h
 * 0000000140182DCD: mov     [rsp+20h+var_10], rdx
 * 0000000140182DD2: call    KiInterruptSubDispatchNoLock
 * 0000000140182DD7: mov     rsp, [rsp+20h+var_10]
 * 0000000140182DDC: mov     rcx, rsi
 * 0000000140182DDF: call    HalPerformEndOfInterrupt_0
 * 0000000140182DE4: mov     rcx, gs:20h
 * 0000000140182DED: cmp     byte ptr [rcx+20h], 1
 * 0000000140182DF1: ja      short loc_140182E67
 * 0000000140182DF3: rdtsc
 * 0000000140182DF5: shl     rdx, 20h
 * 0000000140182DF9: or      rax, rdx
 * 0000000140182DFC: sub     rax, [rcx+5BC0h]
 * 0000000140182E03: add     [rcx+5C38h], rax
 * 0000000140182E0A: add     [rcx+5BC0h], rax
 * 0000000140182E11: mov     r8, rax
 * 0000000140182E14: mov     rax, [rcx+8]
 * 0000000140182E18: test    byte ptr [rax+2], 32h
 * 0000000140182E1C: jz      short loc_140182E31
 * 0000000140182E1E: xor     edx, edx
 * 0000000140182E20: call    KiBeginThreadAccountingPeriod
 * 0000000140182E25: mov     rcx, gs:20h
 * 0000000140182E2E: inc     byte ptr [rcx+20h]
 * 0000000140182E31: mov     dl, [rcx+6]
 * 0000000140182E34: and     byte ptr [rcx+6], 0
 * 0000000140182E38: cmp     byte ptr [rcx+7], 0
 * 0000000140182E3C: jnz     short loc_140182E67
 * 0000000140182E3E: test    dl, dl
 * 0000000140182E40: jz      short loc_140182E67
 * 0000000140182E42: cmp     byte ptr [rbp-57h], 2
 * 0000000140182E46: jnb     short loc_140182E53
 * 0000000140182E48: and     byte ptr [rcx+20h], 0
 * 0000000140182E4C: call    KiDpcInterruptBypass
 * 0000000140182E51: jmp     short loc_140182E6A
 * 0000000140182E53: mov     ecx, 2
 * 0000000140182E58: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140182E5E: mov     rcx, gs:20h
 * 0000000140182E67: dec     byte ptr [rcx+20h]
 * 0000000140182E6A: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140182E6E: mov     cr8, rcx
 * 0000000140182E72: mov     rsi, [rbp+0D0h]
 * 0000000140182E79: test    byte ptr [rbp+0F0h], 1
 * 0000000140182E80: jz      loc_140182F96
 * 0000000140182E86: mov     rcx, gs:188h
 * 0000000140182E8F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140182E96: jz      short loc_140182EB1
 * 0000000140182E98: mov     ecx, 1
 * 0000000140182E9D: mov     cr8, rcx
 * 0000000140182EA1: sti
 * 0000000140182EA2: call    KiInitiateUserApc
 * 0000000140182EA7: cli
 * 0000000140182EA8: mov     ecx, 0
 * 0000000140182EAD: mov     cr8, rcx
 * 0000000140182EB1: mov     rcx, gs:188h
 * 0000000140182EBA: test    dword ptr [rcx], 8000000h
 * 0000000140182EC0: jz      short loc_140182EC7
 * 0000000140182EC2: call    KiRestoreSetContextState
 * 0000000140182EC7: mov     rcx, gs:188h
 * 0000000140182ED0: test    dword ptr [rcx], 40010000h
 * 0000000140182ED6: jz      short loc_140182EEC
 * 0000000140182ED8: test    byte ptr [rcx+2], 1
 * 0000000140182EDC: jz      short loc_140182EEC
 * 0000000140182EDE: call    KiCopyCounters
 * 0000000140182EE3: mov     rcx, gs:188h
 * 0000000140182EEC: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182EF0: cmp     word ptr [rbp+80h], 0
 * 0000000140182EF8: jz      short loc_140182EFF
 * 0000000140182EFA: call    KiRestoreDebugRegisterState
 * 0000000140182EFF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182F03: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182F07: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182F0B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182F0F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182F13: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182F17: mov     r11, [rbp-20h]
 * 0000000140182F1B: mov     r10, [rbp-28h]
 * 0000000140182F1F: mov     r9, [rbp-30h]
 * 0000000140182F23: mov     r8, [rbp-38h]
 * 0000000140182F27: movzx   eax, byte ptr gs:27Dh
 * 0000000140182F30: cmp     gs:27Ah, al
 * 0000000140182F38: jz      short loc_140182F4B
 * 0000000140182F3A: mov     gs:27Ah, al
 * 0000000140182F42: mov     ecx, 48h ; 'H'
 * 0000000140182F47: xor     edx, edx
 * 0000000140182F49: wrmsr
 * 0000000140182F4B: btr     word ptr gs:278h, 2
 * 0000000140182F56: jnb     short loc_140182F66
 * 0000000140182F58: mov     eax, 1
 * 0000000140182F5D: xor     edx, edx
 * 0000000140182F5F: mov     ecx, 49h ; 'I'
 * 0000000140182F64: wrmsr
 * 0000000140182F66: mov     rdx, [rbp-40h]
 * 0000000140182F6A: mov     rcx, [rbp-48h]
 * 0000000140182F6E: mov     rax, [rbp-50h]
 * 0000000140182F72: mov     rsp, rbp
 * 0000000140182F75: mov     rbp, [rbp+0D8h]
 * 0000000140182F7C: add     rsp, 0E8h
 * 0000000140182F83: test    cs:KiKvaShadow, 1
 * 0000000140182F8A: jz      short loc_140182F91
 * 0000000140182F8C: jmp     KiKernelExit
 * 0000000140182F91: swapgs
 * 0000000140182F94: iretq
 * 0000000140182F96: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182F9A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182F9E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182FA2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182FA6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182FAA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182FAE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182FB2: mov     r11, [rbp-20h]
 * 0000000140182FB6: mov     r10, [rbp-28h]
 * 0000000140182FBA: mov     r9, [rbp-30h]
 * 0000000140182FBE: mov     r8, [rbp-38h]
 * 0000000140182FC2: mov     rdx, [rbp-40h]
 * 0000000140182FC6: mov     rcx, [rbp-48h]
 * 0000000140182FCA: mov     rax, [rbp-50h]
 * 0000000140182FCE: mov     rsp, rbp
 * 0000000140182FD1: mov     rbp, [rbp+0D8h]
 * 0000000140182FD8: add     rsp, 0E8h
 * 0000000140182FDF: iretq
 */
