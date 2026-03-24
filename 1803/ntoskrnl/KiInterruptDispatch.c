/*
 * XREFs of KiInterruptDispatch @ 0x1401AC7A0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401AC7A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401AC7A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AC7A0: mov     rdx, rsp
 * 00000001401AC7A3: mov     rcx, gs:6458h
 * 00000001401AC7AC: lea     rax, [rcx-6000h]
 * 00000001401AC7B3: cmp     rax, rsp
 * 00000001401AC7B6: ja      short loc_1401AC7BD
 * 00000001401AC7B8: cmp     rsp, rcx
 * 00000001401AC7BB: jb      short loc_1401AC7C9
 * 00000001401AC7BD: cmp     cs:KiBugCheckActive, 0
 * 00000001401AC7C4: jnz     short loc_1401AC7C9
 * 00000001401AC7C6: mov     rsp, rcx
 * 00000001401AC7C9: sub     rsp, 20h
 * 00000001401AC7CD: mov     [rsp+20h+var_10], rdx
 * 00000001401AC7D2: call    KiInterruptSubDispatch
 * 00000001401AC7D7: mov     rsp, [rsp+20h+var_10]
 * 00000001401AC7DC: mov     rcx, rsi
 * 00000001401AC7DF: call    HalPerformEndOfInterrupt_0
 * 00000001401AC7E4: mov     rcx, gs:20h
 * 00000001401AC7ED: cmp     byte ptr [rcx+20h], 1
 * 00000001401AC7F1: ja      short loc_1401AC867
 * 00000001401AC7F3: rdtsc
 * 00000001401AC7F5: shl     rdx, 20h
 * 00000001401AC7F9: or      rax, rdx
 * 00000001401AC7FC: sub     rax, [rcx+5BC0h]
 * 00000001401AC803: add     [rcx+5C38h], rax
 * 00000001401AC80A: add     [rcx+5BC0h], rax
 * 00000001401AC811: mov     r8, rax
 * 00000001401AC814: mov     rax, [rcx+8]
 * 00000001401AC818: test    byte ptr [rax+2], 72h
 * 00000001401AC81C: jz      short loc_1401AC831
 * 00000001401AC81E: xor     edx, edx
 * 00000001401AC820: call    KiBeginThreadAccountingPeriod
 * 00000001401AC825: mov     rcx, gs:20h
 * 00000001401AC82E: inc     byte ptr [rcx+20h]
 * 00000001401AC831: mov     dl, [rcx+6]
 * 00000001401AC834: and     byte ptr [rcx+6], 0
 * 00000001401AC838: cmp     byte ptr [rcx+7], 0
 * 00000001401AC83C: jnz     short loc_1401AC867
 * 00000001401AC83E: test    dl, dl
 * 00000001401AC840: jz      short loc_1401AC867
 * 00000001401AC842: cmp     byte ptr [rbp-57h], 2
 * 00000001401AC846: jnb     short loc_1401AC853
 * 00000001401AC848: and     byte ptr [rcx+20h], 0
 * 00000001401AC84C: call    KiDpcInterruptBypass
 * 00000001401AC851: jmp     short loc_1401AC86A
 * 00000001401AC853: mov     ecx, 2
 * 00000001401AC858: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401AC85E: mov     rcx, gs:20h
 * 00000001401AC867: dec     byte ptr [rcx+20h]
 * 00000001401AC86A: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401AC86E: mov     cr8, rcx
 * 00000001401AC872: mov     rsi, [rbp+0D0h]
 * 00000001401AC879: test    byte ptr [rbp+0F0h], 1
 * 00000001401AC880: jz      loc_1401AC996
 * 00000001401AC886: mov     rcx, gs:188h
 * 00000001401AC88F: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401AC896: jz      short loc_1401AC8B1
 * 00000001401AC898: mov     ecx, 1
 * 00000001401AC89D: mov     cr8, rcx
 * 00000001401AC8A1: sti
 * 00000001401AC8A2: call    KiInitiateUserApc
 * 00000001401AC8A7: cli
 * 00000001401AC8A8: mov     ecx, 0
 * 00000001401AC8AD: mov     cr8, rcx
 * 00000001401AC8B1: mov     rcx, gs:188h
 * 00000001401AC8BA: test    dword ptr [rcx], 8000000h
 * 00000001401AC8C0: jz      short loc_1401AC8C7
 * 00000001401AC8C2: call    KiRestoreSetContextState
 * 00000001401AC8C7: mov     rcx, gs:188h
 * 00000001401AC8D0: test    dword ptr [rcx], 40010000h
 * 00000001401AC8D6: jz      short loc_1401AC8EC
 * 00000001401AC8D8: test    byte ptr [rcx+2], 1
 * 00000001401AC8DC: jz      short loc_1401AC8EC
 * 00000001401AC8DE: call    KiCopyCounters
 * 00000001401AC8E3: mov     rcx, gs:188h
 * 00000001401AC8EC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401AC8F0: cmp     word ptr [rbp+80h], 0
 * 00000001401AC8F8: jz      short loc_1401AC8FF
 * 00000001401AC8FA: call    KiRestoreDebugRegisterState
 * 00000001401AC8FF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401AC903: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401AC907: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401AC90B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401AC90F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401AC913: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401AC917: mov     r11, [rbp-20h]
 * 00000001401AC91B: mov     r10, [rbp-28h]
 * 00000001401AC91F: mov     r9, [rbp-30h]
 * 00000001401AC923: mov     r8, [rbp-38h]
 * 00000001401AC927: movzx   eax, byte ptr gs:27Dh
 * 00000001401AC930: cmp     gs:27Ah, al
 * 00000001401AC938: jz      short loc_1401AC94B
 * 00000001401AC93A: mov     gs:27Ah, al
 * 00000001401AC942: mov     ecx, 48h ; 'H'
 * 00000001401AC947: xor     edx, edx
 * 00000001401AC949: wrmsr
 * 00000001401AC94B: btr     word ptr gs:278h, 2
 * 00000001401AC956: jnb     short loc_1401AC966
 * 00000001401AC958: mov     eax, 1
 * 00000001401AC95D: xor     edx, edx
 * 00000001401AC95F: mov     ecx, 49h ; 'I'
 * 00000001401AC964: wrmsr
 * 00000001401AC966: mov     rdx, [rbp-40h]
 * 00000001401AC96A: mov     rcx, [rbp-48h]
 * 00000001401AC96E: mov     rax, [rbp-50h]
 * 00000001401AC972: mov     rsp, rbp
 * 00000001401AC975: mov     rbp, [rbp+0D8h]
 * 00000001401AC97C: add     rsp, 0E8h
 * 00000001401AC983: test    cs:KiKvaShadow, 1
 * 00000001401AC98A: jz      short loc_1401AC991
 * 00000001401AC98C: jmp     KiKernelExit
 * 00000001401AC991: swapgs
 * 00000001401AC994: iretq
 * 00000001401AC996: ldmxcsr dword ptr [rbp-54h]
 * 00000001401AC99A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401AC99E: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401AC9A2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401AC9A6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401AC9AA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401AC9AE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401AC9B2: mov     r11, [rbp-20h]
 * 00000001401AC9B6: mov     r10, [rbp-28h]
 * 00000001401AC9BA: mov     r9, [rbp-30h]
 * 00000001401AC9BE: mov     r8, [rbp-38h]
 * 00000001401AC9C2: mov     rdx, [rbp-40h]
 * 00000001401AC9C6: mov     rcx, [rbp-48h]
 * 00000001401AC9CA: mov     rax, [rbp-50h]
 * 00000001401AC9CE: mov     rsp, rbp
 * 00000001401AC9D1: mov     rbp, [rbp+0D8h]
 * 00000001401AC9D8: add     rsp, 0E8h
 * 00000001401AC9DF: iretq
 */
