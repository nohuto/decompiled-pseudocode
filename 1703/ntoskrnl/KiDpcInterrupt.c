/*
 * XREFs of KiDpcInterrupt @ 0x140187A70
 * Callers:
 *     KiDpcInterruptShadow @ 0x14026CE00 (KiDpcInterruptShadow.c)
 * Callees:
 *     HalPerformEndOfInterrupt_0 @ 0x1401775D0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140185870 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140187A70 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x140188550 (KiDispatchInterrupt.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140187A70
 * Reason: Hex-Rays returned no pseudocode for 0x140187A70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140187A70: sub     rsp, 8
 * 0000000140187A74: push    rbp
 * 0000000140187A75: push    rsi
 * 0000000140187A76: sub     rsp, 150h
 * 0000000140187A7D: lea     rbp, [rsp+80h]
 * 0000000140187A85: mov     [rbp+0E8h+var_13D], 0
 * 0000000140187A89: mov     [rbp+0E8h+var_138], rax
 * 0000000140187A8D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140187A91: mov     [rbp+0E8h+var_128], rdx
 * 0000000140187A95: mov     [rbp+0E8h+var_120], r8
 * 0000000140187A99: mov     [rbp+0E8h+var_118], r9
 * 0000000140187A9D: mov     [rbp+0E8h+var_110], r10
 * 0000000140187AA1: mov     [rbp+0E8h+var_108], r11
 * 0000000140187AA5: test    [rbp+0E8h+arg_0], 1
 * 0000000140187AAC: jnz     short loc_140187ADB
 * 0000000140187AAE: lfence
 * 0000000140187AB1: test    byte ptr gs:278h, 1
 * 0000000140187ABA: jnz     short loc_140187AC4
 * 0000000140187ABC: lfence
 * 0000000140187ABF: jmp     loc_140187CAE
 * 0000000140187AC4: movzx   eax, byte ptr gs:27Ah
 * 0000000140187ACD: mov     ecx, 48h ; 'H'
 * 0000000140187AD2: xor     edx, edx
 * 0000000140187AD4: wrmsr
 * 0000000140187AD6: jmp     loc_140187CAE
 * 0000000140187ADB: test    cs:KiKvaShadow, 1
 * 0000000140187AE2: jnz     short loc_140187AE7
 * 0000000140187AE4: swapgs
 * 0000000140187AE7: lfence
 * 0000000140187AEA: mov     r10, gs:188h
 * 0000000140187AF3: mov     rcx, gs:188h
 * 0000000140187AFC: mov     rcx, [rcx+220h]
 * 0000000140187B03: mov     rcx, [rcx+818h]
 * 0000000140187B0A: mov     gs:270h, rcx
 * 0000000140187B13: movzx   eax, byte ptr gs:27Bh
 * 0000000140187B1C: cmp     gs:27Ah, al
 * 0000000140187B24: jz      short loc_140187B37
 * 0000000140187B26: mov     gs:27Ah, al
 * 0000000140187B2E: mov     ecx, 48h ; 'H'
 * 0000000140187B33: xor     edx, edx
 * 0000000140187B35: wrmsr
 * 0000000140187B37: movzx   edx, byte ptr gs:278h
 * 0000000140187B40: test    edx, 8
 * 0000000140187B46: jz      short loc_140187B5B
 * 0000000140187B48: mov     eax, 1
 * 0000000140187B4D: xor     edx, edx
 * 0000000140187B4F: mov     ecx, 49h ; 'I'
 * 0000000140187B54: wrmsr
 * 0000000140187B56: jmp     loc_140187C99
 * 0000000140187B5B: test    edx, 2
 * 0000000140187B61: jz      loc_140187C96
 * 0000000140187B67: test    byte ptr gs:279h, 4
 * 0000000140187B70: jnz     loc_140187C96
 * 0000000140187B76: call    loc_140187C89
 * 0000000140187B7B: add     rsp, 8
 * 0000000140187B7F: call    loc_140187C92
 * 0000000140187B84: add     rsp, 8
 * 0000000140187B88: call    loc_140187B7B
 * 0000000140187B8D: add     rsp, 8
 * 0000000140187B91: call    loc_140187B84
 * 0000000140187B96: add     rsp, 8
 * 0000000140187B9A: call    loc_140187B8D
 * 0000000140187B9F: add     rsp, 8
 * 0000000140187BA3: call    loc_140187B96
 * 0000000140187BA8: add     rsp, 8
 * 0000000140187BAC: call    loc_140187B9F
 * 0000000140187BB1: add     rsp, 8
 * 0000000140187BB5: call    loc_140187BA8
 * 0000000140187BBA: add     rsp, 8
 * 0000000140187BBE: call    loc_140187BB1
 * 0000000140187BC3: add     rsp, 8
 * 0000000140187BC7: call    loc_140187BBA
 * 0000000140187BCC: add     rsp, 8
 * 0000000140187BD0: call    loc_140187BC3
 * 0000000140187BD5: add     rsp, 8
 * 0000000140187BD9: call    loc_140187BCC
 * 0000000140187BDE: add     rsp, 8
 * 0000000140187BE2: call    loc_140187BD5
 * 0000000140187BE7: add     rsp, 8
 * 0000000140187BEB: call    loc_140187BDE
 * 0000000140187BF0: add     rsp, 8
 * 0000000140187BF4: call    loc_140187BE7
 * 0000000140187BF9: add     rsp, 8
 * 0000000140187BFD: call    loc_140187BF0
 * 0000000140187C02: add     rsp, 8
 * 0000000140187C06: call    loc_140187BF9
 * 0000000140187C0B: add     rsp, 8
 * 0000000140187C0F: call    loc_140187C02
 * 0000000140187C14: add     rsp, 8
 * 0000000140187C18: call    loc_140187C0B
 * 0000000140187C1D: add     rsp, 8
 * 0000000140187C21: call    loc_140187C14
 * 0000000140187C26: add     rsp, 8
 * 0000000140187C2A: call    loc_140187C1D
 * 0000000140187C2F: add     rsp, 8
 * 0000000140187C33: call    loc_140187C26
 * 0000000140187C38: add     rsp, 8
 * 0000000140187C3C: call    loc_140187C2F
 * 0000000140187C41: add     rsp, 8
 * 0000000140187C45: call    loc_140187C38
 * 0000000140187C4A: add     rsp, 8
 * 0000000140187C4E: call    loc_140187C41
 * 0000000140187C53: add     rsp, 8
 * 0000000140187C57: call    loc_140187C4A
 * 0000000140187C5C: add     rsp, 8
 * 0000000140187C60: call    loc_140187C53
 * 0000000140187C65: add     rsp, 8
 * 0000000140187C69: call    loc_140187C5C
 * 0000000140187C6E: add     rsp, 8
 * 0000000140187C72: call    loc_140187C65
 * 0000000140187C77: add     rsp, 8
 * 0000000140187C7B: call    loc_140187C6E
 * 0000000140187C80: add     rsp, 8
 * 0000000140187C84: call    loc_140187C77
 * 0000000140187C89: add     rsp, 8
 * 0000000140187C8D: call    loc_140187C80
 * 0000000140187C92: add     rsp, 8
 * 0000000140187C96: lfence
 * 0000000140187C99: test    byte ptr [r10+3], 3
 * 0000000140187C9E: mov     [rbp+0E8h+var_68], 0
 * 0000000140187CA7: jz      short loc_140187CAE
 * 0000000140187CA9: call    KiSaveDebugRegisterState
 * 0000000140187CAE: cld
 * 0000000140187CAF: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140187CB3: ldmxcsr dword ptr gs:180h
 * 0000000140187CBC: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140187CC0: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140187CC4: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140187CC8: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140187CCC: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140187CD0: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140187CD4: xor     esi, esi
 * 0000000140187CD6: inc     dword ptr gs:5D00h
 * 0000000140187CDE: mov     ecx, 2
 * 0000000140187CE3: mov     rax, cr8
 * 0000000140187CE7: mov     cr8, rcx
 * 0000000140187CEB: mov     [rbp+0E8h+var_13F], al
 * 0000000140187CEE: mov     rcx, rsi
 * 0000000140187CF1: call    HalPerformEndOfInterrupt_0
 * 0000000140187CF6: sti
 * 0000000140187CF7: cmp     byte ptr gs:187h, 0
 * 0000000140187D00: jnz     short loc_140187D19
 * 0000000140187D02: mov     al, [rbp+0E8h+var_13F]
 * 0000000140187D05: mov     rcx, gs:188h
 * 0000000140187D0E: mov     [rcx+186h], al
 * 0000000140187D14: call    KiDispatchInterrupt
 * 0000000140187D19: cli
 * 0000000140187D1A: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140187D1E: mov     cr8, rcx
 * 0000000140187D22: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140187D29: cli
 * 0000000140187D2A: test    [rbp+0E8h+arg_0], 1
 * 0000000140187D31: jz      loc_140187E47
 * 0000000140187D37: mov     rcx, gs:188h
 * 0000000140187D40: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140187D47: jz      short loc_140187D62
 * 0000000140187D49: mov     ecx, 1
 * 0000000140187D4E: mov     cr8, rcx
 * 0000000140187D52: sti
 * 0000000140187D53: call    KiInitiateUserApc
 * 0000000140187D58: cli
 * 0000000140187D59: mov     ecx, 0
 * 0000000140187D5E: mov     cr8, rcx
 * 0000000140187D62: mov     rcx, gs:188h
 * 0000000140187D6B: test    dword ptr [rcx], 8000000h
 * 0000000140187D71: jz      short loc_140187D78
 * 0000000140187D73: call    KiRestoreSetContextState
 * 0000000140187D78: mov     rcx, gs:188h
 * 0000000140187D81: test    dword ptr [rcx], 40010000h
 * 0000000140187D87: jz      short loc_140187D9D
 * 0000000140187D89: test    byte ptr [rcx+2], 1
 * 0000000140187D8D: jz      short loc_140187D9D
 * 0000000140187D8F: call    KiCopyCounters
 * 0000000140187D94: mov     rcx, gs:188h
 * 0000000140187D9D: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187DA1: cmp     [rbp+0E8h+var_68], 0
 * 0000000140187DA9: jz      short loc_140187DB0
 * 0000000140187DAB: call    KiRestoreDebugRegisterState
 * 0000000140187DB0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187DB4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187DB8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187DBC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187DC0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187DC4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187DC8: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187DCC: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187DD0: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187DD4: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187DD8: movzx   eax, byte ptr gs:27Dh
 * 0000000140187DE1: cmp     gs:27Ah, al
 * 0000000140187DE9: jz      short loc_140187DFC
 * 0000000140187DEB: mov     gs:27Ah, al
 * 0000000140187DF3: mov     ecx, 48h ; 'H'
 * 0000000140187DF8: xor     edx, edx
 * 0000000140187DFA: wrmsr
 * 0000000140187DFC: btr     word ptr gs:278h, 2
 * 0000000140187E07: jnb     short loc_140187E17
 * 0000000140187E09: mov     eax, 1
 * 0000000140187E0E: xor     edx, edx
 * 0000000140187E10: mov     ecx, 49h ; 'I'
 * 0000000140187E15: wrmsr
 * 0000000140187E17: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187E1B: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187E1F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187E23: mov     rsp, rbp
 * 0000000140187E26: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187E2D: add     rsp, 0E8h
 * 0000000140187E34: test    cs:KiKvaShadow, 1
 * 0000000140187E3B: jz      short loc_140187E42
 * 0000000140187E3D: jmp     KiKernelExit
 * 0000000140187E42: swapgs
 * 0000000140187E45: iretq
 * 0000000140187E47: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140187E4B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140187E4F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140187E53: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140187E57: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140187E5B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140187E5F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140187E63: mov     r11, [rbp+0E8h+var_108]
 * 0000000140187E67: mov     r10, [rbp+0E8h+var_110]
 * 0000000140187E6B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140187E6F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140187E73: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140187E77: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140187E7B: mov     rax, [rbp+0E8h+var_138]
 * 0000000140187E7F: mov     rsp, rbp
 * 0000000140187E82: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140187E89: add     rsp, 0E8h
 * 0000000140187E90: iretq
 */
