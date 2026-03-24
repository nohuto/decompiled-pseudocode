/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401A15D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401AC6A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401B1570 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40
 * Reason: Hex-Rays returned no pseudocode for 0x1401ACC40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401ACC40: mov     rdx, rsp
 * 00000001401ACC43: mov     rcx, gs:6458h
 * 00000001401ACC4C: lea     rax, [rcx-6000h]
 * 00000001401ACC53: cmp     rax, rsp
 * 00000001401ACC56: ja      short loc_1401ACC5D
 * 00000001401ACC58: cmp     rsp, rcx
 * 00000001401ACC5B: jb      short loc_1401ACC69
 * 00000001401ACC5D: cmp     cs:KiBugCheckActive, 0
 * 00000001401ACC64: jnz     short loc_1401ACC69
 * 00000001401ACC66: mov     rsp, rcx
 * 00000001401ACC69: sub     rsp, 20h
 * 00000001401ACC6D: mov     [rsp+20h+var_10], rdx
 * 00000001401ACC72: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401ACC77: mov     rsp, [rsp+20h+var_10]
 * 00000001401ACC7C: mov     rcx, rsi
 * 00000001401ACC7F: call    HalPerformEndOfInterrupt_0
 * 00000001401ACC84: mov     rcx, gs:20h
 * 00000001401ACC8D: cmp     byte ptr [rcx+20h], 1
 * 00000001401ACC91: ja      short loc_1401ACD07
 * 00000001401ACC93: rdtsc
 * 00000001401ACC95: shl     rdx, 20h
 * 00000001401ACC99: or      rax, rdx
 * 00000001401ACC9C: sub     rax, [rcx+5BC0h]
 * 00000001401ACCA3: add     [rcx+5C38h], rax
 * 00000001401ACCAA: add     [rcx+5BC0h], rax
 * 00000001401ACCB1: mov     r8, rax
 * 00000001401ACCB4: mov     rax, [rcx+8]
 * 00000001401ACCB8: test    byte ptr [rax+2], 72h
 * 00000001401ACCBC: jz      short loc_1401ACCD1
 * 00000001401ACCBE: xor     edx, edx
 * 00000001401ACCC0: call    KiBeginThreadAccountingPeriod
 * 00000001401ACCC5: mov     rcx, gs:20h
 * 00000001401ACCCE: inc     byte ptr [rcx+20h]
 * 00000001401ACCD1: mov     dl, [rcx+6]
 * 00000001401ACCD4: and     byte ptr [rcx+6], 0
 * 00000001401ACCD8: cmp     byte ptr [rcx+7], 0
 * 00000001401ACCDC: jnz     short loc_1401ACD07
 * 00000001401ACCDE: test    dl, dl
 * 00000001401ACCE0: jz      short loc_1401ACD07
 * 00000001401ACCE2: cmp     byte ptr [rbp-57h], 2
 * 00000001401ACCE6: jnb     short loc_1401ACCF3
 * 00000001401ACCE8: and     byte ptr [rcx+20h], 0
 * 00000001401ACCEC: call    KiDpcInterruptBypass
 * 00000001401ACCF1: jmp     short loc_1401ACD0A
 * 00000001401ACCF3: mov     ecx, 2
 * 00000001401ACCF8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401ACCFE: mov     rcx, gs:20h
 * 00000001401ACD07: dec     byte ptr [rcx+20h]
 * 00000001401ACD0A: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401ACD0E: mov     cr8, rcx
 * 00000001401ACD12: mov     rsi, [rbp+0D0h]
 * 00000001401ACD19: test    byte ptr [rbp+0F0h], 1
 * 00000001401ACD20: jz      loc_1401ACE36
 * 00000001401ACD26: mov     rcx, gs:188h
 * 00000001401ACD2F: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401ACD36: jz      short loc_1401ACD51
 * 00000001401ACD38: mov     ecx, 1
 * 00000001401ACD3D: mov     cr8, rcx
 * 00000001401ACD41: sti
 * 00000001401ACD42: call    KiInitiateUserApc
 * 00000001401ACD47: cli
 * 00000001401ACD48: mov     ecx, 0
 * 00000001401ACD4D: mov     cr8, rcx
 * 00000001401ACD51: mov     rcx, gs:188h
 * 00000001401ACD5A: test    dword ptr [rcx], 8000000h
 * 00000001401ACD60: jz      short loc_1401ACD67
 * 00000001401ACD62: call    KiRestoreSetContextState
 * 00000001401ACD67: mov     rcx, gs:188h
 * 00000001401ACD70: test    dword ptr [rcx], 40010000h
 * 00000001401ACD76: jz      short loc_1401ACD8C
 * 00000001401ACD78: test    byte ptr [rcx+2], 1
 * 00000001401ACD7C: jz      short loc_1401ACD8C
 * 00000001401ACD7E: call    KiCopyCounters
 * 00000001401ACD83: mov     rcx, gs:188h
 * 00000001401ACD8C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401ACD90: cmp     word ptr [rbp+80h], 0
 * 00000001401ACD98: jz      short loc_1401ACD9F
 * 00000001401ACD9A: call    KiRestoreDebugRegisterState
 * 00000001401ACD9F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401ACDA3: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401ACDA7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401ACDAB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401ACDAF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401ACDB3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401ACDB7: mov     r11, [rbp-20h]
 * 00000001401ACDBB: mov     r10, [rbp-28h]
 * 00000001401ACDBF: mov     r9, [rbp-30h]
 * 00000001401ACDC3: mov     r8, [rbp-38h]
 * 00000001401ACDC7: movzx   eax, byte ptr gs:27Dh
 * 00000001401ACDD0: cmp     gs:27Ah, al
 * 00000001401ACDD8: jz      short loc_1401ACDEB
 * 00000001401ACDDA: mov     gs:27Ah, al
 * 00000001401ACDE2: mov     ecx, 48h ; 'H'
 * 00000001401ACDE7: xor     edx, edx
 * 00000001401ACDE9: wrmsr
 * 00000001401ACDEB: btr     word ptr gs:278h, 2
 * 00000001401ACDF6: jnb     short loc_1401ACE06
 * 00000001401ACDF8: mov     eax, 1
 * 00000001401ACDFD: xor     edx, edx
 * 00000001401ACDFF: mov     ecx, 49h ; 'I'
 * 00000001401ACE04: wrmsr
 * 00000001401ACE06: mov     rdx, [rbp-40h]
 * 00000001401ACE0A: mov     rcx, [rbp-48h]
 * 00000001401ACE0E: mov     rax, [rbp-50h]
 * 00000001401ACE12: mov     rsp, rbp
 * 00000001401ACE15: mov     rbp, [rbp+0D8h]
 * 00000001401ACE1C: add     rsp, 0E8h
 * 00000001401ACE23: test    cs:KiKvaShadow, 1
 * 00000001401ACE2A: jz      short loc_1401ACE31
 * 00000001401ACE2C: jmp     KiKernelExit
 * 00000001401ACE31: swapgs
 * 00000001401ACE34: iretq
 * 00000001401ACE36: ldmxcsr dword ptr [rbp-54h]
 * 00000001401ACE3A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401ACE3E: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401ACE42: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401ACE46: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401ACE4A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401ACE4E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401ACE52: mov     r11, [rbp-20h]
 * 00000001401ACE56: mov     r10, [rbp-28h]
 * 00000001401ACE5A: mov     r9, [rbp-30h]
 * 00000001401ACE5E: mov     r8, [rbp-38h]
 * 00000001401ACE62: mov     rdx, [rbp-40h]
 * 00000001401ACE66: mov     rcx, [rbp-48h]
 * 00000001401ACE6A: mov     rax, [rbp-50h]
 * 00000001401ACE6E: mov     rsp, rbp
 * 00000001401ACE71: mov     rbp, [rbp+0D8h]
 * 00000001401ACE78: add     rsp, 0E8h
 * 00000001401ACE7F: iretq
 */
