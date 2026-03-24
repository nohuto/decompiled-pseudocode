/*
 * XREFs of KiIpiInterrupt @ 0x140187990
 * Callers:
 *     KiIpiInterruptShadow @ 0x140298180 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140176E10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185310 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140187E80 (KiIpiInterruptSubDispatch.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140187990
 * Reason: Hex-Rays returned no pseudocode for 0x140187990
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187990: sub     rsp, 8
 * 0000000140187994: push    rbp
 * 0000000140187995: push    rsi
 * 0000000140187996: sub     rsp, 150h
 * 000000014018799D: lea     rbp, [rsp+80h]
 * 00000001401879A5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401879A9: mov     [rbp+0E8h+var_138], rax
 * 00000001401879AD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401879B1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401879B5: mov     [rbp+0E8h+var_120], r8
 * 00000001401879B9: mov     [rbp+0E8h+var_118], r9
 * 00000001401879BD: mov     [rbp+0E8h+var_110], r10
 * 00000001401879C1: mov     [rbp+0E8h+var_108], r11
 * 00000001401879C5: test    [rbp+0E8h+arg_0], 1
 * 00000001401879CC: jnz     short loc_1401879FB
 * 00000001401879CE: lfence
 * 00000001401879D1: test    byte ptr gs:278h, 1
 * 00000001401879DA: jnz     short loc_1401879E4
 * 00000001401879DC: lfence
 * 00000001401879DF: jmp     loc_140187BCE
 * 00000001401879E4: movzx   eax, byte ptr gs:27Ah
 * 00000001401879ED: mov     ecx, 48h ; 'H'
 * 00000001401879F2: xor     edx, edx
 * 00000001401879F4: wrmsr
 * 00000001401879F6: jmp     loc_140187BCE
 * 00000001401879FB: test    cs:KiKvaShadow, 1
 * 0000000140187A02: jnz     short loc_140187A07
 * 0000000140187A04: swapgs
 * 0000000140187A07: lfence
 * 0000000140187A0A: mov     r10, gs:188h
 * 0000000140187A13: mov     rcx, gs:188h
 * 0000000140187A1C: mov     rcx, [rcx+220h]
 * 0000000140187A23: mov     rcx, [rcx+838h]
 * 0000000140187A2A: mov     gs:270h, rcx
 * 0000000140187A33: movzx   eax, byte ptr gs:27Bh
 * 0000000140187A3C: cmp     gs:27Ah, al
 * 0000000140187A44: jz      short loc_140187A57
 * 0000000140187A46: mov     gs:27Ah, al
 * 0000000140187A4E: mov     ecx, 48h ; 'H'
 * 0000000140187A53: xor     edx, edx
 * 0000000140187A55: wrmsr
 * 0000000140187A57: movzx   edx, byte ptr gs:278h
 * 0000000140187A60: test    edx, 8
 * 0000000140187A66: jz      short loc_140187A7B
 * 0000000140187A68: mov     eax, 1
 * 0000000140187A6D: xor     edx, edx
 * 0000000140187A6F: mov     ecx, 49h ; 'I'
 * 0000000140187A74: wrmsr
 * 0000000140187A76: jmp     loc_140187BB9
 * 0000000140187A7B: test    edx, 2
 * 0000000140187A81: jz      loc_140187BB6
 * 0000000140187A87: test    byte ptr gs:279h, 4
 * 0000000140187A90: jnz     loc_140187BB6
 * 0000000140187A96: call    loc_140187BA9
 * 0000000140187A9B: add     rsp, 8
 * 0000000140187A9F: call    loc_140187BB2
 * 0000000140187AA4: add     rsp, 8
 * 0000000140187AA8: call    loc_140187A9B
 * 0000000140187AAD: add     rsp, 8
 * 0000000140187AB1: call    loc_140187AA4
 * 0000000140187AB6: add     rsp, 8
 * 0000000140187ABA: call    loc_140187AAD
 * 0000000140187ABF: add     rsp, 8
 * 0000000140187AC3: call    loc_140187AB6
 * 0000000140187AC8: add     rsp, 8
 * 0000000140187ACC: call    loc_140187ABF
 * 0000000140187AD1: add     rsp, 8
 * 0000000140187AD5: call    loc_140187AC8
 * 0000000140187ADA: add     rsp, 8
 * 0000000140187ADE: call    loc_140187AD1
 * 0000000140187AE3: add     rsp, 8
 * 0000000140187AE7: call    loc_140187ADA
 * 0000000140187AEC: add     rsp, 8
 * 0000000140187AF0: call    loc_140187AE3
 * 0000000140187AF5: add     rsp, 8
 * 0000000140187AF9: call    loc_140187AEC
 * 0000000140187AFE: add     rsp, 8
 * 0000000140187B02: call    loc_140187AF5
 * 0000000140187B07: add     rsp, 8
 * 0000000140187B0B: call    loc_140187AFE
 * 0000000140187B10: add     rsp, 8
 * 0000000140187B14: call    loc_140187B07
 * 0000000140187B19: add     rsp, 8
 * 0000000140187B1D: call    loc_140187B10
 * 0000000140187B22: add     rsp, 8
 * 0000000140187B26: call    loc_140187B19
 * 0000000140187B2B: add     rsp, 8
 * 0000000140187B2F: call    loc_140187B22
 * 0000000140187B34: add     rsp, 8
 * 0000000140187B38: call    loc_140187B2B
 * 0000000140187B3D: add     rsp, 8
 * 0000000140187B41: call    loc_140187B34
 * 0000000140187B46: add     rsp, 8
 * 0000000140187B4A: call    loc_140187B3D
 * 0000000140187B4F: add     rsp, 8
 * 0000000140187B53: call    loc_140187B46
 * 0000000140187B58: add     rsp, 8
 * 0000000140187B5C: call    loc_140187B4F
 * 0000000140187B61: add     rsp, 8
 * 0000000140187B65: call    loc_140187B58
 * 0000000140187B6A: add     rsp, 8
 * 0000000140187B6E: call    loc_140187B61
 * 0000000140187B73: add     rsp, 8
 * 0000000140187B77: call    loc_140187B6A
 * 0000000140187B7C: add     rsp, 8
 * 0000000140187B80: call    loc_140187B73
 * 0000000140187B85: add     rsp, 8
 * 0000000140187B89: call    loc_140187B7C
 * 0000000140187B8E: add     rsp, 8
 * 0000000140187B92: call    loc_140187B85
 * 0000000140187B97: add     rsp, 8
 * 0000000140187B9B: call    loc_140187B8E
 * 0000000140187BA0: add     rsp, 8
 * 0000000140187BA4: call    loc_140187B97
 * 0000000140187BA9: add     rsp, 8
 * 0000000140187BAD: call    loc_140187BA0
 * 0000000140187BB2: add     rsp, 8
 * 0000000140187BB6: lfence
 * 0000000140187BB9: test    byte ptr [r10+3], 3
 * 0000000140187BBE: mov     [rbp+0E8h+var_68], 0
 * 0000000140187BC7: jz      short loc_140187BCE
 * 0000000140187BC9: call    KiSaveDebugRegisterState
 * 0000000140187BCE: cld
 * 0000000140187BCF: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187BD3: ldmxcsr dword ptr gs:180h
 * 0000000140187BDC: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187BE0: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187BE4: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187BE8: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140187BEC: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140187BF0: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140187BF4: cmp     byte ptr gs:5D1Ah, 0
 * 0000000140187BFD: jz      short loc_140187C04
 * 0000000140187BFF: call    KeWakeProcessor
 * 0000000140187C04: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140187C0B: cmp     rax, [rbp+0E8h]
 * 0000000140187C12: jnb     short loc_140187C2D
 * 0000000140187C14: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140187C1B: cmp     rax, [rbp+0E8h]
 * 0000000140187C22: jb      short loc_140187C2D
 * 0000000140187C24: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140187C28: call    KiCheckForSListAddress
 * 0000000140187C2D: xor     esi, esi
 * 0000000140187C2F: inc     dword ptr gs:5D00h
 * 0000000140187C37: mov     rdx, rsp
 * 0000000140187C3A: mov     rcx, gs:6458h
 * 0000000140187C43: lea     rax, [rcx-6000h]
 * 0000000140187C4A: cmp     rax, rsp
 * 0000000140187C4D: ja      short loc_140187C54
 * 0000000140187C4F: cmp     rsp, rcx
 * 0000000140187C52: jb      short loc_140187C60
 * 0000000140187C54: cmp     cs:KiBugCheckActive, 0
 * 0000000140187C5B: jnz     short loc_140187C60
 * 0000000140187C5D: mov     rsp, rcx
 * 0000000140187C60: sub     rsp, 20h
 * 0000000140187C64: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140187C69: call    KiIpiInterruptSubDispatch
 * 0000000140187C6E: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140187C73: mov     rcx, rsi
 * 0000000140187C76: call    HalPerformEndOfInterrupt_0
 * 0000000140187C7B: mov     rcx, gs:20h
 * 0000000140187C84: cmp     byte ptr [rcx+20h], 1
 * 0000000140187C88: ja      short loc_140187CFE
 * 0000000140187C8A: rdtsc
 * 0000000140187C8C: shl     rdx, 20h
 * 0000000140187C90: or      rax, rdx
 * 0000000140187C93: sub     rax, [rcx+5BC0h]
 * 0000000140187C9A: add     [rcx+5C38h], rax
 * 0000000140187CA1: add     [rcx+5BC0h], rax
 * 0000000140187CA8: mov     r8, rax
 * 0000000140187CAB: mov     rax, [rcx+8]
 * 0000000140187CAF: test    byte ptr [rax+2], 32h
 * 0000000140187CB3: jz      short loc_140187CC8
 * 0000000140187CB5: xor     edx, edx
 * 0000000140187CB7: call    KiBeginThreadAccountingPeriod
 * 0000000140187CBC: mov     rcx, gs:20h
 * 0000000140187CC5: inc     byte ptr [rcx+20h]
 * 0000000140187CC8: mov     dl, [rcx+6]
 * 0000000140187CCB: and     byte ptr [rcx+6], 0
 * 0000000140187CCF: cmp     byte ptr [rcx+7], 0
 * 0000000140187CD3: jnz     short loc_140187CFE
 * 0000000140187CD5: test    dl, dl
 * 0000000140187CD7: jz      short loc_140187CFE
 * 0000000140187CD9: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140187CDD: jnb     short loc_140187CEA
 * 0000000140187CDF: and     byte ptr [rcx+20h], 0
 * 0000000140187CE3: call    KiDpcInterruptBypass
 * 0000000140187CE8: jmp     short loc_140187D01
 * 0000000140187CEA: mov     ecx, 2
 * 0000000140187CEF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140187CF5: mov     rcx, gs:20h
 * 0000000140187CFE: dec     byte ptr [rcx+20h]
 * 0000000140187D01: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140187D05: mov     cr8, rcx
 * 0000000140187D09: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187D10: test    [rbp+0E8h+arg_0], 1
 * 0000000140187D17: jz      loc_140187E2D
 * 0000000140187D1D: mov     rcx, gs:188h
 * 0000000140187D26: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140187D2D: jz      short loc_140187D48
 * 0000000140187D2F: mov     ecx, 1
 * 0000000140187D34: mov     cr8, rcx
 * 0000000140187D38: sti
 * 0000000140187D39: call    KiInitiateUserApc
 * 0000000140187D3E: cli
 * 0000000140187D3F: mov     ecx, 0
 * 0000000140187D44: mov     cr8, rcx
 * 0000000140187D48: mov     rcx, gs:188h
 * 0000000140187D51: test    dword ptr [rcx], 8000000h
 * 0000000140187D57: jz      short loc_140187D5E
 * 0000000140187D59: call    KiRestoreSetContextState
 * 0000000140187D5E: mov     rcx, gs:188h
 * 0000000140187D67: test    dword ptr [rcx], 40010000h
 * 0000000140187D6D: jz      short loc_140187D83
 * 0000000140187D6F: test    byte ptr [rcx+2], 1
 * 0000000140187D73: jz      short loc_140187D83
 * 0000000140187D75: call    KiCopyCounters
 * 0000000140187D7A: mov     rcx, gs:188h
 * 0000000140187D83: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187D87: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187D8F: jz      short loc_140187D96
 * 0000000140187D91: call    KiRestoreDebugRegisterState
 * 0000000140187D96: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187D9A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187D9E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187DA2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187DA6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187DAA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187DAE: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187DB2: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187DB6: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187DBA: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187DBE: movzx   eax, byte ptr gs:27Dh
 * 0000000140187DC7: cmp     gs:27Ah, al
 * 0000000140187DCF: jz      short loc_140187DE2
 * 0000000140187DD1: mov     gs:27Ah, al
 * 0000000140187DD9: mov     ecx, 48h ; 'H'
 * 0000000140187DDE: xor     edx, edx
 * 0000000140187DE0: wrmsr
 * 0000000140187DE2: btr     word ptr gs:278h, 2
 * 0000000140187DED: jnb     short loc_140187DFD
 * 0000000140187DEF: mov     eax, 1
 * 0000000140187DF4: xor     edx, edx
 * 0000000140187DF6: mov     ecx, 49h ; 'I'
 * 0000000140187DFB: wrmsr
 * 0000000140187DFD: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187E01: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187E05: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187E09: mov     rsp, rbp
 * 0000000140187E0C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187E13: add     rsp, 0E8h
 * 0000000140187E1A: test    cs:KiKvaShadow, 1
 * 0000000140187E21: jz      short loc_140187E28
 * 0000000140187E23: jmp     KiKernelExit
 * 0000000140187E28: swapgs
 * 0000000140187E2B: iretq
 * 0000000140187E2D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187E31: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187E35: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187E39: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187E3D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187E41: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187E45: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187E49: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187E4D: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187E51: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187E55: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187E59: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187E5D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187E61: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187E65: mov     rsp, rbp
 * 0000000140187E68: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187E6F: add     rsp, 0E8h
 * 0000000140187E76: iretq
 */
