/*
 * XREFs of KiAlignmentFault @ 0x1401B8C80
 * Callers:
 *     KiAlignmentFaultShadow @ 0x1402CF900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401AB420 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401B8C80 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401B8C80
 * Reason: Hex-Rays returned no pseudocode for 0x1401B8C80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401B8C80: push    rbp
 * 00000001401B8C81: sub     rsp, 158h
 * 00000001401B8C88: lea     rbp, [rsp+80h]
 * 00000001401B8C90: mov     [rbp+0D8h+var_12D], 1
 * 00000001401B8C94: mov     [rbp+0D8h+var_128], rax
 * 00000001401B8C98: mov     [rbp+0D8h+var_120], rcx
 * 00000001401B8C9C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401B8CA0: mov     [rbp+0D8h+var_110], r8
 * 00000001401B8CA4: mov     [rbp+0D8h+var_108], r9
 * 00000001401B8CA8: mov     [rbp+0D8h+var_100], r10
 * 00000001401B8CAC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401B8CB0: test    [rbp+0D8h+arg_8], 1
 * 00000001401B8CB7: jnz     short loc_1401B8CE6
 * 00000001401B8CB9: lfence
 * 00000001401B8CBC: test    byte ptr gs:278h, 1
 * 00000001401B8CC5: jnz     short loc_1401B8CCF
 * 00000001401B8CC7: lfence
 * 00000001401B8CCA: jmp     loc_1401B8F02
 * 00000001401B8CCF: movzx   eax, byte ptr gs:27Ah
 * 00000001401B8CD8: mov     ecx, 48h ; 'H'
 * 00000001401B8CDD: xor     edx, edx
 * 00000001401B8CDF: wrmsr
 * 00000001401B8CE1: jmp     loc_1401B8F02
 * 00000001401B8CE6: test    cs:KiKvaShadow, 1
 * 00000001401B8CED: jnz     short loc_1401B8CF2
 * 00000001401B8CEF: swapgs
 * 00000001401B8CF2: lfence
 * 00000001401B8CF5: mov     r10, gs:188h
 * 00000001401B8CFE: mov     rcx, gs:188h
 * 00000001401B8D07: mov     rcx, [rcx+220h]
 * 00000001401B8D0E: mov     rcx, [rcx+838h]
 * 00000001401B8D15: mov     gs:270h, rcx
 * 00000001401B8D1E: movzx   eax, byte ptr gs:27Bh
 * 00000001401B8D27: cmp     gs:27Ah, al
 * 00000001401B8D2F: jz      short loc_1401B8D42
 * 00000001401B8D31: mov     gs:27Ah, al
 * 00000001401B8D39: mov     ecx, 48h ; 'H'
 * 00000001401B8D3E: xor     edx, edx
 * 00000001401B8D40: wrmsr
 * 00000001401B8D42: movzx   edx, byte ptr gs:278h
 * 00000001401B8D4B: test    edx, 8
 * 00000001401B8D51: jz      short loc_1401B8D66
 * 00000001401B8D53: mov     eax, 1
 * 00000001401B8D58: xor     edx, edx
 * 00000001401B8D5A: mov     ecx, 49h ; 'I'
 * 00000001401B8D5F: wrmsr
 * 00000001401B8D61: jmp     loc_1401B8EA4
 * 00000001401B8D66: test    edx, 2
 * 00000001401B8D6C: jz      loc_1401B8EA1
 * 00000001401B8D72: test    byte ptr gs:279h, 4
 * 00000001401B8D7B: jnz     loc_1401B8EA1
 * 00000001401B8D81: call    loc_1401B8E94
 * 00000001401B8D86: add     rsp, 8
 * 00000001401B8D8A: call    loc_1401B8E9D
 * 00000001401B8D8F: add     rsp, 8
 * 00000001401B8D93: call    loc_1401B8D86
 * 00000001401B8D98: add     rsp, 8
 * 00000001401B8D9C: call    loc_1401B8D8F
 * 00000001401B8DA1: add     rsp, 8
 * 00000001401B8DA5: call    loc_1401B8D98
 * 00000001401B8DAA: add     rsp, 8
 * 00000001401B8DAE: call    loc_1401B8DA1
 * 00000001401B8DB3: add     rsp, 8
 * 00000001401B8DB7: call    loc_1401B8DAA
 * 00000001401B8DBC: add     rsp, 8
 * 00000001401B8DC0: call    loc_1401B8DB3
 * 00000001401B8DC5: add     rsp, 8
 * 00000001401B8DC9: call    loc_1401B8DBC
 * 00000001401B8DCE: add     rsp, 8
 * 00000001401B8DD2: call    loc_1401B8DC5
 * 00000001401B8DD7: add     rsp, 8
 * 00000001401B8DDB: call    loc_1401B8DCE
 * 00000001401B8DE0: add     rsp, 8
 * 00000001401B8DE4: call    loc_1401B8DD7
 * 00000001401B8DE9: add     rsp, 8
 * 00000001401B8DED: call    loc_1401B8DE0
 * 00000001401B8DF2: add     rsp, 8
 * 00000001401B8DF6: call    loc_1401B8DE9
 * 00000001401B8DFB: add     rsp, 8
 * 00000001401B8DFF: call    loc_1401B8DF2
 * 00000001401B8E04: add     rsp, 8
 * 00000001401B8E08: call    loc_1401B8DFB
 * 00000001401B8E0D: add     rsp, 8
 * 00000001401B8E11: call    loc_1401B8E04
 * 00000001401B8E16: add     rsp, 8
 * 00000001401B8E1A: call    loc_1401B8E0D
 * 00000001401B8E1F: add     rsp, 8
 * 00000001401B8E23: call    loc_1401B8E16
 * 00000001401B8E28: add     rsp, 8
 * 00000001401B8E2C: call    loc_1401B8E1F
 * 00000001401B8E31: add     rsp, 8
 * 00000001401B8E35: call    loc_1401B8E28
 * 00000001401B8E3A: add     rsp, 8
 * 00000001401B8E3E: call    loc_1401B8E31
 * 00000001401B8E43: add     rsp, 8
 * 00000001401B8E47: call    loc_1401B8E3A
 * 00000001401B8E4C: add     rsp, 8
 * 00000001401B8E50: call    loc_1401B8E43
 * 00000001401B8E55: add     rsp, 8
 * 00000001401B8E59: call    loc_1401B8E4C
 * 00000001401B8E5E: add     rsp, 8
 * 00000001401B8E62: call    loc_1401B8E55
 * 00000001401B8E67: add     rsp, 8
 * 00000001401B8E6B: call    loc_1401B8E5E
 * 00000001401B8E70: add     rsp, 8
 * 00000001401B8E74: call    loc_1401B8E67
 * 00000001401B8E79: add     rsp, 8
 * 00000001401B8E7D: call    loc_1401B8E70
 * 00000001401B8E82: add     rsp, 8
 * 00000001401B8E86: call    loc_1401B8E79
 * 00000001401B8E8B: add     rsp, 8
 * 00000001401B8E8F: call    loc_1401B8E82
 * 00000001401B8E94: add     rsp, 8
 * 00000001401B8E98: call    loc_1401B8E8B
 * 00000001401B8E9D: add     rsp, 8
 * 00000001401B8EA1: lfence
 * 00000001401B8EA4: test    byte ptr [r10+3], 80h
 * 00000001401B8EA9: jz      short loc_1401B8EED
 * 00000001401B8EAB: mov     ecx, 0C0000102h
 * 00000001401B8EB0: rdmsr
 * 00000001401B8EB2: shl     rdx, 20h
 * 00000001401B8EB6: or      rax, rdx
 * 00000001401B8EB9: cmp     rax, cs:MmUserProbeAddress
 * 00000001401B8EC0: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401B8EC8: cmp     [r10+0F0h], rax
 * 00000001401B8ECF: jz      short loc_1401B8EED
 * 00000001401B8ED1: mov     rdx, [r10+1F0h]
 * 00000001401B8ED8: bts     dword ptr [r10+74h], 8
 * 00000001401B8EDE: dec     word ptr [r10+1E6h]
 * 00000001401B8EE6: mov     [rdx+80h], rax
 * 00000001401B8EED: test    byte ptr [r10+3], 3
 * 00000001401B8EF2: mov     [rbp+0D8h+var_58], 0
 * 00000001401B8EFB: jz      short loc_1401B8F02
 * 00000001401B8EFD: call    KiSaveDebugRegisterState
 * 00000001401B8F02: cld
 * 00000001401B8F03: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401B8F07: ldmxcsr dword ptr gs:180h
 * 00000001401B8F10: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401B8F14: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401B8F18: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401B8F1C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401B8F20: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401B8F24: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401B8F28: mov     eax, [rbp+0E0h]
 * 00000001401B8F2E: test    [rbp+0D8h+arg_10], 200h
 * 00000001401B8F38: jz      short loc_1401B8F3B
 * 00000001401B8F3A: sti
 * 00000001401B8F3B: mov     ecx, 80000002h
 * 00000001401B8F40: xor     edx, edx
 * 00000001401B8F42: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401B8F49: call    KiExceptionDispatch
 * 00000001401B8F4E: nop
 * 00000001401B8F4F: retn
 */
