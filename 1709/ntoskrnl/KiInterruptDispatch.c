/*
 * XREFs of KiInterruptDispatch @ 0x140182B50
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401827D0 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x140182B50
 * Reason: Hex-Rays returned no pseudocode for 0x140182B50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140182B50: mov     rdx, rsp
 * 0000000140182B53: mov     rcx, gs:6458h
 * 0000000140182B5C: lea     rax, [rcx-6000h]
 * 0000000140182B63: cmp     rax, rsp
 * 0000000140182B66: ja      short loc_140182B6D
 * 0000000140182B68: cmp     rsp, rcx
 * 0000000140182B6B: jb      short loc_140182B79
 * 0000000140182B6D: cmp     cs:KiBugCheckActive, 0
 * 0000000140182B74: jnz     short loc_140182B79
 * 0000000140182B76: mov     rsp, rcx
 * 0000000140182B79: sub     rsp, 20h
 * 0000000140182B7D: mov     [rsp+20h+var_10], rdx
 * 0000000140182B82: call    KiInterruptSubDispatch
 * 0000000140182B87: mov     rsp, [rsp+20h+var_10]
 * 0000000140182B8C: mov     rcx, rsi
 * 0000000140182B8F: call    HalPerformEndOfInterrupt_0
 * 0000000140182B94: mov     rcx, gs:20h
 * 0000000140182B9D: cmp     byte ptr [rcx+20h], 1
 * 0000000140182BA1: ja      short loc_140182C17
 * 0000000140182BA3: rdtsc
 * 0000000140182BA5: shl     rdx, 20h
 * 0000000140182BA9: or      rax, rdx
 * 0000000140182BAC: sub     rax, [rcx+5BC0h]
 * 0000000140182BB3: add     [rcx+5C38h], rax
 * 0000000140182BBA: add     [rcx+5BC0h], rax
 * 0000000140182BC1: mov     r8, rax
 * 0000000140182BC4: mov     rax, [rcx+8]
 * 0000000140182BC8: test    byte ptr [rax+2], 32h
 * 0000000140182BCC: jz      short loc_140182BE1
 * 0000000140182BCE: xor     edx, edx
 * 0000000140182BD0: call    KiBeginThreadAccountingPeriod
 * 0000000140182BD5: mov     rcx, gs:20h
 * 0000000140182BDE: inc     byte ptr [rcx+20h]
 * 0000000140182BE1: mov     dl, [rcx+6]
 * 0000000140182BE4: and     byte ptr [rcx+6], 0
 * 0000000140182BE8: cmp     byte ptr [rcx+7], 0
 * 0000000140182BEC: jnz     short loc_140182C17
 * 0000000140182BEE: test    dl, dl
 * 0000000140182BF0: jz      short loc_140182C17
 * 0000000140182BF2: cmp     byte ptr [rbp-57h], 2
 * 0000000140182BF6: jnb     short loc_140182C03
 * 0000000140182BF8: and     byte ptr [rcx+20h], 0
 * 0000000140182BFC: call    KiDpcInterruptBypass
 * 0000000140182C01: jmp     short loc_140182C1A
 * 0000000140182C03: mov     ecx, 2
 * 0000000140182C08: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140182C0E: mov     rcx, gs:20h
 * 0000000140182C17: dec     byte ptr [rcx+20h]
 * 0000000140182C1A: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140182C1E: mov     cr8, rcx
 * 0000000140182C22: mov     rsi, [rbp+0D0h]
 * 0000000140182C29: test    byte ptr [rbp+0F0h], 1
 * 0000000140182C30: jz      loc_140182D46
 * 0000000140182C36: mov     rcx, gs:188h
 * 0000000140182C3F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140182C46: jz      short loc_140182C61
 * 0000000140182C48: mov     ecx, 1
 * 0000000140182C4D: mov     cr8, rcx
 * 0000000140182C51: sti
 * 0000000140182C52: call    KiInitiateUserApc
 * 0000000140182C57: cli
 * 0000000140182C58: mov     ecx, 0
 * 0000000140182C5D: mov     cr8, rcx
 * 0000000140182C61: mov     rcx, gs:188h
 * 0000000140182C6A: test    dword ptr [rcx], 8000000h
 * 0000000140182C70: jz      short loc_140182C77
 * 0000000140182C72: call    KiRestoreSetContextState
 * 0000000140182C77: mov     rcx, gs:188h
 * 0000000140182C80: test    dword ptr [rcx], 40010000h
 * 0000000140182C86: jz      short loc_140182C9C
 * 0000000140182C88: test    byte ptr [rcx+2], 1
 * 0000000140182C8C: jz      short loc_140182C9C
 * 0000000140182C8E: call    KiCopyCounters
 * 0000000140182C93: mov     rcx, gs:188h
 * 0000000140182C9C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182CA0: cmp     word ptr [rbp+80h], 0
 * 0000000140182CA8: jz      short loc_140182CAF
 * 0000000140182CAA: call    KiRestoreDebugRegisterState
 * 0000000140182CAF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182CB3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182CB7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182CBB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182CBF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182CC3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182CC7: mov     r11, [rbp-20h]
 * 0000000140182CCB: mov     r10, [rbp-28h]
 * 0000000140182CCF: mov     r9, [rbp-30h]
 * 0000000140182CD3: mov     r8, [rbp-38h]
 * 0000000140182CD7: movzx   eax, byte ptr gs:27Dh
 * 0000000140182CE0: cmp     gs:27Ah, al
 * 0000000140182CE8: jz      short loc_140182CFB
 * 0000000140182CEA: mov     gs:27Ah, al
 * 0000000140182CF2: mov     ecx, 48h ; 'H'
 * 0000000140182CF7: xor     edx, edx
 * 0000000140182CF9: wrmsr
 * 0000000140182CFB: btr     word ptr gs:278h, 2
 * 0000000140182D06: jnb     short loc_140182D16
 * 0000000140182D08: mov     eax, 1
 * 0000000140182D0D: xor     edx, edx
 * 0000000140182D0F: mov     ecx, 49h ; 'I'
 * 0000000140182D14: wrmsr
 * 0000000140182D16: mov     rdx, [rbp-40h]
 * 0000000140182D1A: mov     rcx, [rbp-48h]
 * 0000000140182D1E: mov     rax, [rbp-50h]
 * 0000000140182D22: mov     rsp, rbp
 * 0000000140182D25: mov     rbp, [rbp+0D8h]
 * 0000000140182D2C: add     rsp, 0E8h
 * 0000000140182D33: test    cs:KiKvaShadow, 1
 * 0000000140182D3A: jz      short loc_140182D41
 * 0000000140182D3C: jmp     KiKernelExit
 * 0000000140182D41: swapgs
 * 0000000140182D44: iretq
 * 0000000140182D46: ldmxcsr dword ptr [rbp-54h]
 * 0000000140182D4A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140182D4E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140182D52: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140182D56: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140182D5A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140182D5E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140182D62: mov     r11, [rbp-20h]
 * 0000000140182D66: mov     r10, [rbp-28h]
 * 0000000140182D6A: mov     r9, [rbp-30h]
 * 0000000140182D6E: mov     r8, [rbp-38h]
 * 0000000140182D72: mov     rdx, [rbp-40h]
 * 0000000140182D76: mov     rcx, [rbp-48h]
 * 0000000140182D7A: mov     rax, [rbp-50h]
 * 0000000140182D7E: mov     rsp, rbp
 * 0000000140182D81: mov     rbp, [rbp+0D8h]
 * 0000000140182D88: add     rsp, 0E8h
 * 0000000140182D8F: iretq
 */
