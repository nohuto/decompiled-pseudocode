/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140183240
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140183240
 * Reason: Hex-Rays returned no pseudocode for 0x140183240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140183240: mov     rdx, rsp
 * 0000000140183243: mov     rcx, gs:6458h
 * 000000014018324C: lea     rax, [rcx-6000h]
 * 0000000140183253: cmp     rax, rsp
 * 0000000140183256: ja      short loc_14018325D
 * 0000000140183258: cmp     rsp, rcx
 * 000000014018325B: jb      short loc_140183269
 * 000000014018325D: cmp     cs:KiBugCheckActive, 0
 * 0000000140183264: jnz     short loc_140183269
 * 0000000140183266: mov     rsp, rcx
 * 0000000140183269: sub     rsp, 20h
 * 000000014018326D: mov     [rsp+20h+var_10], rdx
 * 0000000140183272: call    KiInterruptSubDispatchNoLock
 * 0000000140183277: mov     rsp, [rsp+20h+var_10]
 * 000000014018327C: mov     rcx, gs:20h
 * 0000000140183285: cmp     byte ptr [rcx+20h], 1
 * 0000000140183289: ja      short loc_1401832FF
 * 000000014018328B: rdtsc
 * 000000014018328D: shl     rdx, 20h
 * 0000000140183291: or      rax, rdx
 * 0000000140183294: sub     rax, [rcx+5BC0h]
 * 000000014018329B: add     [rcx+5C38h], rax
 * 00000001401832A2: add     [rcx+5BC0h], rax
 * 00000001401832A9: mov     r8, rax
 * 00000001401832AC: mov     rax, [rcx+8]
 * 00000001401832B0: test    byte ptr [rax+2], 32h
 * 00000001401832B4: jz      short loc_1401832C9
 * 00000001401832B6: xor     edx, edx
 * 00000001401832B8: call    KiBeginThreadAccountingPeriod
 * 00000001401832BD: mov     rcx, gs:20h
 * 00000001401832C6: inc     byte ptr [rcx+20h]
 * 00000001401832C9: mov     dl, [rcx+6]
 * 00000001401832CC: and     byte ptr [rcx+6], 0
 * 00000001401832D0: cmp     byte ptr [rcx+7], 0
 * 00000001401832D4: jnz     short loc_1401832FF
 * 00000001401832D6: test    dl, dl
 * 00000001401832D8: jz      short loc_1401832FF
 * 00000001401832DA: cmp     byte ptr [rbp-57h], 2
 * 00000001401832DE: jnb     short loc_1401832EB
 * 00000001401832E0: and     byte ptr [rcx+20h], 0
 * 00000001401832E4: call    KiDpcInterruptBypass
 * 00000001401832E9: jmp     short loc_140183302
 * 00000001401832EB: mov     ecx, 2
 * 00000001401832F0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401832F6: mov     rcx, gs:20h
 * 00000001401832FF: dec     byte ptr [rcx+20h]
 * 0000000140183302: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140183306: mov     cr8, rcx
 * 000000014018330A: mov     rsi, [rbp+0D0h]
 * 0000000140183311: test    byte ptr [rbp+0F0h], 1
 * 0000000140183318: jz      loc_14018342E
 * 000000014018331E: mov     rcx, gs:188h
 * 0000000140183327: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018332E: jz      short loc_140183349
 * 0000000140183330: mov     ecx, 1
 * 0000000140183335: mov     cr8, rcx
 * 0000000140183339: sti
 * 000000014018333A: call    KiInitiateUserApc
 * 000000014018333F: cli
 * 0000000140183340: mov     ecx, 0
 * 0000000140183345: mov     cr8, rcx
 * 0000000140183349: mov     rcx, gs:188h
 * 0000000140183352: test    dword ptr [rcx], 8000000h
 * 0000000140183358: jz      short loc_14018335F
 * 000000014018335A: call    KiRestoreSetContextState
 * 000000014018335F: mov     rcx, gs:188h
 * 0000000140183368: test    dword ptr [rcx], 40010000h
 * 000000014018336E: jz      short loc_140183384
 * 0000000140183370: test    byte ptr [rcx+2], 1
 * 0000000140183374: jz      short loc_140183384
 * 0000000140183376: call    KiCopyCounters
 * 000000014018337B: mov     rcx, gs:188h
 * 0000000140183384: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183388: cmp     word ptr [rbp+80h], 0
 * 0000000140183390: jz      short loc_140183397
 * 0000000140183392: call    KiRestoreDebugRegisterState
 * 0000000140183397: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018339B: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014018339F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401833A3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401833A7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401833AB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401833AF: mov     r11, [rbp-20h]
 * 00000001401833B3: mov     r10, [rbp-28h]
 * 00000001401833B7: mov     r9, [rbp-30h]
 * 00000001401833BB: mov     r8, [rbp-38h]
 * 00000001401833BF: movzx   eax, byte ptr gs:27Dh
 * 00000001401833C8: cmp     gs:27Ah, al
 * 00000001401833D0: jz      short loc_1401833E3
 * 00000001401833D2: mov     gs:27Ah, al
 * 00000001401833DA: mov     ecx, 48h ; 'H'
 * 00000001401833DF: xor     edx, edx
 * 00000001401833E1: wrmsr
 * 00000001401833E3: btr     word ptr gs:278h, 2
 * 00000001401833EE: jnb     short loc_1401833FE
 * 00000001401833F0: mov     eax, 1
 * 00000001401833F5: xor     edx, edx
 * 00000001401833F7: mov     ecx, 49h ; 'I'
 * 00000001401833FC: wrmsr
 * 00000001401833FE: mov     rdx, [rbp-40h]
 * 0000000140183402: mov     rcx, [rbp-48h]
 * 0000000140183406: mov     rax, [rbp-50h]
 * 000000014018340A: mov     rsp, rbp
 * 000000014018340D: mov     rbp, [rbp+0D8h]
 * 0000000140183414: add     rsp, 0E8h
 * 000000014018341B: test    cs:KiKvaShadow, 1
 * 0000000140183422: jz      short loc_140183429
 * 0000000140183424: jmp     KiKernelExit
 * 0000000140183429: swapgs
 * 000000014018342C: iretq
 * 000000014018342E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183432: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140183436: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014018343A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014018343E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140183442: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140183446: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014018344A: mov     r11, [rbp-20h]
 * 000000014018344E: mov     r10, [rbp-28h]
 * 0000000140183452: mov     r9, [rbp-30h]
 * 0000000140183456: mov     r8, [rbp-38h]
 * 000000014018345A: mov     rdx, [rbp-40h]
 * 000000014018345E: mov     rcx, [rbp-48h]
 * 0000000140183462: mov     rax, [rbp-50h]
 * 0000000140183466: mov     rsp, rbp
 * 0000000140183469: mov     rbp, [rbp+0D8h]
 * 0000000140183470: add     rsp, 0E8h
 * 0000000140183477: iretq
 */
