/*
 * XREFs of KiOverflowTrap @ 0x14018C800
 * Callers:
 *     KiOverflowTrapShadow @ 0x14026C300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14018C800 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14018C800
 * Reason: Hex-Rays returned no pseudocode for 0x14018C800
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018C800: sub     rsp, 8
 * 000000014018C804: push    rbp
 * 000000014018C805: sub     rsp, 158h
 * 000000014018C80C: lea     rbp, [rsp+80h]
 * 000000014018C814: mov     [rbp+0E8h+var_13D], 1
 * 000000014018C818: mov     [rbp+0E8h+var_138], rax
 * 000000014018C81C: mov     [rbp+0E8h+var_130], rcx
 * 000000014018C820: mov     [rbp+0E8h+var_128], rdx
 * 000000014018C824: mov     [rbp+0E8h+var_120], r8
 * 000000014018C828: mov     [rbp+0E8h+var_118], r9
 * 000000014018C82C: mov     [rbp+0E8h+var_110], r10
 * 000000014018C830: mov     [rbp+0E8h+var_108], r11
 * 000000014018C834: test    [rbp+0E8h+arg_0], 1
 * 000000014018C83B: jnz     short loc_14018C86A
 * 000000014018C83D: lfence
 * 000000014018C840: test    byte ptr gs:278h, 1
 * 000000014018C849: jnz     short loc_14018C853
 * 000000014018C84B: lfence
 * 000000014018C84E: jmp     loc_14018CA86
 * 000000014018C853: movzx   eax, byte ptr gs:27Ah
 * 000000014018C85C: mov     ecx, 48h ; 'H'
 * 000000014018C861: xor     edx, edx
 * 000000014018C863: wrmsr
 * 000000014018C865: jmp     loc_14018CA86
 * 000000014018C86A: test    cs:KiKvaShadow, 1
 * 000000014018C871: jnz     short loc_14018C876
 * 000000014018C873: swapgs
 * 000000014018C876: lfence
 * 000000014018C879: mov     r10, gs:188h
 * 000000014018C882: mov     rcx, gs:188h
 * 000000014018C88B: mov     rcx, [rcx+220h]
 * 000000014018C892: mov     rcx, [rcx+818h]
 * 000000014018C899: mov     gs:270h, rcx
 * 000000014018C8A2: movzx   eax, byte ptr gs:27Bh
 * 000000014018C8AB: cmp     gs:27Ah, al
 * 000000014018C8B3: jz      short loc_14018C8C6
 * 000000014018C8B5: mov     gs:27Ah, al
 * 000000014018C8BD: mov     ecx, 48h ; 'H'
 * 000000014018C8C2: xor     edx, edx
 * 000000014018C8C4: wrmsr
 * 000000014018C8C6: movzx   edx, byte ptr gs:278h
 * 000000014018C8CF: test    edx, 8
 * 000000014018C8D5: jz      short loc_14018C8EA
 * 000000014018C8D7: mov     eax, 1
 * 000000014018C8DC: xor     edx, edx
 * 000000014018C8DE: mov     ecx, 49h ; 'I'
 * 000000014018C8E3: wrmsr
 * 000000014018C8E5: jmp     loc_14018CA28
 * 000000014018C8EA: test    edx, 2
 * 000000014018C8F0: jz      loc_14018CA25
 * 000000014018C8F6: test    byte ptr gs:279h, 4
 * 000000014018C8FF: jnz     loc_14018CA25
 * 000000014018C905: call    loc_14018CA18
 * 000000014018C90A: add     rsp, 8
 * 000000014018C90E: call    loc_14018CA21
 * 000000014018C913: add     rsp, 8
 * 000000014018C917: call    loc_14018C90A
 * 000000014018C91C: add     rsp, 8
 * 000000014018C920: call    loc_14018C913
 * 000000014018C925: add     rsp, 8
 * 000000014018C929: call    loc_14018C91C
 * 000000014018C92E: add     rsp, 8
 * 000000014018C932: call    loc_14018C925
 * 000000014018C937: add     rsp, 8
 * 000000014018C93B: call    loc_14018C92E
 * 000000014018C940: add     rsp, 8
 * 000000014018C944: call    loc_14018C937
 * 000000014018C949: add     rsp, 8
 * 000000014018C94D: call    loc_14018C940
 * 000000014018C952: add     rsp, 8
 * 000000014018C956: call    loc_14018C949
 * 000000014018C95B: add     rsp, 8
 * 000000014018C95F: call    loc_14018C952
 * 000000014018C964: add     rsp, 8
 * 000000014018C968: call    loc_14018C95B
 * 000000014018C96D: add     rsp, 8
 * 000000014018C971: call    loc_14018C964
 * 000000014018C976: add     rsp, 8
 * 000000014018C97A: call    loc_14018C96D
 * 000000014018C97F: add     rsp, 8
 * 000000014018C983: call    loc_14018C976
 * 000000014018C988: add     rsp, 8
 * 000000014018C98C: call    loc_14018C97F
 * 000000014018C991: add     rsp, 8
 * 000000014018C995: call    loc_14018C988
 * 000000014018C99A: add     rsp, 8
 * 000000014018C99E: call    loc_14018C991
 * 000000014018C9A3: add     rsp, 8
 * 000000014018C9A7: call    loc_14018C99A
 * 000000014018C9AC: add     rsp, 8
 * 000000014018C9B0: call    loc_14018C9A3
 * 000000014018C9B5: add     rsp, 8
 * 000000014018C9B9: call    loc_14018C9AC
 * 000000014018C9BE: add     rsp, 8
 * 000000014018C9C2: call    loc_14018C9B5
 * 000000014018C9C7: add     rsp, 8
 * 000000014018C9CB: call    loc_14018C9BE
 * 000000014018C9D0: add     rsp, 8
 * 000000014018C9D4: call    loc_14018C9C7
 * 000000014018C9D9: add     rsp, 8
 * 000000014018C9DD: call    loc_14018C9D0
 * 000000014018C9E2: add     rsp, 8
 * 000000014018C9E6: call    loc_14018C9D9
 * 000000014018C9EB: add     rsp, 8
 * 000000014018C9EF: call    loc_14018C9E2
 * 000000014018C9F4: add     rsp, 8
 * 000000014018C9F8: call    loc_14018C9EB
 * 000000014018C9FD: add     rsp, 8
 * 000000014018CA01: call    loc_14018C9F4
 * 000000014018CA06: add     rsp, 8
 * 000000014018CA0A: call    loc_14018C9FD
 * 000000014018CA0F: add     rsp, 8
 * 000000014018CA13: call    loc_14018CA06
 * 000000014018CA18: add     rsp, 8
 * 000000014018CA1C: call    loc_14018CA0F
 * 000000014018CA21: add     rsp, 8
 * 000000014018CA25: lfence
 * 000000014018CA28: test    byte ptr [r10+3], 80h
 * 000000014018CA2D: jz      short loc_14018CA71
 * 000000014018CA2F: mov     ecx, 0C0000102h
 * 000000014018CA34: rdmsr
 * 000000014018CA36: shl     rdx, 20h
 * 000000014018CA3A: or      rax, rdx
 * 000000014018CA3D: cmp     rax, cs:MmUserProbeAddress
 * 000000014018CA44: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018CA4C: cmp     [r10+0F0h], rax
 * 000000014018CA53: jz      short loc_14018CA71
 * 000000014018CA55: mov     rdx, [r10+1F0h]
 * 000000014018CA5C: bts     dword ptr [r10+74h], 8
 * 000000014018CA62: dec     word ptr [r10+1E6h]
 * 000000014018CA6A: mov     [rdx+80h], rax
 * 000000014018CA71: test    byte ptr [r10+3], 3
 * 000000014018CA76: mov     [rbp+0E8h+var_68], 0
 * 000000014018CA7F: jz      short loc_14018CA86
 * 000000014018CA81: call    KiSaveDebugRegisterState
 * 000000014018CA86: cld
 * 000000014018CA87: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018CA8B: ldmxcsr dword ptr gs:180h
 * 000000014018CA94: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018CA98: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018CA9C: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018CAA0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018CAA4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018CAA8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018CAAC: test    [rbp+0E8h+arg_8], 200h
 * 000000014018CAB6: jz      short loc_14018CAB9
 * 000000014018CAB8: sti
 * 000000014018CAB9: mov     ecx, 0C0000095h
 * 000000014018CABE: xor     edx, edx
 * 000000014018CAC0: mov     r8, [rbp+0E8h]
 * 000000014018CAC7: dec     r8
 * 000000014018CACA: call    KiExceptionDispatch
 * 000000014018CACF: nop
 * 000000014018CAD0: retn
 */
