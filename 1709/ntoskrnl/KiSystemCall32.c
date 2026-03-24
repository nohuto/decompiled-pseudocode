/*
 * XREFs of KiSystemCall32 @ 0x140190F80
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140190F80 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140190F80
 * Reason: Hex-Rays returned no pseudocode for 0x140190F80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190F80: swapgs
 * 0000000140190F83: mov     gs:10h, rsp
 * 0000000140190F8C: mov     rsp, gs:1A8h
 * 0000000140190F95: push    2Bh ; '+'
 * 0000000140190F97: push    qword ptr gs:10h
 * 0000000140190F9F: push    r11
 * 0000000140190FA1: push    23h ; '#'
 * 0000000140190FA3: push    rcx
 * 0000000140190FA4: swapgs
 * 0000000140190FA7: lfence
 * 0000000140190FAA: sub     rsp, 8
 * 0000000140190FAE: push    rbp
 * 0000000140190FAF: sub     rsp, 158h
 * 0000000140190FB6: lea     rbp, [rsp+190h+var_110]
 * 0000000140190FBE: mov     byte ptr [rbp-55h], 1
 * 0000000140190FC2: mov     [rbp-50h], rax
 * 0000000140190FC6: mov     [rbp-48h], rcx
 * 0000000140190FCA: mov     [rbp-40h], rdx
 * 0000000140190FCE: mov     [rbp-38h], r8
 * 0000000140190FD2: mov     [rbp-30h], r9
 * 0000000140190FD6: mov     [rbp-28h], r10
 * 0000000140190FDA: mov     [rbp-20h], r11
 * 0000000140190FDE: test    byte ptr [rbp+0F0h], 1
 * 0000000140190FE5: jnz     short loc_140191014
 * 0000000140190FE7: lfence
 * 0000000140190FEA: test    byte ptr gs:278h, 1
 * 0000000140190FF3: jnz     short loc_140190FFD
 * 0000000140190FF5: lfence
 * 0000000140190FF8: jmp     loc_140191230
 * 0000000140190FFD: movzx   eax, byte ptr gs:27Ah
 * 0000000140191006: mov     ecx, 48h ; 'H'
 * 000000014019100B: xor     edx, edx
 * 000000014019100D: wrmsr
 * 000000014019100F: jmp     loc_140191230
 * 0000000140191014: test    cs:KiKvaShadow, 1
 * 000000014019101B: jnz     short loc_140191020
 * 000000014019101D: swapgs
 * 0000000140191020: lfence
 * 0000000140191023: mov     r10, gs:188h
 * 000000014019102C: mov     rcx, gs:188h
 * 0000000140191035: mov     rcx, [rcx+220h]
 * 000000014019103C: mov     rcx, [rcx+838h]
 * 0000000140191043: mov     gs:270h, rcx
 * 000000014019104C: movzx   eax, byte ptr gs:27Bh
 * 0000000140191055: cmp     gs:27Ah, al
 * 000000014019105D: jz      short loc_140191070
 * 000000014019105F: mov     gs:27Ah, al
 * 0000000140191067: mov     ecx, 48h ; 'H'
 * 000000014019106C: xor     edx, edx
 * 000000014019106E: wrmsr
 * 0000000140191070: movzx   edx, byte ptr gs:278h
 * 0000000140191079: test    edx, 8
 * 000000014019107F: jz      short loc_140191094
 * 0000000140191081: mov     eax, 1
 * 0000000140191086: xor     edx, edx
 * 0000000140191088: mov     ecx, 49h ; 'I'
 * 000000014019108D: wrmsr
 * 000000014019108F: jmp     loc_1401911D2
 * 0000000140191094: test    edx, 2
 * 000000014019109A: jz      loc_1401911CF
 * 00000001401910A0: test    byte ptr gs:279h, 4
 * 00000001401910A9: jnz     loc_1401911CF
 * 00000001401910AF: call    loc_1401911C2
 * 00000001401910B4: add     rsp, 8
 * 00000001401910B8: call    loc_1401911CB
 * 00000001401910BD: add     rsp, 8
 * 00000001401910C1: call    loc_1401910B4
 * 00000001401910C6: add     rsp, 8
 * 00000001401910CA: call    loc_1401910BD
 * 00000001401910CF: add     rsp, 8
 * 00000001401910D3: call    loc_1401910C6
 * 00000001401910D8: add     rsp, 8
 * 00000001401910DC: call    loc_1401910CF
 * 00000001401910E1: add     rsp, 8
 * 00000001401910E5: call    loc_1401910D8
 * 00000001401910EA: add     rsp, 8
 * 00000001401910EE: call    loc_1401910E1
 * 00000001401910F3: add     rsp, 8
 * 00000001401910F7: call    loc_1401910EA
 * 00000001401910FC: add     rsp, 8
 * 0000000140191100: call    loc_1401910F3
 * 0000000140191105: add     rsp, 8
 * 0000000140191109: call    loc_1401910FC
 * 000000014019110E: add     rsp, 8
 * 0000000140191112: call    loc_140191105
 * 0000000140191117: add     rsp, 8
 * 000000014019111B: call    loc_14019110E
 * 0000000140191120: add     rsp, 8
 * 0000000140191124: call    loc_140191117
 * 0000000140191129: add     rsp, 8
 * 000000014019112D: call    loc_140191120
 * 0000000140191132: add     rsp, 8
 * 0000000140191136: call    loc_140191129
 * 000000014019113B: add     rsp, 8
 * 000000014019113F: call    loc_140191132
 * 0000000140191144: add     rsp, 8
 * 0000000140191148: call    loc_14019113B
 * 000000014019114D: add     rsp, 8
 * 0000000140191151: call    loc_140191144
 * 0000000140191156: add     rsp, 8
 * 000000014019115A: call    loc_14019114D
 * 000000014019115F: add     rsp, 8
 * 0000000140191163: call    loc_140191156
 * 0000000140191168: add     rsp, 8
 * 000000014019116C: call    loc_14019115F
 * 0000000140191171: add     rsp, 8
 * 0000000140191175: call    loc_140191168
 * 000000014019117A: add     rsp, 8
 * 000000014019117E: call    loc_140191171
 * 0000000140191183: add     rsp, 8
 * 0000000140191187: call    loc_14019117A
 * 000000014019118C: add     rsp, 8
 * 0000000140191190: call    loc_140191183
 * 0000000140191195: add     rsp, 8
 * 0000000140191199: call    loc_14019118C
 * 000000014019119E: add     rsp, 8
 * 00000001401911A2: call    loc_140191195
 * 00000001401911A7: add     rsp, 8
 * 00000001401911AB: call    loc_14019119E
 * 00000001401911B0: add     rsp, 8
 * 00000001401911B4: call    loc_1401911A7
 * 00000001401911B9: add     rsp, 8
 * 00000001401911BD: call    loc_1401911B0
 * 00000001401911C2: add     rsp, 8
 * 00000001401911C6: call    loc_1401911B9
 * 00000001401911CB: add     rsp, 8
 * 00000001401911CF: lfence
 * 00000001401911D2: test    byte ptr [r10+3], 80h
 * 00000001401911D7: jz      short loc_14019121B
 * 00000001401911D9: mov     ecx, 0C0000102h
 * 00000001401911DE: rdmsr
 * 00000001401911E0: shl     rdx, 20h
 * 00000001401911E4: or      rax, rdx
 * 00000001401911E7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401911EE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401911F6: cmp     [r10+0F0h], rax
 * 00000001401911FD: jz      short loc_14019121B
 * 00000001401911FF: mov     rdx, [r10+1F0h]
 * 0000000140191206: bts     dword ptr [r10+74h], 8
 * 000000014019120C: dec     word ptr [r10+1E6h]
 * 0000000140191214: mov     [rdx+80h], rax
 * 000000014019121B: test    byte ptr [r10+3], 3
 * 0000000140191220: mov     word ptr [rbp+80h], 0
 * 0000000140191229: jz      short loc_140191230
 * 000000014019122B: call    KiSaveDebugRegisterState
 * 0000000140191230: cld
 * 0000000140191231: stmxcsr dword ptr [rbp-54h]
 * 0000000140191235: ldmxcsr dword ptr gs:180h
 * 000000014019123E: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140191242: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140191246: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014019124A: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014019124E: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140191252: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140191256: sub     qword ptr [rbp+0E8h], 2
 * 000000014019125E: and     dword ptr [rbp+0ECh], 0
 * 0000000140191265: sti
 * 0000000140191266: mov     ecx, 0C000001Dh
 * 000000014019126B: xor     edx, edx
 * 000000014019126D: mov     r8, [rbp+0E8h]
 * 0000000140191274: call    KiExceptionDispatch
 * 0000000140191279: nop
 * 000000014019127A: retn
 */
