/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x140182FF0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182A50 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x140182FF0
 * Reason: Hex-Rays returned no pseudocode for 0x140182FF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140182FF0: mov     rdx, rsp
 * 0000000140182FF3: mov     rcx, gs:6458h
 * 0000000140182FFC: lea     rax, [rcx-6000h]
 * 0000000140183003: cmp     rax, rsp
 * 0000000140183006: ja      short loc_14018300D
 * 0000000140183008: cmp     rsp, rcx
 * 000000014018300B: jb      short loc_140183019
 * 000000014018300D: cmp     cs:KiBugCheckActive, 0
 * 0000000140183014: jnz     short loc_140183019
 * 0000000140183016: mov     rsp, rcx
 * 0000000140183019: sub     rsp, 20h
 * 000000014018301D: mov     [rsp+20h+var_10], rdx
 * 0000000140183022: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140183027: mov     rsp, [rsp+20h+var_10]
 * 000000014018302C: mov     rcx, rsi
 * 000000014018302F: call    HalPerformEndOfInterrupt_0
 * 0000000140183034: mov     rcx, gs:20h
 * 000000014018303D: cmp     byte ptr [rcx+20h], 1
 * 0000000140183041: ja      short loc_1401830B7
 * 0000000140183043: rdtsc
 * 0000000140183045: shl     rdx, 20h
 * 0000000140183049: or      rax, rdx
 * 000000014018304C: sub     rax, [rcx+5BC0h]
 * 0000000140183053: add     [rcx+5C38h], rax
 * 000000014018305A: add     [rcx+5BC0h], rax
 * 0000000140183061: mov     r8, rax
 * 0000000140183064: mov     rax, [rcx+8]
 * 0000000140183068: test    byte ptr [rax+2], 32h
 * 000000014018306C: jz      short loc_140183081
 * 000000014018306E: xor     edx, edx
 * 0000000140183070: call    KiBeginThreadAccountingPeriod
 * 0000000140183075: mov     rcx, gs:20h
 * 000000014018307E: inc     byte ptr [rcx+20h]
 * 0000000140183081: mov     dl, [rcx+6]
 * 0000000140183084: and     byte ptr [rcx+6], 0
 * 0000000140183088: cmp     byte ptr [rcx+7], 0
 * 000000014018308C: jnz     short loc_1401830B7
 * 000000014018308E: test    dl, dl
 * 0000000140183090: jz      short loc_1401830B7
 * 0000000140183092: cmp     byte ptr [rbp-57h], 2
 * 0000000140183096: jnb     short loc_1401830A3
 * 0000000140183098: and     byte ptr [rcx+20h], 0
 * 000000014018309C: call    KiDpcInterruptBypass
 * 00000001401830A1: jmp     short loc_1401830BA
 * 00000001401830A3: mov     ecx, 2
 * 00000001401830A8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401830AE: mov     rcx, gs:20h
 * 00000001401830B7: dec     byte ptr [rcx+20h]
 * 00000001401830BA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401830BE: mov     cr8, rcx
 * 00000001401830C2: mov     rsi, [rbp+0D0h]
 * 00000001401830C9: test    byte ptr [rbp+0F0h], 1
 * 00000001401830D0: jz      loc_1401831E6
 * 00000001401830D6: mov     rcx, gs:188h
 * 00000001401830DF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401830E6: jz      short loc_140183101
 * 00000001401830E8: mov     ecx, 1
 * 00000001401830ED: mov     cr8, rcx
 * 00000001401830F1: sti
 * 00000001401830F2: call    KiInitiateUserApc
 * 00000001401830F7: cli
 * 00000001401830F8: mov     ecx, 0
 * 00000001401830FD: mov     cr8, rcx
 * 0000000140183101: mov     rcx, gs:188h
 * 000000014018310A: test    dword ptr [rcx], 8000000h
 * 0000000140183110: jz      short loc_140183117
 * 0000000140183112: call    KiRestoreSetContextState
 * 0000000140183117: mov     rcx, gs:188h
 * 0000000140183120: test    dword ptr [rcx], 40010000h
 * 0000000140183126: jz      short loc_14018313C
 * 0000000140183128: test    byte ptr [rcx+2], 1
 * 000000014018312C: jz      short loc_14018313C
 * 000000014018312E: call    KiCopyCounters
 * 0000000140183133: mov     rcx, gs:188h
 * 000000014018313C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183140: cmp     word ptr [rbp+80h], 0
 * 0000000140183148: jz      short loc_14018314F
 * 000000014018314A: call    KiRestoreDebugRegisterState
 * 000000014018314F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140183153: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183157: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014018315B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018315F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140183163: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183167: mov     r11, [rbp-20h]
 * 000000014018316B: mov     r10, [rbp-28h]
 * 000000014018316F: mov     r9, [rbp-30h]
 * 0000000140183173: mov     r8, [rbp-38h]
 * 0000000140183177: movzx   eax, byte ptr gs:27Dh
 * 0000000140183180: cmp     gs:27Ah, al
 * 0000000140183188: jz      short loc_14018319B
 * 000000014018318A: mov     gs:27Ah, al
 * 0000000140183192: mov     ecx, 48h ; 'H'
 * 0000000140183197: xor     edx, edx
 * 0000000140183199: wrmsr
 * 000000014018319B: btr     word ptr gs:278h, 2
 * 00000001401831A6: jnb     short loc_1401831B6
 * 00000001401831A8: mov     eax, 1
 * 00000001401831AD: xor     edx, edx
 * 00000001401831AF: mov     ecx, 49h ; 'I'
 * 00000001401831B4: wrmsr
 * 00000001401831B6: mov     rdx, [rbp-40h]
 * 00000001401831BA: mov     rcx, [rbp-48h]
 * 00000001401831BE: mov     rax, [rbp-50h]
 * 00000001401831C2: mov     rsp, rbp
 * 00000001401831C5: mov     rbp, [rbp+0D8h]
 * 00000001401831CC: add     rsp, 0E8h
 * 00000001401831D3: test    cs:KiKvaShadow, 1
 * 00000001401831DA: jz      short loc_1401831E1
 * 00000001401831DC: jmp     KiKernelExit
 * 00000001401831E1: swapgs
 * 00000001401831E4: iretq
 * 00000001401831E6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401831EA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401831EE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401831F2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401831F6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401831FA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401831FE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183202: mov     r11, [rbp-20h]
 * 0000000140183206: mov     r10, [rbp-28h]
 * 000000014018320A: mov     r9, [rbp-30h]
 * 000000014018320E: mov     r8, [rbp-38h]
 * 0000000140183212: mov     rdx, [rbp-40h]
 * 0000000140183216: mov     rcx, [rbp-48h]
 * 000000014018321A: mov     rax, [rbp-50h]
 * 000000014018321E: mov     rsp, rbp
 * 0000000140183221: mov     rbp, [rbp+0D8h]
 * 0000000140183228: add     rsp, 0E8h
 * 000000014018322F: iretq
 */
