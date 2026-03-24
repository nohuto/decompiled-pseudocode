/*
 * XREFs of KiInterruptDispatchNoLock @ 0x140183320
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x140183320
 * Reason: Hex-Rays returned no pseudocode for 0x140183320
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140183320: mov     rdx, rsp
 * 0000000140183323: mov     rcx, gs:6598h
 * 000000014018332C: lea     rax, [rcx-6000h]
 * 0000000140183333: cmp     rax, rsp
 * 0000000140183336: ja      short loc_14018333D
 * 0000000140183338: cmp     rsp, rcx
 * 000000014018333B: jb      short loc_140183349
 * 000000014018333D: cmp     cs:KiBugCheckActive, 0
 * 0000000140183344: jnz     short loc_140183349
 * 0000000140183346: mov     rsp, rcx
 * 0000000140183349: sub     rsp, 20h
 * 000000014018334D: mov     [rsp+20h+var_10], rdx
 * 0000000140183352: call    KiInterruptSubDispatchNoLock
 * 0000000140183357: mov     rsp, [rsp+20h+var_10]
 * 000000014018335C: mov     rcx, rsi
 * 000000014018335F: call    HalPerformEndOfInterrupt_0
 * 0000000140183364: mov     rcx, gs:20h
 * 000000014018336D: cmp     byte ptr [rcx+20h], 1
 * 0000000140183371: ja      short loc_1401833E7
 * 0000000140183373: rdtsc
 * 0000000140183375: shl     rdx, 20h
 * 0000000140183379: or      rax, rdx
 * 000000014018337C: sub     rax, [rcx+5BC0h]
 * 0000000140183383: add     [rcx+5C78h], rax
 * 000000014018338A: add     [rcx+5BC0h], rax
 * 0000000140183391: mov     r8, rax
 * 0000000140183394: mov     rax, [rcx+8]
 * 0000000140183398: test    byte ptr [rax+2], 32h
 * 000000014018339C: jz      short loc_1401833B1
 * 000000014018339E: xor     edx, edx
 * 00000001401833A0: call    KiBeginThreadAccountingPeriod
 * 00000001401833A5: mov     rcx, gs:20h
 * 00000001401833AE: inc     byte ptr [rcx+20h]
 * 00000001401833B1: mov     dl, [rcx+6]
 * 00000001401833B4: and     byte ptr [rcx+6], 0
 * 00000001401833B8: cmp     byte ptr [rcx+7], 0
 * 00000001401833BC: jnz     short loc_1401833E7
 * 00000001401833BE: test    dl, dl
 * 00000001401833C0: jz      short loc_1401833E7
 * 00000001401833C2: cmp     byte ptr [rbp-57h], 2
 * 00000001401833C6: jnb     short loc_1401833D3
 * 00000001401833C8: and     byte ptr [rcx+20h], 0
 * 00000001401833CC: call    KiDpcInterruptBypass
 * 00000001401833D1: jmp     short loc_1401833EA
 * 00000001401833D3: mov     ecx, 2
 * 00000001401833D8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401833DE: mov     rcx, gs:20h
 * 00000001401833E7: dec     byte ptr [rcx+20h]
 * 00000001401833EA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401833EE: mov     cr8, rcx
 * 00000001401833F2: mov     rsi, [rbp+0D0h]
 * 00000001401833F9: test    byte ptr [rbp+0F0h], 1
 * 0000000140183400: jz      loc_140183516
 * 0000000140183406: mov     rcx, gs:188h
 * 000000014018340F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140183416: jz      short loc_140183431
 * 0000000140183418: mov     ecx, 1
 * 000000014018341D: mov     cr8, rcx
 * 0000000140183421: sti
 * 0000000140183422: call    KiInitiateUserApc
 * 0000000140183427: cli
 * 0000000140183428: mov     ecx, 0
 * 000000014018342D: mov     cr8, rcx
 * 0000000140183431: mov     rcx, gs:188h
 * 000000014018343A: test    dword ptr [rcx], 8000000h
 * 0000000140183440: jz      short loc_140183447
 * 0000000140183442: call    KiRestoreSetContextState
 * 0000000140183447: mov     rcx, gs:188h
 * 0000000140183450: test    dword ptr [rcx], 40010000h
 * 0000000140183456: jz      short loc_14018346C
 * 0000000140183458: test    byte ptr [rcx+2], 1
 * 000000014018345C: jz      short loc_14018346C
 * 000000014018345E: call    KiCopyCounters
 * 0000000140183463: mov     rcx, gs:188h
 * 000000014018346C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183470: cmp     word ptr [rbp+80h], 0
 * 0000000140183478: jz      short loc_14018347F
 * 000000014018347A: call    KiRestoreDebugRegisterState
 * 000000014018347F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140183483: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183487: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014018348B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018348F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140183493: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183497: mov     r11, [rbp-20h]
 * 000000014018349B: mov     r10, [rbp-28h]
 * 000000014018349F: mov     r9, [rbp-30h]
 * 00000001401834A3: mov     r8, [rbp-38h]
 * 00000001401834A7: movzx   eax, byte ptr gs:27Dh
 * 00000001401834B0: cmp     gs:27Ah, al
 * 00000001401834B8: jz      short loc_1401834CB
 * 00000001401834BA: mov     gs:27Ah, al
 * 00000001401834C2: mov     ecx, 48h ; 'H'
 * 00000001401834C7: xor     edx, edx
 * 00000001401834C9: wrmsr
 * 00000001401834CB: btr     word ptr gs:278h, 2
 * 00000001401834D6: jnb     short loc_1401834E6
 * 00000001401834D8: mov     eax, 1
 * 00000001401834DD: xor     edx, edx
 * 00000001401834DF: mov     ecx, 49h ; 'I'
 * 00000001401834E4: wrmsr
 * 00000001401834E6: mov     rdx, [rbp-40h]
 * 00000001401834EA: mov     rcx, [rbp-48h]
 * 00000001401834EE: mov     rax, [rbp-50h]
 * 00000001401834F2: mov     rsp, rbp
 * 00000001401834F5: mov     rbp, [rbp+0D8h]
 * 00000001401834FC: add     rsp, 0E8h
 * 0000000140183503: test    cs:KiKvaShadow, 1
 * 000000014018350A: jz      short loc_140183511
 * 000000014018350C: jmp     KiKernelExit
 * 0000000140183511: swapgs
 * 0000000140183514: iretq
 * 0000000140183516: ldmxcsr dword ptr [rbp-54h]
 * 000000014018351A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018351E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183522: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140183526: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018352A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018352E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183532: mov     r11, [rbp-20h]
 * 0000000140183536: mov     r10, [rbp-28h]
 * 000000014018353A: mov     r9, [rbp-30h]
 * 000000014018353E: mov     r8, [rbp-38h]
 * 0000000140183542: mov     rdx, [rbp-40h]
 * 0000000140183546: mov     rcx, [rbp-48h]
 * 000000014018354A: mov     rax, [rbp-50h]
 * 000000014018354E: mov     rsp, rbp
 * 0000000140183551: mov     rbp, [rbp+0D8h]
 * 0000000140183558: add     rsp, 0E8h
 * 000000014018355F: iretq
 */
