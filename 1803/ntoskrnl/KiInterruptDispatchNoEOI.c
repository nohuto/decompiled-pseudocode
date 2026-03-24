/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401ACE90
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401ACE90
 * Reason: Hex-Rays returned no pseudocode for 0x1401ACE90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401ACE90: mov     rdx, rsp
 * 00000001401ACE93: mov     rcx, gs:6458h
 * 00000001401ACE9C: lea     rax, [rcx-6000h]
 * 00000001401ACEA3: cmp     rax, rsp
 * 00000001401ACEA6: ja      short loc_1401ACEAD
 * 00000001401ACEA8: cmp     rsp, rcx
 * 00000001401ACEAB: jb      short loc_1401ACEB9
 * 00000001401ACEAD: cmp     cs:KiBugCheckActive, 0
 * 00000001401ACEB4: jnz     short loc_1401ACEB9
 * 00000001401ACEB6: mov     rsp, rcx
 * 00000001401ACEB9: sub     rsp, 20h
 * 00000001401ACEBD: mov     [rsp+20h+var_10], rdx
 * 00000001401ACEC2: call    KiInterruptSubDispatchNoLock
 * 00000001401ACEC7: mov     rsp, [rsp+20h+var_10]
 * 00000001401ACECC: mov     rcx, gs:20h
 * 00000001401ACED5: cmp     byte ptr [rcx+20h], 1
 * 00000001401ACED9: ja      short loc_1401ACF4F
 * 00000001401ACEDB: rdtsc
 * 00000001401ACEDD: shl     rdx, 20h
 * 00000001401ACEE1: or      rax, rdx
 * 00000001401ACEE4: sub     rax, [rcx+5BC0h]
 * 00000001401ACEEB: add     [rcx+5C38h], rax
 * 00000001401ACEF2: add     [rcx+5BC0h], rax
 * 00000001401ACEF9: mov     r8, rax
 * 00000001401ACEFC: mov     rax, [rcx+8]
 * 00000001401ACF00: test    byte ptr [rax+2], 72h
 * 00000001401ACF04: jz      short loc_1401ACF19
 * 00000001401ACF06: xor     edx, edx
 * 00000001401ACF08: call    KiBeginThreadAccountingPeriod
 * 00000001401ACF0D: mov     rcx, gs:20h
 * 00000001401ACF16: inc     byte ptr [rcx+20h]
 * 00000001401ACF19: mov     dl, [rcx+6]
 * 00000001401ACF1C: and     byte ptr [rcx+6], 0
 * 00000001401ACF20: cmp     byte ptr [rcx+7], 0
 * 00000001401ACF24: jnz     short loc_1401ACF4F
 * 00000001401ACF26: test    dl, dl
 * 00000001401ACF28: jz      short loc_1401ACF4F
 * 00000001401ACF2A: cmp     byte ptr [rbp-57h], 2
 * 00000001401ACF2E: jnb     short loc_1401ACF3B
 * 00000001401ACF30: and     byte ptr [rcx+20h], 0
 * 00000001401ACF34: call    KiDpcInterruptBypass
 * 00000001401ACF39: jmp     short loc_1401ACF52
 * 00000001401ACF3B: mov     ecx, 2
 * 00000001401ACF40: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401ACF46: mov     rcx, gs:20h
 * 00000001401ACF4F: dec     byte ptr [rcx+20h]
 * 00000001401ACF52: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401ACF56: mov     cr8, rcx
 * 00000001401ACF5A: mov     rsi, [rbp+0D0h]
 * 00000001401ACF61: test    byte ptr [rbp+0F0h], 1
 * 00000001401ACF68: jz      loc_1401AD07E
 * 00000001401ACF6E: mov     rcx, gs:188h
 * 00000001401ACF77: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401ACF7E: jz      short loc_1401ACF99
 * 00000001401ACF80: mov     ecx, 1
 * 00000001401ACF85: mov     cr8, rcx
 * 00000001401ACF89: sti
 * 00000001401ACF8A: call    KiInitiateUserApc
 * 00000001401ACF8F: cli
 * 00000001401ACF90: mov     ecx, 0
 * 00000001401ACF95: mov     cr8, rcx
 * 00000001401ACF99: mov     rcx, gs:188h
 * 00000001401ACFA2: test    dword ptr [rcx], 8000000h
 * 00000001401ACFA8: jz      short loc_1401ACFAF
 * 00000001401ACFAA: call    KiRestoreSetContextState
 * 00000001401ACFAF: mov     rcx, gs:188h
 * 00000001401ACFB8: test    dword ptr [rcx], 40010000h
 * 00000001401ACFBE: jz      short loc_1401ACFD4
 * 00000001401ACFC0: test    byte ptr [rcx+2], 1
 * 00000001401ACFC4: jz      short loc_1401ACFD4
 * 00000001401ACFC6: call    KiCopyCounters
 * 00000001401ACFCB: mov     rcx, gs:188h
 * 00000001401ACFD4: ldmxcsr dword ptr [rbp-54h]
 * 00000001401ACFD8: cmp     word ptr [rbp+80h], 0
 * 00000001401ACFE0: jz      short loc_1401ACFE7
 * 00000001401ACFE2: call    KiRestoreDebugRegisterState
 * 00000001401ACFE7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401ACFEB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401ACFEF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401ACFF3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401ACFF7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401ACFFB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401ACFFF: mov     r11, [rbp-20h]
 * 00000001401AD003: mov     r10, [rbp-28h]
 * 00000001401AD007: mov     r9, [rbp-30h]
 * 00000001401AD00B: mov     r8, [rbp-38h]
 * 00000001401AD00F: movzx   eax, byte ptr gs:27Dh
 * 00000001401AD018: cmp     gs:27Ah, al
 * 00000001401AD020: jz      short loc_1401AD033
 * 00000001401AD022: mov     gs:27Ah, al
 * 00000001401AD02A: mov     ecx, 48h ; 'H'
 * 00000001401AD02F: xor     edx, edx
 * 00000001401AD031: wrmsr
 * 00000001401AD033: btr     word ptr gs:278h, 2
 * 00000001401AD03E: jnb     short loc_1401AD04E
 * 00000001401AD040: mov     eax, 1
 * 00000001401AD045: xor     edx, edx
 * 00000001401AD047: mov     ecx, 49h ; 'I'
 * 00000001401AD04C: wrmsr
 * 00000001401AD04E: mov     rdx, [rbp-40h]
 * 00000001401AD052: mov     rcx, [rbp-48h]
 * 00000001401AD056: mov     rax, [rbp-50h]
 * 00000001401AD05A: mov     rsp, rbp
 * 00000001401AD05D: mov     rbp, [rbp+0D8h]
 * 00000001401AD064: add     rsp, 0E8h
 * 00000001401AD06B: test    cs:KiKvaShadow, 1
 * 00000001401AD072: jz      short loc_1401AD079
 * 00000001401AD074: jmp     KiKernelExit
 * 00000001401AD079: swapgs
 * 00000001401AD07C: iretq
 * 00000001401AD07E: ldmxcsr dword ptr [rbp-54h]
 * 00000001401AD082: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401AD086: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401AD08A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401AD08E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401AD092: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401AD096: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401AD09A: mov     r11, [rbp-20h]
 * 00000001401AD09E: mov     r10, [rbp-28h]
 * 00000001401AD0A2: mov     r9, [rbp-30h]
 * 00000001401AD0A6: mov     r8, [rbp-38h]
 * 00000001401AD0AA: mov     rdx, [rbp-40h]
 * 00000001401AD0AE: mov     rcx, [rbp-48h]
 * 00000001401AD0B2: mov     rax, [rbp-50h]
 * 00000001401AD0B6: mov     rsp, rbp
 * 00000001401AD0B9: mov     rbp, [rbp+0D8h]
 * 00000001401AD0C0: add     rsp, 0E8h
 * 00000001401AD0C7: iretq
 */
