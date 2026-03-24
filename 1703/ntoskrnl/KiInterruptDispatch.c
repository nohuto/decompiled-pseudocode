/*
 * XREFs of KiInterruptDispatch @ 0x1401830D0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x140182D50 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187EA0 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401830D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401830D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401830D0: mov     rdx, rsp
 * 00000001401830D3: mov     rcx, gs:6598h
 * 00000001401830DC: lea     rax, [rcx-6000h]
 * 00000001401830E3: cmp     rax, rsp
 * 00000001401830E6: ja      short loc_1401830ED
 * 00000001401830E8: cmp     rsp, rcx
 * 00000001401830EB: jb      short loc_1401830F9
 * 00000001401830ED: cmp     cs:KiBugCheckActive, 0
 * 00000001401830F4: jnz     short loc_1401830F9
 * 00000001401830F6: mov     rsp, rcx
 * 00000001401830F9: sub     rsp, 20h
 * 00000001401830FD: mov     [rsp+20h+var_10], rdx
 * 0000000140183102: call    KiInterruptSubDispatch
 * 0000000140183107: mov     rsp, [rsp+20h+var_10]
 * 000000014018310C: mov     rcx, rsi
 * 000000014018310F: call    HalPerformEndOfInterrupt_0
 * 0000000140183114: mov     rcx, gs:20h
 * 000000014018311D: cmp     byte ptr [rcx+20h], 1
 * 0000000140183121: ja      short loc_140183197
 * 0000000140183123: rdtsc
 * 0000000140183125: shl     rdx, 20h
 * 0000000140183129: or      rax, rdx
 * 000000014018312C: sub     rax, [rcx+5BC0h]
 * 0000000140183133: add     [rcx+5C78h], rax
 * 000000014018313A: add     [rcx+5BC0h], rax
 * 0000000140183141: mov     r8, rax
 * 0000000140183144: mov     rax, [rcx+8]
 * 0000000140183148: test    byte ptr [rax+2], 32h
 * 000000014018314C: jz      short loc_140183161
 * 000000014018314E: xor     edx, edx
 * 0000000140183150: call    KiBeginThreadAccountingPeriod
 * 0000000140183155: mov     rcx, gs:20h
 * 000000014018315E: inc     byte ptr [rcx+20h]
 * 0000000140183161: mov     dl, [rcx+6]
 * 0000000140183164: and     byte ptr [rcx+6], 0
 * 0000000140183168: cmp     byte ptr [rcx+7], 0
 * 000000014018316C: jnz     short loc_140183197
 * 000000014018316E: test    dl, dl
 * 0000000140183170: jz      short loc_140183197
 * 0000000140183172: cmp     byte ptr [rbp-57h], 2
 * 0000000140183176: jnb     short loc_140183183
 * 0000000140183178: and     byte ptr [rcx+20h], 0
 * 000000014018317C: call    KiDpcInterruptBypass
 * 0000000140183181: jmp     short loc_14018319A
 * 0000000140183183: mov     ecx, 2
 * 0000000140183188: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018318E: mov     rcx, gs:20h
 * 0000000140183197: dec     byte ptr [rcx+20h]
 * 000000014018319A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018319E: mov     cr8, rcx
 * 00000001401831A2: mov     rsi, [rbp+0D0h]
 * 00000001401831A9: test    byte ptr [rbp+0F0h], 1
 * 00000001401831B0: jz      loc_1401832C6
 * 00000001401831B6: mov     rcx, gs:188h
 * 00000001401831BF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401831C6: jz      short loc_1401831E1
 * 00000001401831C8: mov     ecx, 1
 * 00000001401831CD: mov     cr8, rcx
 * 00000001401831D1: sti
 * 00000001401831D2: call    KiInitiateUserApc
 * 00000001401831D7: cli
 * 00000001401831D8: mov     ecx, 0
 * 00000001401831DD: mov     cr8, rcx
 * 00000001401831E1: mov     rcx, gs:188h
 * 00000001401831EA: test    dword ptr [rcx], 8000000h
 * 00000001401831F0: jz      short loc_1401831F7
 * 00000001401831F2: call    KiRestoreSetContextState
 * 00000001401831F7: mov     rcx, gs:188h
 * 0000000140183200: test    dword ptr [rcx], 40010000h
 * 0000000140183206: jz      short loc_14018321C
 * 0000000140183208: test    byte ptr [rcx+2], 1
 * 000000014018320C: jz      short loc_14018321C
 * 000000014018320E: call    KiCopyCounters
 * 0000000140183213: mov     rcx, gs:188h
 * 000000014018321C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183220: cmp     word ptr [rbp+80h], 0
 * 0000000140183228: jz      short loc_14018322F
 * 000000014018322A: call    KiRestoreDebugRegisterState
 * 000000014018322F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140183233: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183237: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014018323B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018323F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140183243: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183247: mov     r11, [rbp-20h]
 * 000000014018324B: mov     r10, [rbp-28h]
 * 000000014018324F: mov     r9, [rbp-30h]
 * 0000000140183253: mov     r8, [rbp-38h]
 * 0000000140183257: movzx   eax, byte ptr gs:27Dh
 * 0000000140183260: cmp     gs:27Ah, al
 * 0000000140183268: jz      short loc_14018327B
 * 000000014018326A: mov     gs:27Ah, al
 * 0000000140183272: mov     ecx, 48h ; 'H'
 * 0000000140183277: xor     edx, edx
 * 0000000140183279: wrmsr
 * 000000014018327B: btr     word ptr gs:278h, 2
 * 0000000140183286: jnb     short loc_140183296
 * 0000000140183288: mov     eax, 1
 * 000000014018328D: xor     edx, edx
 * 000000014018328F: mov     ecx, 49h ; 'I'
 * 0000000140183294: wrmsr
 * 0000000140183296: mov     rdx, [rbp-40h]
 * 000000014018329A: mov     rcx, [rbp-48h]
 * 000000014018329E: mov     rax, [rbp-50h]
 * 00000001401832A2: mov     rsp, rbp
 * 00000001401832A5: mov     rbp, [rbp+0D8h]
 * 00000001401832AC: add     rsp, 0E8h
 * 00000001401832B3: test    cs:KiKvaShadow, 1
 * 00000001401832BA: jz      short loc_1401832C1
 * 00000001401832BC: jmp     KiKernelExit
 * 00000001401832C1: swapgs
 * 00000001401832C4: iretq
 * 00000001401832C6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401832CA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401832CE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401832D2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401832D6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401832DA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401832DE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401832E2: mov     r11, [rbp-20h]
 * 00000001401832E6: mov     r10, [rbp-28h]
 * 00000001401832EA: mov     r9, [rbp-30h]
 * 00000001401832EE: mov     r8, [rbp-38h]
 * 00000001401832F2: mov     rdx, [rbp-40h]
 * 00000001401832F6: mov     rcx, [rbp-48h]
 * 00000001401832FA: mov     rax, [rbp-50h]
 * 00000001401832FE: mov     rsp, rbp
 * 0000000140183301: mov     rbp, [rbp+0D8h]
 * 0000000140183308: add     rsp, 0E8h
 * 000000014018330F: iretq
 */
